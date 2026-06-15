/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x1800AD110
 * Callers:
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x1801639A2 (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x180163A6E (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x180163B7C (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x180163BCF (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$2 @ 0x180165A86 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$2.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$3 @ 0x180165AC2 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$3.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$4 @ 0x180165AFE (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$8 @ 0x180165C2D (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$8.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$9 @ 0x180165C69 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$9.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$10 @ 0x180165CA5 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$10.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$11 @ 0x180165CE1 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$11.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18004FB30 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct std::exception *a2,
        unsigned __int16 *a3)
{
  __int64 v5; // rax

  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(wil::details *))(*(_QWORD *)this + 8LL))(this);
    StringCchPrintfW((unsigned __int16 *)a2, (__int64)a3, L"std::exception: %hs", v5);
  }
}
