/*
 * XREFs of ?CallActivationRequestedOnStub@BamoActivationWatcherPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoActivatableEntityPrincipal@@1@Z @ 0x1800B16A8
 * Callers:
 *     ?BroadcastActivationRequested@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAJPEAVBamoActivatableEntityPrincipal@@0@Z @ 0x1800B15EC (-BroadcastActivationRequested@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAJPEAVBamoActivata.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivationRequested@BamoActivationWatcherStubImpl@BamoImpl@@QEAAJPEAVBamoActivatableEntityPrincipal@@0@Z @ 0x1800B1430 (-ActivationRequested@BamoActivationWatcherStubImpl@BamoImpl@@QEAAJPEAVBamoActivatableEntityPrinc.c)
 */

__int64 __fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::CallActivationRequestedOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoActivatableEntityPrincipal *a2,
        struct BamoActivatableEntityPrincipal *a3,
        const char *a4)
{
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
  {
    v4 = BamoImpl::BamoActivationWatcherStubImpl::ActivationRequested(a1, a2, a3, a4);
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6DAC,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v4,
        v6);
  }
  return 0LL;
}
