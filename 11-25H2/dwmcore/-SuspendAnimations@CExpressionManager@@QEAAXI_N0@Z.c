/*
 * XREFs of ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801FE8B4
 * Callers:
 *     ?OnSuspendAnimationsChanged@CChannelContext@@QEAAXXZ @ 0x1802302E0 (-OnSuspendAnimationsChanged@CChannelContext@@QEAAXXZ.c)
 * Callees:
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18003AAE0 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ @ 0x18003AFE0 (-IsAutoCompleteOnScreenOccluded@CKeyframeAnimation@@UEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x18003B000 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ??$emplace@AEAPEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@_N@1@AEAPEAVCBaseExpression@@@Z @ 0x180060E3C (--$emplace@AEAPEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 *     ??$_Emplace@AEBI@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@IPEAX@std@@_N@1@AEBI@Z @ 0x1801FEA84 (--$_Emplace@AEBI@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAA-A.c)
 *     ?ShrinkExpressionList@CExpressionManager@@CAXAEAV?$DynArray@PEAVCBaseExpression@@$00@@@Z @ 0x1801FEBA0 (-ShrinkExpressionList@CExpressionManager@@CAXAEAV-$DynArray@PEAVCBaseExpression@@$00@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpressionManager::SuspendAnimations(CExpressionManager *this, int a2, char a3, char a4)
{
  __int64 i; // rdi
  CKeyframeAnimation *v7; // rcx
  int v8; // eax
  __int64 (*v9)(void); // rax
  char IsAutoCompleteOnScreenOccluded; // al
  unsigned int v11; // esi
  __int64 v12; // rdi
  _QWORD *v13; // r14
  CKeyframeAnimation *v14; // rcx
  int v15; // eax
  CKeyframeAnimation *v16; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v18[24]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]
  int v20; // [rsp+88h] [rbp+38h] BYREF

  v20 = a2;
  if ( a3 )
  {
    if ( a4 )
    {
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Emplace<unsigned int const &>(
        (char *)this + 392,
        v17,
        &v20);
      return;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8 * *((unsigned int *)this + 39) + 46); i = (unsigned int)(i + 1) )
    {
      v7 = *(CKeyframeAnimation **)(*((_QWORD *)this + 4 * *((unsigned int *)this + 39) + 20) + 8 * i);
      v16 = v7;
      if ( v7 && *((_DWORD *)v7 + 46) == a2 )
      {
        v8 = DynArray<CBaseExpression *,1>::AddMultipleAndSet((__int64)this + 288, &v16);
        if ( v8 < 0 )
          ModuleFailFastForHRESULT(v8, retaddr);
        *(_QWORD *)(*((_QWORD *)this + 4 * *((unsigned int *)this + 39) + 20) + 8 * i) = 0LL;
        v9 = *(__int64 (**)(void))(*(_QWORD *)v16 + 240LL);
        if ( (char *)v9 == (char *)CKeyframeAnimation::IsAutoCompleteOnScreenOccluded )
          IsAutoCompleteOnScreenOccluded = CKeyframeAnimation::IsAutoCompleteOnScreenOccluded(v16);
        else
          IsAutoCompleteOnScreenOccluded = v9();
        if ( IsAutoCompleteOnScreenOccluded )
          CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(this, v16);
      }
    }
  }
  else
  {
    v11 = *((_DWORD *)this + 78);
    if ( v11 )
    {
      v12 = 0LL;
      v13 = (_QWORD *)((char *)this + 288);
      while ( (unsigned int)v12 < v11 )
      {
        v14 = *(CKeyframeAnimation **)(*v13 + 8 * v12);
        v16 = v14;
        if ( v14 && *((_DWORD *)v14 + 46) == a2 )
        {
          v15 = DynArray<CBaseExpression *,1>::AddMultipleAndSet(
                  (__int64)this + 32 * *((unsigned int *)this + 39) + 160,
                  &v16);
          if ( v15 < 0 )
            ModuleFailFastForHRESULT(v15, retaddr);
          *(_QWORD *)(*v13 + 8 * v12) = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)v16 + 240LL))(v16) )
          {
            v17[0] = v16;
            std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::emplace<CBaseExpression * &>(
              (_QWORD *)this + 65,
              (__int64)v18,
              v17);
          }
        }
        v12 = (unsigned int)(v12 + 1);
      }
      CExpressionManager::ShrinkExpressionList(v13);
    }
  }
  *((_BYTE *)this + 440) |= 8u;
}
