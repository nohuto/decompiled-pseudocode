/*
 * XREFs of CmpFullPromoteHiveRootFromKcbStack @ 0x1407E4170
 * Callers:
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14087FED4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140908550 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140908EB4 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14090A470 (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x14090A6C8 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetKcbAtLayerHeight @ 0x14090C380 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpFullPromoteHiveRootFromKcbStack(__int64 a1)
{
  ULONG_PTR KcbAtLayerHeight; // rdi
  int started; // ebx
  _BYTE v5[2]; // [rsp+20h] [rbp-68h] BYREF
  int v6; // [rsp+22h] [rbp-66h]
  __int16 v7; // [rsp+26h] [rbp-62h]

  v6 = 0;
  v7 = 0;
  memset_0(v5, 0, 0x4AuLL);
  CmpInitializeKeyNodeStack(v5);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  started = CmpStartKeyNodeStackFromKcbStack(v5, a1, 0LL);
  if ( started >= 0 )
  {
    started = CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, v5);
    if ( started >= 0 )
    {
      CmpKeyNodeStackGetEntryAtLayerHeight(v5, *(unsigned __int16 *)(a1 + 2));
      ++*(_QWORD *)(KcbAtLayerHeight + 304);
      CmpRebuildKcbCacheFromNode(KcbAtLayerHeight);
      started = 0;
    }
  }
  CmpCleanupKeyNodeStack(v5);
  return (unsigned int)started;
}
