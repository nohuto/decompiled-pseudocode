/*
 * XREFs of ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x180085E18
 * Callers:
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x18007BCE4 (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CFullScreenMagnifier@@AEAAJXZ @ 0x18007AD50 (-Initialize@CFullScreenMagnifier@@AEAAJXZ.c)
 *     ??0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z @ 0x180085ED4 (--0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CFullScreenMagnifier::Create(struct CVisual *a1, struct CFullScreenMagnifier **a2)
{
  CFullScreenMagnifier *v4; // rax
  CFullScreenMagnifier *v5; // rax
  struct CFullScreenMagnifier *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  v4 = (CFullScreenMagnifier *)DefaultHeap::AllocClear(0x100uLL);
  if ( v4 && (v5 = CFullScreenMagnifier::CFullScreenMagnifier(v4, a1), (v6 = v5) != 0LL) )
  {
    v7 = CFullScreenMagnifier::Initialize(v5);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x5Au, 0LL);
    }
    else
    {
      *a2 = v6;
      CMILRefCountBase::AddRef(v6);
    }
    CBaseObject::Release(v6);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x58u, 0LL);
  }
  return v8;
}
