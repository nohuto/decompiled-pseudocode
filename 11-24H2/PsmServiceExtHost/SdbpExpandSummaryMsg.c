/*
 * XREFs of SdbpExpandSummaryMsg @ 0x180095AB8
 * Callers:
 *     SdbpConvertResourcesToStrings @ 0x1800958B0 (SdbpConvertResourcesToStrings.c)
 * Callees:
 *     AslStringDuplicate @ 0x18009E508 (AslStringDuplicate.c)
 *     AslStringReplaceArray @ 0x18009EA00 (AslStringReplaceArray.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpExpandSummaryMsg(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // [rsp+30h] [rbp-50h] BYREF
  __int64 v7; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v9[3]; // [rsp+58h] [rbp-28h] BYREF

  v6 = 0LL;
  v9[0] = L"<APP>";
  v9[1] = L"<VENDOR>";
  v9[2] = L"<PARAMETER1>";
  v7 = a1;
  if ( a1 )
  {
    v8[0] = a2;
    v8[1] = a3;
    v8[2] = a4;
    if ( (int)AslStringReplaceArray(&v6, a1, v9, v8) >= 0 )
      return v6;
  }
  AslStringDuplicate(&v7, a1);
  return v7;
}
