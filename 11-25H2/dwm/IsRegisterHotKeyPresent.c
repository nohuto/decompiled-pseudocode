/*
 * XREFs of IsRegisterHotKeyPresent @ 0x140005EF8
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400031A0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x140004674 (-OnClose@CDwmAppHost@@AEAAXXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1400063B7 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRegisterHotKeyPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_140019940 == 1 )
    return 1;
  if ( dword_140019940 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_140019940 = 2 - (v1 != 0);
  return result;
}
