/*
 * XREFs of ?GetWindowStateIdForSnapInfo@HotkeyHandler@@AEAAIPEAUHWND__@@UIntendedHotKeySnapInfo@1@@Z @ 0x1805AE06C
 * Callers:
 *     ?HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1805AF050 (-HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_R.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ @ 0x1805AD4A4 (--1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ.c)
 *     ?GetWindowStateIdForAction@HotkeyHandler@@AEAAIW4SnapAction@1@UtagRECT@@PEAUIImmersiveMonitor@@_N@Z @ 0x1805ADF54 (-GetWindowStateIdForAction@HotkeyHandler@@AEAAIW4SnapAction@1@UtagRECT@@PEAUIImmersiveMonitor@@_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HotkeyHandler::GetWindowStateIdForSnapInfo(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rbx
  unsigned int WindowStateIdForAction; // ebx
  int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  RECT v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h]
  RECT rc1; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v17 = a3;
  v5 = *(_DWORD *)(a3 + 24);
  if ( !v5 )
    goto LABEL_11;
  v14 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  v8 = v7(v6, a2, &v14);
  if ( v8 >= 0 )
  {
    v9 = *(_QWORD *)a3;
    v15 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) )
    {
      rc1 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v14 + 128LL))(v14, &rc1);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4A6,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
        goto LABEL_10;
      }
      if ( EqualRect(&rc1, (const RECT *)(a3 + 32)) )
      {
        WindowStateIdForAction = 15028;
      }
      else
      {
        v16 = rc1;
        WindowStateIdForAction = HotkeyHandler::GetWindowStateIdForAction(
                                   v13,
                                   v5,
                                   &v16.left,
                                   *(SnapRectHelpers **)(a3 + 48),
                                   *(_DWORD *)(a3 + 28) != 0);
      }
    }
    else
    {
      WindowStateIdForAction = 15024;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    goto LABEL_12;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x49B,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
    (const char *)(unsigned int)v8);
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
LABEL_11:
  WindowStateIdForAction = 15031;
LABEL_12:
  HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)a3);
  return WindowStateIdForAction;
}
