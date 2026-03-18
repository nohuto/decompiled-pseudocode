/*
 * XREFs of RtlpComputeFraction @ 0x1404F79F4
 * Callers:
 *     RtlGenerateQpcToIncrementConstants @ 0x1404B1870 (RtlGenerateQpcToIncrementConstants.c)
 *     KiInitializeProcessorCycleAccumulation @ 0x1405AD634 (KiInitializeProcessorCycleAccumulation.c)
 *     KiSetupTimeIncrement @ 0x1405AD864 (KiSetupTimeIncrement.c)
 * Callees:
 *     Feature_Servicing_TscFrequency64bit__private_IsEnabledNoReportingNoInline @ 0x1405E4550 (Feature_Servicing_TscFrequency64bit__private_IsEnabledNoReportingNoInline.c)
 *     RtlpCountLeadingZeroes64 @ 0x1405E4608 (RtlpCountLeadingZeroes64.c)
 */

unsigned __int64 __fastcall RtlpComputeFraction(__int64 a1, unsigned int a2, _BYTE *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rbx
  unsigned __int64 result; // rax
  char v7; // r10
  bool v8; // zf
  int v9; // ecx
  char v10; // r10
  char v11; // bl
  char v12; // r10
  __int64 v13; // r8
  unsigned __int64 v14; // r8
  __int64 v15; // r11
  unsigned __int64 v16; // r11

  v3 = a2;
  *a3 = 0;
  v5 = a1;
  if ( !a1 && a2 )
    return 0LL;
  if ( (unsigned int)Feature_Servicing_TscFrequency64bit__private_IsEnabledNoReportingNoInline() )
  {
    v7 = RtlpCountLeadingZeroes64(v5);
  }
  else
  {
    v8 = !_BitScanReverse((unsigned int *)&v9, v5);
    v5 = (unsigned int)v5;
    if ( v8 )
      v10 = 32;
    else
      v10 = 31 - v9;
    v7 = v10 + 32;
  }
  v11 = RtlpCountLeadingZeroes64((v5 << v7) / v3);
  v14 = v13 << v11;
  v16 = v14 / v3 + (v15 << v11);
  if ( 2 * (v14 % v3) > v3 && v16 + 1 >= v16 )
    ++v16;
  result = v16;
  *a3 = 64 - v12 - v11;
  return result;
}
