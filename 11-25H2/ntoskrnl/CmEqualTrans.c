/*
 * XREFs of CmEqualTrans @ 0x140871010
 * Callers:
 *     CmpCheckKeyBodyAccess @ 0x1408559A0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140855F70 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     CmpLockIXLockIntent @ 0x140869074 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140869120 (CmpLockIXLockExclusive.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14086FF30 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140870ED0 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpIsKeyDeleted @ 0x140871220 (CmpIsKeyDeleted.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmpQueryKeyDataFromCache @ 0x14087C070 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x14087CC80 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x14087D350 (CmpFindSubKeyByNumberEx.c)
 *     CmGetKeyLastWriteTime @ 0x14087DAB0 (CmGetKeyLastWriteTime.c)
 *     CmpTransMgrFreeVolatileData @ 0x140885884 (CmpTransMgrFreeVolatileData.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 *     CmGetVisibleSubkeyCount @ 0x140A2A7C4 (CmGetVisibleSubkeyCount.c)
 *     CmGetKeyFlags @ 0x140A85B90 (CmGetKeyFlags.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1406EF5FC (CmpTransUowIsEqual.c)
 */

char __fastcall CmEqualTrans(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8

  if ( !a1 || !a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 && (v4 = *(_QWORD *)(a2 + 56)) != 0 )
    return v3 == v4;
  else
    return CmpTransUowIsEqual((const void *)(a1 + 88), (const void *)(a2 + 88));
}
