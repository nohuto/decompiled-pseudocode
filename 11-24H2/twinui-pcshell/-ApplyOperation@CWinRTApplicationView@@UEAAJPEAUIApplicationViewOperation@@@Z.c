/*
 * XREFs of ?ApplyOperation@CWinRTApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x18014CC40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___ @ 0x18014CE7C (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_45f761d2d247477984b20.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWinRTApplicationView::ApplyOperation(
        CWinRTApplicationView *this,
        struct IApplicationViewOperation *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rdi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+30h] BYREF
  __int64 v17; // [rsp+58h] [rbp+38h] BYREF

  v16 = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___(&v16);
  v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
  if ( v16 )
  {
    v17 = 0LL;
    v5 = **v16;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    v6 = v5(v4, &GUID_9886efb0_afb3_4a35_b381_329935b32d5a, &v17);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationViewOperation *))(*(_QWORD *)v17 + 32LL))(
              v17,
              *((_QWORD *)this + 26),
              a2);
      v7 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x190,
          (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
          (const char *)(unsigned int)v11);
      v12 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
      if ( v16 )
      {
        v16 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v13)[2])(v13);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18F,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)v6);
      v8 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
      if ( v16 )
      {
        v16 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v9)[2])(v9);
      }
    }
  }
  else
  {
    v7 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18D,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL);
    v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
    if ( v16 )
    {
      v16 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v14)[2])(v14);
    }
  }
  return v7;
}
