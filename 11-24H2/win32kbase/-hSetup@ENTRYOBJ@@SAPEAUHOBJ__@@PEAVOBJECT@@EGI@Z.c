/*
 * XREFs of ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x14001E494
 * Callers:
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
 * Callees:
 *     ?hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z @ 0x1401C1F94 (-hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z.c)
 */

struct HOBJ__ *__fastcall ENTRYOBJ::hSetup(struct OBJECT *a1, unsigned __int8 a2, unsigned __int16 a3, unsigned int a4)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return ENTRYOBJ::hSetupFast(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), a1, a2, a3, a4);
}
