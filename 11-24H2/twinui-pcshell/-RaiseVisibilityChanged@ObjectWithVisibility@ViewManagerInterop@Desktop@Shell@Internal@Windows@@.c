/*
 * XREFs of ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x18009C7D4
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18009C27C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800601B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChange.c)
 *     ??0VisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@QEAA@E@Z @ 0x18009D778 (--0VisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@QEAA@E@Z.c)
 *     ??$QueueTask@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_de7a847248f7e9ff51c83bca1460305a_@@@Z @ 0x18009D944 (--$QueueTask@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::RaiseVisibilityChanged(
        Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *this,
        unsigned __int8 a2)
{
  Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs *v4; // rax
  __int64 v5; // rbx
  volatile int *v6; // rdx
  signed __int64 v7; // rax
  unsigned __int64 v8; // rcx
  signed __int64 v9; // rtt
  int v10; // esi
  int v12[2]; // [rsp+20h] [rbp-28h] BYREF
  Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *v13; // [rsp+28h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs *)operator new(
                                                                                              0x48uLL,
                                                                                              (const struct std::nothrow_t *)&std::nothrow);
  if ( v4
    && (v5 = Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs::VisibilityChangedEventArgs(
               v4,
               a2)) != 0 )
  {
    if ( this )
      (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)this + 8LL))(this);
    *(_QWORD *)v12 = this;
    v13 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    v14 = v5;
    v7 = *(_QWORD *)(v5 + 56);
    while ( 1 )
    {
      v8 = (unsigned __int64)v7 >> 63;
      if ( v7 < 0 )
        break;
      if ( (_DWORD)v7 != 0x7FFFFFFF )
      {
        v8 = v7 + 1;
        v9 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 56), v7 + 1, v7);
        if ( v9 != v7 )
          continue;
      }
      goto LABEL_9;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), v6);
LABEL_9:
    v10 = ((__int64 (__fastcall *)(unsigned __int64, volatile int *, _QWORD, int *))Windows::Internal::ComTaskPool::QueueTask<_lambda_de7a847248f7e9ff51c83bca1460305a_>)(
            v8,
            v6,
            *((unsigned int *)this + 10),
            v12);
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(v14);
    if ( v13 )
      (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
        (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)this + 16LL))(this);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(v5);
    return (unsigned int)v10;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (int)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
