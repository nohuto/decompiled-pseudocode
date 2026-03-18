/*
 * XREFs of RtlpMuiRegGetLanguageSpec @ 0x14081CAE0
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x14081D380 (RtlpPopulateLanguageConfigList.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x14081D8F4 (_RtlpMuiRegAddBaseLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetOrAddString @ 0x14081CC90 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x140A91310 (RtlCultureNameToLCID.c)
 */

__int64 __fastcall RtlpMuiRegGetLanguageSpec(__int64 a1, const WCHAR *a2, char *a3, __int64 a4, _WORD *a5)
{
  __int16 v6; // bx
  char v9; // di
  __int64 v10; // r8
  __int64 result; // rax
  UNICODE_STRING v12[3]; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  __int16 v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0;
  v6 = 0;
  v14 = 0;
  v9 = 0;
  v12[0] = 0LL;
  RtlInitUnicodeString(v12, a2);
  if ( (unsigned __int8)RtlCultureNameToLCID(v12, &v13) )
  {
    v6 = v13;
    if ( ((v13 - 4096) & 0xFFFFFBFF) != 0 )
    {
      v9 = 1;
    }
    else
    {
      LOBYTE(v10) = 1;
      result = RtlpMuiRegGetOrAddString(a1, a2, v10, &v14);
      if ( (int)result < 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v6 = v14;
      v9 = 3;
    }
    result = 0LL;
  }
  else
  {
    result = 3221225485LL;
  }
LABEL_9:
  if ( a3 )
    *a3 = v9;
  if ( a5 )
    *a5 = v6;
  return result;
}
