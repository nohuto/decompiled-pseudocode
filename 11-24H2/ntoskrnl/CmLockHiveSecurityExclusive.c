/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x1408803CC
 * Callers:
 *     CmpCreateTombstone @ 0x140668414 (CmpCreateTombstone.c)
 *     CmpAssignKeySecurity @ 0x1407DC9C0 (CmpAssignKeySecurity.c)
 *     CmpFreeKeyByCell @ 0x140880420 (CmpFreeKeyByCell.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1408808E4 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140915C74 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A2E074 (CmpUndoDeleteKeyForTrans.c)
 *     CmpCreateHiveRootCell @ 0x140AA6F78 (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 1784);
  result = (__int64)KeAbPreAcquire(a1 + 1784, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    *(_BYTE *)(v3 + 10) = 1;
  return result;
}
