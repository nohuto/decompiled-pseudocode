/*
 * XREFs of ??0CRectangleInstruction@@AEAA@XZ @ 0x180033794
 * Callers:
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x1800336C4 (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x18001F8CC (--0CRenderDataInstruction@@QEAA@XZ.c)
 */

CRectangleInstruction *__fastcall CRectangleInstruction::CRectangleInstruction(CRectangleInstruction *this)
{
  CRectangleInstruction *v1; // rcx
  CRectangleInstruction *result; // rax

  CRenderDataInstruction::CRenderDataInstruction(this);
  result = v1;
  *(_QWORD *)v1 = &CRectangleInstruction::`vftable';
  *((_QWORD *)v1 + 2) = 0LL;
  *((_QWORD *)v1 + 3) = 0LL;
  return result;
}
