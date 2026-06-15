/*
 * XREFs of ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18000BA10
 * Callers:
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18000A330 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18000B950 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000BDD8 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?reset@?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_RecurringTask@@@Z @ 0x18000CA44 (-reset@-$unique_ptr@U_RecurringTask@@U-$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_Re.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800256F0 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x180026DC8 (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_Sdd @ 0x1800C317C (WPP_SF_Sdd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioSession::NewState(CAudioSession *this, __int32 a2)
{
  enum _AudioSessionState v4; // esi
  __int64 v5; // rcx
  const WCHAR *v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [rsp+20h] [rbp-69h]
  __int32 v12; // [rsp+30h] [rbp-59h] BYREF
  _DWORD v13[3]; // [rsp+34h] [rbp-55h] BYREF
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  __int64 v15; // [rsp+48h] [rbp-41h]
  enum _AudioSessionState v16; // [rsp+50h] [rbp-39h]
  __int32 v17; // [rsp+54h] [rbp-35h]
  unsigned __int16 *v18; // [rsp+60h] [rbp-29h]
  int v19; // [rsp+68h] [rbp-21h]
  int v20; // [rsp+6Ch] [rbp-1Dh]
  void *v21; // [rsp+70h] [rbp-19h]
  int v22; // [rsp+78h] [rbp-11h]
  int v23; // [rsp+7Ch] [rbp-Dh]
  const WCHAR *v24; // [rsp+80h] [rbp-9h]
  int v25; // [rsp+88h] [rbp-1h]
  int v26; // [rsp+8Ch] [rbp+3h]
  _DWORD *v27; // [rsp+90h] [rbp+7h]
  __int64 v28; // [rsp+98h] [rbp+Fh]
  __int32 *v29; // [rsp+A0h] [rbp+17h]
  __int64 v30; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = *((_DWORD *)this + 84);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      56,
      (unsigned int)&WPP_ea93f1868512325b454513e390c361b8_Traceguids,
      *((_QWORD *)this + 82),
      v4,
      a2);
  }
  if ( v4 )
  {
    if ( v4 == AudioSessionStateActive && !a2 )
    {
      GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 348));
      *((_QWORD *)this + 40) = GetTickCount64();
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          58LL,
          &WPP_ea93f1868512325b454513e390c361b8_Traceguids,
          *((_QWORD *)this + 82));
      }
      *((_BYTE *)this + 904) = 0;
      CAudioSession::StartInactiveTimer(this);
    }
  }
  else if ( a2 == 1 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
    std::unique_ptr<_RecurringTask>::reset((char *)this + 536, 0LL);
    if ( this != (CAudioSession *)-496LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 340));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        57LL,
        &WPP_ea93f1868512325b454513e390c361b8_Traceguids,
        *((_QWORD *)this + 82));
    }
    *((_BYTE *)this + 904) = 1;
  }
  *((_DWORD *)this + 84) = a2;
  if ( a2 == 1 )
  {
    v10 = *((_DWORD *)this + 58);
    if ( (v10 & 0x200000) != 0 )
      *((_DWORD *)this + 58) = v10 & 0xFFDFFFFF;
  }
  if ( v4 != a2 )
  {
    v5 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v5 > 4u
      && (*(_DWORD *)(v5 + 16) & 0x200LL) != 0
      && (*(_QWORD *)(v5 + 24) & 0x200LL) == *(_QWORD *)(v5 + 24) )
    {
      v12 = a2;
      v13[0] = v4;
      v6 = (const WCHAR *)*((_QWORD *)this + 82);
      v29 = &v12;
      v30 = 4LL;
      v27 = v13;
      v28 = 4LL;
      if ( v6 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( v6[v7] );
        v8 = 2 * v7 + 2;
      }
      else
      {
        v6 = &LocaleName;
        v8 = 2;
      }
      v24 = v6;
      v25 = v8;
      v26 = 0;
      v14 = 0x40B000000LL;
      v15 = 512LL;
      v18 = *(unsigned __int16 **)(v5 + 8);
      v19 = *v18;
      v20 = 2;
      v21 = &unk_1801AA87F;
      v22 = 67;
      v23 = 1;
      v13[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      v11 = 5;
      EtwEventWriteTransfer(*(_QWORD *)(v5 + 32), &v14, 0LL, 0LL);
    }
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v9 = CAudioSessionManager::OnSessionStateChanged(
           *((CAudioSessionManager **)this + 53),
           (struct IAudioSessionInfo *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
           v4,
           (enum _AudioSessionState)a2);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD35,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v9,
        v11);
    v14 = (__int64)&CAudioSessionStateChanged::`vftable';
    v15 = (__int64)this;
    v16 = v4;
    v17 = a2;
    CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 432));
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
}
