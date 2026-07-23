/*
 * XREFs of HalpInitializeCmc @ 0x140B4DB28
 * Callers:
 *     HalpInitializeErrSrc @ 0x140B4DBD0 (HalpInitializeErrSrc.c)
 * Callees:
 *     HalpCmciInitializeErrorPacket @ 0x140477DA0 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmciInitProcessor @ 0x140478374 (HalpCmciInitProcessor.c)
 *     HalpCmcStartPolling @ 0x1404F5220 (HalpCmcStartPolling.c)
 *     HalpCmcInitializePolling @ 0x14053C5C4 (HalpCmcInitializePolling.c)
 *     HalpIsCmciImplemented @ 0x140B4E334 (HalpIsCmciImplemented.c)
 */

__int64 __fastcall HalpInitializeCmc(int a1, _DWORD *a2)
{
  __int64 v4; // [rsp+40h] [rbp+18h]

  HIDWORD(v4) = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      HalpCmcErrorSourceId = a2[7];
      HalpCmcErrorSource = a2;
      if ( (unsigned __int8)HalpIsCmciImplemented() )
      {
        HalpCmciEnabled = 1;
        _InterlockedIncrement(&HalpCmciRevertToPolledMode);
      }
      HalpCmcInitializePolling((__int64)a2);
      HalpCmcStartPolling();
    }
    else
    {
      LODWORD(v4) = KeGetPcr()->Prcb.Number;
      if ( (unsigned __int8)HalpIsCmciImplemented() )
      {
        HalpCmciInitializeErrorPacket((__int64)a2, v4);
        HalpCmciInitProcessor((__int64)a2, v4);
      }
    }
  }
  else
  {
    HalpCmcErrorSourceId = a2[7];
    HalpCmcErrorSource = a2;
  }
  return 0LL;
}
