/*
 * XREFs of ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180068230
 * Callers:
 *     ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800680D0 (-OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800C0430 (-OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801BC690 (-OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801BEED0 (-OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068824 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006885C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009259C (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180095BE4 (-RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?MPCEyeGazeProcessor_DeviceDetached_@ISMTracing@@QEAAXK@Z @ 0x1800C5AF8 (-MPCEyeGazeProcessor_DeviceDetached_@ISMTracing@@QEAAXK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCInputProviderBase::OnDeviceRemoval(MPCInputProviderBase *this, struct DeviceInfo *a2)
{
  unsigned __int64 v2; // rsi
  const char *v4; // r9
  MPCGestureHandlerManager *Instance; // rbx
  MPCHolographicInputManager *v6; // rax
  unsigned int *v7; // rbx
  ISMTracing *v8; // rcx
  struct MPCHolographicInputManager *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned __int64)this + 24;
  if ( *(_DWORD *)a2 != (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 3) + 88LL))((char *)this + 24) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xFB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      v4);
  Instance = MPCGestureHandlerManager::GetInstance();
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
    &v12,
    v2 & -(__int64)(this != 0LL));
  MPCGestureHandlerManager::DetachProvider(Instance);
  v6 = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::RemoveInputProvider(v6, (struct IMPCInputProviderBase *)(v2 & -(__int64)(this != 0LL)));
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 112LL))(v2) == 8 )
  {
    v7 = (unsigned int *)*((_QWORD *)this + 6);
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::MPCEyeGazeProcessor_DeviceDetached_(v8, *v7);
    }
    if ( *((_QWORD *)MPCHolographicInputManager::GetInstance() + 419) == (v2 & -(__int64)(this != 0LL)) )
    {
      v9 = MPCHolographicInputManager::GetInstance();
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v9 + 419);
    }
  }
  return 0LL;
}
