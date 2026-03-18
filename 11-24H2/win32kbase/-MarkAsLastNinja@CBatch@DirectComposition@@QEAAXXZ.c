/*
 * XREFs of ?MarkAsLastNinja@CBatch@DirectComposition@@QEAAXXZ @ 0x140224F20
 * Callers:
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1400B85F4 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatch::MarkAsLastNinja(DirectComposition::CBatch *this)
{
  *((_BYTE *)this + 32) |= 0x80u;
}
