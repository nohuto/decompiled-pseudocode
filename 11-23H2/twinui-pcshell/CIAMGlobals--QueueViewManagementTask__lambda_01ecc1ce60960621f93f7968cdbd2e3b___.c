/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_01ecc1ce60960621f93f7968cdbd2e3b___ @ 0x180163910
 * Callers:
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18016387C (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3_____lambda_27b09a4b46f96ab93197e8da1c0bc3e3___ @ 0x180163A0C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_27b09a4b46f96.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_01ecc1ce60960621f93f7968cdbd2e3b___(
        volatile signed __int32 *a1,
        __int64 a2)
{
  PSRWLOCK v3; // rdi
  PVOID Ptr; // rcx
  unsigned int v5; // edi
  __int64 *v6; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rcx
  unsigned int v9; // edi
  PVOID v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-18h]
  volatile signed __int32 *v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = a1;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( !Ptr )
    return 2147943568LL;
  v11 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
  v12 = 0LL;
  if ( &v12 != (__int64 *)a2 )
  {
    v12 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v13 = *(_DWORD *)(a2 + 8);
  v5 = (unsigned int)v3[15].Ptr;
  v6 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_27b09a4b46f96ab93197e8da1c0bc3e3_____lambda_27b09a4b46f96ab93197e8da1c0bc3e3___(
                    &v14,
                    &v11);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v8);
  }
  v9 = SHTaskPoolQueueTask(3LL, 2LL, v5);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
  return v9;
}
