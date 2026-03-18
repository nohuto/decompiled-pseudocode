/*
 * XREFs of ??1CPoolBufferResource@@UEAA@XZ @ 0x140056428
 * Callers:
 *     ??_ECPoolBufferResource@@UEAAPEAXI@Z @ 0x1400563E0 (--_ECPoolBufferResource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipResource@@MEAA@XZ @ 0x140056470 (--1CFlipResource@@MEAA@XZ.c)
 */

void __fastcall CPoolBufferResource::~CPoolBufferResource(PVOID *this)
{
  *this = &CPoolBufferResource::`vftable';
  ObfDereferenceObject(this[7]);
  ObfDereferenceObject(this[8]);
  CFlipResource::~CFlipResource((CFlipResource *)this);
}
