/*
 * XREFs of ??_ECPoolBufferResource@@UEAAPEAXI@Z @ 0x140056B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPoolBufferResource@@UEAA@XZ @ 0x140056B78 (--1CPoolBufferResource@@UEAA@XZ.c)
 */

CPoolBufferResource *__fastcall CPoolBufferResource::`vector deleting destructor'(CPoolBufferResource *P, char a2)
{
  CPoolBufferResource::~CPoolBufferResource(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
