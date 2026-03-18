/*
 * XREFs of ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x18010368C
 * Callers:
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x180103EC0 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC850 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z @ 0x180103760 (--0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z.c)
 *     ?Initialize@CCompositionSurfaceInfo@@IEAAJPEAX@Z @ 0x1801038DC (-Initialize@CCompositionSurfaceInfo@@IEAAJPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::Create(
        void *a1,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3,
        struct CCompositionSurfaceInfo **a4)
{
  CGlobalCompositionSurfaceInfo *v8; // rax
  CGlobalCompositionSurfaceInfo *v9; // rax
  CCompositionSurfaceInfo *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi

  *a4 = 0LL;
  v8 = (CGlobalCompositionSurfaceInfo *)DefaultHeap::AllocClear(0x1B8uLL);
  if ( v8 && (v9 = CGlobalCompositionSurfaceInfo::CGlobalCompositionSurfaceInfo(v8, a2, a3), (v10 = v9) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CGlobalCompositionSurfaceInfo *)((char *)v9 + 8));
    v11 = CCompositionSurfaceInfo::Initialize(v10, a1);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x20u, 0LL);
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v10);
    }
    else
    {
      *a4 = v10;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Eu, 0LL);
  }
  return v12;
}
