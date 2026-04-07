/*
 * XREFs of ??0CSolidRectangleInstruction@@AEAA@XZ @ 0x18006641C
 * Callers:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180066354 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataInstruction@@QEAA@XZ @ 0x18001F8CC (--0CRenderDataInstruction@@QEAA@XZ.c)
 */

CSolidRectangleInstruction *__fastcall CSolidRectangleInstruction::CSolidRectangleInstruction(
        CSolidRectangleInstruction *this)
{
  CSolidRectangleInstruction *v1; // rcx
  CSolidRectangleInstruction *result; // rax

  CRenderDataInstruction::CRenderDataInstruction(this);
  result = v1;
  *(_QWORD *)v1 = &CSolidRectangleInstruction::`vftable';
  return result;
}
