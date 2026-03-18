/*
 * XREFs of DpiMiracastAddRefMiracastDeviceContext @ 0x14007E454
 * Callers:
 *     DpiMiracastCbSendUserModeMessage @ 0x1402442B0 (DpiMiracastCbSendUserModeMessage.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x140244C3C (DpiMiracastGetDeviceContextFromName.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x14031F900 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1403E7BF0 (DpiFdoStopMiracastSession.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastAddRefMiracastDeviceContext(__int64 a1, unsigned int a2)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  _InterlockedXor((volatile signed __int32 *)(a1 + 28), a2);
}
