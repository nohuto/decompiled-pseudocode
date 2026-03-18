/*
 * XREFs of MiInitializeNonPagedPool @ 0x140C53CA4
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfnEx @ 0x140264680 (MiVaToPfnEx.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     MiConvertActiveLargePageToSmall @ 0x14041F5E8 (MiConvertActiveLargePageToSmall.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1404251D0 (KiQueryUnbiasedInterruptTime.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x140676B54 (MiInitializeNonPagedPoolThresholds.c)
 *     MiBuildDynamicRegion @ 0x14067936C (MiBuildDynamicRegion.c)
 *     MiAddExpansionNonPagedPool @ 0x14067C9FC (MiAddExpansionNonPagedPool.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407EA844 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140C54EFC (MiInitializeDynamicRegion.c)
 */

__int64 MiInitializeNonPagedPool()
{
  char *AnyMultiplexedVm; // rax
  __int64 UnbiasedInterruptTime; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 i; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  __int64 v22; // rbx

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(6);
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 7, 0LL) < 0 )
    return 0LL;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = UnbiasedInterruptTime << 32;
  v4 = UnbiasedInterruptTime;
  v5 = __rdtsc();
  v6 = CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls ^ (((v4 >> 28) ^ (((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5)) >> 4) ^ v3;
  v7 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v8 = (v7 | (unsigned int)ExGenRandom(0)) ^ v6;
  v9 = qword_140E38AC0;
  if ( !v8 )
    v8 = 1LL;
  qword_140E37500 = v8;
  v10 = qword_140E38AB8;
  if ( (unsigned __int64)qword_140E38AC0 > 0x100000000000LL )
    v9 = 0x100000000000LL;
  qword_140E37558 = v9 >> 12;
  v11 = ((v9 >> 21) / (unsigned __int16)KeNumberNodes) << 21;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v13 = v10;
    if ( (unsigned int)i >= (unsigned __int16)KeNumberNodes )
      break;
    v14 = qword_140E2DAF8;
    v15 = 384 * i;
    *(_QWORD *)(v15 + qword_140E2DAF8 + 104) = v10;
    v10 += v11;
    *(_QWORD *)(v15 + v14 + 112) = v10;
    if ( !(unsigned int)MiBuildDynamicRegion((__int64 *)(384 * i + qword_140E2DAF8), v13, v11) )
      return 0LL;
  }
  v16 = qword_140E38B90;
  if ( (unsigned __int64)qword_140E38B90 > 0x100000000000LL )
    v16 = 0x100000000000LL;
  if ( !(unsigned int)MiInitializeDynamicRegion(14LL, qword_140E38B88, v16) )
    return 0LL;
  v17 = MmPfnDatabase + (MxPfnAllocation << 12);
  v18 = MI_IS_PHYSICAL_ADDRESS(v17 - 1);
  if ( v18 )
  {
    LODWORD(v19) = 2;
    do
    {
      v19 = (unsigned int)(v19 - 1);
      --v18;
    }
    while ( v18 );
    v20 = MiPageSizes[v19] << 12;
    v21 = v17 & (v20 - 1);
    if ( v21 )
    {
      v22 = MiVaToPfnEx(v17);
      MiConvertActiveLargePageToSmall(48 * (v22 - (v21 >> 12)) - 0x220000000000LL, 0);
      MiAddExpansionNonPagedPool(v22, (v20 - v21) >> 12);
    }
  }
  MiInitializeNonPagedPoolThresholds(0);
  return 1LL;
}
