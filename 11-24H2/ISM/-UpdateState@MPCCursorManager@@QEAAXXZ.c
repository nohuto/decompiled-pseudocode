/*
 * XREFs of ?UpdateState@MPCCursorManager@@QEAAXXZ @ 0x1800BF028
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800BB174 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x1800BBAE0 (std--_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_::_Do_call @ 0x1800BBB40 (std--_Func_impl_no_alloc__lambda_7bb679a9323d805fac01dd20cc91ea96__void_--_Do_call.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800BEF0C (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 */

void __fastcall MPCCursorManager::UpdateState(MPCCursorManager *this)
{
  if ( *((_BYTE *)this + 64) )
  {
    *((_BYTE *)this + 56) = *((_DWORD *)MPCHolographicInputManager::GetInstance() + 912) == 1;
    MPCCursorManager::UpdateMouseBinding(this);
  }
}
