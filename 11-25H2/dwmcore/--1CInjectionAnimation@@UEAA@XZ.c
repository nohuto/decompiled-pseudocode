/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x1802A5F4C
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x1802A5F80 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  operator delete(this[40]);
  CBaseExpression::~CBaseExpression(this);
}
