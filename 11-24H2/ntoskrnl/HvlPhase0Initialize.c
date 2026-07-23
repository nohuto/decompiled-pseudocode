/*
 * XREFs of HvlPhase0Initialize @ 0x14070C3D8
 * Callers:
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     HvlQueryConnection @ 0x1404564C0 (HvlQueryConnection.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     HviIsAnyHypervisorPresent @ 0x14049E730 (HviIsAnyHypervisorPresent.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 *     HvlpInitializeBootProcessor @ 0x1405819A4 (HvlpInitializeBootProcessor.c)
 *     HvlpSetupBootProcessorEarlyHypercallPages @ 0x14058280C (HvlpSetupBootProcessorEarlyHypercallPages.c)
 *     HvlpTryConfigureInterface @ 0x140588B0C (HvlpTryConfigureInterface.c)
 *     HvlpDetermineEnlightenments @ 0x140588CEC (HvlpDetermineEnlightenments.c)
 *     HvlpPhase0Enlightenments @ 0x140589208 (HvlpPhase0Enlightenments.c)
 *     HviGetHypervisorVersion @ 0x140662430 (HviGetHypervisorVersion.c)
 */

__int64 __fastcall HvlPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx

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
        if ( (HvlpFlags & 2) != 0 && strstr(*(const char **)(KeLoaderBlock_0 + 216), "HYPERVISORDBG") )
          HvlpRootFlags |= 8u;
        if ( (HvlpFlags & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3492LL) & 0x2000) != 0 )
          HvlpRootFlags |= 0x800u;
        result = HvlpPhase0Enlightenments(a1);
        if ( (int)result >= 0 )
        {
          result = HvlpInitializeBootProcessor(a1);
          v3 = result;
          if ( (int)result >= 0 )
          {
            HviGetHypervisorVersion(HvlpHypervisorVersion);
            return v3;
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
