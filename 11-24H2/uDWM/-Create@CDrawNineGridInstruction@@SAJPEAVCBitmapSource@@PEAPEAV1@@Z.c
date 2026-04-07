/*
 * XREFs of ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18003A8E4
 * Callers:
 *     ?GetDrawNineGridInstruction@CBitmapSource@@QEAAJPEAPEAVCDrawNineGridInstruction@@@Z @ 0x18003A8A4 (-GetDrawNineGridInstruction@CBitmapSource@@QEAAJPEAPEAVCDrawNineGridInstruction@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDrawNineGridInstruction@@IEAA@XZ @ 0x18003A998 (--0CDrawNineGridInstruction@@IEAA@XZ.c)
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18003ABC8 (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Create(struct CBitmapSource *a1, struct CDrawNineGridInstruction **a2)
{
  CDrawNineGridInstruction *v4; // rax
  CDrawNineGridInstruction *v5; // rax
  CBaseObject *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx

  v4 = (CDrawNineGridInstruction *)DefaultHeap::AllocClear(0x80uLL);
  if ( v4 && (v5 = CDrawNineGridInstruction::CDrawNineGridInstruction(v4), (v6 = v5) != 0LL) )
  {
    v7 = CDrawNineGridInstruction::Initialize(v5, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x33u, 0LL);
      CBaseObject::Release(v6);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x31u, 0LL);
  }
  return v8;
}
