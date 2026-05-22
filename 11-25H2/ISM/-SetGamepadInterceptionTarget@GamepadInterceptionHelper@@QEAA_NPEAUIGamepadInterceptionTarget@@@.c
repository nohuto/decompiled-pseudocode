/*
 * XREFs of ?SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@Z @ 0x180106320
 * Callers:
 *     ?OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x1801316C0 (-OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801050B0 (--$_Emplace_reallocate@AEBV-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@-$vector@V-$Co.c)
 *     ??1?$com_ptr_t@VBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801061E8 (--1-$com_ptr_t@VBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall GamepadInterceptionHelper::SetGamepadInterceptionTarget(
        GamepadInterceptionHelper *this,
        struct IGamepadInterceptionTarget *a2)
{
  struct IGamepadInterceptionTarget *v2; // rbx
  __int64 v4; // rcx
  __int64 *v5; // rbp
  __int64 *j; // r14
  __int64 v7; // rsi
  void (__fastcall *v8)(__int64, _QWORD); // rdi
  unsigned int v9; // eax
  const char *v11; // r9
  __int64 *v12; // rdx
  __int64 *i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IGamepadInterceptionTarget *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( *((_QWORD *)this + 2) )
  {
    v15 = a2;
    wil::com_ptr_t<BamoImpl::BamoHapticDeviceManagerPrincipalImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoHapticDeviceManagerPrincipalImpl,wil::err_returncode_policy>((__int64 *)&v15);
    v12 = (__int64 *)*((_QWORD *)this + 4);
    for ( i = (__int64 *)*((_QWORD *)this + 3); i != v12 && (struct IGamepadInterceptionTarget *)*i != v2; ++i )
      ;
    if ( i != v12 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x39,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\gamepadinterceptionhelper\\gamepadinterceptionhelper.cpp",
        v11);
    if ( v12 == *((__int64 **)this + 5) )
    {
      std::vector<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget> const &>(
        (__int64 *)this + 3,
        (__int64)v12,
        (__int64 *)&v15);
      v2 = v15;
    }
    else
    {
      *v12 = (__int64)v2;
      wil::com_ptr_t<BamoImpl::BamoHapticDeviceManagerPrincipalImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoHapticDeviceManagerPrincipalImpl,wil::err_returncode_policy>(v12);
      *((_QWORD *)this + 4) += 8LL;
    }
    if ( v2 )
      (*(void (__fastcall **)(struct IGamepadInterceptionTarget *))(*(_QWORD *)v2 + 16LL))(v2);
    return 0;
  }
  else
  {
    if ( a2 )
    {
      v15 = a2;
      wil::com_ptr_t<BamoImpl::BamoHapticDeviceManagerPrincipalImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoHapticDeviceManagerPrincipalImpl,wil::err_returncode_policy>((__int64 *)&v15);
      v4 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 2) = v2;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = (__int64 *)*((_QWORD *)this + 7);
    for ( j = (__int64 *)*((_QWORD *)this + 6); j != v5; ++j )
    {
      v7 = *j;
      v8 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*j + 24LL);
      v9 = (*(__int64 (__fastcall **)(struct IGamepadInterceptionTarget *))(*(_QWORD *)v2 + 24LL))(v2);
      v8(v7, v9);
    }
    return 1;
  }
}
