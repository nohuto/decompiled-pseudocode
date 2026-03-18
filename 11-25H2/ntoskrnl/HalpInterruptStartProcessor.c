/*
 * XREFs of HalpInterruptStartProcessor @ 0x140B3BED0
 * Callers:
 *     HalStartDynamicProcessor @ 0x14053EEB0 (HalStartDynamicProcessor.c)
 *     HalStartNextProcessor @ 0x140543990 (HalStartNextProcessor.c)
 *     HalpDpStartProcessor @ 0x140B3FF34 (HalpDpStartProcessor.c)
 *     HalpBlkStartBlockedProcessor @ 0x140B409C0 (HalpBlkStartBlockedProcessor.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x14053F09C (HalpInterruptGetNextProcessorLocalId.c)
 *     HalpInterruptSetProcessorStartContext @ 0x14053F640 (HalpInterruptSetProcessorStartContext.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x14053F6C4 (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpHvVpStartEnabled @ 0x1405490D4 (HalpHvVpStartEnabled.c)
 *     HalpSetProcessorStateByNtIndex @ 0x140554C48 (HalpSetProcessorStateByNtIndex.c)
 *     HalpHvStartProcessor @ 0x1405564FC (HalpHvStartProcessor.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405569F4 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptStartProcessor(unsigned int a1, int a2, char a3, const void *a4)
{
  unsigned int v4; // edi
  __int64 NextProcessorLocalId; // rcx
  char started; // bp
  _BYTE *v11; // r15
  unsigned int v12; // edi
  bool v13; // si
  char v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  int v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v4 = 0;
  if ( HalpInterruptProcessorCap && HalpInterruptProcessorsStarted >= (unsigned int)HalpInterruptProcessorCap )
    return 2LL;
  NextProcessorLocalId = (unsigned int)HalpInterruptGetNextProcessorLocalId(a3, &v17);
  if ( HalpHiberInProgress || (a3 & 2) != 0 )
  {
    HalpInterruptProcessorRestarting = 1;
    if ( (_DWORD)NextProcessorLocalId == -1073740024 )
      goto LABEL_9;
  }
  else
  {
    HalpInterruptProcessorRestarting = 0;
  }
  if ( (int)NextProcessorLocalId < 0 )
    return 2LL;
LABEL_9:
  HalpInterruptProcessorHidden = (a3 & 4) != 0;
  started = HalpHvVpStartEnabled(NextProcessorLocalId);
  v11 = HalpInterruptGlobalStartupBlock;
  if ( !HalpTiledMemoryMapActive || (a3 & 3) == 0 || (int)HalpMmUpdateTiledMemoryMapTargetStub() >= 0 )
  {
    v12 = v17;
    if ( a1 == -1 || (int)HalpSetProcessorStateByNtIndex(a1, v17) >= 0 )
    {
      v13 = 0;
      if ( !started )
        v13 = HalpDisableInterrupts();
      v14 = HalpInterruptProcessorHidden;
      v11[4] = 0;
      if ( (int)HalpInterruptSetProcessorStartContext(a1, a4, v14) >= 0 )
      {
        if ( started )
        {
          v16 = HalpHvStartProcessor(v12, v15, (__int64)v11);
        }
        else
        {
          v16 = -1073741823;
          if ( !*(_QWORD *)(HalpInterruptController + 128) )
            goto LABEL_21;
          v16 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16));
        }
        if ( v16 >= 0 )
        {
          v4 = HalpInterruptWaitForProcessorStartUp(v11 + 4, started);
          if ( v4 != 4 )
            HalpInterruptSetProblemEx(
              HalpInterruptController,
              14,
              0,
              (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c",
              0x564u);
          goto LABEL_22;
        }
LABEL_21:
        v4 = 2;
        HalpInterruptSetProblemEx(
          HalpInterruptController,
          13,
          v16,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c",
          0x56Au);
LABEL_22:
        if ( !started && v13 )
          _enable();
        goto LABEL_25;
      }
    }
    v4 = 2;
  }
LABEL_25:
  HalpInterruptProcessorHidden = 0;
  return v4;
}
