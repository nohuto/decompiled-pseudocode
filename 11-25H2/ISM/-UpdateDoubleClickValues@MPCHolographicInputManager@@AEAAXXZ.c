/*
 * XREFs of ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x18009943C
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180035EC0 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x1800BDCC0 (std--_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_--_Do_call.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z @ 0x1800BD0E4 (-MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800BDDB8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCHolographicInputManager::UpdateDoubleClickValues(MPCHolographicInputManager *this)
{
  _QWORD *v2; // rcx
  char v3; // di
  UINT v4; // ebp
  UINT v5; // r14d
  const char *v6; // r9
  const char *v7; // r9
  ISMTracing *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF

  if ( IsEdition(10LL) )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 450);
    if ( v2 == *((_QWORD **)this + 451)
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 48LL))(*v2) == 2
      || (v3 = 1, *((_DWORD *)this + 912) != 1) )
    {
      v3 = 0;
    }
    if ( v3 != *((_BYTE *)this + 3672) )
    {
      if ( v3 )
        v4 = *((_DWORD *)this + 921);
      else
        v4 = *((_DWORD *)this + 919);
      v11 = v4;
      if ( v3 )
        v5 = *((_DWORD *)this + 922);
      else
        v5 = *((_DWORD *)this + 920);
      v10 = v5;
      if ( v3 )
      {
        *((_DWORD *)this + 919) = GetSystemMetrics(36);
        *((_DWORD *)this + 920) = GetSystemMetrics(37);
      }
      if ( !SystemParametersInfoW(0x1Du, v4, 0LL, 2u) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x5AB,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v6);
      if ( !SystemParametersInfoW(0x1Eu, v5, 0LL, 2u) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x5AC,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v7);
      *((_BYTE *)this + 3672) = v3;
      if ( ISMTracing::IsEnabled() )
      {
        ISMTracing::Instance();
        ISMTracing::MPCHolographicInputManager_UpdateDoubleClickValues_(v8, (const bool *)this + 3672, &v11, &v10);
      }
    }
  }
}
