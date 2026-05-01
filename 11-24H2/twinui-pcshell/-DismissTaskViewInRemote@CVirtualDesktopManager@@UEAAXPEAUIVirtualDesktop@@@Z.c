/*
 * XREFs of ?DismissTaskViewInRemote@CVirtualDesktopManager@@UEAAXPEAUIVirtualDesktop@@@Z @ 0x180553610
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180019118 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18004C97C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x18004CBA0 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?GetCurrentDesktop@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1801B4040 (-GetCurrentDesktop@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1802BFE34 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandl_ea_1802BFE34.c)
 *     ?GetSwitcherType@CVirtualDesktopManager@@AEAA?AW4SwitcherType@VirtualDesktop@@XZ @ 0x1802C87F0 (-GetSwitcherType@CVirtualDesktopManager@@AEAA-AW4SwitcherType@VirtualDesktop@@XZ.c)
 *     MakeMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e___ @ 0x180550A34 (MakeMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CVirtualDesktopManager::DismissTaskViewInRemote(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2)
{
  int v3; // eax
  void (__fastcall ***v4)(_QWORD, GUID *, wil ***); // rcx
  void *v5; // rdx
  wil **v6; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h] BYREF
  __int64 v8[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  int v10; // [rsp+68h] [rbp+18h] BYREF
  struct IVirtualDesktop *v11; // [rsp+70h] [rbp+20h] BYREF
  wil *v12; // [rsp+78h] [rbp+28h] BYREF

  v11 = 0LL;
  if ( a2 )
  {
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
      (__int64 *)&v11,
      (__int64)a2);
  }
  else
  {
    v11 = 0LL;
    CVirtualDesktopManager::GetCurrentDesktop(this, &v11);
  }
  v8[0] = 0LL;
  v3 = (**(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v11)(
         v11,
         &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30,
         v8);
  if ( v3 >= 0 )
  {
    v10 = 0;
    if ( !(*(unsigned int (__fastcall **)(__int64, int *))(*(_QWORD *)v8[0] + 56LL))(v8[0], &v10)
      && v10
      && (unsigned int)CVirtualDesktopManager::GetSwitcherType((__int64)this - 8) == 1 )
    {
      v12 = 0LL;
      _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil__QEAAXW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
        &v12,
        0,
        0LL);
      v6 = &v12;
      v7 = 0LL;
      MakeMultitaskingViewTaskCallback__lambda_e646d3ab26e1953b7e25ed2742d58c2e_(&v7, &v6);
      v4 = (void (__fastcall ***)(_QWORD, GUID *, wil ***))*((_QWORD *)this + 33);
      v6 = 0LL;
      (**v4)(v4, &GUID_b8445672_ee65_4e59_b5ef_fd73ca6b61e2, &v6);
      if ( v6 )
        (*((void (__fastcall **)(wil **, __int64, _QWORD))*v6 + 3))(v6, v7, 0LL);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v6);
      wil::handle_wait(v12, (void *)0xFFFFFFFFLL);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
        &v12,
        v5);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x181,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v3);
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
}
