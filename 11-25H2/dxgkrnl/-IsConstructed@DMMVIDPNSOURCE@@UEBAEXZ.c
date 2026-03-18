/*
 * XREFs of ?IsConstructed@DMMVIDPNSOURCE@@UEBAEXZ @ 0x14004C3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPNSOURCE::IsConstructed(DMMVIDPNSOURCE *this)
{
  return *((_DWORD *)this + 6) == 2;
}
