/*
 * XREFs of CmpFullPromoteHiveRootFromKcbStack @ 0x1407D4340
 * Callers:
 *     CmpPromoteKey @ 0x140972D04 (CmpPromoteKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140885FAC (CmpRebuildKcbCacheFromNode.c)
 *     CmpGetKcbAtLayerHeight @ 0x140889590 (CmpGetKcbAtLayerHeight.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409737C4 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140974020 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpInitializeKeyNodeStack @ 0x140975708 (CmpInitializeKeyNodeStack.c)
 *     CmpCleanupKeyNodeStack @ 0x140975960 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1409759C0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
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
