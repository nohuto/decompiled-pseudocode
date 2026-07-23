/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x140C4A6A8
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140C49F8C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 *     MiMapKernelScp @ 0x1404EE5D8 (MiMapKernelScp.c)
 *     MiProcessLoadConfigForDriver @ 0x140A631A4 (MiProcessLoadConfigForDriver.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140C441C8 (MiApplyImportOptimizationToBootDriver.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C44324 (MiApplyRetpolineToBootDriver.c)
 *     MiApplyFunctionOverrideToBootDriver @ 0x140C4944C (MiApplyFunctionOverrideToBootDriver.c)
 *     MiHandleBootImage @ 0x140C49B04 (MiHandleBootImage.c)
 */

LARGE_INTEGER __fastcall MiReloadBootLoadedDrivers(__int64 a1)
{
  _QWORD **v2; // rbx
  struct _KTHREAD *Lock; // rbp
  _QWORD *i; // rdi
  __int64 v5; // rcx
  _QWORD *j; // rdi
  PVOID v7; // rbp
  unsigned __int64 v8; // rsi
  PVOID v9; // rt1
  _QWORD *k; // rdi
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rsi
  _QWORD *m; // rdi
  LARGE_INTEGER result; // rax

  v2 = (_QWORD **)(a1 + 16);
  Lock = MiAcquireLoadLock(1);
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    v5 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
    if ( i[6] != v5 )
      MiProcessLoadConfigForDriver((__int64)i, 0LL);
    MiHandleBootImage(a1, (__int64)i);
  }
  MiFlags |= 0x800uLL;
  MmReleaseLoadLock(Lock);
  for ( j = *v2; j != v2; j = (_QWORD *)*j )
  {
    v7 = (PVOID)j[6];
    v8 = ((unsigned __int64)*((unsigned int *)j + 16) + 4095) >> 12;
    v9 = *(PVOID *)&KeNumberProcessorsGroup0[9];
    if ( v7 != v9 && v7 != PsHalImageBase && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(j[6]) )
      MiMapKernelScp((ULONG_PTR)v7, v8);
  }
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    for ( k = *v2; k != v2; k = (_QWORD *)*k )
      MiApplyRetpolineToBootDriver((ULONG_PTR)k);
  }
  if ( (KiFeatureSettings & 0x20000) == 0 )
  {
    v11 = *v2;
    v12 = (unsigned __int64)MiIsTargetFullyRetpolined & -(__int64)((KiSpeculationFeatures & 0x20000000000LL) != 0);
    while ( v11 != v2 )
    {
      MiApplyImportOptimizationToBootDriver((__int64)v11, v12);
      v11 = (_QWORD *)*v11;
    }
  }
  for ( m = *v2; m != v2; m = (_QWORD *)*m )
    MiApplyFunctionOverrideToBootDriver((ULONG_PTR)m);
  result = KeQueryPerformanceCounter(0LL);
  qword_141007890 = result.QuadPart;
  return result;
}
