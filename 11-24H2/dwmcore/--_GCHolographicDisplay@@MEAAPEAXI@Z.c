/*
 * XREFs of ??_GCHolographicDisplay@@MEAAPEAXI@Z @ 0x1802D1170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x180132ECC (--1CResource@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CHolographicDisplay *__fastcall CHolographicDisplay::`scalar deleting destructor'(CHolographicDisplay *this, char a2)
{
  *(_QWORD *)this = &CHolographicDisplay::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 10) = &CHolographicDisplay::`vftable'{for `IHolographicDisplayInfo'};
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
