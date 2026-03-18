/*
 * XREFs of ?AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x18026DEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::AddRef(__int64 a1)
{
  return CChannel::AddRef((CChannel *)(a1 - 16));
}
