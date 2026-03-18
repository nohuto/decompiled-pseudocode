/*
 * XREFs of CmpPartialPromoteSubkeys @ 0x1407E3D00
 * Callers:
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407E3EFC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpHashCompressedComponent @ 0x140843510 (CmpHashCompressedComponent.c)
 *     CmpStartKcbStack @ 0x14086DDF0 (CmpStartKcbStack.c)
 *     CmpHashUnicodeComponent @ 0x1408733F0 (CmpHashUnicodeComponent.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140914330 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x1409148B0 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140915178 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140916888 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x140916A64 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140916CB8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackInitialize @ 0x140916F34 (CmpKeyEnumStackInitialize.c)
 *     CmpCleanupKcbStack @ 0x1409172A0 (CmpCleanupKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140918910 (CmpGetKcbAtLayerHeight.c)
 *     CmpFindKcbInHashEntryByName @ 0x140950A10 (CmpFindKcbInHashEntryByName.c)
 *     CmpPopulateKcbStack @ 0x1409884F0 (CmpPopulateKcbStack.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140AA463C (CmpFindKcbInHashEntryByCompressedName.c)
 */

__int64 __fastcall CmpPartialPromoteSubkeys(__int64 a1)
{
  __int64 KcbAtLayerHeight; // rdi
  __int64 v3; // rdx
  int started; // ebx
  unsigned __int16 v5; // r9
  __int64 v6; // r10
  __int64 i; // rdx
  __int64 EntryAtLayerHeight; // rax
  __int64 v9; // rax
  bool v10; // zf
  int v11; // r14d
  unsigned int v12; // ebx
  int v13; // eax
  __int64 KcbInHashEntryByName; // rax
  int v15; // eax
  int v16; // eax
  __int128 v18; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v19[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v21[344]; // [rsp+68h] [rbp-98h] BYREF

  memset_0(v20, 0, 0x160uLL);
  v18 = 0LL;
  CmpKeyEnumStackInitialize(v20);
  memset(v19, 0, sizeof(v19));
  WORD1(v19[0]) = -1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  started = CmpStartKcbStack(v19, v3);
  if ( started >= 0 )
  {
    started = CmpKeyEnumStackStartFromKcbStack(v20, a1, 0LL, 0LL);
    if ( started >= 0 )
    {
      while ( 1 )
      {
        started = CmpKeyEnumStackAdvance(v20);
        if ( started < 0 )
          break;
        v5 = *(_WORD *)(KcbAtLayerHeight + 66);
        v6 = 0LL;
        for ( i = v5; (i & 0x8000u) == 0LL; LOWORD(i) = i - 1 )
        {
          EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v21, i);
          if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
          {
            v6 = EntryAtLayerHeight;
            break;
          }
        }
        if ( (_WORD)i != v5 )
        {
          v9 = *(_QWORD *)(v6 + 16);
          v10 = (*(_BYTE *)(v9 + 2) & 0x20) == 0;
          v11 = v9 + 76;
          v12 = *(unsigned __int16 *)(v9 + 72);
          *((_QWORD *)&v18 + 1) = v9 + 76;
          LOWORD(v18) = v12;
          WORD1(v18) = v12;
          if ( v10 )
          {
            v15 = CmpHashUnicodeComponent(&v18);
            KcbInHashEntryByName = CmpFindKcbInHashEntryByName(
                                     *(_QWORD *)(KcbAtLayerHeight + 32),
                                     (unsigned int)(v15 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16)),
                                     KcbAtLayerHeight,
                                     &v18);
          }
          else
          {
            v13 = CmpHashCompressedComponent(v9 + 76, v12);
            KcbInHashEntryByName = CmpFindKcbInHashEntryByCompressedName(
                                     *(_QWORD *)(KcbAtLayerHeight + 32),
                                     v13 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                                     KcbAtLayerHeight,
                                     v11,
                                     v12);
          }
          if ( KcbInHashEntryByName )
          {
            CmpPopulateKcbStack(v19, KcbInHashEntryByName);
            v16 = CmpPromoteSingleKeyFromKcbStacks(a1, v19, 0LL);
          }
          else
          {
            v16 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(a1, v21, 0LL);
          }
          started = v16;
          if ( v16 < 0 )
            goto LABEL_20;
          CmpKeyEnumStackNotifyPromotion(v20);
        }
      }
      if ( started == -2147483622 )
        started = 0;
    }
  }
LABEL_20:
  CmpCleanupKcbStack(v19);
  CmpKeyEnumStackCleanup(v20);
  return (unsigned int)started;
}
