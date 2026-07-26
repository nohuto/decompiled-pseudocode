/*
 * XREFs of ndisIfInitializePhase2 @ 0x140147DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400C9B20 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400C9FE0 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1400CD33C (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisStopNsiProvider@@YAXXZ @ 0x1400CECE8 (-ndisStopNsiProvider@@YAXXZ.c)
 *     Ndis::BindRegistry::ReadNetworkInterfaces @ 0x1401443A8 (Ndis--BindRegistry--ReadNetworkInterfaces.c)
 *     ?ndisStartNsiProvider@@YAJXZ @ 0x140148B0C (-ndisStartNsiProvider@@YAJXZ.c)
 *     ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x140148BB8 (-ndisIfNsiClientSubsystemInitialize@@YAJXZ.c)
 */

__int64 __fastcall ndisIfInitializePhase2(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  if ( (int)ndisStartNsiProvider() < 0 )
    return 0LL;
  if ( (int)ndisIfNsiClientSubsystemInitialize() < 0 )
  {
    ndisStopNsiProvider();
    return 0LL;
  }
  ndisIfCompartmentSubsystemInitializePhase2();
  ndisIfNetworkSubsystemInitializePhase2();
  ndisIfCompartmentSubsystemInitializePhase3();
  if ( (int)Ndis::BindRegistry::ReadNetworkInterfaces(0LL) >= 0 )
  {
    if ( *((_BYTE *)qword_14011D088 + 96) )
      Ndis::BindRegistry::ReadNetworkInterfaces(1LL);
  }
  return 1LL;
}
