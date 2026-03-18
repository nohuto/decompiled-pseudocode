/*
 * XREFs of FindShadowWindow @ 0x14015D9D4
 * Callers:
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x1400943FC (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x14015DF68 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall FindShadowWindow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax

  result = FindShadow(a1);
  if ( result )
    return (struct tagSHADOW *)*((_QWORD *)result + 1);
  return result;
}
