/*
 * XREFs of ?hex@std@@YAAEAVios_base@1@AEAV21@@Z @ 0x180508C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct std::ios_base *__fastcall std::hex(struct std::ios_base *a1)
{
  *((_DWORD *)a1 + 6) = *((_DWORD *)a1 + 6) & 0xFFFFF1FF | 0x800;
  return a1;
}
