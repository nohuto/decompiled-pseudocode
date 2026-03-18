/*
 * XREFs of ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x14015DF68
 * Callers:
 *     zzzMoveShadow @ 0x14015CE1C (zzzMoveShadow.c)
 *     xxxUpdateShadowZorder @ 0x14015CEB0 (xxxUpdateShadowZorder.c)
 *     xxxAddShadow @ 0x14015CF84 (xxxAddShadow.c)
 *     FindShadowWindow @ 0x14015D9D4 (FindShadowWindow.c)
 *     WindowHasShadow @ 0x14015DF38 (WindowHasShadow.c)
 *     zzzUpdateShadowAlpha @ 0x14015DFA4 (zzzUpdateShadowAlpha.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x14022C22C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagSHADOW *__fastcall FindShadow(struct tagWND *a1, __int64 a2)
{
  struct tagSHADOW *result; // rax

  for ( result = *(struct tagSHADOW **)(W32GetUserSessionState(a1, a2) + 63424);
        result && *(struct tagWND **)result != a1;
        result = (struct tagSHADOW *)*((_QWORD *)result + 2) )
  {
    ;
  }
  return result;
}
