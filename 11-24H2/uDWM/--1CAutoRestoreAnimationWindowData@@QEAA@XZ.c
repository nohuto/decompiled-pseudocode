/*
 * XREFs of ??1CAutoRestoreAnimationWindowData@@QEAA@XZ @ 0x1800D1740
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D5B40 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     _CAppArrangementDelayed::_WindowEnumCallback_::_1_::dtor$0 @ 0x1800F86A5 (_CAppArrangementDelayed--_WindowEnumCallback_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoRestoreAnimationWindowData::~CAutoRestoreAnimationWindowData(
        CAutoRestoreAnimationWindowData *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 116);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 744) = *((_DWORD *)this + 186);
    *(_OWORD *)(*((_QWORD *)this + 116) + 748LL) = *(_OWORD *)((char *)this + 748);
    *(_OWORD *)(*((_QWORD *)this + 116) + 764LL) = *(_OWORD *)((char *)this + 764);
    *(_OWORD *)(*((_QWORD *)this + 116) + 780LL) = *(_OWORD *)((char *)this + 780);
    *(_OWORD *)(*((_QWORD *)this + 116) + 796LL) = *(_OWORD *)((char *)this + 796);
  }
  CWindowData::~CWindowData(this);
}
