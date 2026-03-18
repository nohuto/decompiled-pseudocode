/*
 * XREFs of IsRegisterManipulationThreadPresent @ 0x18025D4B8
 * Callers:
 *     ?ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ @ 0x1801BC210 (-ManipulationThreadMain@CGlobalManipulationManager@@EEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18025DEA0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRegisterManipulationThreadPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180405F8C == 1 )
    return 1;
  if ( dword_180405F8C == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_180405F8C = 2 - (v1 != 0);
  return result;
}
