/*
 * XREFs of ??0CDrawVisualTreeInstruction@@AEAA@XZ @ 0x18003E6A8
 * Callers:
 *     ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18003E5F4 (-Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x18001F8CC (--0CRenderDataInstruction@@QEAA@XZ.c)
 */

CDrawVisualTreeInstruction *__fastcall CDrawVisualTreeInstruction::CDrawVisualTreeInstruction(
        CDrawVisualTreeInstruction *this)
{
  CDrawVisualTreeInstruction *v1; // rcx
  CDrawVisualTreeInstruction *result; // rax

  CRenderDataInstruction::CRenderDataInstruction(this);
  result = v1;
  *(_QWORD *)v1 = &CDrawVisualTreeInstruction::`vftable';
  return result;
}
