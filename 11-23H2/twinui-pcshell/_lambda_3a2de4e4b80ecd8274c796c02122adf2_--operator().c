/*
 * XREFs of _lambda_3a2de4e4b80ecd8274c796c02122adf2_::operator() @ 0x18054AA2C
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___::RunTask @ 0x18054ABC0 (CMultitaskingViewTaskCallback__lambda_3a2de4e4b80ecd8274c796c02122adf2___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3a2de4e4b80ecd8274c796c02122adf2_::operator()(_QWORD *a1, __int64 a2)
{
  int (__fastcall *v4)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v5)(__int64, __int64, GUID *, __int64 *); // rbx
  int v6; // eax
  int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v4 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  if ( v4(a2, 8LL, &GUID_0cbeff0b_7751_4b77_8907_debf5cc3df7a, &v10) >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10);
LABEL_6:
    v7 = 0;
    goto LABEL_7;
  }
  v5 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  v6 = v5(a2, 8LL, &GUID_0cbeff0b_7751_4b77_8907_debf5cc3df7a, &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, *a1);
    if ( v7 >= 0 )
      goto LABEL_6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewservice.cpp",
      (const char *)(unsigned int)v6);
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return (unsigned int)v7;
}
