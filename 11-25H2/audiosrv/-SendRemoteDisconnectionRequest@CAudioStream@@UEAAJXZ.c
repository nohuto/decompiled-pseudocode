/*
 * XREFs of ?SendRemoteDisconnectionRequest@CAudioStream@@UEAAJXZ @ 0x1800C9F50
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001D3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioStream::SendRemoteDisconnectionRequest(CAudioStream *this)
{
  struct AudioSrvTelemetryProvider *v2; // rax
  _DWORD *v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  bool v7; // al
  unsigned int v8; // eax
  int MediaEvent; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+30h] [rbp-78h] BYREF
  int v13[2]; // [rsp+38h] [rbp-70h] BYREF
  _DWORD v14[12]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+70h] [rbp-38h]
  __int16 v16; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = AudioSrvTelemetryProvider::Instance();
  v3 = (_DWORD *)*((_QWORD *)v2 + 1);
  if ( *v3 > 4u && tlgKeywordOn(*((_QWORD *)v2 + 1), 512LL) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
    *(_QWORD *)v13 = *((_QWORD *)this + 51);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (int)v3,
      (int)&unk_1801A00AF,
      v4,
      v5,
      (__int64)v13,
      (__int64)&v12);
  }
  memset_0(v14, 0, 0x50uLL);
  v6 = *((_QWORD *)this + 8);
  v7 = *((_BYTE *)this + 128) != 0;
  v14[0] = 80;
  *((_BYTE *)this + 520) = v7;
  v15 = *((_QWORD *)this + 51);
  v14[6] = 2;
  v14[1] = 0x8000;
  v16 = 0;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
  MediaEvent = GenerateMediaEvent(v14, v8);
  v10 = MediaEvent;
  if ( MediaEvent >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x521,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)MediaEvent);
  return v10;
}
