/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180622D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?as@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x1801FFD44 (-as@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-AUhresult@2@AEBUguid@2@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??0?$heap_implements@V?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18062146C (--0-$heap_implements@V-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@Q.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall wil::wrl_factory_for_winrt_com_class<CopilotHotkeyManager>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  void *v6; // rbx
  CopilotHotkeyManager *v7; // rax
  __int64 v8; // r12
  char v9; // r8
  char v10; // r10
  char v11; // r11
  char v12; // di
  char v13; // si
  char v14; // r14
  char v15; // r15
  __int16 v16; // dx
  __int16 v17; // cx
  unsigned int v18; // ebx
  int v19; // [rsp+20h] [rbp-58h] BYREF
  __int64 v20; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v21; // [rsp+30h] [rbp-48h]
  int v22; // [rsp+38h] [rbp-40h] BYREF
  __int16 v23; // [rsp+3Ch] [rbp-3Ch]
  __int16 v24; // [rsp+3Eh] [rbp-3Ah]
  char v25; // [rsp+40h] [rbp-38h]
  char v26; // [rsp+41h] [rbp-37h]
  char v27; // [rsp+42h] [rbp-36h]
  char v28; // [rsp+43h] [rbp-35h]
  char v29; // [rsp+44h] [rbp-34h]
  char v30; // [rsp+45h] [rbp-33h]
  char v31; // [rsp+46h] [rbp-32h]
  char v32; // [rsp+47h] [rbp-31h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v21 = a4;
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
    v6 = operator new(0x288uLL);
    memset_0(v6, 0, 0x288uLL);
    v7 = winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>((CopilotHotkeyManager *)v6);
    v8 = ((unsigned __int64)v7 + 16) & -(__int64)(v7 != 0LL);
    v20 = v8;
    v9 = *((_BYTE *)a3 + 8);
    v10 = *((_BYTE *)a3 + 9);
    v11 = *((_BYTE *)a3 + 10);
    LOBYTE(v6) = *((_BYTE *)a3 + 11);
    v12 = *((_BYTE *)a3 + 12);
    v13 = *((_BYTE *)a3 + 13);
    v14 = *((_BYTE *)a3 + 14);
    v15 = *((_BYTE *)a3 + 15);
    v16 = *((_WORD *)a3 + 3);
    v17 = *((_WORD *)a3 + 2);
    v22 = *a3;
    v23 = v17;
    v24 = v16;
    v25 = v9;
    v26 = v10;
    v27 = v11;
    v28 = (char)v6;
    v29 = v12;
    v30 = v13;
    v31 = v14;
    v32 = v15;
    v18 = *winrt::com_ptr<IObjectWithSite>::as(&v20, &v19, (__int64)&v22, (__int64)v21);
    if ( v8 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v20);
    return v18;
  }
}
