/*
 * XREFs of ?IsConstructed@DMMVIDPN@@UEBAEXZ @ 0x1400525C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPN::IsConstructed(DMMVIDPN *this)
{
  return *((_DWORD *)this + 4) == 2;
}
