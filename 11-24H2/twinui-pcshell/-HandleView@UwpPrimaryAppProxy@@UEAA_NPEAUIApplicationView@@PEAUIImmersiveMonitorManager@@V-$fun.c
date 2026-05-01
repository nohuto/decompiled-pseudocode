/*
 * XREFs of ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804F1F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??0?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z @ 0x18036A180 (--0-$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUIApplicationView@@@Z @ 0x1804F0C70 (--$_Emplace_back_with_unused_capacity@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicat.c)
 *     ??$_Emplace_reallocate@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEAPEAUIApplicationView@@@Z @ 0x1804F0CA0 (--$_Emplace_reallocate@AEAPEAUIApplicationView@@@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_e.c)
 *     ?FindAppView@UwpPrimaryAppProxy@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1804F1944 (-FindAppView@UwpPrimaryAppProxy@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types.c)
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804F2D58 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall UwpPrimaryAppProxy::HandleView(RTL_SRWLOCK *a1, struct IUnknown *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 *Ptr; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-50h] BYREF
  struct IUnknown **v18; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v19[64]; // [rsp+30h] [rbp-40h] BYREF
  struct IUnknown *v20; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+48h]

  v21 = a4;
  if ( (*((unsigned __int8 (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 1))(a1) )
  {
    v20 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1,
      &v20);
    if ( v20 )
    {
      v17 = -1LL;
      v9 = -1LL;
      if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))v20->lpVtbl[2].QueryInterface)(v20, &v17) >= 0 )
        v9 = v17;
    }
    else
    {
      v9 = -1LL;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
    if ( v9 != -1 )
    {
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v17, a1 + 5);
      if ( a1[6].Ptr == a1[7].Ptr )
      {
        a1[9].Ptr = (PVOID)v9;
LABEL_9:
        v20 = a2;
        UwpPrimaryAppProxy::FindAppView((__int64)a1, &v18, a2);
        Ptr = (__int64 *)a1[7].Ptr;
        if ( v18 == (struct IUnknown **)Ptr )
        {
          v11 = (__int64)&a1[6];
          if ( Ptr == a1[8].Ptr )
            std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Emplace_reallocate<IApplicationView * &>(
              v11,
              Ptr,
              (__int64 *)&v20);
          else
            std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Emplace_back_with_unused_capacity<IApplicationView * &>(
              v11,
              (__int64 *)&v20);
          v14 = std::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>(
                  (__int64)v19,
                  a4);
          UwpPrimaryAppProxy::RelayoutAppViewsInternal(a1, a3, v14);
        }
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v17);
        v16 = *(_QWORD *)(a4 + 56);
        if ( v16 )
        {
          LOBYTE(v15) = v16 != a4;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v15);
          *(_QWORD *)(a4 + 56) = 0LL;
        }
        return 1;
      }
      if ( a1[9].Ptr == (PVOID)v9 )
        goto LABEL_9;
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v17);
    }
  }
  v12 = *(_QWORD *)(a4 + 56);
  if ( v12 )
  {
    LOBYTE(v8) = v12 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v8);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return 0;
}
