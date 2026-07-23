/*
 * XREFs of FsRtlCopyRead @ 0x140A1B070
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     IoGetTopLevelIrp @ 0x1404118C0 (IoGetTopLevelIrp.c)
 *     IoSetTopLevelIrp @ 0x140418300 (IoSetTopLevelIrp.c)
 *     FsRtlIsNtstatusExpected @ 0x14044B3D0 (FsRtlIsNtstatusExpected.c)
 *     CcCopyReadEx @ 0x1404D5990 (CcCopyReadEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  char v16; // al
  LONGLONG v17; // rax

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
      || (v16 = *((_BYTE *)FsContext + 5)) == 0
      || v16 == 2 && !(unsigned __int8)guard_dispatch_icall_no_overrides(FileObject, FileOffset) )
    {
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      KeLeaveCriticalRegion();
      __incgsdword(0x2ECCu);
      return 0;
    }
    v17 = *((_QWORD *)FsContext + 4);
    if ( v12 > v17 )
    {
      if ( FileOffset->QuadPart >= v17 )
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
    v15 = CcCopyReadEx((_SLIST_ENTRY *)FileObject, (__int64 *)FileOffset, v9, Wait, (__int64)Buffer, IoStatus, 0LL);
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
