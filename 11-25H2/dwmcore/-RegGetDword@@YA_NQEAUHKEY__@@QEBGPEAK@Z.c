/*
 * XREFs of ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x18023AC24
 * Callers:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18023ABA0 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 *     BreakOnUnexpectedErrors @ 0x180254800 (BreakOnUnexpectedErrors.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegGetDword(HKEY a1, const WCHAR *a2, unsigned int *a3)
{
  bool v3; // bl
  DWORD v6[6]; // [rsp+30h] [rbp-18h] BYREF
  DWORD v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v6[0] = 4;
  v8 = 0;
  v7 = 0;
  if ( a1 && !RegQueryValueExW(a1, a2, 0LL, &v7, (LPBYTE)&v8, v6) )
  {
    v3 = v7 == 4;
    *a3 = v8;
  }
  return v3;
}
