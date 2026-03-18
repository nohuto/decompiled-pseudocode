/*
 * XREFs of HalpInitializeCmc @ 0x140B4BAE8
 * Callers:
 *     HalpInitializeErrSrc @ 0x140B4BB90 (HalpInitializeErrSrc.c)
 * Callees:
 *     HalpCmciInitializeErrorPacket @ 0x14047CC18 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmciInitProcessor @ 0x14047D1E4 (HalpCmciInitProcessor.c)
 *     HalpCmcStartPolling @ 0x1404F7940 (HalpCmcStartPolling.c)
 *     HalpCmcInitializePolling @ 0x14053ECC4 (HalpCmcInitializePolling.c)
 *     HalpIsCmciImplemented @ 0x140B4C2F4 (HalpIsCmciImplemented.c)
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
