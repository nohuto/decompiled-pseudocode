/*
 * XREFs of ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18010F338
 * Callers:
 *     _lambda_3b73ff2569e561dad9eb72264095be37_::operator() @ 0x1800F3F40 (_lambda_3b73ff2569e561dad9eb72264095be37_--operator().c)
 *     _lambda_baabfe6539d220bfd12b707881e6aaaa_::operator() @ 0x1800F4404 (_lambda_baabfe6539d220bfd12b707881e6aaaa_--operator().c)
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x1800F4F70 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 *     ?CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x1800F52E0 (-CreateStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DES.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z @ 0x18005349C (-move_from_blob@SystemAudioStream@@SAJPEAUCP_EVENT_METADATA_BLOB@@PEAPEAUICrossProcessEvent@@0@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180059E78 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@KPEAPEAUICrossProcessMemory@@0@Z @ 0x18010F1C0 (-move_from_blob@SystemAudioStream@@SAJPEAUCP_MEMORY_METADATA_BLOB@@KPEAPEAUICrossProcessMemory@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemAudioStream::move_initialize_from(
        SystemAudioStream *this,
        unsigned int a2,
        struct SYSTEM_AUDIO_STREAM *a3)
{
  struct ICrossProcessEvent **v6; // rsi
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (struct ICrossProcessEvent **)((char *)this + 656);
  v7 = *((_QWORD *)this + 82);
  *v6 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = SystemAudioStream::move_from_blob(
         (struct SYSTEM_AUDIO_STREAM *)((char *)a3 + 640),
         v6,
         (SystemAudioStream *)((char *)this + 664));
  if ( v8 < 0 )
  {
    v9 = 134LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v11 = *((_QWORD *)this + 44);
  *((_QWORD *)this + 44) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v8 = SystemAudioStream::move_from_blob(
         (struct SYSTEM_AUDIO_STREAM *)((char *)a3 + 344),
         (struct ICrossProcessEvent **)this + 44,
         (SystemAudioStream *)((char *)this + 360));
  if ( v8 < 0 )
  {
    v9 = 135LL;
    goto LABEL_5;
  }
  v12 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v8 = SystemAudioStream::move_from_blob(
         (struct SYSTEM_AUDIO_STREAM *)((char *)a3 + 48),
         (struct ICrossProcessEvent **)this + 6,
         (SystemAudioStream *)((char *)this + 56));
  if ( v8 < 0 )
  {
    v9 = 136LL;
    goto LABEL_5;
  }
  v13 = *((_QWORD *)this + 121);
  *((_QWORD *)this + 121) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v8 = SystemAudioStream::move_from_blob(
         (struct SYSTEM_AUDIO_STREAM *)((char *)a3 + 944),
         a2,
         (struct ICrossProcessMemory **)this + 121,
         (SystemAudioStream *)((char *)this + 976));
  if ( v8 < 0 )
  {
    v9 = 137LL;
    goto LABEL_5;
  }
  *(_OWORD *)this = *(_OWORD *)a3;
  *((_DWORD *)this + 4) = *((_DWORD *)a3 + 4);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 3,
    *((void **)a3 + 3));
  *((_QWORD *)this + 4) = *((_QWORD *)a3 + 4);
  *((_DWORD *)this + 240) = *((_DWORD *)a3 + 234);
  *((_DWORD *)this + 318) = *((_DWORD *)a3 + 310);
  *((_DWORD *)this + 319) = *((_DWORD *)a3 + 311);
  *((_DWORD *)this + 320) = *((_DWORD *)a3 + 312);
  return 0LL;
}
