/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEAG_K@Z @ 0x18009C1C8
 * Callers:
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$0 @ 0x18009CC29 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$3 @ 0x18009CD23 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$3.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$0 @ 0x18009CEA6 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$6 @ 0x18009D029 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$6.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18009B334 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct wil::ResultException *a2,
        unsigned __int16 *a3)
{
  if ( a2 )
    wil::GetFailureLogString(a2, a3, (__int64)this + 16, (const struct wil::FailureInfo *)a3);
}
