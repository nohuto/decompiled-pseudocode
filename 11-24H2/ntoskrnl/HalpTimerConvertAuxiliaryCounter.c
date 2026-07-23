/*
 * XREFs of HalpTimerConvertAuxiliaryCounter @ 0x14048D268
 * Callers:
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x140538150 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerConvertAuxiliaryCounter(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 *a6,
        unsigned __int64 *a7)
{
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rcx

  v8 = 0LL;
  v9 = a5 - a1;
  if ( a1 >= a5 )
    v9 = a1 - a5;
  if ( v9 / a2 >= 0xA )
  {
    result = 3221225485LL;
  }
  else
  {
    if ( !is_mul_ok(a4, v9) )
    {
LABEL_12:
      result = 3221225473LL;
      goto LABEL_8;
    }
    v10 = a4 * (unsigned __int128)v9 / a2;
    v8 = 0x3B9ACA00 / a4;
    if ( a1 >= a5 )
    {
      if ( a3 >= v10 )
      {
        result = 0LL;
        *a6 = a3 - v10;
        goto LABEL_8;
      }
      goto LABEL_12;
    }
    v12 = -1LL;
    if ( v10 + a3 >= v10 )
      v12 = v10 + a3;
    result = v10 + a3 < v10 ? 0xC0000095 : 0;
    *a6 = v12;
  }
LABEL_8:
  if ( a7 )
    *a7 = v8;
  if ( (int)result < 0 )
  {
    if ( a7 )
      *a7 = 0LL;
    *a6 = 0LL;
  }
  return result;
}
