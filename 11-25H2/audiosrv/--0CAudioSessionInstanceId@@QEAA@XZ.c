/*
 * XREFs of ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180018118
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180017A90 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     AudioSessionManagerGetExistingSession @ 0x180028F10 (AudioSessionManagerGetExistingSession.c)
 *     ??0CVADServer@@QEAA@XZ @ 0x18002BD04 (--0CVADServer@@QEAA@XZ.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x18002C618 (--0CAudioSession@@IEAA@XZ.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180048C00 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CAudioSessionInstanceId *__fastcall CAudioSessionInstanceId::CAudioSessionInstanceId(CAudioSessionInstanceId *this)
{
  *(_QWORD *)this = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 1) = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 2) = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 5) = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  *(GUID *)((char *)this + 24) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 15) = -1;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  return this;
}
