/*
 * XREFs of ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800D9548
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DEB20 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     _CAppArrangementDelayed::_WindowEnumCallback_::_1_::dtor$0 @ 0x1800DF678 (_CAppArrangementDelayed--_WindowEnumCallback_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::~CAutoRestoreAnimationWindowData(CWindowData **this)
{
  CWindowData *v1; // rdx

  v1 = this[108];
  if ( v1 )
  {
    *((_DWORD *)v1 + 170) = *((_DWORD *)this + 170);
    *(_OWORD *)((char *)this[108] + 684) = *(_OWORD *)((char *)this + 684);
    *(_OWORD *)((char *)this[108] + 700) = *(_OWORD *)((char *)this + 700);
    *(_OWORD *)((char *)this[108] + 716) = *(_OWORD *)((char *)this + 716);
    *(_OWORD *)((char *)this[108] + 732) = *(_OWORD *)((char *)this + 732);
  }
  CWindowData::~CWindowData(this);
}
