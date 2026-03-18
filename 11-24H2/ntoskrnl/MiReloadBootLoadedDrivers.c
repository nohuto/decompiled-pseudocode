/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x140C5BA34
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiAcquireLoadLock @ 0x1402C6F98 (MiAcquireLoadLock.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     MiMapKernelScp @ 0x1404F25A8 (MiMapKernelScp.c)
 *     MiProcessLoadConfigForDriver @ 0x140A6587C (MiProcessLoadConfigForDriver.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140C554B0 (MiApplyImportOptimizationToBootDriver.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C5560C (MiApplyRetpolineToBootDriver.c)
 *     MiApplyFunctionOverrideToBootDriver @ 0x140C5A7D8 (MiApplyFunctionOverrideToBootDriver.c)
 *     MiHandleBootImage @ 0x140C5AE90 (MiHandleBootImage.c)
 */

LARGE_INTEGER __fastcall MiReloadBootLoadedDrivers(__int64 a1)
{
  _QWORD **v2; // rbx
  struct _KTHREAD *Lock; // rbp
  _QWORD *i; // rdi
  _QWORD *j; // rdi
  ULONG_PTR v6; // rbp
  unsigned __int64 v7; // rsi
  _QWORD *k; // rdi
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rsi
  _QWORD *m; // rdi
  LARGE_INTEGER result; // rax

  v2 = (_QWORD **)(a1 + 16);
  Lock = MiAcquireLoadLock(1);
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    if ( i[6] != PsNtosImageBase )
      MiProcessLoadConfigForDriver((__int64)i, 0LL);
    MiHandleBootImage(a1, (__int64)i);
  }
  MiFlags |= 0x800uLL;
  MmReleaseLoadLock(Lock);
  for ( j = *v2; j != v2; j = (_QWORD *)*j )
  {
    v6 = j[6];
    v7 = ((unsigned __int64)*((unsigned int *)j + 16) + 4095) >> 12;
    if ( v6 != PsNtosImageBase && v6 != PsHalImageBase && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(j[6]) )
      MiMapKernelScp(v6, v7);
  }
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    for ( k = *v2; k != v2; k = (_QWORD *)*k )
      MiApplyRetpolineToBootDriver((ULONG_PTR)k);
  }
  if ( (KiFeatureSettings & 0x20000) == 0 )
  {
    v9 = *v2;
    v10 = (unsigned __int64)MiIsTargetFullyRetpolined & -(__int64)((KiSpeculationFeatures & 0x20000000000LL) != 0);
    while ( v9 != v2 )
    {
      MiApplyImportOptimizationToBootDriver((__int64)v9, v10);
      v9 = (_QWORD *)*v9;
    }
  }
  for ( m = *v2; m != v2; m = (_QWORD *)*m )
    MiApplyFunctionOverrideToBootDriver((ULONG_PTR)m);
  result = KeQueryPerformanceCounter(0LL);
  qword_141007890 = result.QuadPart;
  return result;
}
