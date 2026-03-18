/*
 * XREFs of IoSetDeferredLiveDumpFileHandle @ 0x140594458
 * Callers:
 *     DbgkpWerStartDeferredLiveDump @ 0x1406FCFF0 (DbgkpWerStartDeferredLiveDump.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14059AE5C (IopLiveDumpValidateDumpFileHandle.c)
 */

__int64 __fastcall IoSetDeferredLiveDumpFileHandle(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // al
  int v6; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
  if ( v5 == 1 )
  {
    if ( !a1 || (*(_DWORD *)(a1 + 40) & 8) == 0 || *(_QWORD *)(a1 + 64) || (*(_DWORD *)(a1 + 80) & 1) != 0 )
    {
      v6 = -1073741811;
    }
    else
    {
      v6 = IopLiveDumpValidateDumpFileHandle(a2);
      if ( v6 >= 0 )
        *(_QWORD *)(a1 + 64) = a2;
    }
    goto LABEL_10;
  }
  v6 = -1073741267;
  if ( v5 )
LABEL_10:
    ExReleaseResourceLite(&IopLiveDumpLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
