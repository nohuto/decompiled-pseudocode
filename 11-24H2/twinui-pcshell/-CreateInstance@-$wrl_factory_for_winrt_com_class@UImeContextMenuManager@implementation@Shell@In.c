/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180149E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??0?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x180149F90 (--0-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rbx
  char v6; // r9
  char v7; // r10
  char v8; // r11
  char v9; // di
  char v10; // si
  char v11; // r14
  char v12; // r15
  __int16 v13; // dx
  __int16 v14; // cx
  unsigned int v15; // ebx
  __int64 (__fastcall ***v17)(_QWORD, int *, _QWORD *); // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v18; // [rsp+28h] [rbp-50h]
  int v19; // [rsp+30h] [rbp-48h] BYREF
  __int16 v20; // [rsp+34h] [rbp-44h]
  __int16 v21; // [rsp+36h] [rbp-42h]
  char v22; // [rsp+38h] [rbp-40h]
  char v23; // [rsp+39h] [rbp-3Fh]
  char v24; // [rsp+3Ah] [rbp-3Eh]
  char v25; // [rsp+3Bh] [rbp-3Dh]
  char v26; // [rsp+3Ch] [rbp-3Ch]
  char v27; // [rsp+3Dh] [rbp-3Bh]
  char v28; // [rsp+3Eh] [rbp-3Ah]
  char v29; // [rsp+3Fh] [rbp-39h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v18 = a4;
  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    v5 = operator new(0x80uLL);
    memset_0(v5, 0, 0x80uLL);
    wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>(v5);
    *v5 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,std::tuple<IImeContextMenuExperienceManager>>'};
    v5[1] = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
    v5[2] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
    v5[3] = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
    v5[5] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>>::`vftable'{for `winrt::immersive_shell_component'};
    v17 = (__int64 (__fastcall ***)(_QWORD, int *, _QWORD *))((unsigned __int64)(v5 + 1) & -(__int64)(v5 != 0LL));
    v6 = *((_BYTE *)a3 + 8);
    v7 = *((_BYTE *)a3 + 9);
    v8 = *((_BYTE *)a3 + 10);
    LOBYTE(v5) = *((_BYTE *)a3 + 11);
    v9 = *((_BYTE *)a3 + 12);
    v10 = *((_BYTE *)a3 + 13);
    v11 = *((_BYTE *)a3 + 14);
    v12 = *((_BYTE *)a3 + 15);
    v13 = *((_WORD *)a3 + 3);
    v14 = *((_WORD *)a3 + 2);
    v19 = *a3;
    v20 = v14;
    v21 = v13;
    v22 = v6;
    v23 = v7;
    v24 = v8;
    v25 = (char)v5;
    v26 = v9;
    v27 = v10;
    v28 = v11;
    v29 = v12;
    v15 = (**v17)(v17, &v19, v18);
    if ( v17 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v17);
    return v15;
  }
}
