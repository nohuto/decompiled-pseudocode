/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x14088427C
 * Callers:
 *     CmpCreateTombstone @ 0x140666D04 (CmpCreateTombstone.c)
 *     CmpAssignKeySecurity @ 0x1407DCF10 (CmpAssignKeySecurity.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140884794 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1409096E4 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A22AB4 (CmpUndoDeleteKeyForTrans.c)
 *     CmpCreateHiveRootCell @ 0x140AA2078 (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  char *result; // rax
  char *v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 1784);
  result = (char *)KeAbPreAcquire(a1 + 1784, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    v3[10] = 1;
  return result;
}
