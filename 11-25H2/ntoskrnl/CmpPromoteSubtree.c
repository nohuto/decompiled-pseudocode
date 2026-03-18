/*
 * XREFs of CmpPromoteSubtree @ 0x14097360C
 * Callers:
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x1407D1C8C (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x1407D1CDC (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407D461C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140973184 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140973594 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409737C4 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSubtreeEnumeratorStart @ 0x140973EA8 (CmpSubtreeEnumeratorStart.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14097470C (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140974C9C (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140975494 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpInitializeKeyNodeStack @ 0x140975708 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1409759C0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
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
