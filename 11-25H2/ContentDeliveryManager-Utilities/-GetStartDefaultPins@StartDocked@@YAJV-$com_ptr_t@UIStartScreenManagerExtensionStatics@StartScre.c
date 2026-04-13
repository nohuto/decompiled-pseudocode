/*
 * XREFs of ?GetStartDefaultPins@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@PEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z @ 0x1800ACE00
 * Callers:
 *     ?ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800AC4BC (-ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFra.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033D30 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18006A850 (-reset@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$CreateExternalObjectVector@UIInspectable@@V?$AgileVector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@$0A@@Internal@Collections@Foundation@Windows@@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@$0A@@1234@@Z @ 0x1800AA780 (--$CreateExternalObjectVector@UIInspectable@@V-$AgileVector@PEAUIInspectable@@U-$DefaultEquality.c)
 *     ??$wait_for_completion@PEAU?$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation@Windows@@V?$ComPtr@U?$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@U?$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800AB71C (--$wait_for_completion@PEAU-$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foun.c)
 *     ?end@?$vector_range@U?$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA?AVvector_iterator@12@XZ @ 0x1800AF900 (-end@-$vector_range@U-$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall StartDocked::GetStartDefaultPins(__int64 *a1, _QWORD *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // r8d
  __int64 v8; // rcx
  unsigned int v9; // r8d
  int v10; // eax
  __int64 v11; // rbx
  int i; // eax
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64 *); // rdi
  int v15; // eax
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+28h] [rbp-40h]
  unsigned int v24; // [rsp+30h] [rbp-38h]
  __int64 v25; // [rsp+38h] [rbp-30h] BYREF
  char v26[8]; // [rsp+40h] [rbp-28h] BYREF
  int v27; // [rsp+48h] [rbp-20h]
  __int64 v28[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  __int64 v30; // [rsp+A8h] [rbp+40h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp+48h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+50h] BYREF

  *a2 = 0LL;
  v31 = 0LL;
  v4 = (__int64 *)*a1;
  v5 = *v4;
  v31 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v5 + 72))(v4, &v31);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBF,
      (__int64)"ShellCommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v6,
      v22);
  wil::wait_for_completion<Windows::Foundation::Collections::IVectorView<WindowsUdk::UI::StartScreen::TileId *> *,Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<WindowsUdk::UI::StartScreen::TileId *>>>(
    &v22,
    v31,
    v7);
  v32 = 0LL;
  v10 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<IInspectable,Windows::Foundation::Collections::Internal::AgileVector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0>>(
          v8,
          &v32,
          v9);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"ShellCommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v10,
      v22);
  v30 = v22;
  v23 = v22;
  v24 = 0;
  v25 = 0LL;
  wil::vector_range<Windows::Foundation::Collections::IVectorView<WindowsUdk::UI::StartScreen::TileId *>,wil::err_exception_policy>::end(
    &v30,
    v26);
  v11 = v32;
  for ( i = v24; i != v27; i = ++v24 )
  {
    v13 = v23;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    v15 = v14(v13, v24, &v25);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C60,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v15,
        v22);
    v30 = 0LL;
    v16 = v25;
    v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 64LL);
    wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset(&v30);
    v18 = v17(v16, &v30);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC7,
        (__int64)"ShellCommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
        (const char *)(unsigned int)v18,
        v22);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 104LL))(v11, v30);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v30);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v28);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 64LL))(v11, a2);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"ShellCommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v19,
      v22);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v32);
  v20 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v31);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(a1);
  return 0LL;
}
