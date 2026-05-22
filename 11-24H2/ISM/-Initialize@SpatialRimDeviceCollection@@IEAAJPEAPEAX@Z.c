/*
 * XREFs of ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800D6AF8
 * Callers:
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x1800D5AE8 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 * Callees:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180049B68 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18004DF54 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x18004E698 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18004E71C (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x180090AE8 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ??$?0P8MPCHolographicInputManager@@EAAX_N@ZPEAV0@AEBU?$_Ph@$00@std@@@?$_Compressed_pair@P8MPCHolographicInputManager@@EAAX_N@ZV?$tuple@PEAVMPCHolographicInputManager@@U?$_Ph@$00@std@@@std@@$0A@@std@@QEAA@U_One_then_variadic_args_t@1@$$QEAP8MPCHolographicInputManager@@EAAX_N@Z$$QEAPEAV3@AEBU?$_Ph@$00@1@@Z @ 0x180095A64 (--$-0P8MPCHolographicInputManager@@EAAX_N@ZPEAV0@AEBU-$_Ph@$00@std@@@-$_Compressed_pair@P8MPCHol.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800D7430 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::Initialize(SpatialRimDeviceCollection *this, void **a2)
{
  DWORD CurrentThreadId; // eax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned int v8; // edi
  const char *v9; // r9
  __int64 result; // rax
  int v11; // eax
  unsigned int v12; // edi
  RTL_SRWLOCK *Instance; // rdi
  __int64 v14; // rdx
  __int64 v15; // [rsp+30h] [rbp-68h] BYREF
  char v16; // [rsp+38h] [rbp-60h]
  __int64 v17; // [rsp+40h] [rbp-58h]
  _QWORD v18[2]; // [rsp+48h] [rbp-50h] BYREF
  char v19; // [rsp+58h] [rbp-40h]
  __int64 v20; // [rsp+60h] [rbp-38h]
  _QWORD *v21; // [rsp+80h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  SpatialRimDeviceCollection *v23; // [rsp+A0h] [rbp+8h] BYREF
  void (__fastcall *v24)(SpatialRimDeviceCollection *__hidden, bool); // [rsp+B0h] [rbp+18h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)this + 710) = CurrentThreadId;
  try
  {
    _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
      (wil::details **)this + 372,
      0);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(struct SpatialRimDeviceCollection *, unsigned int, void *), SpatialRimDeviceCollection *))(**((_QWORD **)this + 345) + 272LL))(
           *((_QWORD *)this + 345),
           *((_QWORD *)this + 372),
           SpatialRimDeviceCollection::OnCallbackOnInputThreadStatic,
           this);
    v8 = v5;
    if ( v5 >= 0 )
    {
      v11 = HIDDeviceCollection::Initialize(this, v6, (struct _RIM_USAGE_ANDPAGE *const)&unk_18024FF84, v7, 0x1Du, a2);
      v12 = v11;
      if ( v11 >= 0 )
      {
        Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
        if ( MPC3DStateHelper::Is3DCompositorRunning(Instance) )
        {
          SpatialRimDeviceCollection::OnCompositorRunningStateChanged(this, 1);
        }
        else
        {
          v23 = this;
          v24 = SpatialRimDeviceCollection::OnCompositorRunningStateChanged;
          std::_Compressed_pair<void (MPCHolographicInputManager::*)(bool),std::tuple<MPCHolographicInputManager *,std::_Ph<1>>,0>::_Compressed_pair<void (MPCHolographicInputManager::*)(bool),std::tuple<MPCHolographicInputManager *,std::_Ph<1>>,0>(
            &v15,
            v14,
            &v24,
            (__int64)&v23);
          v18[0] = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (SpatialRimDeviceCollection::*)(bool),SpatialRimDeviceCollection *,std::_Ph<1> const &>,void,bool>::`vftable';
          v18[1] = v15;
          v19 = v16;
          v20 = v17;
          v21 = v18;
          MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(Instance, (__int64)v18, (_DWORD *)this + 725);
        }
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C2,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v11);
        result = v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BB,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v5);
      result = v8;
    }
  }
  catch ( ... )
  {
    LODWORD(v23) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1D2,
                     (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
                     v9);
    return (unsigned int)v23;
  }
  return result;
}
