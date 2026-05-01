/*
 * XREFs of ??$HandleEditControlFocusChanged@AEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAEAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800822C8
 * Callers:
 *     ?HandleEditControlFocusChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180082270 (-HandleEditControlFocusChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180083248 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::HandleEditControlFocusChanged<unsigned char &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        _BYTE *a1,
        char *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  bool v6; // zf
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char v9; // [rsp+30h] [rbp-39h] BYREF
  bool v10; // [rsp+31h] [rbp-38h] BYREF
  WINBOOL fPending[3]; // [rsp+34h] [rbp-35h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-29h] BYREF
  __int64 v13; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  void *v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  bool *v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]
  char *v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+98h] [rbp+2Fh]
  int v24; // [rsp+9Ch] [rbp+33h]
  __int64 *v25; // [rsp+A0h] [rbp+37h]
  int v26; // [rsp+A8h] [rbp+3Fh]
  int v27; // [rsp+ACh] [rbp+43h]

  Context = 0LL;
  fPending[0] = 0;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper,
         0,
         fPending,
         &Context)
    && fPending[0] )
  {
    qword_1808CBC40 = 0LL;
    dword_1808CBC4C = 0;
    Context = &qword_1808CBC38;
    qword_1808CBC38 = &ShellScreenClippingLogging::`vftable';
    byte_1808CBC48 = 0;
    qword_1808CBC50 = (struct _tlgProvider_t *)&`TouchKeyboardExperienceTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808CBC38, qword_1808CBC50, v7);
    InitOnceComplete(&`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper, 0, &qword_1808CBC38);
  }
  LODWORD(v4) = (_DWORD)Context;
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 0x10) != 0 )
  {
    v4 = *(_QWORD *)(v5 + 24) & 0x10LL;
    if ( v4 == *(_QWORD *)(v5 + 24) )
    {
      v6 = *a1 == 0;
      v9 = *a2;
      v25 = &v13;
      v10 = !v6;
      v27 = 0;
      v24 = 0;
      v21 = 0;
      v22 = &v9;
      v19 = &v10;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      v23 = 1;
      v20 = 1;
      v13 = 0x1000000LL;
      v26 = 8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 16LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v16 = &unk_180803A60;
      v18 = 1;
      UserData.Reserved = 2;
      v17 = 85;
      fPending[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v4) = EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
  return v4;
}
