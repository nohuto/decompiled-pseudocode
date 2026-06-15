/*
 * XREFs of _GetRecordFromWnf_::_1_::catch$0 @ 0x180172281
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetRecordFromWnf_::_1_::catch_0(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x92,
                           (int)"OneCoreUap\\Internal\\AVCore\\inc\\ApplicationSpatialInformationWnf.h",
                           a4);
  return 0LL;
}
