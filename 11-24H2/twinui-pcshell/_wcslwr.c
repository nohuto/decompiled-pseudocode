/*
 * XREFs of _wcslwr @ 0x1802D2500
 * Callers:
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18013875C (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18013892C (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wchar_t *__cdecl wcslwr(wchar_t *String)
{
  char v1; // dl
  __int16 v2; // r8
  int v3; // r9d
  wchar_t v5; // [rsp+28h] [rbp+28h]
  long double v6; // [rsp+30h] [rbp+30h]

  return (wchar_t *)o((wchar_t)String, v1, v2, v3, v5, v6);
}
