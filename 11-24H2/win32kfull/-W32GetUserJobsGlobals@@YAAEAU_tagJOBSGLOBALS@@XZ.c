/*
 * XREFs of ?W32GetUserJobsGlobals@@YAAEAU_tagJOBSGLOBALS@@XZ @ 0x140291B20
 * Callers:
 *     UserJobCallout @ 0x1400A4480 (UserJobCallout.c)
 *     ?JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z @ 0x1400A4A80 (-JobCalloutTerminate@@YAHPEAUtagW32JOB@@@Z.c)
 *     ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1400A4CD0 (-CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z.c)
 * Callees:
 *     <none>
 */

struct _tagJOBSGLOBALS *__fastcall W32GetUserJobsGlobals(__int64 a1, __int64 a2)
{
  return (struct _tagJOBSGLOBALS *)(W32GetUserSessionState(a1, a2) + 69352);
}
