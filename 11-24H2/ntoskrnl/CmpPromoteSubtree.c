/*
 * XREFs of CmpPromoteSubtree @ 0x140914928
 * Callers:
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x1407E156C (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x1407E15BC (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407E3EFC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140914330 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x1409148B0 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140914AE0 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSubtreeEnumeratorStart @ 0x140915340 (CmpSubtreeEnumeratorStart.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140915A04 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140915F94 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14091678C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpInitializeKeyNodeStack @ 0x140916A00 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140916CB8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpPromoteSubtree(__int64 a1, __int16 *a2)
{
  unsigned __int16 v4; // si
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r15
  int v12; // eax
  __int16 v14; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v15[14]; // [rsp+22h] [rbp-47h] BYREF
  _BYTE v16[80]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v17; // [rsp+80h] [rbp+17h]

  memset_0(v15, 0, 0x66uLL);
  v14 = -2;
  CmpInitializeKeyNodeStack(v16);
  if ( a1 )
  {
    v4 = *(_WORD *)(a1 + 2);
    v5 = CmpSubtreeEnumeratorStart(&v14, v4);
    if ( v5 >= 0 )
    {
      CmpSubtreeEnumeratorBeginForKcbStack((__int64)&v14, a1);
LABEL_4:
      while ( 1 )
      {
        v6 = CmpSubtreeEnumeratorAdvance(&v14);
        v5 = v6;
        if ( v6 == -2147483622 )
          break;
        if ( v6 < 0 )
          goto LABEL_11;
        v7 = *(_QWORD *)(408LL * v14 + v17 + 16);
        v8 = *(_QWORD *)(408LL * v14 + v17 - 392);
        v11 = *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(v7, v4) + 16);
        if ( v10 )
        {
          v12 = CmpPromoteSingleKeyFromKcbStacks(v9, v10, 1);
        }
        else if ( v9 )
        {
          v12 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(v9, v7, 1);
        }
        else
        {
          v5 = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v8, v7);
          if ( v5 < 0 )
            goto LABEL_11;
          v12 = CmpFullPromoteSingleKeyFromKeyNodeStacks(v8, v7);
        }
        v5 = v12;
        if ( v12 < 0 )
          goto LABEL_11;
        if ( !v11 )
          CmpKeyEnumStackNotifyPromotion((unsigned __int16 *)(v17 + 56 + 408LL * (v14 - 1)));
      }
      v5 = 0;
    }
  }
  else
  {
    v4 = *a2;
    v5 = CmpSubtreeEnumeratorStart(&v14, (unsigned __int16)*a2);
    if ( v5 >= 0 )
    {
      CmpSubtreeEnumeratorBeginForKeyNodeStack((__int64)&v14, a2);
      goto LABEL_4;
    }
  }
LABEL_11:
  CmpSubtreeEnumeratorCleanup(&v14);
  return (unsigned int)v5;
}
