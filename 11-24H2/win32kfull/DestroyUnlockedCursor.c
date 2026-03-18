/*
 * XREFs of DestroyUnlockedCursor @ 0x140079B60
 * Callers:
 *     <none>
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1400786A4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

bool __fastcall DestroyUnlockedCursor(struct tagCURSOR *a1)
{
  return _DestroyCursor(a1, 2LL);
}
