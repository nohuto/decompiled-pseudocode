/*
 * XREFs of MmIsDriverVerifyingByAddress @ 0x140B96350
 * Callers:
 *     <none>
 * Callees:
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x14036DE9C (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14036E278 (MmUnlockLoadedDataTableEntry.c)
 */

LOGICAL __stdcall MmIsDriverVerifyingByAddress(PVOID AddressWithinSection)
{
  LOGICAL v2; // ebx
  __int64 v3; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( !(_DWORD)VfRuleClasses )
    return 0;
  v2 = 0;
  v3 = MiLockLoadedDataTableEntryIfNecessary((__int64)AddressWithinSection, &v4);
  if ( v3 )
  {
    v2 = (*(_DWORD *)(v3 + 104) >> 25) & 1;
    if ( v4 )
      MmUnlockLoadedDataTableEntry(v3);
  }
  return v2;
}
