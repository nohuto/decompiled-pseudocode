/*
 * XREFs of HvpIsReadErrorTransient @ 0x14096BF54
 * Callers:
 *     HvAnalyzeLogFiles @ 0x14096B918 (HvAnalyzeLogFiles.c)
 * Callees:
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall HvpIsReadErrorTransient(int a1)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  int v4; // [rsp+30h] [rbp-29h] BYREF
  __int64 v5; // [rsp+38h] [rbp-21h] BYREF
  __int64 v6; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v7[32]; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v8; // [rsp+70h] [rbp+17h]
  __int64 v9; // [rsp+78h] [rbp+1Fh]
  int *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  __int64 *v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh]

  if ( a1 == -1073741807 )
    return 0;
  if ( a1 != -1073741801 && a1 != -1073741670 && a1 != -1073741663 )
  {
    if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000000LL) )
    {
      v5 = 1LL;
      v8 = &v5;
      v9 = 8LL;
      v10 = &v4;
      v4 = v2;
      v12 = &v6;
      v11 = 4LL;
      v6 = 0x1000000LL;
      v13 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09F58, (unsigned __int8 *)word_140056982, v2, v3, (__int64)v7);
    }
    return 0;
  }
  return 1;
}
