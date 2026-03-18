/*
 * XREFs of DpiMiracastAddRefMiracastDeviceContext @ 0x14007EAD4
 * Callers:
 *     DpiMiracastCbSendUserModeMessage @ 0x14024B0C0 (DpiMiracastCbSendUserModeMessage.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x14024BA4C (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x140398770 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1403E12A0 (DpiFdoStopMiracastSession.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastAddRefMiracastDeviceContext(__int64 a1, unsigned int a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  _InterlockedXor((volatile signed __int32 *)(a1 + 28), a2);
}
