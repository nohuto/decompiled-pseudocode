/*
 * XREFs of CmEqualTrans @ 0x140879280
 * Callers:
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmpIsKeyDeleted @ 0x14086E210 (CmpIsKeyDeleted.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140872560 (CmpWalkOneLevel.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408768A0 (CmpGetSymbolicLinkTarget.c)
 *     CmpQueryKeyDataFromCache @ 0x1408785C0 (CmpQueryKeyDataFromCache.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 *     CmGetVisibleSubkeyCount @ 0x14087B9C0 (CmGetVisibleSubkeyCount.c)
 *     CmpQueryKeyDataFromNode @ 0x14087CFA0 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x14087D660 (CmpFindSubKeyByNumberEx.c)
 *     CmGetKeyLastWriteTime @ 0x14087E6E0 (CmGetKeyLastWriteTime.c)
 *     CmpLockIXLockIntent @ 0x140A2E5B4 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140A2E6B8 (CmpLockIXLockExclusive.c)
 *     CmGetKeyFlags @ 0x140A8A4F8 (CmGetKeyFlags.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BB9480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0 (CmpPerformKeyBodyDeletionCheck.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1406FB46C (CmpTransUowIsEqual.c)
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
