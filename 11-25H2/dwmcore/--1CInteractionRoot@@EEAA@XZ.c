/*
 * XREFs of ??1CInteractionRoot@@EEAA@XZ @ 0x180227F4C
 * Callers:
 *     ??_ECInteractionRoot@@EEAAPEAXI@Z @ 0x180227F00 (--_ECInteractionRoot@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x18013A5A0 (--1CInteractionProcessor@@QEAA@XZ.c)
 */

void __fastcall CInteractionRoot::~CInteractionRoot(CInteractionRoot *this)
{
  CInteractionProcessor::~CInteractionProcessor((CInteractionRoot *)((char *)this + 24));
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 2);
}
