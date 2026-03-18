/*
 * XREFs of XEPATHOBJ_vDestructWrap @ 0x1C0159F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall XEPATHOBJ_vDestructWrap(EPATHOBJ *a1)
{
  EPATHOBJ::vUnlock(a1);
}
