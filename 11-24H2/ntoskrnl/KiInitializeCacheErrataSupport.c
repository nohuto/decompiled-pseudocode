/*
 * XREFs of KiInitializeCacheErrataSupport @ 0x140C2C020
 * Callers:
 *     KiInitMachineDependent @ 0x1405BDA44 (KiInitMachineDependent.c)
 * Callees:
 *     KeStartProfile @ 0x1404CFCE0 (KeStartProfile.c)
 *     KiDisableCacheErrataSource @ 0x1405C0DF8 (KiDisableCacheErrataSource.c)
 *     KeInitializeProfileCallback @ 0x1406F45A0 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x140ABD6BC (KeSetIntervalProfile.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char __fastcall KiInitializeCacheErrataSupport(char a1)
{
  int *Pool2; // rax
  unsigned int v3; // ebx
  int *v4; // rdi
  unsigned int v5; // r9d
  int *i; // r8

  if ( KiTLBCOverride )
  {
    KiDisableCacheErrataSource();
    if ( !a1 )
    {
LABEL_4:
      LOBYTE(Pool2) = 1;
      return (char)Pool2;
    }
LABEL_3:
    KiCacheErrataMonitor = 0LL;
    goto LABEL_4;
  }
  if ( !a1 )
    goto LABEL_4;
  v3 = KeNumberProcessors_0;
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
  {
    KiTLBCOverride = 1;
    KiDisableCacheErrataSource();
    goto LABEL_3;
  }
  Pool2 = (int *)ExAllocatePool2(0x40uLL, 16 * ((unsigned int)KeNumberProcessors_0 + 39LL), 0x2020654BuLL);
  v4 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0x393870 / v3;
    KeInitializeProfileCallback(Pool2 + 2, (__int64)KiMonitorCacheErrata, 0LL, 0);
    v5 = 0;
    for ( i = v4 + 156; v5 < v3; *(i - 1) = v5 % v3 )
    {
      *(_QWORD *)i = -1LL;
      i[2] = 0;
      i += 4;
      ++v5;
    }
    _InterlockedExchange64(&KiCacheErrataMonitor, (__int64)v4);
    KeSetIntervalProfile(*v4, 0);
    LOBYTE(Pool2) = (int)KeStartProfile((ULONG_PTR)(v4 + 2)) >= 0;
  }
  return (char)Pool2;
}
