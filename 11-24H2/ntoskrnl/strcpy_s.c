/*
 * XREFs of strcpy_s @ 0x140501BA0
 * Callers:
 *     CmpAddProcessorConfigurationEntry @ 0x1407D5208 (CmpAddProcessorConfigurationEntry.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140812F0C (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A94D38 (BiConvertNtDeviceToBootEnvironment.c)
 *     RtlIncrementCorrelationVector @ 0x140A9D4C0 (RtlIncrementCorrelationVector.c)
 *     ExpSystemErrorHandler2 @ 0x140B63540 (ExpSystemErrorHandler2.c)
 *     HdlspGetLine @ 0x140BAFAA4 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x140BB0600 (HdlspSetBlueScreenInformation.c)
 *     PspCreateSecureSystemProcess @ 0x140C36F2C (PspCreateSecureSystemProcess.c)
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
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
