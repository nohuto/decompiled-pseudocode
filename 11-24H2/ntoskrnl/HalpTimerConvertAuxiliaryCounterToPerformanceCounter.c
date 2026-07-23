/*
 * XREFs of HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x14047DEF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x14047E064 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 */

__int64 __fastcall HalpTimerConvertAuxiliaryCounterToPerformanceCounter(unsigned __int64 a1, __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned int v8; // r9d
  unsigned __int64 v9; // rcx
  __int64 v10; // r11
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r10
  __int64 v13; // rax
  unsigned __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+38h] BYREF

  v16[0] = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  if ( !HalpAuxiliaryCounter
    || (v6 = HalpTimerQpcFreqForAuxQpcConversion,
        v7 = *(_QWORD *)(HalpAuxiliaryCounter + 192),
        !HalpTimerQpcFreqForAuxQpcConversion)
    || !v7 )
  {
    v8 = -1073741637;
    goto LABEL_4;
  }
  HalpTimerCaptureCurrentAuxiliaryQpcPair(&v17, v16, &v15);
  if ( !is_mul_ok(v15, 0x3B9ACA00uLL) )
  {
    v8 = -1073741823;
    goto LABEL_4;
  }
  v9 = a1 - v16[0];
  v10 = v15 * (unsigned __int128)0x3B9ACA00uLL / v6;
  if ( v16[0] >= a1 )
    v9 = v16[0] - a1;
  if ( v9 / v7 >= 0xA )
  {
    v8 = -1073741811;
    goto LABEL_16;
  }
  if ( !is_mul_ok(v6, v9) )
  {
LABEL_15:
    v8 = -1073741823;
LABEL_16:
    v12 = 0LL;
    v13 = 0LL;
    goto LABEL_17;
  }
  v11 = v6 * (unsigned __int128)v9 / v7;
  v12 = 0x3B9ACA00 / v6;
  if ( v16[0] >= a1 )
  {
    if ( v17 >= v11 )
    {
      v8 = 0;
      v13 = v17 - v11;
      goto LABEL_17;
    }
    goto LABEL_15;
  }
  v13 = -1LL;
  if ( v11 + v17 >= v11 )
    v13 = v11 + v17;
  v8 = v11 + v17 < v11 ? 0xC0000095 : 0;
  if ( v11 + v17 < v11 )
    goto LABEL_16;
LABEL_17:
  if ( (v8 & 0x80000000) == 0 )
  {
    *a2 = v13;
    if ( a3 )
      *a3 = v10 + v12;
    return v8;
  }
LABEL_4:
  *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  return v8;
}
