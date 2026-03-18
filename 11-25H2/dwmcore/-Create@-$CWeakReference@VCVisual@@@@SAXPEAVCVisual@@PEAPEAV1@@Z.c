/*
 * XREFs of ?Create@?$CWeakReference@VCVisual@@@@SAXPEAVCVisual@@PEAPEAV1@@Z @ 0x18013AA70
 * Callers:
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18013A9B0 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x18013B00C (-RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ??0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z @ 0x18013B7A8 (--0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x18013AAB0 (-GetWeakReference@CResource@@UEAAJPEAPEAVIUnknownWeakRef@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
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
