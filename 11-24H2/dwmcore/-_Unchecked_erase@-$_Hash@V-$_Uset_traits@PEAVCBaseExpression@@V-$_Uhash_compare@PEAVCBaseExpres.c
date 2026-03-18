/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@PEAVCBaseExpression@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801B9D4C
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180013DC0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?RPEAVCInteractionTracker@@@?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@QEBA_KAEBQEAVCInteractionTracker@@@Z @ 0x1800E0CA8 (--$-RPEAVCInteractionTracker@@@-$_Uhash_compare@PEAVCInteractionTracker@@U-$hash@PEAVCInteractio.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18024F8D4 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVC.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Unchecked_erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v5; // r15
  _QWORD *v6; // r13
  _QWORD *v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r12
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // r14
  _QWORD *v18; // r15
  bool v19; // bl
  _QWORD *v20; // rax
  _QWORD *v21; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-50h]
  _QWORD *v23; // [rsp+30h] [rbp-48h]
  _QWORD *v25; // [rsp+88h] [rbp+10h]
  _QWORD *v26; // [rsp+90h] [rbp+18h]

  if ( a2 != a3 )
  {
    v5 = (_QWORD *)a2[1];
    v6 = (_QWORD *)a1[1];
    v7 = a2;
    v8 = a1[3];
    v21 = a1 + 1;
    v22 = v5;
    v9 = std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>::operator()<CInteractionTracker *>(
           (__int64)a1,
           (__int64)(a2 + 2));
    v11 = 2 * (*(_QWORD *)(v10 + 48) & v9);
    v25 = *(_QWORD **)(v8 + 16 * (*(_QWORD *)(v10 + 48) & v9));
    v26 = *(_QWORD **)(v8 + 16 * (*(_QWORD *)(v10 + 48) & v9) + 8);
    while ( 1 )
    {
      v12 = v7;
      v7 = (_QWORD *)*v7;
      v23 = v7;
      std::_Deallocate<16,0>(v12, 0x18uLL);
      --a1[2];
      if ( v12 == v26 )
        break;
      if ( v7 == a3 )
      {
        if ( v25 == a2 )
          *(_QWORD *)(v8 + 8 * v11) = v7;
        *v5 = v7;
        v7[1] = v5;
        return a3;
      }
    }
    if ( v25 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v11) = v6;
      v5 = v6;
    }
    *(_QWORD *)(v8 + 8 * v11 + 8) = v5;
    while ( v7 != a3 )
    {
      v15 = std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>::operator()<CInteractionTracker *>(
              v13,
              (__int64)(v7 + 2));
      v17 = 2 * (*(_QWORD *)(v16 + 48) & v15);
      v18 = *(_QWORD **)(v8 + 16 * (*(_QWORD *)(v16 + 48) & v15) + 8);
      while ( 1 )
      {
        v19 = v7 == v18;
        std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::_Range_eraser::_Bump_erased(&v21);
        v7 = v23;
        if ( v19 )
          break;
        if ( v23 == a3 )
        {
          *(_QWORD *)(v8 + 8 * v17) = v23;
          goto LABEL_17;
        }
      }
      *(_QWORD *)(v8 + 8 * v17) = v6;
      *(_QWORD *)(v8 + 8 * v17 + 8) = v6;
    }
LABEL_17:
    v20 = v22;
    *v22 = v7;
    v7[1] = v20;
  }
  return a3;
}
