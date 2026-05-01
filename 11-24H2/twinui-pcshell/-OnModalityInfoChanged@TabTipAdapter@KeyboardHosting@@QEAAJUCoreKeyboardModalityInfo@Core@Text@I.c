/*
 * XREFs of ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x18007E618
 * Callers:
 *     wistd::__function::__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_const_(&)[32])_::operator() @ 0x18007E3B0 (wistd--__function--__func__lambda_a51e24e15fdf40f4d1fd81dbe1cb4918__void___cdecl(unsigned_char_c.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetModalityString@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z @ 0x1801D94D4 (-GetModalityString@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802C1080 (-ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x18047F9D8 (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(__int64 a1, unsigned __int32 *a2)
{
  unsigned __int32 v4; // r14d
  char v5; // al
  int Focus; // ebx
  __int64 v7; // rdx
  _QWORD *ModalityString; // rax
  HSTRING v10; // rbx
  int v11; // eax
  __int64 *v12; // r9
  __int64 v13; // rax
  int v14; // [rsp+20h] [rbp-49h] BYREF
  _QWORD *v15; // [rsp+28h] [rbp-41h] BYREF
  __int64 v16; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int32 v17; // [rsp+38h] [rbp-31h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-29h] BYREF
  HSTRING v19; // [rsp+58h] [rbp-11h]
  _BYTE v20[24]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v21; // [rsp+78h] [rbp+Fh]
  _BYTE v22[32]; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = *a2;
  if ( *a2 )
  {
    v5 = *(_BYTE *)(a1 + 500);
    *(_BYTE *)(a1 + 500) = 1;
    if ( !v5 )
    {
      Focus = KeyboardHosting::TabTipAdapter::ActivateInputAppOnFirstFocus((KeyboardHosting::TabTipAdapter *)a1);
      if ( Focus < 0 )
      {
        v7 = 3122LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)Focus);
        return (unsigned int)Focus;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 504) != v4 )
  {
    ModalityString = (_QWORD *)KeyboardHosting::TabTipAdapter::GetModalityString(a1, v22, v4);
    if ( ModalityString[3] > 7uLL )
      ModalityString = (_QWORD *)*ModalityString;
    v15 = ModalityString;
    v10 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v20, &v15) + 24);
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"LastInputModality", 0x12u, 0x11u);
    v11 = KeyboardHosting::TabTipAdapter::SetShellPreference((KeyboardHosting::TabTipAdapter *)a1, v19, v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC37,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v11);
    v19 = 0LL;
    v21 = 0LL;
    std::wstring::_Tidy_deallocate(v22);
    _InterlockedExchange((volatile __int32 *)(a1 + 504), v4);
  }
  if ( !*(_QWORD *)(a1 + 120) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC3C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)0x80070490LL);
  v12 = *(__int64 **)(a1 + 120);
  if ( v12 )
  {
    v14 = 0;
    v13 = *v12;
    v16 = *(_QWORD *)a2;
    v17 = a2[2];
    Focus = (*(__int64 (__fastcall **)(__int64 *, __int64 *, int *))(v13 + 208))(v12, &v16, &v14);
    if ( Focus < 0 )
    {
      v7 = 3136LL;
      goto LABEL_5;
    }
    if ( v14 == 2 )
    {
      Focus = KeyboardHosting::TabTipAdapter::ProcessChangeRequest(a1, 2LL, *(unsigned int *)(a1 + 496));
      if ( Focus < 0 )
      {
        v7 = 3140LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
