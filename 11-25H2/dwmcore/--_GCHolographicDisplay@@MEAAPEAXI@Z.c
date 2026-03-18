/*
 * XREFs of ??_GCHolographicDisplay@@MEAAPEAXI@Z @ 0x1802DA410
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x1800697AC (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
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
