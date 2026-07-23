/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x14092CBC8
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14092C6BC (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14092CC8C (VrpUnloadDifferencingHive.c)
 * Callees:
 *     VrpUnlockDiffHiveTable @ 0x14092CDEC (VrpUnlockDiffHiveTable.c)
 *     VrpLockDiffHiveTableExclusive @ 0x14092CEBC (VrpLockDiffHiveTableExclusive.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x140A5BF44 (VrpDereferenceDiffHiveEntryWithLock.c)
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
