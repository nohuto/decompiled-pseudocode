/*
 * XREFs of _handle_qnan1 @ 0x18012C740
 * Callers:
 *     fabs @ 0x180126300 (fabs.c)
 * Callees:
 *     _errno @ 0x18010FF90 (_errno.c)
 *     _umatherr @ 0x18012CB20 (_umatherr.c)
 *     _ctrlfp @ 0x18012CE70 (_ctrlfp.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall handle_qnan1(int a1, double a2, __int64 a3, int a4)
{
  __m128 result; // xmm0

  if ( matherr_flag )
  {
    *errno() = 33;
    ctrlfp(a3, 65472LL);
    return *(__m128 *)&a2;
  }
  else
  {
    umatherr(1, a1, a3, a4, *(__int64 *)&a2, a3);
  }
  return result;
}
