/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x140C5DBC4
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     MiMapKernelScp @ 0x1404F0048 (MiMapKernelScp.c)
 *     MiProcessLoadConfigForDriver @ 0x140A5E04C (MiProcessLoadConfigForDriver.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140C57640 (MiApplyImportOptimizationToBootDriver.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C5779C (MiApplyRetpolineToBootDriver.c)
 *     MiApplyFunctionOverrideToBootDriver @ 0x140C5C968 (MiApplyFunctionOverrideToBootDriver.c)
 *     MiHandleBootImage @ 0x140C5D020 (MiHandleBootImage.c)
 */

LARGE_INTEGER __fastcall MiReloadBootLoadedDrivers(__int64 a1)
{
  __int64 *v2; // rbx
  struct _KTHREAD *Lock; // rbp
  __int64 i; // rdi
  __int64 j; // rdi
  PVOID v6; // rbp
  unsigned __int64 v7; // rsi
  __int64 *k; // rdi
  __int64 *v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 *m; // rdi
  LARGE_INTEGER result; // rax

  v2 = (__int64 *)(a1 + 16);
  Lock = MiAcquireLoadLock(1);
  for ( i = *v2; (__int64 *)i != v2; i = *(_QWORD *)i )
  {
    if ( *(PVOID *)(i + 48) != PsNtosImageBase )
      MiProcessLoadConfigForDriver(i, 0LL);
    MiHandleBootImage(a1, i);
  }
  MiFlags |= 0x800uLL;
  MmReleaseLoadLock(Lock);
  for ( j = *v2; (__int64 *)j != v2; j = *(_QWORD *)j )
  {
    v6 = *(PVOID *)(j + 48);
    v7 = ((unsigned __int64)*(unsigned int *)(j + 64) + 4095) >> 12;
    if ( v6 != PsNtosImageBase && v6 != PsHalImageBase && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(j + 48)) )
      MiMapKernelScp((ULONG_PTR)v6, v7);
  }
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    for ( k = (__int64 *)*v2; k != v2; k = (__int64 *)*k )
      MiApplyRetpolineToBootDriver((ULONG_PTR)k);
  }
  if ( (KiFeatureSettings & 0x20000) == 0 )
  {
    v9 = (__int64 *)*v2;
    v10 = (unsigned __int64)MiIsTargetFullyRetpolined & -(__int64)((KiSpeculationFeatures & 0x20000000000LL) != 0);
    while ( v9 != v2 )
    {
      MiApplyImportOptimizationToBootDriver((__int64)v9, v10);
      v9 = (__int64 *)*v9;
    }
  }
  for ( m = (__int64 *)*v2; m != v2; m = (__int64 *)*m )
    MiApplyFunctionOverrideToBootDriver((ULONG_PTR)m);
  result = KeQueryPerformanceCounter(0LL);
  qword_141008890 = result.QuadPart;
  return result;
}
