/*
 * XREFs of ??_ECRenderDataInstruction@@UEAAPEAXI@Z @ 0x18002EDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CRenderDataInstruction@@UEAA@XZ @ 0x18002EDD8 (--1CRenderDataInstruction@@UEAA@XZ.c)
 */

CRenderDataInstruction *__fastcall CRenderDataInstruction::`vector deleting destructor'(
        CRenderDataInstruction *this,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CRenderDataInstruction::~CRenderDataInstruction(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
