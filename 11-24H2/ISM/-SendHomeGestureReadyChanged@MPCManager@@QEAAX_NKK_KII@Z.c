/*
 * XREFs of ?SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z @ 0x1800B8540
 * Callers:
 *     _lambda_152589ecad8ae636cc0bdcee60e887b4_::operator() @ 0x1800BF620 (_lambda_152589ecad8ae636cc0bdcee60e887b4_--operator().c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18004DF08 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MPCManager_SendHomeGestureReadyChanged_@ISMTracing@@QEAAX_NKK_KII@Z @ 0x1800B6DC0 (-MPCManager_SendHomeGestureReadyChanged_@ISMTracing@@QEAAX_NKK_KII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCManager::SendHomeGestureReadyChanged(
        MPCManager *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // ebp
  unsigned int v10; // r14d
  char v11; // si
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  ISMTracing *v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v8 = a7;
  v10 = a6;
  v11 = a2;
  v12 = a5;
  v13 = **((_QWORD **)this + 9);
  v20 = v13;
  while ( !*(_BYTE *)(v13 + 25) )
  {
    LOBYTE(a2) = v11;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, unsigned __int64, unsigned int, unsigned int))(**(_QWORD **)(v13 + 40) + 72LL))(
            *(_QWORD *)(v13 + 40),
            a2,
            a4,
            a3,
            v12,
            v10,
            v8);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v14);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      &v20,
      v15,
      v16,
      v17);
    v13 = v20;
  }
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCManager_SendHomeGestureReadyChanged_(v18, v11, a4, a3, v12, v10, v8);
  }
}
