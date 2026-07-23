/*
 * XREFs of HalpInterruptStartProcessor @ 0x140B4DF10
 * Callers:
 *     HalStartDynamicProcessor @ 0x14053EFE0 (HalStartDynamicProcessor.c)
 *     HalStartNextProcessor @ 0x140543B40 (HalStartNextProcessor.c)
 *     HalpDpStartProcessor @ 0x140B51F84 (HalpDpStartProcessor.c)
 *     HalpBlkStartBlockedProcessor @ 0x140B52A10 (HalpBlkStartBlockedProcessor.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x14053F1CC (HalpInterruptGetNextProcessorLocalId.c)
 *     HalpInterruptSetProcessorStartContext @ 0x14053F770 (HalpInterruptSetProcessorStartContext.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x14053F7F0 (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpHvVpStartEnabled @ 0x140549284 (HalpHvVpStartEnabled.c)
 *     HalpSetProcessorStateByNtIndex @ 0x140554E88 (HalpSetProcessorStateByNtIndex.c)
 *     HalpHvStartProcessor @ 0x14055673C (HalpHvStartProcessor.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x140556F24 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptStartProcessor(unsigned int a1, int a2, char a3, const void *a4)
{
  unsigned int v4; // edi
  __int64 v8; // rdx
  __int64 NextProcessorLocalId; // rcx
  char started; // bp
  _BYTE *v12; // r15
  unsigned int v13; // edi
  bool v14; // si
  char v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  int v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = a2;
  v4 = 0;
  if ( HalpInterruptProcessorCap && HalpInterruptProcessorsStarted >= (unsigned int)HalpInterruptProcessorCap )
    return 2LL;
  NextProcessorLocalId = (unsigned int)HalpInterruptGetNextProcessorLocalId(a3, &v18);
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
  started = HalpHvVpStartEnabled(NextProcessorLocalId, v8);
  v12 = HalpInterruptGlobalStartupBlock;
  if ( !HalpTiledMemoryMapActive || (a3 & 3) == 0 || (int)HalpMmUpdateTiledMemoryMapTargetStub() >= 0 )
  {
    v13 = v18;
    if ( a1 == -1 || (int)HalpSetProcessorStateByNtIndex(a1, v18) >= 0 )
    {
      v14 = 0;
      if ( !started )
        v14 = HalpDisableInterrupts();
      v15 = HalpInterruptProcessorHidden;
      v12[4] = 0;
      if ( (int)HalpInterruptSetProcessorStartContext(a1, a4, v15, v13) >= 0 )
      {
        if ( started )
        {
          v17 = HalpHvStartProcessor(v13, v16, (__int64)v12);
        }
        else
        {
          v17 = -1073741823;
          if ( !*(_QWORD *)(HalpInterruptController + 128) )
            goto LABEL_21;
          v17 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v13);
        }
        if ( v17 >= 0 )
        {
          v4 = HalpInterruptWaitForProcessorStartUp(v12 + 4, started);
          if ( v4 != 4 )
            HalpInterruptSetProblemEx(
              HalpInterruptController,
              14,
              0,
              (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c",
              0x565u);
          goto LABEL_22;
        }
LABEL_21:
        v4 = 2;
        HalpInterruptSetProblemEx(
          HalpInterruptController,
          13,
          v17,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c",
          0x56Bu);
LABEL_22:
        if ( !started && v14 )
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
