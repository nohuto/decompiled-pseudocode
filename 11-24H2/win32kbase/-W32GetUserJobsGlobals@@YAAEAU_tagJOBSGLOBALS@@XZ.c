/*
 * XREFs of ?W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ @ 0x14019E7A8
 * Callers:
 *     HMCleanupGrantedHandle @ 0x14014A694 (HMCleanupGrantedHandle.c)
 * Callees:
 *     <none>
 */

struct _tagJOBSGLOBALS *__fastcall W32GetUserJobsGlobals(__int64 a1)
{
  return (struct _tagJOBSGLOBALS *)(W32GetUserSessionState(a1) + 69352);
}
