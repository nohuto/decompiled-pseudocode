/*
 * XREFs of ??_GCFlipPresentUpdate@@UEAAPEAXI@Z @ 0x140017F30
 * Callers:
 *     ??_ECFlipPresentUpdate@@WBA@EAAPEAXI@Z @ 0x14009E9C0 (--_ECFlipPresentUpdate@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x140017F74 (--1CFlipPresentUpdate@@UEAA@XZ.c)
 */

CFlipPresentUpdate *__fastcall CFlipPresentUpdate::`scalar deleting destructor'(CFlipPresentUpdate *P, char a2)
{
  CFlipPresentUpdate::~CFlipPresentUpdate(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
