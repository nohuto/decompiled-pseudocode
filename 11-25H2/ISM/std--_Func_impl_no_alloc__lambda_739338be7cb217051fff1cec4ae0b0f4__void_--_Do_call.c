/*
 * XREFs of std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x1800BDCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x18009943C (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800BCC34 (-MPCHolographicInputManager_DisplayContextChanged_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800C1208 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  MPCCursorManager *v3; // rcx
  ISMTracing *v4; // rcx
  bool v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(MPCCursorManager **)(v1 + 3384);
  *(_DWORD *)(v1 + 3648) = v2;
  if ( v3 )
    MPCCursorManager::UpdateState(v3);
  MPCHolographicInputManager::UpdateDoubleClickValues((MPCHolographicInputManager *)v1);
  v5 = *(_DWORD *)(v1 + 3648) == 1;
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_DisplayContextChanged_(v4, &v5);
  }
}
