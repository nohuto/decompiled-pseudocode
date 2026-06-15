/*
 * XREFs of ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180023CE8
 * Callers:
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180020730 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800230D0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180023938 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180021574 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x180050AF8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::SetPolicyVolume(CAudioStream *this, float a2, __int64 a3, char a4)
{
  bool v7; // zf
  int v8; // eax
  unsigned int v9; // ebx
  struct AudioSrvTelemetryProvider *v10; // rax
  _DWORD *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  float v18; // [rsp+80h] [rbp+8h] BYREF
  int v19; // [rsp+88h] [rbp+10h] BYREF
  __int64 v20; // [rsp+90h] [rbp+18h] BYREF

  *((_QWORD *)this + 14) = a3;
  if ( a2 == *((float *)this + 26) )
    return 0LL;
  v7 = *((_QWORD *)this + 8) == 0LL;
  *((float *)this + 26) = a2;
  if ( !v7 )
  {
    v10 = AudioSrvTelemetryProvider::Instance();
    v11 = (_DWORD *)*((_QWORD *)v10 + 1);
    if ( *v11 > 4u )
    {
      if ( (unsigned __int8)tlgKeywordOn(*((_QWORD *)v10 + 1), 2LL) )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
        v13 = *((_QWORD *)this + 8);
        v19 = v12;
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v13 + 8) + 64LL))(v13 + 8);
        v16 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 80LL))((char *)this + 8);
        v18 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          (_DWORD)v11,
          (unsigned int)&unk_1801AAD53,
          v14,
          v15,
          (__int64)&v18,
          (__int64)&v16,
          (__int64)&v20,
          (__int64)&v19);
      }
    }
  }
  if ( !a4 )
    return 0LL;
  v8 = CAudioStream::RecalculateVolume(this, 0, 0LL);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B4,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
