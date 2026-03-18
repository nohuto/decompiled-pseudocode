/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x14088709C
 * Callers:
 *     CmpCreateTombstone @ 0x14065C944 (CmpCreateTombstone.c)
 *     CmpAssignKeySecurity @ 0x1407CD200 (CmpAssignKeySecurity.c)
 *     CmpFreeKeyByCell @ 0x140886C64 (CmpFreeKeyByCell.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14097497C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140977BB4 (CmpUndoDeleteKeyForTrans.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140A31CF8 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCreateHiveRootCell @ 0x140AA21DC (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 *result; // rax
  __int64 *v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 1784);
  result = KeAbPreAcquire(a1 + 1784, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
