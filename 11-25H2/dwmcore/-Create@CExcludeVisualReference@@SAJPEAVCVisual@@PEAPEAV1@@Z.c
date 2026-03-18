/*
 * XREFs of ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18013B730
 * Callers:
 *     ?AppendVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x18013B638 (-AppendVisuals@CVisualGroup@@QEAAJV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180198818 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180298E4C (-AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z @ 0x18013B7A8 (--0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z.c)
 */

__int64 __fastcall CExcludeVisualReference::Create(struct CVisual *a1, struct CExcludeVisualReference **a2)
{
  unsigned int v2; // ebx
  CExcludeVisualReference *v5; // rax
  struct CExcludeVisualReference *v6; // rax

  v2 = 0;
  *a2 = 0LL;
  v5 = (CExcludeVisualReference *)MIDL_user_allocate(0x18uLL);
  if ( v5 && (v6 = CExcludeVisualReference::CExcludeVisualReference(v5, a1)) != 0LL )
  {
    *a2 = v6;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v2;
}
