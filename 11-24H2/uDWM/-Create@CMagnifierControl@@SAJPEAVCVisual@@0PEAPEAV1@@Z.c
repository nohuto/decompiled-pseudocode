/*
 * XREFs of ?Create@CMagnifierControl@@SAJPEAVCVisual@@0PEAPEAV1@@Z @ 0x18007BB3C
 * Callers:
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z @ 0x180044A98 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z @ 0x18007BC00 (--0CMagnifierControl@@AEAA@PEAVCVisual@@0@Z.c)
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x18007BCE4 (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CMagnifierControl::Create(struct CVisual *a1, struct CVisual *a2, struct CMagnifierControl **a3)
{
  CMagnifierControl *v6; // rax
  CMagnifierControl *v7; // rax
  struct CMagnifierControl *v8; // rdi
  unsigned int v9; // ebx
  int v11; // eax

  v6 = (CMagnifierControl *)DefaultHeap::AllocClear(0xC0uLL);
  if ( v6 && (v7 = CMagnifierControl::CMagnifierControl(v6, a1, a2), (v8 = v7) != 0LL) )
  {
    v11 = CMagnifierControl::Initialize(v7);
    v9 = v11;
    if ( v11 >= 0 )
    {
      *a3 = v8;
      CMILRefCountBase::AddRef(v8);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x5Bu, 0LL);
    }
    CBaseObject::Release(v8);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x59u, 0LL);
  }
  return v9;
}
