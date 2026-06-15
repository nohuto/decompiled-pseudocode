/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$2 @ 0x140095D41
 * Callers:
 *     <none>
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x140046918 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x14005DA10 (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_2(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = wil::details::RecognizeCaughtExceptionFromCallback(
         *(wil::details **)(a2 + 152),
         *(unsigned __int16 **)(a2 + 160));
  if ( v3 >= 0 )
    return 1LL;
  *(_DWORD *)(a2 + 72) = v3;
  *(_DWORD *)(a2 + 76) = wil::details::HrToNtStatus((wil::details *)(unsigned int)v3);
  *(_DWORD *)(a2 + 80) = 0;
  return 0LL;
}
