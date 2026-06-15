/*
 * XREFs of ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140014340
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x140014678 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400147A8 (-GetStreamingResourceManagerInternal@CAudioDeviceGraph@@AEAAJPEAPEAUIAudioStreamingResourceRegis.c)
 *     ?Stop@CPipeInstance@@QEAAJXZ @ 0x140014D40 (-Stop@CPipeInstance@@QEAAJXZ.c)
 *     ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x140014F84 (-Stop@DurationTracker@CAudioDeviceGraph@@QEAA-AUDurationInformation@2@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@55@Z @ 0x1400160BC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U3@U3@@-$_tlgWriteTe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::Stop(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct IAudioStreamingResourceRegistration *v3; // rbx
  int v4; // r14d
  _QWORD *v5; // r15
  int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  const struct _tlgProvider_t *v11; // r9
  CPipeInstance *v12; // rcx
  int v13; // eax
  int v14; // r13d
  __int64 v15; // [rsp+50h] [rbp-19h] BYREF
  __int64 v16; // [rsp+58h] [rbp-11h] BYREF
  int v17; // [rsp+60h] [rbp-9h] BYREF
  __int64 v18; // [rsp+68h] [rbp-1h]
  __int64 v19; // [rsp+70h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  struct IAudioStreamingResourceRegistration *v21; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v24; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  if ( *((_DWORD *)this + 64) )
  {
    v21 = 0LL;
    CAudioDeviceGraph::GetStreamingResourceManagerInternal(this, &v21);
    v3 = v21;
    if ( *((_QWORD *)this + 46) && v21 )
    {
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v21 + 64LL))(v21);
      *((_QWORD *)this + 46) = 0LL;
    }
    v4 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
    v5 = (_QWORD *)*((_QWORD *)this + 21);
    while ( v5 )
    {
      v12 = (CPipeInstance *)v5[2];
      v5 = (_QWORD *)*v5;
      v13 = CPipeInstance::Stop(v12);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2E0,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v13);
        v4 = v14;
      }
    }
    if ( this != (CAudioDeviceGraph *)-216LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 40LL))(*((_QWORD *)this + 19));
    if ( v6 < 0 )
    {
      v4 = v6;
      if ( v6 != -2005139433 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2F0,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
          (const char *)(unsigned int)v6);
    }
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 20));
    if ( v3 )
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v3 + 80LL))(v3);
    if ( v4 == -2005139433 )
    {
      if ( v3 )
        (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v3 + 16LL))(v3);
      if ( v2 )
        LeaveCriticalSection(v2);
      return 2289827863LL;
    }
    else if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2FC,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
        (const char *)(unsigned int)v4);
      if ( v3 )
        (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v3 + 16LL))(v3);
      if ( v2 )
        LeaveCriticalSection(v2);
      return (unsigned int)v4;
    }
    else
    {
      CAudioDeviceGraph::DurationTracker::Stop((char *)this + 80, &v17);
      v22 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 19) + 96LL))(*((_QWORD *)this + 19), &v22);
      v11 = AudioDgTelemetryProvider::Provider(v8);
      if ( *(_DWORD *)v11 > 4u
        && (*((_QWORD *)v11 + 2) & 0x400000000001LL) != 0
        && (*((_QWORD *)v11 + 3) & 0x400000000001LL) == *((_QWORD *)v11 + 3) )
      {
        v23 = v22;
        v24 = v19;
        v15 = v18;
        LODWORD(v21) = v17;
        v16 = *((_QWORD *)this + 48);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (_DWORD)v11,
          (unsigned int)&unk_1400AFE24,
          (_DWORD)this + 344,
          (_DWORD)v11,
          (__int64)&v16,
          (__int64)&v21,
          (__int64)&v15,
          (__int64)&v24,
          (__int64)&v23);
      }
      if ( v3 )
        (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *, __int64, __int64, const struct _tlgProvider_t *))(*(_QWORD *)v3 + 16LL))(
          v3,
          v9,
          v10,
          v11);
      if ( v2 )
        LeaveCriticalSection(v2);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CA,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)0x887C0013LL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2289827859LL;
  }
}
