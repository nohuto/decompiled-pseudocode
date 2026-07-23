/*
 * XREFs of MiInitializeNonPagedPool @ 0x140C55E34
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiVaToPfnEx @ 0x140293EF0 (MiVaToPfnEx.c)
 *     MiConvertActiveLargePageToSmall @ 0x1402EDFDC (MiConvertActiveLargePageToSmall.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x140677D24 (MiInitializeNonPagedPoolThresholds.c)
 *     MiBuildDynamicRegion @ 0x14067A54C (MiBuildDynamicRegion.c)
 *     MiAddExpansionNonPagedPool @ 0x14067DBDC (MiAddExpansionNonPagedPool.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407EAE14 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140C5708C (MiInitializeDynamicRegion.c)
 */

__int64 MiInitializeNonPagedPool()
{
  char *AnyMultiplexedVm; // rax
  __int64 UnbiasedInterruptTime; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  __int64 i; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r8
  unsigned __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  __int64 v28; // rbx

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(6);
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 7u, 0LL) < 0 )
    return 0LL;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = UnbiasedInterruptTime << 32;
  v4 = UnbiasedInterruptTime;
  v5 = __rdtsc();
  v6 = (unsigned __int64)HIDWORD(v5) << 32;
  v7 = CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls ^ (((v4 >> 28) ^ (v6 | (unsigned int)v5)) >> 4) ^ v3;
  v9 = (unsigned __int64)(unsigned int)ExGenRandom(0, v6, (__int64)CurrentPrcb, v8) << 32;
  v13 = (v9 | (unsigned int)ExGenRandom(0, v10, v11, v12)) ^ v7;
  v15 = qword_140E38C00;
  if ( !v13 )
    v13 = 1LL;
  qword_140E37640 = v13;
  v16 = qword_140E38BF8;
  if ( (unsigned __int64)qword_140E38C00 > 0x100000000000LL )
    v15 = 0x100000000000LL;
  qword_140E37698 = v15 >> 12;
  v17 = ((v15 >> 21) / (unsigned __int16)KeNumberNodes) << 21;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v19 = v16;
    if ( (unsigned int)i >= (unsigned __int16)KeNumberNodes )
      break;
    v20 = qword_140E2DC38;
    v21 = 384 * i;
    *(_QWORD *)(v21 + qword_140E2DC38 + 104) = v16;
    v16 += v17;
    *(_QWORD *)(v21 + v20 + 112) = v16;
    if ( !(unsigned int)MiBuildDynamicRegion((__int64 *)(384 * i + qword_140E2DC38), v19, v17, v14) )
      return 0LL;
  }
  v22 = qword_140E38CD0;
  if ( (unsigned __int64)qword_140E38CD0 > 0x100000000000LL )
    v22 = 0x100000000000LL;
  if ( !(unsigned int)MiInitializeDynamicRegion(14LL, qword_140E38CC8, v22) )
    return 0LL;
  v23 = MmPfnDatabase + (MxPfnAllocation << 12);
  v24 = MI_IS_PHYSICAL_ADDRESS(v23 - 1);
  if ( v24 )
  {
    LODWORD(v25) = 2;
    do
    {
      v25 = (unsigned int)(v25 - 1);
      --v24;
    }
    while ( v24 );
    v26 = MiPageSizes[v25] << 12;
    v27 = v23 & (v26 - 1);
    if ( v27 )
    {
      v28 = MiVaToPfnEx(v23);
      MiConvertActiveLargePageToSmall(48 * (v28 - (v27 >> 12)) - 0x220000000000LL, 0);
      MiAddExpansionNonPagedPool(v28, (v26 - v27) >> 12);
    }
  }
  MiInitializeNonPagedPoolThresholds(0);
  return 1LL;
}
