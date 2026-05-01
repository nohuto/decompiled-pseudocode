/*
 * XREFs of ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800704E8
 * Callers:
 *     ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800C8710 (-UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18023C540 (-ShouldHandleActivation@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180325F34 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 *     ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180327290 (-ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?IsForcedFullScreenCompatModeEnabled@FullScreenPositionerHelpers@@YA_NXZ @ 0x1800707D4 (-IsForcedFullScreenCompatModeEnabled@FullScreenPositionerHelpers@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(
        int (__fastcall ***this)(FullScreenPositionerHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  int (__fastcall *v3)(FullScreenPositionerHelpers *, GUID *, __int64 *); // rbx
  __int64 *v4; // rax
  FullScreenPositionerHelpers *v5; // rcx
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, __int64 *); // rdi
  bool v8; // bl
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v3 = **this;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v13);
  v8 = v3((FullScreenPositionerHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v4) >= 0
    && (v6 = v13,
        v7 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL),
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12),
        v7(v6, &v12) >= 0)
    && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 328LL))(v12, 4LL)
    || FullScreenPositionerHelpers::IsForcedFullScreenCompatModeEnabled(v5);
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}
