/*
 * XREFs of IoSetDeferredLiveDumpFileHandle @ 0x140597B68
 * Callers:
 *     DbgkpWerStartDeferredLiveDump @ 0x140708ED0 (DbgkpWerStartDeferredLiveDump.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14059E56C (IopLiveDumpValidateDumpFileHandle.c)
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
