/*
 * XREFs of ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18003E5F4
 * Callers:
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18003E0D8 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDrawVisualTreeInstruction@@AEAA@XZ @ 0x18003E6A8 (--0CDrawVisualTreeInstruction@@AEAA@XZ.c)
 *     ?Initialize@CDrawVisualTreeInstruction@@AEAAJPEAVCVisual@@@Z @ 0x18003F5CC (-Initialize@CDrawVisualTreeInstruction@@AEAAJPEAVCVisual@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDrawVisualTreeInstruction::Create(struct CVisual *a1, struct CDrawVisualTreeInstruction **a2)
{
  CDrawVisualTreeInstruction *v4; // rax
  CDrawVisualTreeInstruction *v5; // rax
  CBaseObject *v6; // rdi
  unsigned int v7; // ebx
  int v9; // eax

  v4 = (CDrawVisualTreeInstruction *)DefaultHeap::AllocClear(0x18uLL);
  if ( v4 && (v5 = CDrawVisualTreeInstruction::CDrawVisualTreeInstruction(v4), (v6 = v5) != 0LL) )
  {
    v9 = CDrawVisualTreeInstruction::Initialize(v5, a1);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x2Du, 0LL);
      CBaseObject::Release(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2Bu, 0LL);
  }
  return v7;
}
