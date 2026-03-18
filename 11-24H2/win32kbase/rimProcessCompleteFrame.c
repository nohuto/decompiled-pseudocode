/*
 * XREFs of rimProcessCompleteFrame @ 0x140180150
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140058A68 (RIMCompletePointerDeviceFrame.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140217080 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1400EE620 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     rimDispatchCompleteFrame @ 0x140130970 (rimDispatchCompleteFrame.c)
 *     rimQueueCompleteFrame @ 0x140180264 (rimQueueCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

NTSTATUS __fastcall rimProcessCompleteFrame(__int64 a1, __int64 a2, int *a3)
{
  int v6; // eax
  NTSTATUS result; // eax

  if ( (*(_DWORD *)(a2 + 168) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1059LL);
  if ( (*(_QWORD *)(a1 + 832) || *(_DWORD *)(a1 + 1056))
    && (v6 = *(_DWORD *)(a2 + 168), (v6 & 0x2000) != 0)
    && (v6 & 0x80000) != 0
    && (v6 & 0x1000000) == 0 )
  {
    rimQueueCompleteFrame(a1, a2, a3);
    result = *(_DWORD *)(a2 + 168);
    if ( (result & 0x400000) == 0 )
    {
      *(_DWORD *)(a2 + 168) = result | 0x400000;
      return ZwSetEvent(*(HANDLE *)(a1 + 344), 0LL);
    }
  }
  else if ( *(_BYTE *)(a1 + 776) && *(_QWORD *)(a1 + 744) == a1 + 744 )
  {
    *(_BYTE *)(a1 + 776) = 0;
    InputTraceLogging::RIM::DispatchFrame(a2, a3, 0);
    return rimDispatchCompleteFrame((struct RawInputManagerObject *)a1, (struct RIMDEV *)a2, a3);
  }
  else
  {
    return rimQueueCompleteFrame(a1, a2, a3);
  }
  return result;
}
