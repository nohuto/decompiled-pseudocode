/*
 * XREFs of HUBUCX_CheckIfHubIsDisconnected @ 0x1400263DC
 * Callers:
 *     HUBPDO_EvtDeviceSurpriseRemoval @ 0x140082C50 (HUBPDO_EvtDeviceSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_CheckIfHubIsDisconnected(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 552))(*(_QWORD *)(a1 + 248));
}
