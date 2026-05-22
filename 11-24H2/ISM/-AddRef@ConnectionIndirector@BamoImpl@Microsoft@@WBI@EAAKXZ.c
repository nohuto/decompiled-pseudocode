/*
 * XREFs of ?AddRef@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ @ 0x1800B61D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::AddRef(__int64 a1)
{
  return EdgyConnection::AddRef((EdgyConnection *)(a1 - 24));
}
