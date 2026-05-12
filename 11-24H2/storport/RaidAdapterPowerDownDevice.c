/*
 * XREFs of RaidAdapterPowerDownDevice @ 0x1400075B0
 * Callers:
 *     RaidAdapterSetDevicePowerIrp @ 0x1400073D4 (RaidAdapterSetDevicePowerIrp.c)
 * Callees:
 *     GatewayRegisterForEmptyNotification @ 0x1400076AC (GatewayRegisterForEmptyNotification.c)
 *     RaidPauseAdapterQueue @ 0x1400078E0 (RaidPauseAdapterQueue.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterPowerDownDevice(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids, a1, a2);
  }
  ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  RaidPauseAdapterQueue(a1);
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4 = GatewayRegisterForEmptyNotification(
         *(_QWORD *)(a1 + 960),
         *(_QWORD *)(a1 + 8),
         a2,
         0,
         (__int64)&RaidAdapterStopOnPowerdown);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 24LL, &WPP_3e1ffd7ece683aaa229dca75055d12f9_Traceguids, a1, a2, v4);
  }
  return 259LL;
}
