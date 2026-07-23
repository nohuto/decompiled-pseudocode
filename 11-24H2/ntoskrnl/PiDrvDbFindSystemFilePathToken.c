/*
 * XREFs of PiDrvDbFindSystemFilePathToken @ 0x140734D68
 * Callers:
 *     PiDrvDbResolveSystemFilePath @ 0x1407371F4 (PiDrvDbResolveSystemFilePath.c)
 * Callees:
 *     iswalnum @ 0x1404FC390 (iswalnum.c)
 *     iswalpha @ 0x1404FC3AC (iswalpha.c)
 *     RtlFindUnicodeSubstring @ 0x1408318B0 (RtlFindUnicodeSubstring.c)
 */

PWCHAR __fastcall PiDrvDbFindSystemFilePathToken(UNICODE_STRING *a1, UNICODE_STRING *a2)
{
  __int64 v4; // rbx
  wchar_t *Buffer; // r14
  unsigned __int16 i; // r12
  PWCHAR UnicodeSubstring; // rax
  PWCHAR v8; // rdi
  __int64 v9; // rsi
  wint_t v10; // r15
  wint_t v11; // cx
  wchar_t *v12; // r8
  wchar_t v13; // dx
  UNICODE_STRING FullString; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0LL;
  FullString = *a1;
  Buffer = FullString.Buffer;
  for ( i = FullString.Length; *Buffer; FullString.Length = i )
  {
    UnicodeSubstring = RtlFindUnicodeSubstring(&FullString, a2, 1u);
    v8 = UnicodeSubstring;
    if ( !UnicodeSubstring )
      break;
    v9 = a2->Length >> 1;
    if ( UnicodeSubstring > a1->Buffer )
    {
      v10 = *(UnicodeSubstring - 1);
      v11 = *a2->Buffer;
      if ( v11 == 92 )
      {
        if ( iswalnum(v10) || v10 == 92 )
          goto LABEL_17;
      }
      else if ( iswalpha(v11) && iswalnum(v10) )
      {
        goto LABEL_17;
      }
    }
    if ( i == a2->Length && !v8[v9] )
      return v8;
    v12 = a2->Buffer;
    v13 = v12[(unsigned int)(v9 - 1)];
    if ( v13 == 92 || v8[v9] == 92 || v13 == 37 && *v12 == 37 )
      return v8;
LABEL_17:
    i -= a2->Length;
    Buffer += v9;
    FullString.Buffer = Buffer;
  }
  return (PWCHAR)v4;
}
