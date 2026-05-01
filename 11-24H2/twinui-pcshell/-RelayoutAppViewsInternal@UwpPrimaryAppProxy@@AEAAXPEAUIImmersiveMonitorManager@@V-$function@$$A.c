/*
 * XREFs of ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804F2D58
 * Callers:
 *     ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804F1F10 (-HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 *     ?RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804F2CA0 (-RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A6AXPEAUI.c)
 *     ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804F2FD0 (-RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??R_lambda_ff89e8324bd576a9030e3d114281d889_@@QEBA@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1804F1064 (--R_lambda_ff89e8324bd576a9030e3d114281d889_@@QEBA@AEBV-$com_ptr_t@UIApplicationView@@Uerr_excep.c)
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1804F1C18 (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UwpPrimaryAppProxy::RelayoutAppViewsInternal(__int64 a1, __int64 *a2, __int64 *a3)
{
  _QWORD **v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  void *v12[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v14[5]; // [rsp+40h] [rbp-30h] BYREF

  v14[4] = a3;
  UwpPrimaryAppProxy::GetSortedConnectedMonitors(a1, (__int64)v12, a2);
  v5 = (_QWORD **)v12[0];
  v13 = *(_QWORD *)v12[0];
  v6 = *(_QWORD **)(a1 + 48);
  v14[0] = &v13;
  v14[1] = (__int64 *)v12;
  v14[2] = a3;
  v7 = *(_QWORD **)(a1 + 56);
  if ( v6 != v7 )
  {
    do
      _lambda_ff89e8324bd576a9030e3d114281d889_::operator()(v14, v6++);
    while ( v6 != v7 );
    v5 = (_QWORD **)v12[0];
  }
  *v5[1] = 0LL;
  v8 = *v5;
  if ( *v5 )
  {
    do
    {
      v9 = (_QWORD *)*v8;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8 + 2);
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x18);
      v8 = v9;
    }
    while ( v9 );
  }
  std::_Deallocate<16,0>(v12[0], (const struct std::nothrow_t *)0x18);
  v11 = (__int64 *)a3[7];
  if ( v11 )
  {
    LOBYTE(v10) = v11 != a3;
    (*(void (__fastcall **)(__int64 *, __int64))(*v11 + 32))(v11, v10);
    a3[7] = 0LL;
  }
}
