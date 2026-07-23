/*
 * XREFs of _handle_error @ 0x1801282A0
 * Callers:
 *     atan @ 0x180121540 (atan.c)
 *     atan2 @ 0x1801217B0 (atan2.c)
 *     ceil @ 0x180122180 (ceil.c)
 *     cos @ 0x1801222A0 (cos.c)
 *     sin @ 0x180122630 (sin.c)
 *     floor @ 0x180122B50 (floor.c)
 *     log @ 0x180122D80 (log.c)
 *     sqrt @ 0x180124660 (sqrt.c)
 *     tan @ 0x180125230 (tan.c)
 *     _pow_special @ 0x180129770 (_pow_special.c)
 * Callees:
 *     _call_matherr @ 0x180128150 (_call_matherr.c)
 *     _exception_enabled @ 0x1801281D0 (_exception_enabled.c)
 *     _raise_exc @ 0x180128F00 (_raise_exc.c)
 *     _set_errno_from_matherr @ 0x180129230 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x1801295C0 (_ctrlfp.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

double __fastcall handle_error(
        char *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        double a7,
        double a8,
        int a9)
{
  BOOL v13; // eax
  double v14; // xmm6_8
  double v16; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v18[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+80h] [rbp-88h]
  __int128 v20; // [rsp+90h] [rbp-78h]
  __int128 v21; // [rsp+A0h] [rbp-68h]
  __int128 v22; // [rsp+B0h] [rbp-58h]

  v17 = ctrlfp(8064LL, 65472LL);
  v16 = *(double *)&a3;
  v13 = exception_enabled(a5, v17);
  v14 = a8;
  if ( !v13 )
  {
    memset(v18, 0, sizeof(v18));
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    if ( a9 == 2 )
    {
      *(double *)&v19 = a8;
      LODWORD(v20) = 3;
    }
    raise_exc((unsigned int)v18, (unsigned int)&v17, a5, a2, (__int64)&a7, (__int64)&v16);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, a7, v14, v16, v17);
  set_errno_from_matherr(a4);
  ctrlfp(v17, 65472LL);
  return v16;
}
