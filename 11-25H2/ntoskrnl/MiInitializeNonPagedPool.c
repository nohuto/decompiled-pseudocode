/*
 * XREFs of MiInitializeNonPagedPool @ 0x140C42A74
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MiVaToPfnEx @ 0x1402AB010 (MiVaToPfnEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiConvertActiveLargePageToSmall @ 0x14038A558 (MiConvertActiveLargePageToSmall.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x14066B20C (MiInitializeNonPagedPoolThresholds.c)
 *     MiBuildDynamicRegion @ 0x14066DAC0 (MiBuildDynamicRegion.c)
 *     MiAddExpansionNonPagedPool @ 0x14067123C (MiAddExpansionNonPagedPool.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407DA984 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140C43C7C (MiInitializeDynamicRegion.c)
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
  v9 = qword_140E38880;
  if ( !v8 )
    v8 = 1LL;
  qword_140E372C0 = v8;
  v10 = qword_140E38878;
  if ( (unsigned __int64)qword_140E38880 > 0x100000000000LL )
    v9 = 0x100000000000LL;
  qword_140E37318 = v9 >> 12;
  v11 = ((v9 >> 21) / (unsigned __int16)KeNumberNodes) << 21;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v13 = v10;
    if ( (unsigned int)i >= (unsigned __int16)KeNumberNodes )
      break;
    v14 = qword_140E2D8B8;
    v15 = 384 * i;
    *(_QWORD *)(v15 + qword_140E2D8B8 + 104) = v10;
    v10 += v11;
    *(_QWORD *)(v15 + v14 + 112) = v10;
    if ( !(unsigned int)MiBuildDynamicRegion((__int64 *)(384 * i + qword_140E2D8B8), v13, v11) )
      return 0LL;
  }
  v16 = qword_140E38950;
  if ( (unsigned __int64)qword_140E38950 > 0x100000000000LL )
    v16 = 0x100000000000LL;
  if ( !(unsigned int)MiInitializeDynamicRegion(14LL, qword_140E38948, v16) )
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
