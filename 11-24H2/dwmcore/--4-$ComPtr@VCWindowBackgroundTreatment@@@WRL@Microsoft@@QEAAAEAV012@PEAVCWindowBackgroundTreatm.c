/*
 * XREFs of ??4?$ComPtr@VCWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatment@@@Z @ 0x1801B25B4
 * Callers:
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801B2458 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@AEBVCMILMatrix@@A.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

CCachedVisualImage **__fastcall Microsoft::WRL::ComPtr<CWindowBackgroundTreatment>::operator=(
        CCachedVisualImage **a1,
        __int64 a2,
        __int64 a3)
{
  CCachedVisualImage *v5; // rcx

  if ( *a1 != (CCachedVisualImage *)a2 )
  {
    if ( a2 )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
    v5 = *a1;
    *a1 = (CCachedVisualImage *)a2;
    if ( v5 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v5, a2, a3);
  }
  return a1;
}
