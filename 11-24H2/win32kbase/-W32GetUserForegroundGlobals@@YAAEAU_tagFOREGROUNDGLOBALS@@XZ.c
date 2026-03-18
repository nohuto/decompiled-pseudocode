/*
 * XREFs of ?W32GetUserForegroundGlobals@@YAAEAU_tagFOREGROUNDGLOBALS@@XZ @ 0x14019F570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _tagFOREGROUNDGLOBALS *__fastcall W32GetUserForegroundGlobals(__int64 a1)
{
  return (struct _tagFOREGROUNDGLOBALS *)(W32GetUserSessionState(a1) + 18888);
}
