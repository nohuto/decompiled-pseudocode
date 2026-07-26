/*
 * XREFs of ndisIfInitializePhase2 @ 0x140152A70
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400D0CC0 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400D1188 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1400D497C (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisStopNsiProvider@@YAXXZ @ 0x1400D6328 (-ndisStopNsiProvider@@YAXXZ.c)
 *     Ndis::BindRegistry::ReadNetworkInterfaces @ 0x14014F070 (Ndis--BindRegistry--ReadNetworkInterfaces.c)
 *     ?ndisStartNsiProvider@@YAJXZ @ 0x1401537DC (-ndisStartNsiProvider@@YAJXZ.c)
 *     ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x140153888 (-ndisIfNsiClientSubsystemInitialize@@YAJXZ.c)
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
    if ( *((_BYTE *)qword_140127138 + 96) )
      Ndis::BindRegistry::ReadNetworkInterfaces(1LL);
  }
  return 1LL;
}
