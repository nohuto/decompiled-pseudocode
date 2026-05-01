/*
 * XREFs of ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x180248C80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIImmersiveShellCreationBehavior@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180098D40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIImm.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FromWinLogon@ImmersiveShellComponentsConfiguration@@SA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@winrt@@XZ @ 0x180212E58 (-FromWinLogon@ImmersiveShellComponentsConfiguration@@SA-AU-$com_ptr@UImmersiveShellComponentsCon.c)
 *     ??0ShellComponentFilter@@QEAA@XZ @ 0x1802C8F70 (--0ShellComponentFilter@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VShellComponentFilter@@U?$default_delete@VShellComponentFilter@@@std@@@std@@QEAA@XZ @ 0x1802CE7D0 (--1-$unique_ptr@VShellComponentFilter@@U-$default_delete@VShellComponentFilter@@@std@@@std@@QEAA.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??$MakeOrThrow@VCImmersiveShellCreationBehavior@@$$V@wil@@YA?AV?$ComPtr@VCImmersiveShellCreationBehavior@@@WRL@Microsoft@@XZ @ 0x1803DF5C0 (--$MakeOrThrow@VCImmersiveShellCreationBehavior@@$$V@wil@@YA-AV-$ComPtr@VCImmersiveShellCreation.c)
 *     ??R?$default_delete@VShellComponentFilter@@@std@@QEBAXPEAVShellComponentFilter@@@Z @ 0x1803EBB64 (--R-$default_delete@VShellComponentFilter@@@std@@QEBAXPEAVShellComponentFilter@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CImmersiveShellBuilder::CreateImmersiveShellController(
        CImmersiveShellBuilder *this,
        struct IImmersiveShellController **a2)
{
  ShellComponentFilter *v3; // rax
  ShellComponentFilter *v4; // rdx
  HRESULT v5; // eax
  __int64 *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  volatile int *v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  struct IImmersiveShellController *v12; // rax
  const char *v13; // r9
  __int64 result; // rax
  int ppv; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  ShellComponentFilter *v19; // [rsp+58h] [rbp+10h] BYREF
  LPVOID v20; // [rsp+60h] [rbp+18h] BYREF
  __int64 v21; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(v19) = 0;
  *a2 = 0LL;
  try
  {
    v19 = (ShellComponentFilter *)operator new(0x10uLL);
    v3 = ShellComponentFilter::ShellComponentFilter(v19);
    v19 = 0LL;
    v4 = shellComponentFilter;
    shellComponentFilter = v3;
    if ( v4 )
      std::default_delete<ShellComponentFilter>::operator()();
    std::unique_ptr<ShellComponentFilter>::~unique_ptr<ShellComponentFilter>(&v19);
    LODWORD(v19) = 5;
    v20 = 0LL;
    v5 = CoCreateInstance(
           &GUID_23650f94_13b8_4f39_b2c3_817e6564a756,
           0LL,
           1u,
           &GUID_d6948331_eaf5_4365_86ac_d8d1d03b4600,
           &v20);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C60,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)(unsigned int)v5,
        ppv);
    v6 = ImmersiveShellComponentsConfiguration::FromWinLogon(&v19);
    v7 = *v6;
    *v6 = 0LL;
    v16 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    if ( v19 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v19);
    if ( !v7 )
    {
      v8 = (_QWORD *)wil::MakeOrThrow<CImmersiveShellCreationBehavior,>(&v21);
      v7 = (*v8 + 32LL) & -(__int64)(*v8 != 0LL);
      *v8 = 0LL;
      v17 = 0LL;
      v16 = v7;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      v10 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IImmersiveShellCreationBehavior>::Release(
          v10,
          v9);
      }
    }
    v11 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v20 + 40LL))(v20, v7);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x45E,
        (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
        (const char *)(unsigned int)v11,
        ppv);
    v12 = (struct IImmersiveShellController *)v20;
    v20 = 0LL;
    *a2 = v12;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x462,
                           (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
                           v13);
  }
  return result;
}
