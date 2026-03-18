/*
 * XREFs of PiPnpRtlGetCurrentOperation @ 0x1408CC0A0
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x1408CBF78 (PiPnpRtlBeginOperation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall PiPnpRtlGetCurrentOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v3; // rbx
  __int64 *i; // rdx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  *a1 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
  for ( i = (__int64 *)PiPnpRtlActiveOperations; i != &PiPnpRtlActiveOperations; v3 = 0LL )
  {
    v3 = i;
    if ( (struct _KTHREAD *)i[2] == CurrentThread )
      break;
    i = (__int64 *)*i;
  }
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  KeLeaveCriticalRegionThread();
  if ( !v3 )
    return 3221226021LL;
  result = 0LL;
  *a1 = v3;
  return result;
}
