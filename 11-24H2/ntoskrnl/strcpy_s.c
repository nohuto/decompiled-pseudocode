/*
 * XREFs of strcpy_s @ 0x1405042E0
 * Callers:
 *     CmpAddProcessorConfigurationEntry @ 0x1407D4D18 (CmpAddProcessorConfigurationEntry.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1408127CC (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A9857C (BiConvertNtDeviceToBootEnvironment.c)
 *     RtlIncrementCorrelationVector @ 0x140AA2130 (RtlIncrementCorrelationVector.c)
 *     ExpSystemErrorHandler2 @ 0x140B61470 (ExpSystemErrorHandler2.c)
 *     HdlspGetLine @ 0x140BADAA4 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x140BAE600 (HdlspSetBlueScreenInformation.c)
 *     PspCreateSecureSystemProcess @ 0x140C34DEC (PspCreateSecureSystemProcess.c)
 *     PspInitPhase0 @ 0x140C65530 (PspInitPhase0.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140493990 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strcpy_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  char v6; // al

  if ( a1 && SizeInBytes )
  {
    if ( Src )
    {
      v5 = a1 - Src;
      while ( 1 )
      {
        v6 = *Src;
        Src[v5] = *Src;
        ++Src;
        if ( !v6 )
          return 0;
        if ( !--SizeInBytes )
        {
          v4 = 34;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v4 = 22;
LABEL_9:
      *a1 = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
