/*
 * XREFs of ?UnregisterAudioStateMonitor@CProcess@@UEAAJPEA_K@Z @ 0x1800349E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcess::UnregisterAudioStateMonitor(CProcess *this, unsigned __int64 *a2)
{
  AudioStateMonitorManager *v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (AudioStateMonitorManager *)*((_QWORD *)this + 88);
  if ( v2 )
    return AudioStateMonitorManager::UnregisterAudioStateMonitor(v2, a2);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10C3,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
    (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
