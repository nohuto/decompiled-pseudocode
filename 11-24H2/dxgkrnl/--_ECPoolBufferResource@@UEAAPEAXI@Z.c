/*
 * XREFs of ??_ECPoolBufferResource@@UEAAPEAXI@Z @ 0x1400563E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPoolBufferResource@@UEAA@XZ @ 0x140056428 (--1CPoolBufferResource@@UEAA@XZ.c)
 */

CPoolBufferResource *__fastcall CPoolBufferResource::`vector deleting destructor'(CPoolBufferResource *P, char a2)
{
  CPoolBufferResource::~CPoolBufferResource(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
