/*
 * XREFs of IsDWMGhostHandleGhostMsgPresent @ 0x140005C80
 * Callers:
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140002280 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002EE0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x140005E77 (ApiSetQueryApiSetPresence_0.c)
 */

char IsDWMGhostHandleGhostMsgPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_140018900 == 1 )
    return 1;
  if ( dword_140018900 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"FH", &v1) < 0 )
    return 0;
  result = v1;
  dword_140018900 = 2 - (v1 != 0);
  return result;
}
