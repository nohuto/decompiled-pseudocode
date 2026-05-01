/*
 * XREFs of sub_180376FE7 @ 0x180376FE7
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_180376FE7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  _QWORD *v11; // rsi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64 (__fastcall *)(KeyboardHosting::TabTipAdapter *), __int64, _QWORD *); // rbx
  int v14; // ebx
  __int64 v15; // rdx

  v11 = (_QWORD *)(a9 + 112);
  if ( *(_QWORD *)(a9 + 112)
    || (v12 = *(_QWORD *)(a11 + 96),
        v13 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(KeyboardHosting::TabTipAdapter *), __int64, _QWORD *))(*(_QWORD *)v12 + 144LL),
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a9 + 112)),
        v14 = v13(v12, KeyboardHosting::TabTipAdapter::TimerRetryInitializingRemoteTabTipAdapter, a11, v11),
        v14 >= 0) )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 96LL))(*v11);
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v11 + 80LL))(*v11, 500000LL, 0LL);
      if ( v14 >= 0 )
        JUMPOUT(0x180166F73LL);
      v15 = 782LL;
    }
    else
    {
      v15 = 781LL;
    }
  }
  else
  {
    v15 = 778LL;
  }
  wil::details::in1diag3::Return_Hr(
    (wil::details::in1diag3 *)STACK[0x3E8],
    (void *)v15,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v14);
  if ( a10 )
    JUMPOUT(0x180376FABLL);
  JUMPOUT(0x180376FBALL);
}
