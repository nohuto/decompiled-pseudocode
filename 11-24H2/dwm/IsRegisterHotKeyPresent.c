/*
 * XREFs of IsRegisterHotKeyPresent @ 0x1400059B8
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002EE0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x1400042A4 (-OnClose@CDwmAppHost@@AEAAXXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x140005E77 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRegisterHotKeyPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1400188C0 == 1 )
    return 1;
  if ( dword_1400188C0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_1400188C0 = 2 - (v1 != 0);
  return result;
}
