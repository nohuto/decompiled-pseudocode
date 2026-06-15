/*
 * XREFs of ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x1800336B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@@Z @ 0x18002F9B4 (--$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@.c)
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18004496C (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::RegisterAudioStateMonitor(
        CProcess *this,
        enum AUDIO_DIRECTION *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4,
        unsigned __int64 *a5)
{
  AudioStateMonitorManager **v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CProcess *v13; // [rsp+50h] [rbp+8h] BYREF

  v8 = (AudioStateMonitorManager **)((char *)this + 704);
  if ( *((_QWORD *)this + 88) )
    return AudioStateMonitorManager::RegisterAudioStateMonitor(*v8, a2, a3, a4, a5);
  v13 = this;
  *v8 = 0LL;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<AudioStateMonitorManager,AudioStateMonitorManager,CWindowsPolicyManager * &,CProcess *>(
         (AudioStateMonitorManager **)this + 88,
         a2,
         &v13);
  v10 = v9;
  if ( v9 >= 0 )
    return AudioStateMonitorManager::RegisterAudioStateMonitor(*v8, a2, a3, a4, a5);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10BB,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
