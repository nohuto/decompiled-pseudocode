/*
 * XREFs of _lambda_69e22cee808f699981016b3fdf3a4c95_::operator() @ 0x1803C7F34
 * Callers:
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803CC8B4 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_69e22cee808f699981016b3fdf3a4c95_::operator()(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, SID *, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  HMONITOR v6; // rsi
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, HMONITOR, GUID *, GUID *, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF

  v14 = 0LL;
  v2 = *(_QWORD *)(*a1 + 376LL);
  v3 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  v4 = v3(v2, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v14);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = MonitorFromRect((LPCRECT)(*a1 + 392LL), 1u);
    v13 = 0LL;
    v7 = v14;
    v8 = *(__int64 (__fastcall **)(__int64, HMONITOR, GUID *, GUID *, __int64 *))(*(_QWORD *)v14 + 72LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
    v9 = v8(v7, v6, &GUID_88ed940d_d632_4b84_9529_a3110b5af527, &GUID_88ed940d_d632_4b84_9529_a3110b5af527, &v13);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 72LL))(v13, a1[1]);
      v5 = v9;
      if ( v9 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
        v5 = 0;
        goto LABEL_9;
      }
      v10 = 904LL;
    }
    else
    {
      v10 = 903LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x381,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v4);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  return v5;
}
