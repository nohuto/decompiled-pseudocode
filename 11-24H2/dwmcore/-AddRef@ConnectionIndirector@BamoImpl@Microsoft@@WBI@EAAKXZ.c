/*
 * XREFs of ?AddRef@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ @ 0x18026DEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::AddRef(__int64 a1)
{
  return CChannel::AddRef((CChannel *)(a1 - 24));
}
