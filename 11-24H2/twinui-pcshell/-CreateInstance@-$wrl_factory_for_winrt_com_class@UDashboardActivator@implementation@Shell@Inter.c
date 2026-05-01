/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A2E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1801916F4 (--0-$heap_implements@V-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@W.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  _OWORD *v6; // rax
  _QWORD *v7; // rax
  char v8; // r9
  char v9; // r10
  char v10; // r11
  char v11; // bl
  char v12; // di
  char v13; // si
  char v14; // r14
  char v15; // r15
  __int16 v16; // dx
  __int16 v17; // cx
  unsigned int v18; // ebx
  __int64 (__fastcall ***v19)(_QWORD, int *, _QWORD *); // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+30h] [rbp-48h] BYREF
  __int16 v22; // [rsp+34h] [rbp-44h]
  __int16 v23; // [rsp+36h] [rbp-42h]
  char v24; // [rsp+38h] [rbp-40h]
  char v25; // [rsp+39h] [rbp-3Fh]
  char v26; // [rsp+3Ah] [rbp-3Eh]
  char v27; // [rsp+3Bh] [rbp-3Dh]
  char v28; // [rsp+3Ch] [rbp-3Ch]
  char v29; // [rsp+3Dh] [rbp-3Bh]
  char v30; // [rsp+3Eh] [rbp-3Ah]
  char v31; // [rsp+3Fh] [rbp-39h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v20 = a4;
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
    v6 = operator new(0x20uLL);
    *v6 = 0LL;
    v6[1] = 0LL;
    v7 = winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>>(v6);
    v19 = (__int64 (__fastcall ***)(_QWORD, int *, _QWORD *))((unsigned __int64)(v7 + 1) & -(__int64)(v7 != 0LL));
    v8 = *((_BYTE *)a3 + 8);
    v9 = *((_BYTE *)a3 + 9);
    v10 = *((_BYTE *)a3 + 10);
    v11 = *((_BYTE *)a3 + 11);
    v12 = *((_BYTE *)a3 + 12);
    v13 = *((_BYTE *)a3 + 13);
    v14 = *((_BYTE *)a3 + 14);
    v15 = *((_BYTE *)a3 + 15);
    v16 = *((_WORD *)a3 + 3);
    v17 = *((_WORD *)a3 + 2);
    v21 = *a3;
    v22 = v17;
    v23 = v16;
    v24 = v8;
    v25 = v9;
    v26 = v10;
    v27 = v11;
    v28 = v12;
    v29 = v13;
    v30 = v14;
    v31 = v15;
    v18 = (**v19)(v19, &v21, v20);
    if ( v19 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v19);
    return v18;
  }
}
