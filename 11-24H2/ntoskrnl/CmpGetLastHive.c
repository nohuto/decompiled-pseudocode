/*
 * XREFs of CmpGetLastHive @ 0x140930D0C
 * Callers:
 *     CmpDoFlushAll @ 0x14020DA6C (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 * Callees:
 *     CmpLockHiveListShared @ 0x1408405B8 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x140840614 (CmpUnlockHiveList.c)
 *     CmpReferenceHive @ 0x140840940 (CmpReferenceHive.c)
 */

__int64 CmpGetLastHive()
{
  __int64 v0; // rbx
  __int64 *i; // r8
  __int64 v2; // rcx
  __int64 v3; // r8

  v0 = 0LL;
  CmpLockHiveListShared();
  for ( i = (__int64 *)qword_140FD9D18; i != &CmpHiveListHead; i = *(__int64 **)(v3 + 8) )
  {
    if ( CmpReferenceHive((__int64)(i - 201)) )
    {
      v0 = v2;
      break;
    }
  }
  CmpUnlockHiveList();
  return v0;
}
