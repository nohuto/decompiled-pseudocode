/*
 * XREFs of ?OnTailButtonDoubleClick@PenEventsDispatcherPrincipal@@AEAAXXZ @ 0x180190064
 * Callers:
 *     ?OnHotKeyDetected@PenEventsDispatcherPrincipal@@UEAAJIII_K0@Z @ 0x18018FDD0 (-OnHotKeyDetected@PenEventsDispatcherPrincipal@@UEAAJIII_K0@Z.c)
 *     ?OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z @ 0x18018FF20 (-OnPenEventsKernelMessage@PenEventsDispatcherPrincipal@@AEAAXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z@std@@@Z @ 0x18018F094 (-FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V.c)
 *     ?GetEffectiveButtonRoutingPolicy@PenEventsDispatcherPrincipal@@AEAA?AW4RoutingPolicy@Input@Devices@Internal@Windows@@XZ @ 0x18018F338 (-GetEffectiveButtonRoutingPolicy@PenEventsDispatcherPrincipal@@AEAA-AW4RoutingPolicy@Input@Devic.c)
 */

void __fastcall PenEventsDispatcherPrincipal::OnTailButtonDoubleClick(PenEventsDispatcherPrincipal *this)
{
  unsigned int EffectiveButtonRoutingPolicy; // eax
  __int64 v2; // rcx
  _QWORD v3[9]; // [rsp+20h] [rbp-48h] BYREF

  v3[0] = off_1801E7C00;
  v3[7] = v3;
  EffectiveButtonRoutingPolicy = PenEventsDispatcherPrincipal::GetEffectiveButtonRoutingPolicy((__int64)this);
  PenEventsDispatcherPrincipal::FireEvents(v2, EffectiveButtonRoutingPolicy, (__int64)v3);
}
