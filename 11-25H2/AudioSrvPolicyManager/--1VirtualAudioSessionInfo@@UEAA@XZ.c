/*
 * XREFs of ??1VirtualAudioSessionInfo@@UEAA@XZ @ 0x180028648
 * Callers:
 *     ??_EVirtualAudioSessionInfo@@UEAAPEAXI@Z @ 0x1800288E0 (--_EVirtualAudioSessionInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall VirtualAudioSessionInfo::~VirtualAudioSessionInfo(VirtualAudioSessionInfo *this)
{
  CoTaskMemFree(*((LPVOID *)this + 3));
  *((_QWORD *)this + 3) = 0LL;
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
