/*
 * XREFs of ??0CWindowData@@QEAA@XZ @ 0x180047F08
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18000FE38 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180017360 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180017430 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180018410 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A720 (-ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EB90 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800342D0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800347D0 (-FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003CF00 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180041680 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180043580 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180047370 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180047970 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180048EE0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x18004BBA8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x18004BF24 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18004CE90 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DEB20 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106658 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1801094A0 (-CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     IsOpenThemeDataPresent @ 0x18005DB28 (IsOpenThemeDataPresent.c)
 */

CWindowData *__fastcall CWindowData::CWindowData(CWindowData *this)
{
  bool v2; // cf
  char v3; // al
  CWindowData *result; // rax

  *((_QWORD *)this + 2) = (char *)this + 804;
  *(_OWORD *)((char *)this + 300) = 0LL;
  *((_DWORD *)this + 82) = 96;
  *((_QWORD *)this + 40) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 114) = 0;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = 0;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_DWORD *)this + 148) = 0;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_DWORD *)this + 158) = 0;
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  v2 = (unsigned __int8)IsOpenThemeDataPresent(this) != 0;
  *((_BYTE *)this + 408) = -1;
  v3 = *((_BYTE *)this + 672);
  *((_DWORD *)this + 170) = 4095;
  *((_BYTE *)this + 673) |= 0x40u;
  *(_QWORD *)((char *)this + 196) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_BYTE *)this + 676) |= 0x10u;
  *((_BYTE *)this + 672) = (v2 ? 8 : 0) | v3 & 0xF7;
  *((_DWORD *)this + 83) = 1065353216;
  *((_DWORD *)this + 52) = 1065353216;
  *((_DWORD *)this + 53) = 1065353216;
  result = this;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  return result;
}
