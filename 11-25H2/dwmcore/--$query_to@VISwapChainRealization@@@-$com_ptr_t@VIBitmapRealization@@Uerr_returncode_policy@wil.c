/*
 * XREFs of ??$query_to@VISwapChainRealization@@@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVISwapChainRealization@@@Z @ 0x1800A18CC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023D960 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::query_to<ISwapChainRealization>(
        CGDISectionBitmapRealization **a1,
        __int64 a2)
{
  CGDISectionBitmapRealization *v2; // rcx
  __int64 (__fastcall *v3)(CGDISectionBitmapRealization *); // rax

  v2 = *a1;
  v3 = **(__int64 (__fastcall ***)(CGDISectionBitmapRealization *))v2;
  if ( v3 == CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface )
    return CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface(v2);
  else
    return ((__int64 (__fastcall *)(CGDISectionBitmapRealization *, GUID *, __int64))v3)(
             v2,
             &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c,
             a2);
}
