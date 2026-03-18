/*
 * XREFs of CmpGetLastHive @ 0x14092EBCC
 * Callers:
 *     CmpDoFlushAll @ 0x14024528C (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 * Callees:
 *     CmpLockHiveListShared @ 0x1408442F8 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x140844354 (CmpUnlockHiveList.c)
 *     CmpReferenceHive @ 0x140844680 (CmpReferenceHive.c)
 */

__int64 CmpGetLastHive()
{
  __int64 v0; // rbx
  __int64 *i; // r8
  __int64 v2; // rcx
  __int64 v3; // r8

  v0 = 0LL;
  CmpLockHiveListShared();
  for ( i = (__int64 *)qword_140FD8D08; i != &CmpHiveListHead; i = *(__int64 **)(v3 + 8) )
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
