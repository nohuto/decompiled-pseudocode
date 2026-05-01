/*
 * XREFs of ?CreateImageSource@AppViewIconFactory@@UEAAJUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIImageSource@Media@Xaml@UI@6@@Z @ 0x180062510
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180061950 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImmersiveWindowM.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x1802B225C (--$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall AppViewIconFactory::CreateImageSource(__int64 a1, __int64 a2, _QWORD *a3)
{
  HRESULT v6; // eax
  int v7; // edx
  unsigned int v8; // r8d
  int ActivationFactory; // eax
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, __int64 *); // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v17; // [rsp+20h] [rbp-88h]
  int v18; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+30h] [rbp-78h] BYREF
  __int64 v20; // [rsp+38h] [rbp-70h] BYREF
  __int64 v21; // [rsp+40h] [rbp-68h] BYREF
  int v22[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v23; // [rsp+50h] [rbp-58h] BYREF
  __int64 v24; // [rsp+58h] [rbp-50h] BYREF
  HSTRING_HEADER v25; // [rsp+60h] [rbp-48h] BYREF
  HSTRING v26; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  *a3 = 0LL;
  v20 = 0LL;
  v26 = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.UI.Xaml.Media.Imaging.WriteableBitmap", 0x2Du, &v25, &v26);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
  ActivationFactory = RoGetActivationFactory(v26, &GUID_5563ebb1_3ef2_42c5_9c6d_1cf5dcc041ff, &v20);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5B,
      (unsigned int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
      (const char *)(unsigned int)ActivationFactory,
      v17);
  v10 = MulDiv((int)*(float *)a2, *(_DWORD *)(a2 + 24), 96);
  v11 = (unsigned int)MulDiv((int)*(float *)(a2 + 4), *(_DWORD *)(a2 + 24), 96);
  v19 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v20 + 48LL);
  v19 = 0LL;
  v13 = v12(v20, v10, v11, &v19);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x60,
      (unsigned int)"pcshell\\private\\shell\\inc\\appviewdatasource\\AppViewIconFactory.h",
      (const char *)(unsigned int)v13,
      v17);
  *(_QWORD *)v22 = *(_QWORD *)(a1 + 40);
  v23 = v19;
  v24 = *(_QWORD *)(a1 + 32);
  wil::MakeAndInitializeOrThrow<AppViewIconLoader,Windows::Internal::ComposableShell::Multitasking::IconProperties &,IApplicationView *,Windows::UI::Xaml::Media::Imaging::IWriteableBitmap *,IApplicationViewIconLoader *>(
    (unsigned int)&v21,
    a2,
    (unsigned int)&v24,
    (unsigned int)&v23,
    (unsigned int)v22);
  v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v19)(
          v19,
          &GUID_737ef309_ea41_4d96_a71c_98e98efcab07,
          a3);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v14,
      v18);
  v15 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IImmersiveWindowMessageNotification>::Release(v15);
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return 0LL;
}
