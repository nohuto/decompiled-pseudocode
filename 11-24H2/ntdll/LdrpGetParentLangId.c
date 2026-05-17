/*
 * XREFs of LdrpGetParentLangId @ 0x1800D1514
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18005F740 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x18007BF40 (LdrResFallbackLangList.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlLocaleNameToLcid @ 0x180032F80 (RtlLocaleNameToLcid.c)
 *     RtlGetParentLocaleName @ 0x180033970 (RtlGetParentLocaleName.c)
 *     RtlLcidToLocaleName @ 0x1800D26D0 (RtlLcidToLocaleName.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetParentLangId(unsigned __int16 a1, _WORD *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  wchar_t *v5; // rdi
  int ParentLocaleName; // eax
  int v7; // ebx
  int v9; // [rsp+20h] [rbp-49h] BYREF
  wchar_t *String[2]; // [rsp+28h] [rbp-41h] BYREF
  wchar_t *v11[2]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v12[32]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v13[32]; // [rsp+70h] [rbp+7h] BYREF

  v9 = 0;
  *(_OWORD *)String = 0LL;
  *(_OWORD *)v11 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v3 = a1;
  *a2 = 0;
  v11[1] = (wchar_t *)v13;
  WORD1(v11[0]) = 30;
  v4 = RtlLcidToLocaleName(a1, v11, 2LL);
  if ( v4 >= 0 || v4 == -1073741789 && (v11[1] = 0LL, WORD1(v11[0]) = 0, (int)RtlLcidToLocaleName(v3, v11, 2LL) >= 0) )
  {
    v5 = v11[1];
    WORD1(String[0]) = 30;
    String[1] = (wchar_t *)v12;
    ParentLocaleName = RtlGetParentLocaleName(v11[1], (__int64)String, 6, 0);
    v7 = ParentLocaleName;
    if ( ParentLocaleName >= 0
      || ParentLocaleName == -1073741789
      && (String[1] = 0LL, WORD1(String[0]) = 0, v7 = RtlGetParentLocaleName(v5, (__int64)String, 6, 1u), v7 >= 0) )
    {
      if ( LOWORD(String[0]) )
      {
        v7 = RtlLocaleNameToLcid(String[1], &v9, 3);
        if ( v7 >= 0 )
          *a2 = v9;
      }
    }
  }
  else
  {
    v5 = v11[1];
    v7 = -1073741811;
  }
  if ( (_BYTE *)String[1] != v12 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)String[1]);
    v5 = v11[1];
  }
  if ( v5 != (wchar_t *)v13 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v11[1]);
  return (unsigned int)v7;
}
