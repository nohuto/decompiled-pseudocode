/*
 * XREFs of IvtFlGetPhyAddress @ 0x140570FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtFlGetPhyAddress(_QWORD *a1)
{
  return *a1 & 0xFFFFFFFFFF000LL;
}
