/*
 * XREFs of IoSetDeferredLiveDumpFileHandle @ 0x140594AE4
 * Callers:
 *     DbgkpWerStartDeferredLiveDump @ 0x140706A90 (DbgkpWerStartDeferredLiveDump.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14059B4EC (IopLiveDumpValidateDumpFileHandle.c)
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
