/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7c3c4e67715d49f836fa4955fab08a4a__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call @ 0x180507D10
 * Callers:
 *     <none>
 * Callees:
 *     ??$EvaluatingPositionChangePolicyForView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKPEBGAEBJAEBJAEBJAEBJAEBH@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAPEBG1AEAK$$QEAPEBGAEBJ444AEBH@Z @ 0x1804F4DC4 (--$EvaluatingPositionChangePolicyForView@AEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKPEBGAEBJAEBJAEBJAEBJAE.c)
 *     _anonymous_namespace_::TrackedWindowStateToString @ 0x180507118 (_anonymous_namespace_--TrackedWindowStateToString.c)
 */

const struct _tlgProvider_t *__fastcall std::_Func_impl_no_alloc__lambda_7c3c4e67715d49f836fa4955fab08a4a__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Do_call(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5)
{
  int v5; // ecx
  int v6; // r10d
  __int64 v7; // r11
  const wchar_t *v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v5 = *(_DWORD *)(a1 + 8);
  v6 = *a5;
  v10 = *a4;
  v11 = *a3;
  v12 = *a2;
  LODWORD(a5) = v6;
  v9 = anonymous_namespace_::TrackedWindowStateToString(v5);
  return GamingPosturePositionerTelemetryProvider::EvaluatingPositionChangePolicyForView<HWND__ * &,unsigned short const * &,unsigned short const * &,unsigned long &,unsigned short const *,long const &,long const &,long const &,long const &,int const &>(
           &v12,
           &v11,
           &v10,
           (int *)&a5,
           (__int64 *)&v9,
           v7 + 12,
           v7 + 16,
           v7 + 20,
           (unsigned int *)(v7 + 24));
}
