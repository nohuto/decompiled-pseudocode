/*
 * XREFs of ??_ECFlipPresentCancel@@UEAAPEAXI@Z @ 0x14009E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipQueuedObject@@MEAA@XZ @ 0x140017FE0 (--1CFlipQueuedObject@@MEAA@XZ.c)
 */

CFlipQueuedObject *__fastcall CFlipPresentCancel::`vector deleting destructor'(CFlipQueuedObject *P, char a2)
{
  *(_QWORD *)P = &CFlipPresentCancel::`vftable';
  CFlipQueuedObject::~CFlipQueuedObject(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
