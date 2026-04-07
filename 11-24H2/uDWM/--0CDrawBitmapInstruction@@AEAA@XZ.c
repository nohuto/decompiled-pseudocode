/*
 * XREFs of ??0CDrawBitmapInstruction@@AEAA@XZ @ 0x180064100
 * Callers:
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x180064008 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x18001F8CC (--0CRenderDataInstruction@@QEAA@XZ.c)
 */

CDrawBitmapInstruction *__fastcall CDrawBitmapInstruction::CDrawBitmapInstruction(CDrawBitmapInstruction *this)
{
  CDrawBitmapInstruction *v1; // rcx
  CDrawBitmapInstruction *result; // rax

  CRenderDataInstruction::CRenderDataInstruction(this);
  result = v1;
  *(_QWORD *)v1 = &CDrawBitmapInstruction::`vftable';
  return result;
}
