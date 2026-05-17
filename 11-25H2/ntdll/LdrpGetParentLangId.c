/*
 * XREFs of LdrpGetParentLangId @ 0x1800A6FA8
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B3A0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x18008ADF0 (LdrResFallbackLangList.c)
 * Callees:
 *     RtlLocaleNameToLcid @ 0x18005C210 (RtlLocaleNameToLcid.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlGetParentLocaleName @ 0x1800A7380 (RtlGetParentLocaleName.c)
 *     RtlLcidToLocaleName @ 0x1800A75A0 (RtlLcidToLocaleName.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetParentLangId(unsigned __int16 a1, _WORD *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // r9
  wchar_t *v6; // rdi
  int ParentLocaleName; // eax
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-49h] BYREF
  wchar_t *String[2]; // [rsp+28h] [rbp-41h]
  wchar_t *v12[2]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v14[32]; // [rsp+70h] [rbp+7h] BYREF

  v10 = 0;
  *(_OWORD *)String = 0LL;
  *(_OWORD *)v12 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v3 = a1;
  *a2 = 0;
  v12[1] = (wchar_t *)v14;
  WORD1(v12[0]) = 30;
  v4 = RtlLcidToLocaleName(a1, v12, 2LL, 0LL);
  if ( v4 >= 0
    || v4 == -1073741789
    && (LOBYTE(v5) = 1, v12[1] = 0LL, WORD1(v12[0]) = 0, (int)RtlLcidToLocaleName(v3, v12, 2LL, v5) >= 0) )
  {
    v6 = v12[1];
    WORD1(String[0]) = 30;
    String[1] = (wchar_t *)v13;
    ParentLocaleName = RtlGetParentLocaleName(v12[1]);
    v8 = ParentLocaleName;
    if ( ParentLocaleName >= 0
      || ParentLocaleName == -1073741789
      && (String[1] = 0LL, WORD1(String[0]) = 0, v8 = RtlGetParentLocaleName(v6), v8 >= 0) )
    {
      if ( LOWORD(String[0]) )
      {
        v8 = RtlLocaleNameToLcid(String[1], &v10, 3);
        if ( v8 >= 0 )
          *a2 = v10;
      }
    }
  }
  else
  {
    v6 = v12[1];
    v8 = -1073741811;
  }
  if ( (_BYTE *)String[1] != v13 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)String[1], v5);
    v6 = v12[1];
  }
  if ( v6 != (wchar_t *)v14 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v12[1], v5);
  return (unsigned int)v8;
}
