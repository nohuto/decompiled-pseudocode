/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x14092AA88
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14092A57C (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14092AB4C (VrpUnloadDifferencingHive.c)
 * Callees:
 *     VrpUnlockDiffHiveTable @ 0x14092ACAC (VrpUnlockDiffHiveTable.c)
 *     VrpLockDiffHiveTableExclusive @ 0x14092AD7C (VrpLockDiffHiveTableExclusive.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x140A63644 (VrpDereferenceDiffHiveEntryWithLock.c)
 */

__int64 __fastcall VrpDereferenceDiffHiveEntry(_QWORD *P)
{
  __int64 result; // rax
  __int64 v3; // rtt

  _m_prefetchw(P + 2);
  result = P[2];
  while ( result - 1 > 0 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(P + 2, result - 1, result);
    if ( v3 == result )
      return result;
  }
  if ( result != 1 )
    __fastfail(0xEu);
  VrpLockDiffHiveTableExclusive();
  VrpDereferenceDiffHiveEntryWithLock(P);
  return VrpUnlockDiffHiveTable();
}
