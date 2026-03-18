/*
 * XREFs of PATHOBJ_bCloseFigure @ 0x14006C300
 * Callers:
 *     <none>
 * Callees:
 *     ?bCloseFigure@EPATHOBJ@@QEAA_NXZ @ 0x14006A7F0 (-bCloseFigure@EPATHOBJ@@QEAA_NXZ.c)
 */

BOOL __stdcall PATHOBJ_bCloseFigure(PATHOBJ *ppo)
{
  return (unsigned __int8)EPATHOBJ::bCloseFigure((EPATHOBJ *)ppo);
}
