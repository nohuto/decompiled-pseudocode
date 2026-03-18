/*
 * XREFs of KiInitializeTimer2 @ 0x14036F318
 * Callers:
 *     MiStoreEvictThread @ 0x14036EC70 (MiStoreEvictThread.c)
 *     KeInitializeTimer2 @ 0x14036F140 (KeInitializeTimer2.c)
 *     ExAllocateTimerInternal2 @ 0x14036F1A0 (ExAllocateTimerInternal2.c)
 *     KeInitializeIRTimer @ 0x1404C4448 (KeInitializeIRTimer.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1405BC728 (KiInitializeIdealProcessorRebalancer.c)
 *     KiAllocateForceParkingData @ 0x1405C3FF8 (KiAllocateForceParkingData.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1405FE19C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     HalpBlkInitSystem @ 0x140C03428 (HalpBlkInitSystem.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140C190EC (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     PopThermalInit @ 0x140C1DC0C (PopThermalInit.c)
 *     PpmCheckInit @ 0x140C1F05C (PpmCheckInit.c)
 *     SshpAlpcInitialize @ 0x140C23138 (SshpAlpcInitialize.c)
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 *     ExInitializeTimeRefresh @ 0x140C2F2B0 (ExInitializeTimeRefresh.c)
 *     PopSleepstudyInitialize @ 0x140C551E8 (PopSleepstudyInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140C5611C (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PsTimerResolutionActive @ 0x14036F5C0 (PsTimerResolutionActive.c)
 */

char __fastcall KiInitializeTimer2(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  _BYTE *v4; // r11
  __int64 v5; // r10
  __int64 v6; // rdx
  char v7; // r9
  __int64 v8; // rcx
  char result; // al

  v4 = (_BYTE *)a1;
  v5 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)a1 = (a4 >= 0) + 24;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 96) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ a2), KiWaitNever);
  *(_QWORD *)(a1 + 104) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ a3), KiWaitNever);
  *(_QWORD *)(a1 + 112) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  v6 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  *(_QWORD *)(a1 + 120) = v6;
  v7 = a4 & 0x2E;
  if ( !v7
    && !KeGetPcr()->Prcb.NestingLevel
    && (unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process, v6) )
  {
    v7 = 16;
  }
  v4[129] = v7;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= 9 )
      __fastfail(5u);
    v8 = 3 * v5;
    if ( KiTimer2Combinations[3 * v5] == v7 )
      break;
    v5 = (unsigned int)(v5 + 1);
  }
  v4[130] = KiTimer2Combinations[v8 + 1];
  result = KiTimer2Combinations[v8 + 2];
  v4[131] = result;
  return result;
}
