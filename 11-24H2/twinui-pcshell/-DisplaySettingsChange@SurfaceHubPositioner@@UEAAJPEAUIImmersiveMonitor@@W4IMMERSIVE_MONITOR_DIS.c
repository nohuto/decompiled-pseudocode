/*
 * XREFs of ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180233090
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804EFE04 (-_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1804EFF58 (-_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, struct IImmersiveMonitor *, struct IImmersiveMonitor **); // rbx
  int v14; // eax
  __int64 v15; // rdx
  SurfaceHubPositioner *v16; // rsi
  struct IImmersiveMonitor *v17[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v19; // [rsp+60h] [rbp+20h] BYREF
  struct IImmersiveMonitor *v20; // [rsp+78h] [rbp+38h] BYREF

  if ( *(_BYTE *)(a1 + 456) )
  {
    if ( (a3 & 0x10) != 0 )
    {
      v5 = SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange((SurfaceHubPositioner *)(a1 - 120), a2);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C9,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v5);
        return v6;
      }
    }
    if ( (a3 & 0x28) != 0 )
    {
      v17[0] = 0LL;
      v8 = *(_QWORD *)(a1 + 40);
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v8 + 72LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v17);
      v10 = v9(v8, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v17);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 464LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_22;
      }
      v19 = 1;
      v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 40) + 32LL))(
              *(_QWORD *)(a1 + 40),
              &v19);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 466LL;
        goto LABEL_21;
      }
      if ( v19 <= 1 )
      {
        v16 = (SurfaceHubPositioner *)(a1 - 120);
      }
      else
      {
        v20 = 0LL;
        v12 = *(_QWORD *)(a1 + 40);
        v13 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, struct IImmersiveMonitor **))(*(_QWORD *)v12 + 104LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
        v14 = v13(v12, 1LL, v17[0], &v20);
        v6 = v14;
        if ( v14 < 0 )
        {
          v15 = 470LL;
LABEL_14:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)v14);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
LABEL_22:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v17);
          return v6;
        }
        v16 = (SurfaceHubPositioner *)(a1 - 120);
        v14 = SurfaceHubPositioner::_ReLayoutAllApps(v16, v20);
        v6 = v14;
        if ( v14 < 0 )
        {
          v15 = 471LL;
          goto LABEL_14;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      }
      v10 = SurfaceHubPositioner::_ReLayoutAllApps(v16, v17[0]);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 473LL;
        goto LABEL_21;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v17);
    }
  }
  return 0LL;
}
