/*
 * XREFs of ?HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18021D2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x1801DAB34 (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 *     ?LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ @ 0x1801DAB98 (-LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ.c)
 *     ??$HandleDisplayChanged@AEB_NAEB_NAEB_NAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N00AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180230BFC (--$HandleDisplayChanged@AEB_NAEB_NAEB_NAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Touch.c)
 *     ?IsValid@MonitorInformation@KeyboardHosting@@QEAA_NXZ @ 0x180254D7C (-IsValid@MonitorInformation@KeyboardHosting@@QEAA_NXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleDisplayChanged(
        RTL_SRWLOCK *this,
        enum Windows::Internal::Shell::Text::ShellRequestType *a2)
{
  int updated; // eax
  unsigned int v5; // ebx
  bool v7; // r15
  bool v8; // si
  bool v9; // al
  bool v10; // bp
  HMONITOR v11; // rax
  HMONITOR v12; // rbx
  HMONITOR PinnedMonitor; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v15; // [rsp+68h] [rbp+10h] BYREF
  bool v16; // [rsp+70h] [rbp+18h] BYREF
  bool IsValid; // [rsp+78h] [rbp+20h] BYREF

  *(_DWORD *)a2 = 0;
  updated = UpdateScalingInfoCache();
  v5 = updated;
  if ( updated >= 0 )
  {
    IsValid = KeyboardHosting::MonitorInformation::IsValid((KeyboardHosting::MonitorInformation *)&this[27]);
    v7 = IsValid;
    v16 = KeyboardHosting::MonitorInformation::IsValid((KeyboardHosting::MonitorInformation *)&this[69]);
    v8 = v16;
    v9 = KeyboardHosting::MonitorInformation::IsValid((KeyboardHosting::MonitorInformation *)&this[48]);
    v15 = v9;
    v10 = v9;
    if ( !v7 || !v8 || !v9 )
    {
      v11 = MonitorFromWindow(0LL, 1u);
      v12 = v11;
      if ( !v7 )
        KeyboardHosting::MonitorInformation::SetMonitor(this + 27, v11);
      if ( !v8 )
        KeyboardHosting::MonitorInformation::SetMonitor(this + 69, v12);
      if ( !v10 )
      {
        PinnedMonitor = KeyboardHosting::TabTipAdapterPolicy::LoadPinnedMonitor((KeyboardHosting::TabTipAdapterPolicy *)&this[-2]);
        if ( PinnedMonitor )
          v12 = PinnedMonitor;
        KeyboardHosting::MonitorInformation::SetMonitor(this + 48, v12);
      }
    }
    *(_DWORD *)a2 = 3;
    TouchKeyboardExperienceTelemetryLogger::HandleDisplayChanged<bool const &,bool const &,bool const &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
      &IsValid,
      &v16,
      &v15,
      a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
    return v5;
  }
}
