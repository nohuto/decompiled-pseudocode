/*
 * XREFs of FsRtlCopyRead @ 0x140A265F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     IoGetTopLevelIrp @ 0x14041CFD0 (IoGetTopLevelIrp.c)
 *     IoSetTopLevelIrp @ 0x140424450 (IoSetTopLevelIrp.c)
 *     FsRtlIsNtstatusExpected @ 0x140456400 (FsRtlIsNtstatusExpected.c)
 *     CcCopyReadEx @ 0x1404DBF70 (CcCopyReadEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall FsRtlCopyRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v9; // r14
  LONGLONG v12; // rbx
  PVOID FsContext; // rdi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v15; // si
  __int64 v16; // r9
  char v17; // al
  LONGLONG v18; // rax

  v9 = Length;
  if ( IoGetTopLevelIrp() )
    return 0;
  if ( (_DWORD)v9 )
  {
    if ( 0x7FFFFFFFFFFFFFFFLL - FileOffset->QuadPart < v9 )
    {
      IoStatus->Status = -1073741811;
      IoStatus->Information = 0LL;
      return 0;
    }
    v12 = v9 + FileOffset->QuadPart;
    FsContext = FileObject->FsContext;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( Wait )
    {
      __incgsdword(0x2EC8u);
      v15 = 1;
      ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    }
    else
    {
      __incgsdword(0x2EC4u);
      if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 0) )
      {
        KeLeaveCriticalRegion();
        __incgsdword(0x8980u);
        return 0;
      }
      v15 = 1;
    }
    if ( !FileObject->PrivateCacheMap
      || (v17 = *((_BYTE *)FsContext + 5)) == 0
      || v17 == 2
      && (LOBYTE(v16) = Wait,
          !(unsigned __int8)guard_dispatch_icall_no_overrides(FileObject, FileOffset, (unsigned int)v9, v16)) )
    {
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      KeLeaveCriticalRegion();
      __incgsdword(0x2ECCu);
      return 0;
    }
    v18 = *((_QWORD *)FsContext + 4);
    if ( v12 > v18 )
    {
      if ( FileOffset->QuadPart >= v18 )
      {
        IoStatus->Status = -1073741807;
        IoStatus->Information = 0LL;
LABEL_13:
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
        KeLeaveCriticalRegion();
        return v15;
      }
      LODWORD(v9) = *((_DWORD *)FsContext + 8) - FileOffset->LowPart;
    }
    IoSetTopLevelIrp((PIRP)4);
    v15 = CcCopyReadEx(FileObject, (__int64 *)FileOffset, v9, Wait, (__int64)Buffer, IoStatus, 0LL);
    FileObject->Flags |= 0x80000u;
    if ( v15 )
      FileObject->CurrentByteOffset.QuadPart = FileOffset->QuadPart + IoStatus->Information;
    IoSetTopLevelIrp(0LL);
    goto LABEL_13;
  }
  IoStatus->Status = 0;
  IoStatus->Information = 0LL;
  return 1;
}
