/*
 * XREFs of ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x14002F0A0
 * Callers:
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x140047360 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x140048880 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x14009A390 (NtConfirmCompositionSurfaceIndependentFlipEntry.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x14009A510 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x14009A830 (NtSetCompositionSurfaceStatistics.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x14009AAB0 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N_K@Z @ 0x14009AD40 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurface::FindBuffer(
        CCompositionSurface *this,
        __int64 a2,
        struct CCompositionBuffer **a3)
{
  bool v3; // zf
  char *v4; // r9
  char *i; // rcx

  v3 = *((_DWORD *)this + 24) == 0;
  *a3 = 0LL;
  if ( !v3 )
  {
    v4 = (char *)this + 80;
    for ( i = (char *)*((_QWORD *)this + 10); i != v4; i = *(char **)i )
    {
      if ( *((_QWORD *)i - 1) == a2 )
      {
        *a3 = (struct CCompositionBuffer *)(i - 24);
        return 0LL;
      }
    }
  }
  return 3221226021LL;
}
