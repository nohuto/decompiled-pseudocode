/*
 * XREFs of RtlGenerateQpcToIncrementConstants @ 0x1404AD240
 * Callers:
 *     KeSetTimeAdjustment @ 0x140317AD8 (KeSetTimeAdjustment.c)
 *     KiSetupTimeIncrement @ 0x1405AE164 (KiSetupTimeIncrement.c)
 * Callees:
 *     RtlpComputeFraction @ 0x1405EDEA8 (RtlpComputeFraction.c)
 */

unsigned __int64 __fastcall RtlGenerateQpcToIncrementConstants(unsigned int a1, char *a2)
{
  unsigned __int64 v3; // r9
  char v4; // al
  unsigned __int64 v6; // rdx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v3 = RtlpComputeFraction(10000000LL, a1, &v7);
  v4 = v7;
  if ( v7 < 0 )
  {
    v6 = v3 + (unsigned int)(1 << ~v7);
    if ( v6 < v3 )
      v6 = v3;
    v3 = v6 >> -v7;
    v4 = 0;
  }
  *a2 = v4;
  return v3;
}
