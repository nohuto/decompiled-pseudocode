/*
 * XREFs of RtlpMuiRegGetLanguageSpec @ 0x1800992DC
 * Callers:
 *     _RtlpMuiRegAddBaseLanguage @ 0x180148248 (_RtlpMuiRegAddBaseLanguage.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800993D0 (RtlpMuiRegGetOrAddString.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

__int64 __fastcall RtlpMuiRegGetLanguageSpec(__int64 a1, wchar_t *a2, char *a3, __int64 a4, _WORD *a5)
{
  __int16 v5; // bx
  char v9; // di
  size_t v10; // rax
  __int64 v11; // r8
  __int64 result; // rax
  _UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+68h] [rbp+10h] BYREF
  __int16 v15; // [rsp+78h] [rbp+20h] BYREF

  String.Buffer = a2;
  Lcid = 0;
  v5 = 0;
  v15 = 0;
  *(_QWORD *)&String.Length = 0LL;
  v9 = 0;
  if ( a2 )
  {
    v10 = 2 * wcslen(a2);
    if ( v10 >= 0xFFFE )
      LOWORD(v10) = -4;
    String.Length = v10;
    String.MaximumLength = v10 + 2;
  }
  if ( RtlCultureNameToLCID(&String, &Lcid) )
  {
    v5 = Lcid;
    if ( ((Lcid - 4096) & 0xFFFFFBFF) != 0 )
    {
      v9 = 1;
LABEL_8:
      result = 0LL;
      goto LABEL_9;
    }
    LOBYTE(v11) = 1;
    result = RtlpMuiRegGetOrAddString(a1, a2, v11, &v15);
    if ( (int)result >= 0 )
    {
      v5 = v15;
      v9 = 3;
      goto LABEL_8;
    }
    v5 = 0;
  }
  else
  {
    result = 3221225485LL;
  }
LABEL_9:
  if ( a3 )
    *a3 = v9;
  if ( a5 )
    *a5 = v5;
  return result;
}
