/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x18029C1C4
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x18029C200 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  operator delete(this[40]);
  CBaseExpression::~CBaseExpression(this);
}
