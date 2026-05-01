/*
 * XREFs of std::_Func_impl_no_alloc__lambda_9b3f8c876ddd452bac31993927a76fa4__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call @ 0x180507EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InterceptedFullScreenRequestForView@_NAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAK@GamingPosturePositionerTelemetryProvider@@SAX$$QEA_NAEAPEAUHWND__@@AEAPEBG2AEAK@Z @ 0x1804F591C (--$InterceptedFullScreenRequestForView@_NAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAK@GamingPosturePosition.c)
 */

const struct _tlgProvider_t *__fastcall std::_Func_impl_no_alloc__lambda_9b3f8c876ddd452bac31993927a76fa4__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5)
{
  int *v5; // rax
  int v6; // ecx
  __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = a5;
  LOBYTE(a5) = 0;
  v6 = *v5;
  v10 = *a4;
  v11 = *a3;
  v8[0] = *a2;
  v9 = v6;
  return GamingPosturePositionerTelemetryProvider::InterceptedFullScreenRequestForView<bool,HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &>(
           &a5,
           v8,
           &v11,
           &v10,
           &v9);
}
