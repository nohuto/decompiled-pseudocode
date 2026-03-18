/*
 * XREFs of HalpInterruptStartProcessor @ 0x140B4BED0
 * Callers:
 *     HalStartDynamicProcessor @ 0x1405416E0 (HalStartDynamicProcessor.c)
 *     HalStartNextProcessor @ 0x140546280 (HalStartNextProcessor.c)
 *     HalpDpStartProcessor @ 0x140B4FF34 (HalpDpStartProcessor.c)
 *     HalpBlkStartBlockedProcessor @ 0x140B509C0 (HalpBlkStartBlockedProcessor.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x1405418CC (HalpInterruptGetNextProcessorLocalId.c)
 *     HalpInterruptSetProcessorStartContext @ 0x140541E70 (HalpInterruptSetProcessorStartContext.c)
 *     HalpInterruptWaitForProcessorStartUp @ 0x140541EF4 (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpHvVpStartEnabled @ 0x14054B9C4 (HalpHvVpStartEnabled.c)
 *     HalpSetProcessorStateByNtIndex @ 0x140557548 (HalpSetProcessorStateByNtIndex.c)
 *     HalpHvStartProcessor @ 0x140558DFC (HalpHvStartProcessor.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405592F4 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptStartProcessor(unsigned int a1, int a2, char a3, const void *a4)
{
  unsigned int v4; // edi
  __int64 v8; // rdx
  __int64 NextProcessorLocalId; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char started; // bp
  _BYTE *v14; // r15
  unsigned int v15; // ebx
  unsigned int v16; // edi
  bool v17; // si
  char v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // eax
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v22 = a2;
  v4 = 0;
  if ( HalpInterruptProcessorCap && HalpInterruptProcessorsStarted >= (unsigned int)HalpInterruptProcessorCap )
    return 2LL;
  NextProcessorLocalId = (unsigned int)HalpInterruptGetNextProcessorLocalId(a3, &v22);
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
  started = HalpHvVpStartEnabled(NextProcessorLocalId, v8, v10, v11);
  v14 = HalpInterruptGlobalStartupBlock;
  v15 = HalpInterruptGlobalStartupCodePhysical;
  if ( !HalpTiledMemoryMapActive || (a3 & 3) == 0 || (int)HalpMmUpdateTiledMemoryMapTargetStub() >= 0 )
  {
    v16 = v22;
    if ( a1 == -1 || (int)HalpSetProcessorStateByNtIndex(a1, v22) >= 0 )
    {
      v17 = 0;
      if ( !started )
        v17 = HalpDisableInterrupts();
      v18 = HalpInterruptProcessorHidden;
      v14[4] = 0;
      if ( (int)HalpInterruptSetProcessorStartContext(a1, a4, v18) >= 0 )
      {
        if ( started )
        {
          v21 = HalpHvStartProcessor(v16, v19, (__int64)v14, v20);
        }
        else
        {
          v21 = -1073741823;
          if ( !*(_QWORD *)(HalpInterruptController + 128) )
            goto LABEL_21;
          v21 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v16, v14, v15);
        }
        if ( v21 >= 0 )
        {
          v4 = HalpInterruptWaitForProcessorStartUp(v14 + 4, started);
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
          v21,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c",
          0x56Au);
LABEL_22:
        if ( !started && v17 )
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
