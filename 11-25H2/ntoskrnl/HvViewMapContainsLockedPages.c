/*
 * XREFs of HvViewMapContainsLockedPages @ 0x140A639CC
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140465694 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvViewMapContainsLockedPages(__int64 a1)
{
  return (*(_DWORD *)(a1 + 32) & 4) != 0;
}
