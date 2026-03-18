/*
 * XREFs of CcZeroData @ 0x1402CC9B0
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x14070A4B0 (FsRtlPrepareMdlWriteDev.c)
 *     FsRtlCopyWrite @ 0x140A3A470 (FsRtlCopyWrite.c)
 * Callees:
 *     CcZeroDataInCache @ 0x140267564 (CcZeroDataInCache.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     CcDereferencePartition @ 0x1402A7F20 (CcDereferencePartition.c)
 *     CcFlushCachePriv @ 0x1402AC810 (CcFlushCachePriv.c)
 *     CcReferencePartitionFromFileObject @ 0x1402CC960 (CcReferencePartitionFromFileObject.c)
 *     KeRcuReadUnlock @ 0x1402CE230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1402CE360 (KeRcuReadLock.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     CcZeroDataOnDisk @ 0x14048BF20 (CcZeroDataOnDisk.c)
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
  int v15; // ebx
  LONGLONG v17; // [rsp+48h] [rbp-60h] BYREF
  int v18; // [rsp+50h] [rbp-58h]
  int v19; // [rsp+54h] [rbp-54h]
  __int128 v20; // [rsp+58h] [rbp-50h] BYREF
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
  v10 = CcReferencePartitionFromFileObject((__int64)FileObject);
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
        v20 = 0LL;
        v17 = v12 + QuadPart;
        LODWORD(v17) = v17 & ~v12;
        v13 = v17 - *(_DWORD *)v23;
        if ( !CcZeroDataInCache((int)FileObject, v23, v13, v25) )
          goto LABEL_34;
        CcFlushCachePriv(FileObject->SectionObjectPointer, (__int64)v23, v13, 0LL, 0, &v20, 0LL);
        if ( (int)v20 < 0 )
          RtlRaiseStatus(v20);
        QuadPart = v17;
      }
LABEL_15:
      if ( QuadPart < v24->QuadPart )
      {
        v14 = v12 + v24->QuadPart;
        v23 = (__int64 *)((~v12 | 0xFFFFFFFF00000000uLL) & v14);
        CcZeroDataOnDisk(FileObject, &v17, &v23, SectorSize);
      }
      v7 = 1;
      goto LABEL_34;
    }
    if ( *(_QWORD *)(**(_QWORD **)(v10 + 8) + 18688LL) < 0x800uLL )
    {
      if ( v9 > 0x2000 && (v12 & (unsigned int)v17) != 0 )
      {
        v19 = (QuadPart + (unsigned __int64)v12) >> 32;
        v15 = (QuadPart + v12) & ~v12;
        v18 = v15;
LABEL_33:
        LODWORD(v9) = v15 - v17;
LABEL_12:
        if ( (_DWORD)v9 && !CcZeroDataInCache((int)FileObject, &v17, v9, v25) )
          goto LABEL_34;
        QuadPart += (unsigned int)v9;
        v17 = QuadPart;
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
    DWORD1(v20) = (QuadPart + 0x200000 + (unsigned __int64)v12) >> 32;
    v15 = (QuadPart + 0x200000 + v12) & ~v12;
    LODWORD(v20) = v15;
    goto LABEL_33;
  }
LABEL_34:
  CcDereferencePartition(v10);
  return v7;
}
