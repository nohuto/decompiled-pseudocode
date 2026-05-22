/*
 * XREFs of ?ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputManager@@@Z @ 0x1801B9F60
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801BA2A0 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801BA4B8 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MPCMouseProcessor::ButtonToInteractionState(
        MPCMouseProcessor *this,
        int a2,
        int a3,
        enum MPCHolographicInputManager::InteractionState *a4)
{
  int v4; // eax

  v4 = a3 & *((_DWORD *)this + 1324);
  if ( (a3 & a2) == a3 )
  {
    if ( v4 != a3 )
    {
      *(_DWORD *)a4 = 1;
      return 1;
    }
  }
  else if ( v4 == a3 )
  {
    *(_DWORD *)a4 = 0;
    return 1;
  }
  return 0;
}
