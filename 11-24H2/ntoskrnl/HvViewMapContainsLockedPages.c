/*
 * XREFs of HvViewMapContainsLockedPages @ 0x140A66248
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1404648A0 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvViewMapContainsLockedPages(__int64 a1)
{
  return (*(_DWORD *)(a1 + 32) & 4) != 0;
}
