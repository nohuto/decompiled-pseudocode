/*
 * XREFs of ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x14002F6E0
 * Callers:
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x140046D80 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1400480B0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtConfirmCompositionSurfaceIndependentFlipEntry @ 0x14009C4E0 (NtConfirmCompositionSurfaceIndependentFlipEntry.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x14009C660 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceStatistics @ 0x14009C980 (NtSetCompositionSurfaceStatistics.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x14009CC00 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N_K@Z @ 0x14009CED8 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N_K@Z.c)
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

  v3 = *((_DWORD *)this + 34) == 0;
  *a3 = 0LL;
  if ( !v3 )
  {
    v4 = (char *)this + 120;
    for ( i = (char *)*((_QWORD *)this + 15); i != v4; i = *(char **)i )
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
