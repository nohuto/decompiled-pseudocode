/*
 * XREFs of ?Create@?$CWeakReference@VCVisual@@@@SAXPEAVCVisual@@PEAPEAV1@@Z @ 0x180095AF0
 * Callers:
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180095A30 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x180095FF4 (-RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ??0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z @ 0x180096358 (--0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x180095B30 (-GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

struct IUnknownWeakRef *__fastcall CWeakReference<CVisual>::Create(CResource *a1, struct IUnknownWeakRef **a2)
{
  int WeakReference; // eax
  struct IUnknownWeakRef *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknownWeakRef *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  WeakReference = CResource::GetWeakReference(a1, &v6);
  if ( WeakReference < 0 )
    ModuleFailFastForHRESULT(WeakReference, retaddr);
  result = v6;
  *a2 = v6;
  return result;
}
