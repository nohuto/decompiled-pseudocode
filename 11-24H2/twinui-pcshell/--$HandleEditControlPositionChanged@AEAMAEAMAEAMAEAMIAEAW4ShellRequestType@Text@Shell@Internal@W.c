/*
 * XREFs of ??$HandleEditControlPositionChanged@AEAMAEAMAEAMAEAMIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAM000$$QEAIAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180081FD0
 * Callers:
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180255650 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180083248 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

int __fastcall TouchKeyboardExperienceTelemetryLogger::HandleEditControlPositionChanged<float &,float &,float &,float &,unsigned int,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6)
{
  __int64 v10; // rax
  __int64 v11; // r10
  int v12; // xmm1_4
  int v13; // xmm0_4
  int v14; // xmm1_4
  int v15; // ecx
  void (*v16)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  int v22; // [rsp+48h] [rbp-C0h] BYREF
  int v23; // [rsp+4Ch] [rbp-BCh] BYREF
  _DWORD v24[2]; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  void *v29; // [rsp+88h] [rbp-80h]
  int v30; // [rsp+90h] [rbp-78h]
  int v31; // [rsp+94h] [rbp-74h]
  _DWORD *v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  int *v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  int *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  int *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  int *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  int *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  __int64 *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(
         &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    qword_1808CBC40 = 0LL;
    Context = &qword_1808CBC38;
    qword_1808CBC38 = &ShellScreenClippingLogging::`vftable';
    byte_1808CBC48 = 0;
    dword_1808CBC4C = 0;
    qword_1808CBC50 = (struct _tlgProvider_t *)&`TouchKeyboardExperienceTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808CBC38, qword_1808CBC50, v16);
    InitOnceComplete(&`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper, 0, &qword_1808CBC38);
  }
  LODWORD(v10) = (_DWORD)Context;
  v11 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 5u && (*(_BYTE *)(v11 + 16) & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(v11 + 24) & 0x10LL;
    if ( v10 == *(_QWORD *)(v11 + 24) )
    {
      v12 = *a3;
      v21 = *a4;
      v13 = *a2;
      v22 = v12;
      v14 = *a1;
      v19 = *a6;
      v23 = v13;
      v15 = *a5;
      v44 = &v26;
      v42 = &v19;
      v40 = &v20;
      v38 = &v21;
      v36 = &v22;
      v34 = &v23;
      v32 = v24;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v11 + 8);
      v20 = v15;
      v24[0] = v14;
      v26 = 0x1000000LL;
      v45 = 8LL;
      v43 = 4LL;
      v41 = 4LL;
      v39 = 4LL;
      v37 = 4LL;
      v35 = 4LL;
      v33 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 16LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v29 = &unk_180803CDA;
      UserData.Reserved = 2;
      v30 = 104;
      v31 = 1;
      v24[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v10) = EventWriteTransfer(*(_QWORD *)(v11 + 32), &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    }
  }
  return v10;
}
