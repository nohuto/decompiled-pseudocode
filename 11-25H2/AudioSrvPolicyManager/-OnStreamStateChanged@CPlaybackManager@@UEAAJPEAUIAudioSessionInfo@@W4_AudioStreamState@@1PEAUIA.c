/*
 * XREFs of ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000AE30
 * Callers:
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18001AB80 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4_AudioStreamState@@3@Z @ 0x18002ADD0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@PEBGKW4__MIDL___M.c)
 *     ?NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18002AFA0 (-NotifyVirtualStreamStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStrea.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000B8F0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003CFBC (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003D10C (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v24; // [rsp+30h] [rbp-91h] BYREF
  _DWORD v25[3]; // [rsp+34h] [rbp-8Dh] BYREF
  __int64 v26; // [rsp+40h] [rbp-81h] BYREF
  __int64 v27; // [rsp+48h] [rbp-79h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-61h] BYREF
  void *v30; // [rsp+70h] [rbp-51h]
  int v31; // [rsp+78h] [rbp-49h]
  int v32; // [rsp+7Ch] [rbp-45h]
  _WORD *v33; // [rsp+80h] [rbp-41h]
  int v34; // [rsp+88h] [rbp-39h]
  int v35; // [rsp+8Ch] [rbp-35h]
  _WORD *v36; // [rsp+90h] [rbp-31h]
  int v37; // [rsp+98h] [rbp-29h]
  int v38; // [rsp+9Ch] [rbp-25h]
  wchar_t *v39; // [rsp+A0h] [rbp-21h]
  int v40; // [rsp+A8h] [rbp-19h]
  int v41; // [rsp+ACh] [rbp-15h]
  _DWORD *v42; // [rsp+B0h] [rbp-11h]
  __int64 v43; // [rsp+B8h] [rbp-9h]
  int *v44; // [rsp+C0h] [rbp-1h]
  __int64 v45; // [rsp+C8h] [rbp+7h]
  __int64 *v46; // [rsp+D0h] [rbp+Fh]
  __int64 v47; // [rsp+D8h] [rbp+17h]
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
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
          (const char *)(unsigned int)v8);
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
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
    }
    v13 = *(_QWORD *)a5;
    v26 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v13 + 24))(a5, &v26) >= 0 )
    {
      v14 = AudioSrvPolicyManagerTelemetryProvider::Provider();
      if ( *(_DWORD *)v14 > 4u )
      {
        v27 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a5 + 80LL))(a5);
        v24 = a4;
        v25[0] = a3;
        v15 = off_180050020[(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a5 + 48LL))(a5)];
        v16 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 72LL))(v26);
        v17 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
        v46 = &v27;
        v47 = 8LL;
        v44 = &v24;
        v45 = 4LL;
        v42 = v25;
        v43 = 4LL;
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
          v15 = (wchar_t *)&unk_180056790;
          v20 = 2;
        }
        v39 = v15;
        v40 = v20;
        v41 = 0;
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
          v16 = &unk_180056790;
          v22 = 2;
        }
        v36 = v16;
        v37 = v22;
        v38 = 0;
        if ( v17 )
        {
          do
            ++v18;
          while ( v17[v18] );
          v23 = 2 * v18 + 2;
        }
        else
        {
          v17 = &unk_180056790;
          v23 = 2;
        }
        v33 = v17;
        v34 = v23;
        v35 = 0;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        *(_DWORD *)&EventDescriptor.Level = 4;
        EventDescriptor.Keyword = 0LL;
        UserData.Ptr = *((_QWORD *)v14 + 1);
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        UserData.Reserved = 2;
        v30 = &unk_18005AD26;
        v31 = 81;
        v32 = 1;
        v25[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(*((_QWORD *)v14 + 4), &EventDescriptor, 0LL, 0LL, 8u, &UserData);
      }
    }
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return 0LL;
}
