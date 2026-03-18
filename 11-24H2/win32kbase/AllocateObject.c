/*
 * XREFs of AllocateObject @ 0x140148260
 * Callers:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x140148120 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 * Callees:
 *     ?AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z @ 0x1401C19A0 (-AllocateObjectFast@@YAPEAXAEAUSESSION_GLOBALS@Base@Gre@@KK@Z.c)
 */

void *__fastcall AllocateObject(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  __int64 SessionState; // rax

  v3 = a1;
  SessionState = W32GetSessionState(a1);
  return AllocateObjectFast(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v3, a2);
}
