/*
 * XREFs of ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x180068CF0
 * Callers:
 *     ?Delete@CResource@@IEAAXXZ @ 0x180069460 (-Delete@CResource@@IEAAXXZ.c)
 * Callees:
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x1800680E0 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CSpriteVisual *__fastcall CSpriteVisual::`scalar deleting destructor'(CSpriteVisual *this, char a2)
{
  CSpriteVisual::~CSpriteVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 672LL);
    else
      operator delete(this);
  }
  return this;
}
