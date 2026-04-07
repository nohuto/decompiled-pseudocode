/*
 * XREFs of ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x18003EE64
 * Callers:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18003E7F0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?Create@CClientArea@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18003EDC8 (-Create@CClientArea@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CClientArea@@IEAA@XZ @ 0x18003EEF4 (--0CClientArea@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CClientArea::Create(struct CVisualProxy *this, struct CClientArea **a2)
{
  unsigned int v4; // edi
  CClientArea *v5; // rax
  CClientArea *v6; // rax
  struct CClientArea *v7; // r9

  v4 = 0;
  v5 = (CClientArea *)DefaultHeap::AllocClear(0x98uLL);
  if ( v5 && (v6 = CClientArea::CClientArea(v5), (v7 = v6) != 0LL) )
  {
    *((_QWORD *)v6 + 2) = this;
    if ( this )
      CMILRefCountBase::AddRef(this);
    *a2 = v7;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x29u, 0LL);
  }
  return v4;
}
