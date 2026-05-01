/*
 * XREFs of ??$Start@$$V@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x180083C10
 * Callers:
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1800837E0 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?StartActivity@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1800836A0 (-StartActivity@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *__fastcall TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::Start<>(
        TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *this)
{
  char *v2; // rbx
  _QWORD *v3; // rcx

  v2 = (char *)this + 8;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 12) = 0;
  *((_BYTE *)this + 72) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = "OnApplicationFramePositionChanged";
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 20) = 0;
  v3 = (_QWORD *)((char *)this + 88);
  v3[19] = 0LL;
  v3[20] = 0LL;
  memset_0(v3, 0, 0x98uLL);
  *((_DWORD *)v2 + 62) = 1;
  *((_QWORD *)v2 + 32) = 0LL;
  *((_QWORD *)this + 34) = v2;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = this;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 40) = (char *)this + 48;
  *((_BYTE *)this + 328) = 0;
  *(_QWORD *)this = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::StartActivity(this);
  return this;
}
