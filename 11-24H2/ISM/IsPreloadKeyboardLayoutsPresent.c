/*
 * XREFs of IsPreloadKeyboardLayoutsPresent @ 0x18009EF9C
 * Callers:
 *     ?Create@InputServiceProcessor@@SAJPEAPEAV1@@Z @ 0x18008EE28 (-Create@InputServiceProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18009EB5D (ApiSetQueryApiSetPresence_0.c)
 */

char IsPreloadKeyboardLayoutsPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180250888 == 1 )
    return 1;
  if ( dword_180250888 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"LN", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_180250888 = 2 - (v1 != 0);
  return result;
}
