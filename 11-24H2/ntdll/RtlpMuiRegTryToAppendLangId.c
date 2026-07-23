/*
 * XREFs of RtlpMuiRegTryToAppendLangId @ 0x180018A40
 * Callers:
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1800CB4CC (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlIntegerToUnicode @ 0x180019360 (RtlIntegerToUnicode.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x1800196B0 (RtlpLangNameInMultiSzString_Size.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegTryToAppendLangId(__int64 a1, __int64 a2, unsigned int *a3, wchar_t *a4, unsigned int a5)
{
  __int64 v7; // rsi
  DWORD v8; // ebx
  unsigned int v9; // r14d
  size_t v10; // rax
  unsigned __int16 v11; // bp
  __int64 v12; // r13
  unsigned int v13; // ebx
  __int64 v15; // rax
  __int64 v16; // r8
  wchar_t *v17; // rcx
  size_t v18; // rax
  DWORD Lcid; // [rsp+20h] [rbp-78h] BYREF
  _UNICODE_STRING v20; // [rsp+28h] [rbp-70h] BYREF
  wchar_t String[4]; // [rsp+38h] [rbp-60h] BYREF
  __int16 v22; // [rsp+40h] [rbp-58h]

  *(_QWORD *)String = 0LL;
  v22 = 0;
  Lcid = 0;
  if ( a2 && a1 && a3 )
  {
    v7 = *a3;
    if ( *(_WORD *)(a2 + 4) )
    {
      v8 = *(unsigned __int16 *)(a2 + 4);
    }
    else
    {
      v15 = *(__int16 *)(a2 + 6);
      if ( (__int16)v15 <= 0 )
        return (unsigned int)-1073741595;
      v16 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)&v20.Length = 0LL;
      v17 = (wchar_t *)(*(_QWORD *)(v16 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v16 + 16) + 2 * v15));
      v20.Buffer = v17;
      if ( v17 )
      {
        v18 = 2 * wcslen(v17);
        if ( v18 >= 0xFFFE )
          LOWORD(v18) = -4;
        v20.Length = v18;
        v20.MaximumLength = v18 + 2;
      }
      if ( !RtlCultureNameToLCID(&v20, &Lcid) )
        return (unsigned int)-1073741811;
      v8 = Lcid;
    }
    v9 = RtlIntegerToUnicode(v8, 16LL, 4294967292LL, String);
    if ( (v9 & 0x80000000) != 0 )
      return v9;
    v10 = wcslen(String);
    v11 = 2 * v10;
    if ( 2 * v10 >= 0xFFFE )
      v11 = -4;
    if ( v8 != 4096 && *a3 && *a3 <= a5 && (unsigned __int8)RtlpLangNameInMultiSzString_Size(a4, String) )
      return v9;
    v12 = (unsigned int)v7 + (v11 >> 1);
    v13 = v12 + 1;
    if ( a4 && (unsigned int)v7 < v13 )
    {
      if ( v13 < a5 )
      {
        memmove(&a4[v7], String, v11);
        a4[v12] = 0;
LABEL_17:
        *a3 = v13;
        return v9;
      }
    }
    else if ( v13 < a5 || !a4 )
    {
      goto LABEL_17;
    }
    v9 = -1073741789;
    goto LABEL_17;
  }
  return 3221225485LL;
}
