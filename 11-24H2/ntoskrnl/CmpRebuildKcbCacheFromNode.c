/*
 * XREFs of CmpRebuildKcbCacheFromNode @ 0x14087FED4
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x140666D04 (CmpCreateTombstone.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407E4170 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407E444C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpRebuildKcbCache @ 0x14087F358 (CmpRebuildKcbCache.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140907DA0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140415340 (CmpFindSecurityCellCacheIndex.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmpCleanUpSubKeyInfo @ 0x140880020 (CmpCleanUpSubKeyInfo.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1408807B0 (CmpCleanUpKcbCachedSymlink.c)
 *     CmLockHiveSecurityShared @ 0x140BBB96C (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140BBB9C8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpRebuildKcbCacheFromNode(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  char v5; // al
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v14; // rdi
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  v5 = *(_BYTE *)(a2 + 13) & 3;
  LOBYTE(a2) = 1;
  *(_BYTE *)(BugCheckParameter3 + 65) = v5;
  CmpCleanUpSubKeyInfo(BugCheckParameter3, a2);
  v9 = *(_DWORD *)(BugCheckParameter3 + 184);
  if ( (v9 & 0x400000) == 0 )
  {
    if ( a4 )
    {
      CmpCleanUpKcbCachedSymlink(BugCheckParameter3, a3);
      v9 = *(_DWORD *)(BugCheckParameter3 + 184);
    }
    v10 = *(_DWORD *)(v4 + 40);
    *(_DWORD *)(BugCheckParameter3 + 96) = *(_DWORD *)(v4 + 36);
    *(_DWORD *)(BugCheckParameter3 + 100) = v10;
  }
  *(_QWORD *)(BugCheckParameter3 + 168) = *(_QWORD *)(v4 + 4);
  *(_WORD *)(BugCheckParameter3 + 176) = *(_WORD *)(v4 + 52);
  *(_WORD *)(BugCheckParameter3 + 178) = *(_WORD *)(v4 + 60);
  *(_DWORD *)(BugCheckParameter3 + 180) = *(_DWORD *)(v4 + 64);
  v11 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)*(_WORD *)(v4 + 54)) & 0xF;
  *(_DWORD *)(BugCheckParameter3 + 184) = v11;
  *(_DWORD *)(BugCheckParameter3 + 184) = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)*(_WORD *)(v4 + 54)) & 0xF0;
  *(_BYTE *)(BugCheckParameter3 + 185) = *(_BYTE *)(v4 + 55);
  result = *(unsigned __int16 *)(v4 + 2);
  *(_WORD *)(BugCheckParameter3 + 186) = result;
  BugCheckParameter4 = *(unsigned int *)(v4 + 44);
  if ( (_DWORD)BugCheckParameter4 == -1 )
  {
    *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(BugCheckParameter3 + 32);
    v15 = 0;
    CmLockHiveSecurityShared(v14);
    if ( !CmpFindSecurityCellCacheIndex(v14, BugCheckParameter4, &v15) )
    {
      *(_QWORD *)(BugCheckParameter3 + 88) = 0LL;
      KeBugCheckEx(0x51u, 4uLL, 1uLL, BugCheckParameter3, BugCheckParameter4);
    }
    *(_QWORD *)(BugCheckParameter3 + 88) = *(_QWORD *)(*(_QWORD *)(v14 + 1888) + 16LL * v15 + 8);
    return CmUnlockHiveSecurity(v14);
  }
  return result;
}
