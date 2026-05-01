/*
 * XREFs of std::_Func_impl_no_alloc__lambda_9249ec5e7a8926b856fbc109702d9353__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_unsigned_long_unsigned_long_::_Do_call @ 0x180507DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakingViewPrimary@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJAEAKAEAK@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAKAEAJ33322@Z @ 0x1804F5EB0 (--$MakingViewPrimary@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJAEAKAEAK@GamingPosturePosi.c)
 */

__int64 *__fastcall std::_Func_impl_no_alloc__lambda_9249ec5e7a8926b856fbc109702d9353__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_unsigned_long_unsigned_long_::_Do_call(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        __int128 *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  __int64 v9; // rbx
  int v11; // r8d
  __int64 *result; // rax
  __int128 v13; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+10h] BYREF
  __int64 v15; // [rsp+78h] [rbp+18h] BYREF

  v15 = *a2;
  v9 = v15;
  v13 = *a6;
  LODWORD(a6) = *a8;
  LODWORD(a8) = *a7;
  v11 = *a5;
  a5 = (int *)*a4;
  v14 = *a3;
  LODWORD(a7) = v11;
  GamingPosturePositionerTelemetryProvider::MakingViewPrimary<HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,long &,long &,long &,long &,unsigned long &,unsigned long &>(
    &v15,
    &v14,
    (__int64 *)&a5,
    (__int64)&a7,
    (__int64)&v13,
    (__int64)&v13 + 4,
    (__int64)&v13 + 8,
    (__int64)&v13 + 12,
    (unsigned int *)&a8);
  result = *(__int64 **)(a1 + 8);
  *result = v9;
  return result;
}
