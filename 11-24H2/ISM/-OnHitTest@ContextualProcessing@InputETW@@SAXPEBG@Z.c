/*
 * XREFs of ?OnHitTest@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x18001ADF0
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x18001A5B0 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800367A8 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18009CF54 (atexit.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

void __fastcall InputETW::ContextualProcessing::OnHitTest(const unsigned __int16 *a1)
{
  __int64 v2; // r10
  __int64 v3; // rax
  int v5; // eax
  WINBOOL fPending[2]; // [rsp+30h] [rbp-68h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-48h] BYREF
  void *v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  int v12; // [rsp+6Ch] [rbp-2Ch]
  const unsigned __int16 *v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]

  Context = 0LL;
  fPending[0] = 0;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
  {
    qword_180251768 = 0LL;
    Context = &qword_180251760;
    qword_180251760 = &RawInputProvidersContinuousTracing::`vftable';
    byte_180251770 = 0;
    dword_180251774 = 0;
    qword_180251778 = (struct _tlgProvider_t *)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180251760, qword_180251778, 0LL);
    InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, &qword_180251760);
  }
  v2 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 4u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
  {
    if ( a1 )
    {
      v3 = -1LL;
      while ( a1[++v3] != 0 )
        ;
      v5 = 2 * v3 + 2;
    }
    else
    {
      a1 = &WindowName;
      v5 = 2;
    }
    v14 = v5;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = *(_QWORD *)(v2 + 8);
    v13 = a1;
    v15 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v10 = &unk_180226774;
    UserData.Reserved = 2;
    v11 = 45;
    v12 = 1;
    fPending[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v2 + 32), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
}
