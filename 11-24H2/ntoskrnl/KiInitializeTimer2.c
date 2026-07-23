/*
 * XREFs of KiInitializeTimer2 @ 0x1403AE058
 * Callers:
 *     KeInitializeTimer2 @ 0x1403ADE80 (KeInitializeTimer2.c)
 *     ExAllocateTimerInternal2 @ 0x1403ADEE0 (ExAllocateTimerInternal2.c)
 *     MiStoreEvictThread @ 0x140476E20 (MiStoreEvictThread.c)
 *     KeInitializeIRTimer @ 0x1404BD12C (KeInitializeIRTimer.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1405BDD64 (KiInitializeIdealProcessorRebalancer.c)
 *     KiAllocateForceParkingData @ 0x1405C5948 (KiAllocateForceParkingData.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140608C4C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     HalpBlkInitSystem @ 0x140C164B8 (HalpBlkInitSystem.c)
 *     KiInitializeDpcRuntimeHistoryHashTables @ 0x140C2C308 (KiInitializeDpcRuntimeHistoryHashTables.c)
 *     PopThermalInit @ 0x140C30E28 (PopThermalInit.c)
 *     PpmCheckInit @ 0x140C32278 (PpmCheckInit.c)
 *     SshpAlpcInitialize @ 0x140C36544 (SshpAlpcInitialize.c)
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 *     ExInitializeTimeRefresh @ 0x140C426DC (ExInitializeTimeRefresh.c)
 *     PopSleepstudyInitialize @ 0x140C68FEC (PopSleepstudyInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140C6A210 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PsTimerResolutionActive @ 0x1403AE390 (PsTimerResolutionActive.c)
 */

char __fastcall KiInitializeTimer2(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  _BYTE *v4; // r11
  __int64 v5; // r10
  char v6; // r9
  __int64 v7; // rcx
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
  *(_QWORD *)(a1 + 120) = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
  v6 = a4 & 0x2E;
  if ( !v6
    && !KeGetPcr()->Prcb.NestingLevel
    && (unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process) )
  {
    v6 = 16;
  }
  v4[129] = v6;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= 9 )
      __fastfail(5u);
    v7 = 3 * v5;
    if ( KiTimer2Combinations[3 * v5] == v6 )
      break;
    v5 = (unsigned int)(v5 + 1);
  }
  v4[130] = KiTimer2Combinations[v7 + 1];
  result = KiTimer2Combinations[v7 + 2];
  v4[131] = result;
  return result;
}
