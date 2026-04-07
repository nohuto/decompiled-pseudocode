/*
 * XREFs of ?CreateColorBrush@CSystemBackdropVisual@@AEAAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x180035048
 * Callers:
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z @ 0x180034D38 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSystemBackdropVisual::CreateColorBrush(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD); // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rax
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rcx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+20h] BYREF
  __int64 v21; // [rsp+50h] [rbp+30h] BYREF

  *a3 = 0LL;
  v20 = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 64LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  v7 = v6(v5, a2, &v20);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v7,
      savedregs);
    v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v20;
    if ( v20 )
    {
      v20 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v15)[2])(v15);
    }
    return v8;
  }
  v21 = 0LL;
  v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v20;
  v10 = **v20;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  v11 = v10(v9, &GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46, &v21);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v11,
      savedregs);
    v16 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v20;
    if ( v20 )
    {
      v20 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v17)[2])(v17);
    }
    return v8;
  }
  v12 = v21;
  v21 = 0LL;
  *a3 = v12;
  v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v20;
  if ( v20 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v13)[2])(v13);
  }
  return 0LL;
}
