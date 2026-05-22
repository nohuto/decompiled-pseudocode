/*
 * XREFs of ?OnInputProviderChanged@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18009A4B4
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180032E1C (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18004DF08 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCManager::OnInputProviderChanged(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  result = **(_QWORD **)(a1 + 72);
  v11 = result;
  while ( !*(_BYTE *)(result + 25) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(result + 40) + 32LL))(
           *(_QWORD *)(result + 40),
           a2,
           a3);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x124,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v6);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,unsigned long>>>,std::_Iterator_base0>::operator++(
      &v11,
      v7,
      v8,
      v9);
    result = v11;
  }
  return result;
}
