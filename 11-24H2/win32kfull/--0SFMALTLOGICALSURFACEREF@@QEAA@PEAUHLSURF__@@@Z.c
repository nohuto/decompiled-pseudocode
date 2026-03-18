/*
 * XREFs of ??0SFMALTLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@@Z @ 0x140022D24
 * Callers:
 *     GreSfmGetDirtyRgn @ 0x140022B9C (GreSfmGetDirtyRgn.c)
 *     GreDwmGetSurfaceData @ 0x14002A1E4 (GreDwmGetSurfaceData.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x14019CA8C (GreSetRedirectionSurfaceSignaling.c)
 *     GreDwmGetRedirectionStyle @ 0x140321A04 (GreDwmGetRedirectionStyle.c)
 *     GreHLsurfSetPresentFlags @ 0x140321CA0 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x140321DA4 (GreHLsurfSetUpdateId.c)
 * Callees:
 *     <none>
 */

SFMALTLOGICALSURFACEREF *__fastcall SFMALTLOGICALSURFACEREF::SFMALTLOGICALSURFACEREF(
        SFMALTLOGICALSURFACEREF *this,
        HLSURF a2)
{
  __int64 v4; // rdx

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  PushThreadGuardedObject(
    this,
    this,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  *((_QWORD *)this + 4) = 0LL;
  if ( a2 )
  {
    LOBYTE(v4) = 18;
    *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  }
  return this;
}
