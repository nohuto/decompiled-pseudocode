/*
 * XREFs of HvlPhase0Initialize @ 0x140702968
 * Callers:
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     HvlQueryConnection @ 0x140461BD0 (HvlQueryConnection.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     HviIsAnyHypervisorPresent @ 0x1404A3870 (HviIsAnyHypervisorPresent.c)
 *     strstr @ 0x1404FB230 (strstr.c)
 *     HvlpInitializeBootProcessor @ 0x140580E74 (HvlpInitializeBootProcessor.c)
 *     HvlpSetupBootProcessorEarlyHypercallPages @ 0x140581CDC (HvlpSetupBootProcessorEarlyHypercallPages.c)
 *     HvlpTryConfigureInterface @ 0x1405881AC (HvlpTryConfigureInterface.c)
 *     HvlpDetermineEnlightenments @ 0x14058838C (HvlpDetermineEnlightenments.c)
 *     HvlpPhase0Enlightenments @ 0x1405888A8 (HvlpPhase0Enlightenments.c)
 *     HviGetHypervisorVersion @ 0x140657880 (HviGetHypervisorVersion.c)
 */

__int64 __fastcall HvlPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebx

  HvlpFlags = (HviIsAnyHypervisorPresent() ? 0x1000 : 0) | HvlpFlags & 0xFFFFEFFF;
  if ( (int)HvlQueryConnection(0LL) >= 0 || (result = HvlpTryConfigureInterface(a1), (int)result >= 0) )
  {
    result = HvlpSetupBootProcessorEarlyHypercallPages(a1);
    if ( (int)result >= 0 )
    {
      HvlHypervisorConnected = 1;
      HvlpDetermineEnlightenments();
      result = PdcCreateWatchdogAroundClientCall();
      if ( (int)result >= 0 )
      {
        if ( (HvlpFlags & 2) != 0 )
        {
          v3 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
          if ( strstr(*(const char **)(v3 + 216), "HYPERVISORDBG") )
            HvlpRootFlags |= 8u;
        }
        if ( (HvlpFlags & 2) != 0 )
        {
          v4 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
          if ( (*(_DWORD *)(*(_QWORD *)(v4 + 240) + 3492LL) & 0x2000) != 0 )
            HvlpRootFlags |= 0x800u;
        }
        result = HvlpPhase0Enlightenments(a1);
        if ( (int)result >= 0 )
        {
          result = HvlpInitializeBootProcessor(a1);
          v5 = result;
          if ( (int)result >= 0 )
          {
            HviGetHypervisorVersion(HvlpHypervisorVersion);
            return v5;
          }
        }
      }
    }
  }
  else if ( (_DWORD)result == -1070264320 )
  {
    return 0LL;
  }
  return result;
}
