/*
 * XREFs of ?ExitBroadcastMode@BroadcastDVRComponent@@UEAAJXZ @ 0x18023AD40
 * Callers:
 *     <none>
 * Callees:
 *     ?BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ @ 0x1802AAAAC (-BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ.c)
 */

__int64 __fastcall BroadcastDVRComponent::ExitBroadcastMode(BroadcastDVRComponent *this)
{
  GameDVRTraceProvider::BroadcastDVRComponent_ExitBroadcastMode();
  *(_WORD *)((char *)this + 447) = 0;
  return 0LL;
}
