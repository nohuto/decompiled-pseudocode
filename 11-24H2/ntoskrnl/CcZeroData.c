/*
 * XREFs of CcZeroData @ 0x14040BA30
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x140708070 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlCopyWrite @ 0x140A2FA90 (FsRtlCopyWrite.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     CcZeroDataInCache @ 0x14025EB44 (CcZeroDataInCache.c)
 *     CcZeroDataOnDisk @ 0x140260430 (CcZeroDataOnDisk.c)
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 *     CcDereferencePartition @ 0x140279D10 (CcDereferencePartition.c)
 *     KeRcuReadUnlock @ 0x14040C230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x14040C360 (KeRcuReadLock.c)
 *     CcReferencePartitionFromFileObject @ 0x14040C940 (CcReferencePartitionFromFileObject.c)
 */

BOOLEAN __stdcall CcZeroData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartOffset,
        PLARGE_INTEGER EndOffset,
        BOOLEAN Wait)
{
  LARGE_INTEGER v6; // rdi
  BOOLEAN v7; // si
  char v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r13
  unsigned int v11; // r14d
  ULONG v12; // edi
  LONGLONG v13; // rax
  NTSTATUS v14; // ebx
  LARGE_INTEGER v16; // [rsp+48h] [rbp-60h] BYREF
  NTSTATUS v17; // [rsp+50h] [rbp-58h]
  int v18; // [rsp+54h] [rbp-54h]
  NTSTATUS Status[4]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v20; // [rsp+68h] [rbp-40h]
  __int64 *v21; // [rsp+B8h] [rbp+10h] BYREF
  PLARGE_INTEGER v22; // [rsp+C0h] [rbp+18h]
  BOOLEAN v23; // [rsp+C8h] [rbp+20h]

  v23 = Wait;
  v22 = EndOffset;
  v21 = (__int64 *)StartOffset;
  v6 = *StartOffset;
  v16 = *StartOffset;
  v7 = 0;
  v20 = 0LL;
  if ( (FileObject->Flags & 0x10) != 0 || (v8 = 0, !FileObject->PrivateCacheMap) )
    v8 = 1;
  v9 = EndOffset->QuadPart - v6.QuadPart;
  KeRcuReadLock();
  v10 = CcReferencePartitionFromFileObject(FileObject);
  v20 = v10;
  KeRcuReadUnlock();
  if ( !v8 && v9 <= 0x200000 && (*(_QWORD *)(**(_QWORD **)(v10 + 8) + 18688LL) >= 0x800uLL || v9 <= 0x2000) || Wait )
  {
    if ( IoGetRelatedDeviceObject(FileObject)->SectorSize )
      v11 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v11 = 0;
    if ( v8 )
    {
      if ( (v11 & v16.LowPart) != 0 )
      {
        *(_OWORD *)Status = 0LL;
        v16.QuadPart = v11 + v6.QuadPart;
        v16.LowPart &= ~v11;
        v12 = v16.LowPart - *(_DWORD *)v21;
        if ( !CcZeroDataInCache((__int64)FileObject, v21, v12, v23) )
          goto LABEL_34;
        CcFlushCachePriv(FileObject->SectionObjectPointer, (__int64)v21, v12, 0LL, 0, (__int128 *)Status, 0LL);
        if ( Status[0] < 0 )
          RtlRaiseStatus(Status[0]);
        v6 = v16;
      }
LABEL_15:
      if ( v6.QuadPart < v22->QuadPart )
      {
        v13 = v11 + v22->QuadPart;
        v21 = (__int64 *)((~v11 | 0xFFFFFFFF00000000uLL) & v13);
        CcZeroDataOnDisk(FileObject, &v16, &v21);
      }
      v7 = 1;
      goto LABEL_34;
    }
    if ( *(_QWORD *)(**(_QWORD **)(v10 + 8) + 18688LL) < 0x800uLL )
    {
      if ( v9 > 0x2000 && (v11 & v16.LowPart) != 0 )
      {
        v18 = (v6.QuadPart + (unsigned __int64)v11) >> 32;
        v14 = (v6.LowPart + v11) & ~v11;
        v17 = v14;
LABEL_33:
        LODWORD(v9) = v14 - v16.LowPart;
LABEL_12:
        if ( (_DWORD)v9 && !CcZeroDataInCache((__int64)FileObject, (__int64 *)&v16, v9, v23) )
          goto LABEL_34;
        v6.QuadPart += (unsigned int)v9;
        v16 = v6;
        goto LABEL_15;
      }
      if ( v9 > 0x2000 )
      {
        LODWORD(v9) = 0;
        goto LABEL_12;
      }
    }
    if ( v9 <= 0x200000 )
      goto LABEL_12;
    Status[1] = (v6.QuadPart + 0x200000 + (unsigned __int64)v11) >> 32;
    v14 = (v6.LowPart + 0x200000 + v11) & ~v11;
    Status[0] = v14;
    goto LABEL_33;
  }
LABEL_34:
  CcDereferencePartition(v10);
  return v7;
}
