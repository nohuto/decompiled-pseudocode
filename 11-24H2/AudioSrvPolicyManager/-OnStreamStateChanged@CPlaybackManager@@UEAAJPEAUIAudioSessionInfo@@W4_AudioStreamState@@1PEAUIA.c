/*
 * XREFs of ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800028C0
 * Callers:
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18001ACB0 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x1800293A0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180029570 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStrea.c)
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800033B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003A79C (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003A8EC (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPlaybackManager::OnStreamStateChanged(
        CPlaybackManager *a1,
        __int64 a2,
        int a3,
        int a4,
        struct IAudioStreamInfo *a5)
{
  int v8; // eax
  unsigned int v9; // r15d
  int v11; // eax
  unsigned int v12; // r15d
  __int64 v13; // rax
  const struct _tlgProvider_t *v14; // r15
  wchar_t *v15; // rdi
  _WORD *v16; // rbx
  _WORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // eax
  ULONG UserDataCount; // [rsp+20h] [rbp-A1h]
  int v25; // [rsp+30h] [rbp-91h] BYREF
  _DWORD v26[3]; // [rsp+34h] [rbp-8Dh] BYREF
  __int64 v27; // [rsp+40h] [rbp-81h] BYREF
  __int64 v28; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-61h] BYREF
  void *v31; // [rsp+70h] [rbp-51h]
  int v32; // [rsp+78h] [rbp-49h]
  int v33; // [rsp+7Ch] [rbp-45h]
  _WORD *v34; // [rsp+80h] [rbp-41h]
  int v35; // [rsp+88h] [rbp-39h]
  int v36; // [rsp+8Ch] [rbp-35h]
  _WORD *v37; // [rsp+90h] [rbp-31h]
  int v38; // [rsp+98h] [rbp-29h]
  int v39; // [rsp+9Ch] [rbp-25h]
  wchar_t *v40; // [rsp+A0h] [rbp-21h]
  int v41; // [rsp+A8h] [rbp-19h]
  int v42; // [rsp+ACh] [rbp-15h]
  _DWORD *v43; // [rsp+B0h] [rbp-11h]
  __int64 v44; // [rsp+B8h] [rbp-9h]
  int *v45; // [rsp+C0h] [rbp-1h]
  __int64 v46; // [rsp+C8h] [rbp+7h]
  __int64 *v47; // [rsp+D0h] [rbp+Fh]
  __int64 v48; // [rsp+D8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  if ( !*((_BYTE *)a1 + 16) )
  {
    if ( a4 == 1 )
    {
      v8 = CPlaybackManager::QueueStreamStartedWorkItem(a1, a5);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x22,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
          (const char *)(unsigned int)v8,
          UserDataCount);
        return v9;
      }
    }
    else if ( !a4 )
    {
      v11 = CPlaybackManager::QueueStreamStoppedWorkItem(a1, a5);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
          (const char *)(unsigned int)v11,
          UserDataCount);
        return v12;
      }
    }
    v13 = *(_QWORD *)a5;
    v27 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v13 + 24))(a5, &v27) >= 0 )
    {
      v14 = AudioSrvPolicyManagerTelemetryProvider::Provider();
      if ( *(_DWORD *)v14 > 4u )
      {
        v28 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a5 + 80LL))(a5);
        v25 = a4;
        v26[0] = a3;
        v15 = off_18004D020[(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a5 + 48LL))(a5)];
        v16 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 72LL))(v27);
        v17 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
        v47 = &v28;
        v48 = 8LL;
        v45 = &v25;
        v46 = 4LL;
        v43 = v26;
        v44 = 4LL;
        v18 = -1LL;
        if ( v15 )
        {
          v19 = -1LL;
          do
            ++v19;
          while ( v15[v19] );
          v20 = 2 * v19 + 2;
        }
        else
        {
          v15 = (wchar_t *)&unk_1800537F0;
          v20 = 2;
        }
        v40 = v15;
        v41 = v20;
        v42 = 0;
        if ( v16 )
        {
          v21 = -1LL;
          do
            ++v21;
          while ( v16[v21] );
          v22 = 2 * v21 + 2;
        }
        else
        {
          v16 = &unk_1800537F0;
          v22 = 2;
        }
        v37 = v16;
        v38 = v22;
        v39 = 0;
        if ( v17 )
        {
          do
            ++v18;
          while ( v17[v18] );
          v23 = 2 * v18 + 2;
        }
        else
        {
          v17 = &unk_1800537F0;
          v23 = 2;
        }
        v34 = v17;
        v35 = v23;
        v36 = 0;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        *(_DWORD *)&EventDescriptor.Level = 4;
        EventDescriptor.Keyword = 0LL;
        UserData.Ptr = *((_QWORD *)v14 + 1);
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        UserData.Reserved = 2;
        v31 = &unk_180057CDE;
        v32 = 81;
        v33 = 1;
        v26[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(*((_QWORD *)v14 + 4), &EventDescriptor, 0LL, 0LL, 8u, &UserData);
      }
    }
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return 0LL;
}
