/*
 * XREFs of ?AddRef@GameControllerRawInputProvider@@WBI@EAAKXZ @ 0x1800A3320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GameControllerRawInputProvider::AddRef(__int64 a1)
{
  return DWMLegacyInputTarget::AddRef((DWMLegacyInputTarget *)(a1 - 24));
}
