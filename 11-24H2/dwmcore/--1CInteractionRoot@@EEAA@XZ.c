/*
 * XREFs of ??1CInteractionRoot@@EEAA@XZ @ 0x18021C54C
 * Callers:
 *     ??_ECInteractionRoot@@EEAAPEAXI@Z @ 0x18021C500 (--_ECInteractionRoot@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x18009561C (--1CInteractionProcessor@@QEAA@XZ.c)
 */

void __fastcall CInteractionRoot::~CInteractionRoot(CInteractionRoot *this)
{
  CInteractionProcessor::~CInteractionProcessor((CInteractionRoot *)((char *)this + 24));
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 2);
}
