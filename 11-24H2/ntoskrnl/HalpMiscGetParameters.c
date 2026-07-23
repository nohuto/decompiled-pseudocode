/*
 * XREFs of HalpMiscGetParameters @ 0x140C11650
 * Callers:
 *     HalpMiscInitSystem @ 0x140B4F2D0 (HalpMiscInitSystem.c)
 * Callees:
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     HalpGetCpuInfo @ 0x140487890 (HalpGetCpuInfo.c)
 *     HalpIsHvPresent @ 0x1404A04A0 (HalpIsHvPresent.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsPartitionCpuManager @ 0x1404F52CC (HalpIsPartitionCpuManager.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 *     atoi @ 0x1404FB4A0 (atoi.c)
 *     HalpInterruptForceClusterMode @ 0x14053FBF8 (HalpInterruptForceClusterMode.c)
 *     HalpInterruptSetMsiOverride @ 0x1405403D8 (HalpInterruptSetMsiOverride.c)
 *     HalpIsXboxNanovisorPresent @ 0x140548550 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HalpProcIsSmtDisabled @ 0x140C11514 (HalpProcIsSmtDisabled.c)
 */

char __fastcall HalpMiscGetParameters(__int64 a1)
{
  __int64 v2; // rax
  const char *v3; // rdi
  char *v4; // rax
  char v5; // cl
  int v6; // eax
  char *v7; // rax
  char v8; // cl
  int v9; // eax
  char v10; // cl
  bool v16; // zf
  char *v17; // rax
  char v18; // cl
  unsigned __int8 v20[24]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)HalpInterruptModel() == 1 )
    HalpMiscDiscardLowMemory = 1;
  LOBYTE(v2) = HalpProcIsSmtDisabled(a1);
  HalpInterruptBlockHyperthreading = v2;
  if ( a1 )
  {
    if ( (_BYTE)v2 )
    {
      v2 = *(_QWORD *)(a1 + 240);
      if ( (*(_DWORD *)(v2 + 132) & 0x200) == 0 )
        HalpInterruptStartHyperthreadSiblings = 1;
    }
    v3 = *(const char **)(a1 + 216);
    if ( v3 )
    {
      strstr(*(const char **)(a1 + 216), "SAFEBOOT:");
      if ( strstr(v3, "ONECPU") )
        HalpInterruptProcessorCap = 1;
      if ( strstr(v3, "USEPHYSICALAPIC") )
        HalpInterruptPhysicalModeOnly = 1;
      if ( strstr(v3, "BREAK") )
        HalpMiscDebugBreakRequested = 1;
      v4 = strstr(v3, "MAXPROCSPERCLUSTER");
      if ( v4 )
      {
        while ( 1 )
        {
          v5 = *v4;
          if ( !*v4 || v5 == 32 || (unsigned __int8)(v5 - 48) <= 9u )
            break;
          ++v4;
        }
        v6 = atoi(v4);
        HalpInterruptForceClusterMode(v6);
      }
      v7 = strstr(v3, "MAXAPICCLUSTER");
      if ( v7 )
      {
        while ( 1 )
        {
          v8 = *v7;
          if ( !*v7 || v8 == 32 || (unsigned __int8)(v8 - 48) <= 9u )
            break;
          ++v7;
        }
        v9 = atoi(v7);
        if ( v9 )
          LODWORD(HalpInterruptMaxCluster) = v9;
      }
      if ( strstr(v3, "X2APICPOLICY=ENABLE") )
        HalpInterruptX2ApicPolicy = 1;
      if ( strstr(v3, "X2APICPOLICY=DISABLE") )
        HalpInterruptX2ApicPolicy = 0;
      if ( strstr(v3, "USELEGACYAPICMODE") )
        HalpInterruptX2ApicPolicy = 0;
      if ( strstr(v3, "SYSTEMWATCHDOGPOLICY=DISABLED") )
      {
        HalpTimerWatchdogDisable = 1;
      }
      else if ( strstr(v3, "SYSTEMWATCHDOGPOLICY=PHYSICALONLY") )
      {
        HalpTimerWatchdogPhysicalOnly = 1;
      }
      if ( strstr(v3, "CONFIGACCESSPOLICY=DISALLOWMMCONFIG") )
        HalpAvoidMmConfigAccessMethod = 1;
      if ( strstr(v3, "MSIPOLICY=FORCEDISABLE") )
      {
        v10 = 0;
      }
      else
      {
        if ( !strstr(v3, "FORCEMSI") )
          goto LABEL_46;
        v10 = 1;
      }
      HalpInterruptSetMsiOverride(v10);
LABEL_46:
      if ( !HalpIsHvPresent() )
        goto LABEL_51;
      HalpHvPresent = 1;
      if ( HalpIsPartitionCpuManager() )
        HalpHvCpuManager = 1;
      if ( HalpIsMicrosoftCompatibleHvLoaded() )
      {
        _RAX = 1073741828LL;
        __asm { cpuid }
        v16 = (_RAX & 0x10) == 0;
      }
      else
      {
LABEL_51:
        v16 = HalpIsXboxNanovisorPresent() == 0;
      }
      if ( !v16 )
        HalpHvUsedForReboot = 1;
      if ( HalpHvCpuManager )
      {
        v20[0] = 0;
        if ( HalpGetCpuInfo(0LL, 0LL, 0LL, v20) )
        {
          if ( v20[0] == 2 && (__readmsr(0xFEu) & 0x8000) != 0 )
            HalpMiscDiscardLowMemory = 1;
        }
      }
      if ( strstr(v3, "FIRSTMEGABYTEPOLICY=USEALL") || HalpIsMicrosoftCompatibleHvLoaded() && !HalpHvCpuManager )
        HalpMiscDiscardLowMemory = 0;
      if ( strstr(v3, "USEPLATFORMCLOCK") )
        HalpTimerPlatformSourceForced = 1;
      if ( strstr(v3, "USEPLATFORMTICK") )
        HalpTimerPlatformClockSourceForced = 1;
      v17 = strstr(v3, "GROUPSIZE");
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = *v17;
          if ( !*v17 || v18 == 32 || (unsigned __int8)(v18 - 48) <= 9u )
            break;
          ++v17;
        }
        HalpMaximumGroupSize = atoi(v17);
        if ( (unsigned int)(HalpMaximumGroupSize - 1) > 0x3F )
          HalpMaximumGroupSize = 64;
      }
      HalpSplitLargeNumaNodes = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x20000) != 0;
      strstr(v3, "HALTPROFILINGPOLICY=BLOCKED");
      strstr(v3, "HALTPROFILINGPOLICY=RELAXED");
      LOBYTE(v2) = (unsigned __int8)strstr(v3, "HALTPROFILINGPOLICY=RESTRICTED");
    }
  }
  return v2;
}
