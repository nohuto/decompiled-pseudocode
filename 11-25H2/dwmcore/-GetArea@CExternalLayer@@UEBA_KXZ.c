/*
 * XREFs of ?GetArea@CExternalLayer@@UEBA_KXZ @ 0x180271660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CExternalLayer::GetArea(CExternalLayer *this)
{
  return *((_DWORD *)this + 6) * *((_DWORD *)this + 7);
}
