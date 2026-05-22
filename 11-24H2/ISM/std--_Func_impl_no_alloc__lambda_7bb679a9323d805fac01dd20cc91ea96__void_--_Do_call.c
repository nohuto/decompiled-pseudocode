/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x1800BBB40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z @ 0x1800BABB8 (-MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z.c)
 *     ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800BF028 (-UpdateState@MPCCursorManager@@QEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  int v3; // eax
  MPCCursorManager *v4; // rcx
  bool v5; // al
  ISMTracing *v6; // rcx
  bool v7; // [rsp+30h] [rbp+8h] BYREF
  bool v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v1 + 3664);
  *(_DWORD *)(v1 + 3664) = v2;
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)v2) & 1) != 0 )
  {
    v4 = *(MPCCursorManager **)(v1 + 3384);
    if ( v4 )
      MPCCursorManager::UpdateState(v4);
  }
  v5 = (*(_DWORD *)(v1 + 3664) & 2) != 0;
  v8 = *(_DWORD *)(v1 + 3664) & 1;
  v7 = v5;
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_InputDisableFlagsChanged_(v6, &v8, &v7);
  }
}
