/*
 * XREFs of CmpGetLastHive @ 0x1409118B0
 * Callers:
 *     CmpDoFlushAll @ 0x14032401C (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 * Callees:
 *     CmpLockHiveListShared @ 0x140848578 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x1408485D4 (CmpUnlockHiveList.c)
 *     CmpReferenceHive @ 0x140848B50 (CmpReferenceHive.c)
 */

__int64 CmpGetLastHive()
{
  __int64 v0; // rbx
  __int64 *i; // r8
  __int64 v2; // rcx
  __int64 v3; // r8

  v0 = 0LL;
  CmpLockHiveListShared();
  for ( i = (__int64 *)qword_140FD8D38; i != &CmpHiveListHead; i = *(__int64 **)(v3 + 8) )
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
