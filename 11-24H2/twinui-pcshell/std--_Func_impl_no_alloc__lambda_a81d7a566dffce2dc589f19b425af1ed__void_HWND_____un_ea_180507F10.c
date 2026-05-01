/*
 * XREFs of std::_Func_impl_no_alloc__lambda_a81d7a566dffce2dc589f19b425af1ed__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Do_call @ 0x180507F10
 * Callers:
 *     <none>
 * Callees:
 *     ??$LosingControlOfView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAKAEAJ333@Z @ 0x1804F59D8 (--$LosingControlOfView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositioner.c)
 */

__int64 *__fastcall std::_Func_impl_no_alloc__lambda_a81d7a566dffce2dc589f19b425af1ed__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_tagRECT_::_Do_call(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        __int128 *a6)
{
  __int64 v7; // rbx
  int v8; // r10d
  __int64 *result; // rax
  __int128 v10; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+10h] BYREF
  __int64 v12; // [rsp+68h] [rbp+18h] BYREF

  v12 = *a2;
  v7 = v12;
  v10 = *a6;
  v8 = *a5;
  a5 = (int *)*a4;
  v11 = *a3;
  LODWORD(a6) = v8;
  GamingPosturePositionerTelemetryProvider::LosingControlOfView<HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,long &,long &,long &,long &>(
    &v12,
    &v11,
    (__int64 *)&a5,
    (__int64)&a6,
    (__int64)&v10,
    (__int64)&v10 + 4,
    (unsigned int *)&v10 + 2);
  result = *(__int64 **)(a1 + 8);
  *result = v7;
  return result;
}
