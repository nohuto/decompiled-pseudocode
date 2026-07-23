/*
 * XREFs of I_MinAsn1AdjustFileTime @ 0x140828168
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x140828358 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x14082882C (MinAsn1DecodeUtcTime.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x14041A560 (RtlTimeFieldsToTime.c)
 */

BOOLEAN __fastcall I_MinAsn1AdjustFileTime(__int64 *a1, __int16 a2, char a3)
{
  int v5; // ecx
  __int16 v6; // r10
  BOOLEAN result; // al
  __int64 v8; // rcx
  LONGLONG v9; // rcx
  _TIME_FIELDS TimeFields; // [rsp+20h] [rbp-10h] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp+28h] BYREF

  Time.QuadPart = 0LL;
  if ( a3 || !a2 )
    return 1;
  v5 = -a2;
  if ( a2 > 0 )
    LOWORD(v5) = a2;
  TimeFields.Weekday = 0;
  *(_DWORD *)&TimeFields.Year = 67137;
  TimeFields.Day = 1;
  v6 = (__int16)v5 / 60;
  *(_QWORD *)&TimeFields.Hour = (unsigned __int16)((__int16)v5 / 60);
  TimeFields.Minute = (__int16)v5 % 60;
  if ( (__int16)v5 / 60 >= 24 )
  {
    TimeFields.Day = v6 / 24 + 1;
    TimeFields.Hour = v6 % 24;
  }
  result = RtlTimeFieldsToTime(&TimeFields, &Time);
  if ( result )
  {
    v8 = *a1;
    if ( a2 <= 0 )
      v9 = v8 - Time.QuadPart;
    else
      v9 = Time.QuadPart + v8;
    *a1 = v9;
  }
  return result;
}
