/*
 * XREFs of ??1SystemAudioStream@@QEAA@XZ @ 0x18002682C
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x18002666C (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008C450 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?ClearAudioHandle@CAudioStream@@QEAAJXZ @ 0x1800C8F40 (-ClearAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     _lambda_a4cb84fa65d51627a0f7f0ac7469365e_::operator() @ 0x1800EF1F4 (_lambda_a4cb84fa65d51627a0f7f0ac7469365e_--operator().c)
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x1800EFF40 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 *     __lambda_a4cb84fa65d51627a0f7f0ac7469365e_::operator()_::_1_::dtor$8 @ 0x180166574 (__lambda_a4cb84fa65d51627a0f7f0ac7469365e_--operator()_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemAudioStream::~SystemAudioStream(SystemAudioStream *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  char *v7; // rcx

  v2 = *((_QWORD *)this + 121);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 82);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 44);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (char *)*((_QWORD *)this + 3);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
}
