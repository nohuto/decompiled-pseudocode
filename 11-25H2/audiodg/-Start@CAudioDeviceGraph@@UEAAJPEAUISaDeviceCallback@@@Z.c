/*
 * XREFs of ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x140014020
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAAEAPEAVCConnectionInstance@@XZ @ 0x140014480 (-GetTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140014918 (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 *     ?Start@CPipeInstance@@QEAAJXZ @ 0x140014A74 (-Start@CPipeInstance@@QEAAJXZ.c)
 *     ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x140014D6C (-Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::Start(CAudioDeviceGraph *this, struct ISaDeviceCallback *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int StreamingResourceManagerInternal; // eax
  struct IAudioStreamingResourceRegistration *v6; // rbx
  void (__fastcall *v7)(struct IAudioStreamingResourceRegistration *, __int64); // rdi
  __int64 v8; // rax
  _QWORD *v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // edi
  _QWORD *v14; // r12
  CPipeInstance *v15; // rcx
  int v16; // eax
  unsigned int v17; // r13d
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  const struct _tlgProvider_t *v23; // rax
  __int64 v24; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v25[2]; // [rsp+38h] [rbp-48h] BYREF
  struct IAudioStreamingResourceRegistration *v26; // [rsp+48h] [rbp-38h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int16 *v28; // [rsp+58h] [rbp-28h] BYREF
  int v29; // [rsp+60h] [rbp-20h]
  int v30; // [rsp+64h] [rbp-1Ch]
  void *v31; // [rsp+68h] [rbp-18h]
  int v32; // [rsp+70h] [rbp-10h]
  int v33; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    v26 = 0LL;
    StreamingResourceManagerInternal = CAudioDeviceGraph::GetStreamingResourceManagerInternal(this, &v26);
    if ( StreamingResourceManagerInternal < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26C,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)StreamingResourceManagerInternal);
    v6 = v26;
    if ( v26 )
    {
      v7 = *(void (__fastcall **)(struct IAudioStreamingResourceRegistration *, __int64))(*(_QWORD *)v26 + 72LL);
      v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 48LL))((char *)this + 16);
      v7(v6, v8);
    }
    v9 = *(_QWORD **)(*(_QWORD *)ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::GetTail(*((_QWORD *)this + 20) + 16LL)
                    + 32LL);
    v25[0] = 0LL;
    v10 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*v9)(
            *v9,
            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
            v25);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x281,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v10);
    v11 = v25[0];
    if ( v25[0] && v6 )
    {
      v24 = 0LL;
      v19 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v25[0])(
              v25[0],
              &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
              &v24);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x288,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v19);
      v20 = v24;
      if ( v24 )
      {
        v21 = (*(__int64 (__fastcall **)(struct IAudioStreamingResourceRegistration *, __int64, char *))(*(_QWORD *)v6 + 56LL))(
                v6,
                v24,
                (char *)this + 368);
        if ( v21 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x28C,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
            (const char *)(unsigned int)v21);
        v20 = v24;
      }
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      v11 = v25[0];
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v27 = 0LL;
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, struct ISaDeviceCallback *, struct IAudioStreamingResourceRegistration *))(**((_QWORD **)this + 19) + 32LL))(
            *((_QWORD *)this + 19),
            &v27,
            a2,
            v6);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x294,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v12);
      if ( v6 )
        (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v6 + 16LL))(v6);
      (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 80LL))(this);
      if ( v4 )
        LeaveCriticalSection(v4);
      return v13;
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
      v14 = (_QWORD *)*((_QWORD *)this + 21);
      while ( v14 )
      {
        v15 = (CPipeInstance *)v14[2];
        v14 = (_QWORD *)*v14;
        v16 = CPipeInstance::Start(v15);
        v17 = v16;
        if ( v16 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x29C,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
            (const char *)(unsigned int)v16);
          if ( this != (CAudioDeviceGraph *)-216LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
          if ( v6 )
            (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v6 + 16LL))(v6);
          (*(void (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 80LL))(this);
          if ( v4 )
            LeaveCriticalSection(v4);
          return v17;
        }
      }
      if ( this != (CAudioDeviceGraph *)-216LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
      CAudioDeviceGraph::DurationTracker::Start((CAudioDeviceGraph *)((char *)this + 80));
      v23 = AudioDgTelemetryProvider::Provider(v22);
      if ( *(_DWORD *)v23 > 4u
        && (*((_BYTE *)v23 + 16) & 1) != 0
        && (*((_QWORD *)v23 + 3) & 1LL) == *((_QWORD *)v23 + 3) )
      {
        v25[0] = 0x40B000000LL;
        v25[1] = 1LL;
        v28 = (unsigned __int16 *)*((_QWORD *)v23 + 1);
        v29 = *v28;
        v30 = 2;
        v31 = &unk_1400AFDC5;
        v32 = 20;
        v33 = 1;
        ((void (__fastcall *)(_QWORD, _QWORD *, char *, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
          *((_QWORD *)v23 + 4),
          v25,
          (char *)this + 344,
          0LL,
          2,
          &v28,
          (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata);
        v6 = v26;
      }
      if ( v6 )
        (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v4 )
        LeaveCriticalSection(v4);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x266,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2289827859LL;
  }
}
