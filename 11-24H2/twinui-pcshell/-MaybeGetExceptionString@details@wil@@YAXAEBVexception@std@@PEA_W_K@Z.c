/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEA_W_K@Z @ 0x180457FE4
 * Callers:
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$2 @ 0x1806DB704 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$2.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$6 @ 0x1806DB818 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$6.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$7 @ 0x1806DB84E (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$7.c)
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0_0 @ 0x1806EC0F3 (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0_0.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1801CF650 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(wil::details *this, wchar_t *a2, wchar_t *a3)
{
  __int64 v5; // rax

  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(wil::details *))(*(_QWORD *)this + 8LL))(this);
    StringCchPrintfW(a2, (size_t)a3, (wchar_t *)L"std::exception: %hs", v5);
  }
}
