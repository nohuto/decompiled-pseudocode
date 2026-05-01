/*
 * XREFs of ?DisplaySettingsChange@TabletModePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801F3790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?IsOurMonitor@TabletModePositioner@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18051BD28 (-IsOurMonitor@TabletModePositioner@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x18051BFF4 (-LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::DisplaySettingsChange(
        __int64 a1,
        struct IImmersiveMonitor *a2,
        unsigned int a3)
{
  TabletModePositioner *v7; // r12
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  int v18; // eax
  __int64 *v19; // [rsp+30h] [rbp-40h] BYREF
  int v20; // [rsp+38h] [rbp-38h] BYREF
  __int128 v21; // [rsp+40h] [rbp-30h] BYREF
  __int128 v22; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  if ( *(_DWORD *)(a1 + 80) != 1 )
    return 2147947423LL;
  if ( *(_DWORD *)(a1 + 84) != 1 )
    return 0LL;
  v7 = (TabletModePositioner *)(a1 - 152);
  if ( !TabletModePositioner::IsOurMonitor((TabletModePositioner *)(a1 - 152), a2) )
    return 0LL;
  if ( (a3 & 0x38) != 0 )
  {
    v19 = 0LL;
    v8 = *(_QWORD *)(a1 + 296);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
    v10 = v9(v8, 2LL, (__int64 *)&v19);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1247LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
      return v11;
    }
    v20 = 0;
    v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v20);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1250LL;
      goto LABEL_10;
    }
    if ( v20 )
    {
      v22 = 0LL;
      v13 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v22);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4E7,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v13);
      v14 = *v19;
      v21 = v22;
      v15 = (*(__int64 (__fastcall **)(__int64 *, struct IImmersiveMonitor *, __int128 *, __int64))(v14 + 56))(
              v19,
              a2,
              &v21,
              1LL);
      v16 = retaddr;
      if ( v15 >= 0 )
        goto LABEL_20;
      v17 = 1256LL;
    }
    else
    {
      if ( (a3 & 0x20) == 0 )
        goto LABEL_20;
      v15 = (*(__int64 (__fastcall **)(__int64 *, struct IImmersiveMonitor *))(*v19 + 64))(v19, a2);
      v16 = retaddr;
      if ( v15 >= 0 )
        goto LABEL_20;
      v17 = 1261LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v16,
      (void *)v17,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v15);
LABEL_20:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v19);
  }
  if ( (a3 & 0x10) != 0 )
  {
    v18 = TabletModePositioner::LayoutEnvironmentChanged(v7);
    if ( v18 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73A,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v18);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 160) + 48LL))(*(_QWORD *)(a1 + 160), a3);
  return 0LL;
}
