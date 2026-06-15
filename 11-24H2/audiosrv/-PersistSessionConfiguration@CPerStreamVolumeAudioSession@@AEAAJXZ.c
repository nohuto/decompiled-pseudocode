/*
 * XREFs of ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18000AB70
 * Callers:
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x18000AB50 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18000B950 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_7899aca099ee8f1bcaa9f2c8ca02d853__void_::_Do_call @ 0x1800C2F30 (std--_Func_impl_no_alloc__lambda_7899aca099ee8f1bcaa9f2c8ca02d853__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180002C48 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x18000A260 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@H@Z @ 0x18001B198 (-ToPersistedString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001B2B0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18001E120 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_18001E120.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperArray@$03@@@Z @ 0x180064214 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperArray@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@?$CComSafeArray@M$03@ATL@@QEAAJKJ@Z @ 0x1800C13A4 (-Create@-$CComSafeArray@M$03@ATL@@QEAAJKJ@Z.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x1800C29F4 (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerStreamVolumeAudioSession::PersistSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  int v3; // eax
  unsigned int v4; // ebx
  _DWORD *v5; // rcx
  SAFEARRAY *v6; // rbx
  int v7; // eax
  int v8; // r15d
  _DWORD *v9; // rcx
  bool v10; // zf
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // eax
  unsigned int v19; // r15d
  int v20; // eax
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // [rsp+20h] [rbp-40h]
  __int128 v28; // [rsp+30h] [rbp-30h] BYREF
  __int64 v29; // [rsp+40h] [rbp-20h]
  __int128 v30; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v33; // [rsp+A0h] [rbp+40h] BYREF
  SAFEARRAY *v34; // [rsp+A8h] [rbp+48h] BYREF

  if ( !*((_QWORD *)this + 116) || !*((_BYTE *)this + 920) || !_InterlockedExchange((volatile __int32 *)this + 244, 0) )
    return 0LL;
  v33 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v3 = CAudioSessionInstanceId::ToPersistedString((char *)this + 584, &v33, 1LL);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v30 = 0LL;
    v31 = 0LL;
    LOWORD(v30) = 4;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    DWORD2(v30) = *((_DWORD *)this + 194);
    if ( this != (CPerStreamVolumeAudioSession *)-736LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v5 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    v6 = (SAFEARRAY *)v33;
    if ( *v5 > 4u && (unsigned __int8)tlgKeywordOn(v5, 2LL) )
    {
      LODWORD(v33) = DWORD2(v30);
      v34 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v15,
        (unsigned int)&unk_1801AA5DC,
        v16,
        v17,
        (__int64)&v34,
        (__int64)&v33);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 116) + 48LL))(
           *((_QWORD *)this + 116),
           &PKEY_AudioSession_MasterVolume,
           &v30);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x106E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v7,
        v27);
    v34 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    if ( *((_DWORD *)this + 222) )
    {
      v18 = ATL::CComSafeArray<float,4>::Create(&v34);
      if ( v18 >= 0 )
      {
        v19 = 0;
        if ( *((_DWORD *)this + 222) )
        {
          while ( 1 )
          {
            LODWORD(v33) = *(_DWORD *)(*((_QWORD *)this + 112) + 4LL * v19);
            v20 = ATL::CComSafeArray<float,4>::SetAt(&v34, v19, &v33);
            if ( v20 < 0 )
              break;
            if ( ++v19 >= *((_DWORD *)this + 222) )
              goto LABEL_12;
          }
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1081,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v20,
            v27);
          v8 = 0;
          goto LABEL_13;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x107D,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v18,
          v27);
      }
    }
LABEL_12:
    v8 = *((_DWORD *)this + 222);
LABEL_13:
    v9 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v9 > 4u && (unsigned __int8)tlgKeywordOn(v9, 2LL) )
    {
      *(_QWORD *)&v28 = *((_QWORD *)this + 112);
      WORD4(v28) = *((_WORD *)this + 444);
      v33 = (__int64)v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperArray<4>>(
        v21,
        (unsigned int)&unk_1801AA574,
        v22,
        v23,
        (__int64)&v33,
        (__int64)&v28);
    }
    if ( this != (CPerStreamVolumeAudioSession *)-736LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    if ( v8 )
    {
      *(_QWORD *)&v30 = 8196LL;
      v31 = 0LL;
      *((_QWORD *)&v30 + 1) = v34;
      v14 = (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 116) + 48LL))(
              *((_QWORD *)this + 116),
              &PKEY_AudioSession_ChannelVolume,
              &v30);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1098,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v14,
          v27);
    }
    ATL::CComSafeArray<float,4>::Destroy(&v34);
    v28 = 0LL;
    v29 = 0LL;
    LOWORD(v28) = 11;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v10 = *((_DWORD *)this + 195) == 0;
    WORD4(v28) = -1;
    if ( v10 )
      WORD4(v28) = 0;
    if ( this != (CPerStreamVolumeAudioSession *)-736LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v11 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v11 > 4u && (unsigned __int8)tlgKeywordOn(v11, 2LL) )
    {
      LOBYTE(v33) = WORD4(v28) == 0xFFFF;
      v34 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        v24,
        (int)&unk_1801AA51E,
        v25,
        v26,
        (const WCHAR **)&v34,
        (__int64)&v33);
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 116) + 48LL))(
            *((_QWORD *)this + 116),
            &PKEY_AudioSession_Mute,
            &v28);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10AF,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v12,
        v27);
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 116) + 56LL))(*((_QWORD *)this + 116));
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10B2,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v13,
        v27);
    ATL::CStringData::Release((ATL::CStringData *)&v6[-1].cLocks);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1059,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v3,
    v27);
  ATL::CStringData::Release((ATL::CStringData *)(v33 - 24));
  return v4;
}
