/*
 * XREFs of CcZeroData @ 0x1403A6B60
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x1406FE5D0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlCopyWrite @ 0x140A34DE0 (FsRtlCopyWrite.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     CcZeroDataInCache @ 0x1402D5AD0 (CcZeroDataInCache.c)
 *     CcFlushCachePriv @ 0x1402DA4E0 (CcFlushCachePriv.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     KeRcuReadUnlock @ 0x1403A5890 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1403A59C0 (KeRcuReadLock.c)
 *     CcReferencePartitionFromFileObject @ 0x1403A6E4C (CcReferencePartitionFromFileObject.c)
 *     CcDereferencePartition @ 0x1403AC770 (CcDereferencePartition.c)
 *     CcZeroDataOnDisk @ 0x1403BEDF0 (CcZeroDataOnDisk.c)
 */

BOOLEAN __stdcall CcZeroData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER StartOffset,
        PLARGE_INTEGER EndOffset,
        BOOLEAN Wait)
{
  LONGLONG QuadPart; // rdi
  BOOLEAN v7; // si
  char v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r13
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  unsigned int v12; // r14d
  unsigned int v13; // edi
  LONGLONG v14; // rax
  NTSTATUS v15; // ebx
  LONGLONG v17; // [rsp+48h] [rbp-60h] BYREF
  NTSTATUS v18; // [rsp+50h] [rbp-58h]
  int v19; // [rsp+54h] [rbp-54h]
  NTSTATUS Status[4]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v21; // [rsp+68h] [rbp-40h]
  unsigned int SectorSize; // [rsp+B0h] [rbp+8h]
  __int64 *v23; // [rsp+B8h] [rbp+10h] BYREF
  PLARGE_INTEGER v24; // [rsp+C0h] [rbp+18h]
  BOOLEAN v25; // [rsp+C8h] [rbp+20h]

  v25 = Wait;
  v24 = EndOffset;
  v23 = (__int64 *)StartOffset;
  QuadPart = StartOffset->QuadPart;
  v17 = StartOffset->QuadPart;
  v7 = 0;
  v21 = 0LL;
  if ( (FileObject->Flags & 0x10) != 0 || (v8 = 0, !FileObject->PrivateCacheMap) )
    v8 = 1;
  v9 = EndOffset->QuadPart - QuadPart;
  KeRcuReadLock();
  v10 = CcReferencePartitionFromFileObject(FileObject);
  v21 = v10;
  KeRcuReadUnlock();
  if ( !v8 && v9 <= 0x200000 && (*(_QWORD *)(**(_QWORD **)(v10 + 8) + 18688LL) >= 0x800uLL || v9 <= 0x2000) || Wait )
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( RelatedDeviceObject->SectorSize )
      v12 = IoGetRelatedDeviceObject(FileObject)->SectorSize - 1;
    else
      v12 = 0;
    if ( v8 )
    {
      if ( (v12 & (unsigned int)v17) != 0 )
      {
        *(_OWORD *)Status = 0LL;
        v17 = v12 + QuadPart;
        LODWORD(v17) = v17 & ~v12;
        v13 = v17 - *(_DWORD *)v23;
        if ( !CcZeroDataInCache((int)FileObject, v23, v13, v25) )
          goto LABEL_32;
        CcFlushCachePriv(FileObject->SectionObjectPointer, (__int64)v23, v13, 0LL, 0, (__int128 *)Status, 0LL);
        if ( Status[0] < 0 )
          RtlRaiseStatus(Status[0]);
        QuadPart = v17;
      }
LABEL_16:
      if ( QuadPart < v24->QuadPart )
      {
        v14 = v12 + v24->QuadPart;
        v23 = (__int64 *)((~v12 | 0xFFFFFFFF00000000uLL) & v14);
        CcZeroDataOnDisk(FileObject, &v17, &v23, SectorSize);
      }
      v7 = 1;
      goto LABEL_32;
    }
    if ( *(_QWORD *)(**(_QWORD **)(v10 + 8) + 18688LL) < 0x800uLL )
    {
      if ( v9 > 0x2000 && (v12 & (unsigned int)v17) != 0 )
      {
        v19 = (QuadPart + (unsigned __int64)v12) >> 32;
        v15 = (QuadPart + v12) & ~v12;
        v18 = v15;
LABEL_31:
        LODWORD(v9) = v15 - v17;
LABEL_13:
        if ( (_DWORD)v9 && !CcZeroDataInCache((int)FileObject, &v17, v9, v25) )
          goto LABEL_32;
        QuadPart += (unsigned int)v9;
        v17 = QuadPart;
        goto LABEL_16;
      }
      if ( v9 > 0x2000 )
      {
        LODWORD(v9) = 0;
        goto LABEL_13;
      }
    }
    if ( v9 <= 0x200000 )
      goto LABEL_13;
    Status[1] = (QuadPart + 0x200000 + (unsigned __int64)v12) >> 32;
    v15 = (QuadPart + 0x200000 + v12) & ~v12;
    Status[0] = v15;
    goto LABEL_31;
  }
LABEL_32:
  CcDereferencePartition(v10);
  return v7;
}
