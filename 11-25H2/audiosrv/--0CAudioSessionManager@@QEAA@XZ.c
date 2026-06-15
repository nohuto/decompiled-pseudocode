/*
 * XREFs of ??0CAudioSessionManager@@QEAA@XZ @ 0x1800A70FC
 * Callers:
 *     ??$make_unique@VCAudioSessionManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@0@XZ @ 0x1800A56D0 (--$make_unique@VCAudioSessionManager@@$$V$0A@@std@@YA-AV-$unique_ptr@VCAudioSessionManager@@U-$d.c)
 * Callees:
 *     ??0?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180021710 (--0-$forward_list@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevicePr.c)
 *     ??0?$unordered_map@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@5@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@QEAA@XZ @ 0x180022128 (--0-$unordered_map@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy.c)
 */

// Hidden C++ exception states: #wind=1
CAudioSessionManager *__fastcall CAudioSessionManager::CAudioSessionManager(CAudioSessionManager *this)
{
  *(_QWORD *)this = &CAudioSessionManager::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 8), 0, 0);
  std::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>((__int64)this + 48);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 112), 0, 0);
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 176), 0, 0);
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_OWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 7LL;
  *((_WORD *)this + 120) = 0;
  *((_DWORD *)this + 69) = 0;
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>((_QWORD *)this + 36);
  *((_QWORD *)this + 37) = 0LL;
  return this;
}
