/*
 * XREFs of std::_Func_impl_no_alloc__lambda_294070f2d01ea5c5503dcfbd23d118bd__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Do_call @ 0x1805079E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleasingSecondaryView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAKAEAJ333@Z @ 0x1804F6C70 (--$ReleasingSecondaryView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositio.c)
 */

const struct _tlgProvider_t *__fastcall std::_Func_impl_no_alloc__lambda_294070f2d01ea5c5503dcfbd23d118bd__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Do_call(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        __int128 *a6)
{
  int v6; // ecx
  __int128 v8; // [rsp+40h] [rbp-10h] BYREF
  __int64 v9; // [rsp+68h] [rbp+18h] BYREF
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF

  v8 = *a6;
  v6 = *a5;
  a5 = (int *)*a4;
  v9 = *a3;
  v10 = *a2;
  LODWORD(a6) = v6;
  return GamingPosturePositionerTelemetryProvider::ReleasingSecondaryView<HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,long &,long &,long &,long &>(
           &v10,
           &v9,
           (__int64 *)&a5,
           (__int64)&a6,
           (__int64)&v8,
           (__int64)&v8 + 4,
           (unsigned int *)&v8 + 2);
}
