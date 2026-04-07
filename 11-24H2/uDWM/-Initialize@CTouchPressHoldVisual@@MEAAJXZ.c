/*
 * XREFs of ?Initialize@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800DBCB0
 * Callers:
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x1800B65D0 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 * Callees:
 *     ?Initialize@CTouchVisual@@MEAAJXZ @ 0x18000C560 (-Initialize@CTouchVisual@@MEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001B720 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTouchPressHoldVisual::Initialize(CTouchPressHoldVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi

  v2 = CTouchVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x23u, 0LL);
  }
  else
  {
    *((_DWORD *)this + 64) = 0;
    *((_DWORD *)this + 68) = 90;
    *((_DWORD *)this + 67) = 90;
    *(_QWORD *)((char *)this + 276) = *(_QWORD *)((char *)this + 268);
    *(_QWORD *)((char *)this + 284) = 0LL;
    *((_DWORD *)this + 73) = 100;
    *((_QWORD *)this + 37) = 0LL;
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
    CVisual::SetOpacity(this, 0.0);
  }
  return v3;
}
