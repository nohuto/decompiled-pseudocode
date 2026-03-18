/*
 * XREFs of ??_GCDropShadow@@EEAAPEAXI@Z @ 0x1800C02F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDropShadow@@EEAA@XZ @ 0x1800C033C (--1CDropShadow@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CDropShadow *__fastcall CDropShadow::`scalar deleting destructor'(CDropShadow *this, char a2)
{
  CDropShadow::~CDropShadow(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 272LL);
    else
      operator delete(this);
  }
  return this;
}
