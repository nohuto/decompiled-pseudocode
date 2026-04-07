/*
 * XREFs of ??1CSolidRectangleInstruction@@EEAA@XZ @ 0x1800759CC
 * Callers:
 *     ??_ECSolidRectangleInstruction@@EEAAPEAXI@Z @ 0x180075980 (--_ECSolidRectangleInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSolidRectangleInstruction::~CSolidRectangleInstruction(CSolidRectangleInstruction *this)
{
  *(_QWORD *)this = &CSolidRectangleInstruction::`vftable';
  CRenderDataInstruction::~CRenderDataInstruction(this);
}
