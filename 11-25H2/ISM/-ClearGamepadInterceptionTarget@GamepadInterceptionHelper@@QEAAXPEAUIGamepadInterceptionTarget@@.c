/*
 * XREFs of ?ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@@Z @ 0x180105EDC
 * Callers:
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180087DA0 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 *     ?OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x1801316C0 (-OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180105E44 (--4-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1?$com_ptr_t@VBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801061E8 (--1-$com_ptr_t@VBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ?erase@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180106800 (-erase@-$vector@V-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GamepadInterceptionHelper::ClearGamepadInterceptionTarget(
        GamepadInterceptionHelper *this,
        struct IGamepadInterceptionTarget *a2)
{
  __int64 **v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // r12d
  _QWORD *v7; // r15
  _QWORD *i; // r14
  __int64 *j; // r8
  struct IGamepadInterceptionTarget *v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+58h] [rbp+10h] BYREF

  v4 = (__int64 **)((char *)this + 24);
  if ( a2 == *((struct IGamepadInterceptionTarget **)this + 2) )
  {
    v5 = 0LL;
    v10 = 0LL;
    if ( *((_QWORD *)this + 3) != *((_QWORD *)this + 4) )
    {
      Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>::operator=((__int64 *)&v10, *v4);
      std::vector<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::erase(v4, &v11, *v4);
      v5 = (__int64)v10;
    }
    Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>::operator=((__int64 *)this + 2, (__int64 *)&v10);
    if ( v5 )
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    else
      v6 = 0;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
    v7 = (_QWORD *)*((_QWORD *)this + 7);
    for ( i = (_QWORD *)*((_QWORD *)this + 6); i != v7; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, v6);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v10 = a2;
  wil::com_ptr_t<BamoImpl::BamoHapticDeviceManagerPrincipalImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoHapticDeviceManagerPrincipalImpl,wil::err_returncode_policy>(&v10);
  for ( j = *v4; j != v4[1] && (struct IGamepadInterceptionTarget *)*j != a2; ++j )
    ;
  if ( j != v4[1] )
    std::vector<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::erase(v4, &v10, j);
  if ( a2 )
    (*(void (__fastcall **)(struct IGamepadInterceptionTarget *))(*(_QWORD *)a2 + 16LL))(a2);
}
