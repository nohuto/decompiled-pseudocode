/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndex @ 0x1800DD070
 * Callers:
 *     RtlpLoadPolicyLanguageSpec @ 0x180015500 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegValidateConfigNode @ 0x1800DCE8C (RtlpMuiRegValidateConfigNode.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DD218 (RtlpMuiRegConfigMatchesInstalled.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003ECF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndex(__int64 a1, int a2, __int16 a3, _WORD *a4)
{
  __int64 v4; // r10
  char v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax
  int i; // edx
  _WORD *v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  const wchar_t *v15; // rcx
  size_t v16; // rax
  _UNICODE_STRING String; // [rsp+20h] [rbp-18h] BYREF
  DWORD Lcid; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  Lcid = 0;
  v7 = 1;
  if ( !a1 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a1 + 24);
  if ( a2 == 3 )
  {
    for ( i = 0; i < *(unsigned __int16 *)(v8 + 6); ++i )
    {
      v11 = (_WORD *)(*(_QWORD *)(v8 + 16) + 28LL * i);
      if ( (*v11 & 0x1020) == 0x20 && v11[3] == (_WORD)v4 && a4 )
      {
        result = 0LL;
        *a4 = i;
        return result;
      }
    }
    v12 = *(_QWORD *)(a1 + 32);
    if ( v12 )
    {
      if ( (v4 & 0x8000u) == 0LL && (unsigned int)v4 < *(unsigned __int16 *)(v12 + 6) )
      {
        v13 = *(__int16 *)(*(_QWORD *)(v12 + 16) + 2 * v4);
        v14 = *(_QWORD *)(v12 + 24);
        v15 = (const wchar_t *)(v14 + 2 * v13);
        if ( v15 )
        {
          *(_DWORD *)(&String.MaximumLength + 1) = 0;
          String.Buffer = (wchar_t *)(v14 + 2 * v13);
          v16 = 2 * wcslen(v15);
          if ( v16 >= 0xFFFE )
            LOWORD(v16) = -4;
          String.Length = v16;
          String.MaximumLength = v16 + 2;
          if ( RtlCultureNameToLCID(&String, &Lcid) )
          {
            LOWORD(v4) = Lcid;
            v7 = 0;
            return RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v4, v7, a4);
          }
        }
      }
    }
    return 3221225524LL;
  }
  if ( a2 == 1 )
    return RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v4, v7, a4);
  if ( a2 != 2 )
    return 3221225524LL;
  if ( (__int16)v4 <= 0 || (unsigned int)v4 >= *(unsigned __int16 *)(v8 + 6) )
    return 3221225485LL;
  if ( a4 )
    *a4 = v4;
  return 0LL;
}
