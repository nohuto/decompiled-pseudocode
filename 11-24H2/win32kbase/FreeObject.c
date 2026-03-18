/*
 * XREFs of FreeObject @ 0x1401482A0
 * Callers:
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x140148120 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     HmgAllocFast @ 0x1401C21B0 (HmgAllocFast.c)
 *     EngDeleteDriverObj @ 0x1401CD5B0 (EngDeleteDriverObj.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1401CEAD8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     FreeObjectFast @ 0x1401C217C (FreeObjectFast.c)
 */

__int64 __fastcall FreeObject(__int64 a1, unsigned int a2)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return FreeObjectFast(*(_QWORD *)(SessionState + 88), a1, a2);
}
