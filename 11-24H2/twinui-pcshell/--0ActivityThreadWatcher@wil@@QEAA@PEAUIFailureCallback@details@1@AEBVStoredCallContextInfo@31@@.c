/*
 * XREFs of ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800D2A64
 * Callers:
 *     _lambda_201adf67891f12ccd8a16b46f471aeff_::operator() @ 0x1800D11FC (_lambda_201adf67891f12ccd8a16b46f471aeff_--operator().c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800D138C (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAA.c)
 *     _lambda_31520e38682400c193ecfa4924368fd9_::operator() @ 0x1800D20B8 (_lambda_31520e38682400c193ecfa4924368fd9_--operator().c)
 *     _lambda_b534361c50cb4958853f48f5e7b1e06a_::operator() @ 0x1800D2380 (_lambda_b534361c50cb4958853f48f5e7b1e06a_--operator().c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800D2A08 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x1800D3440 (-ViewLoaded@TaskViewHost@@UEAAJXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18032E624 (-ContinueOnCurrentThread@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$.c)
 *     _lambda_670c3bfbe2527c19a6d3da5bf7d2d729_::operator() @ 0x180349EDC (_lambda_670c3bfbe2527c19a6d3da5bf7d2d729_--operator().c)
 *     _lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::operator() @ 0x1803B6348 (_lambda_89f63c8738b1ad17b99f8ae3b3dcb473_--operator().c)
 *     _lambda_d3a26e949cca22f756fde8979863d6a4_::operator() @ 0x1803B6938 (_lambda_d3a26e949cca22f756fde8979863d6a4_--operator().c)
 *     _lambda_75452c5cb5e77a67412b4cfed81632b0_::operator() @ 0x18046DF94 (_lambda_75452c5cb5e77a67412b4cfed81632b0_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DF1B0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     _lambda_21d9478fa7481aa5ac8b815bdb34bba5_::operator() @ 0x1805FFBD0 (_lambda_21d9478fa7481aa5ac8b815bdb34bba5_--operator().c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x1800D2C0C (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memcpy_s_0 @ 0x1800D2E90 (memcpy_s_0.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityThreadWatcher::ActivityThreadWatcher(
        wil::ActivityThreadWatcher *this,
        struct wil::details::IFailureCallback *a2,
        const struct wil::details::StoredCallContextInfo *a3)
{
  _WORD *v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // r8
  DWORD CurrentThreadId; // r14d
  unsigned __int64 v10; // rbp
  __int64 i; // rcx
  _QWORD *v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  HANDLE ProcessHeap; // rax
  void *v17; // rax
  char *v18; // rax
  signed __int64 v19; // rdx
  signed __int64 v20; // rax

  *((_BYTE *)this + 24) = 0;
  *(_DWORD *)this = *(_DWORD *)a3;
  *((_QWORD *)this + 1) = *((_QWORD *)a3 + 1);
  v5 = (_WORD *)*((_QWORD *)a3 + 2);
  if ( *((_BYTE *)a3 + 24) )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v5[v14] );
    if ( v14 )
    {
      v15 = 2 * v14 + 2;
      ProcessHeap = GetProcessHeap();
      v17 = HeapAlloc(ProcessHeap, 0, v15);
      *((_QWORD *)this + 2) = v17;
      if ( v17 )
      {
        *((_BYTE *)this + 24) = 1;
        memcpy_s_0(v17, v15, v5, v15);
      }
    }
  }
  else
  {
    *((_QWORD *)this + 2) = v5;
  }
  v6 = (_QWORD *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = this;
  *((_BYTE *)this + 72) = 0;
  v7 = wil::details::g_pThreadFailureCallbacks;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_21;
  CurrentThreadId = GetCurrentThreadId();
  v10 = CurrentThreadId % 0xAuLL;
  for ( i = *(_QWORD *)(v7 + 8 * v10); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == CurrentThreadId )
    {
      v12 = (_QWORD *)(i + 16);
      goto LABEL_9;
    }
  }
  v18 = (char *)wil::details::ProcessHeapAlloc(0, 0x18uLL, v8);
  v19 = (signed __int64)v18;
  if ( v18 )
  {
    *(_DWORD *)v18 = CurrentThreadId;
    *((_DWORD *)v18 + 1) = 0;
    *((_QWORD *)v18 + 1) = 0LL;
    v12 = v18 + 16;
    *((_QWORD *)v18 + 2) = 0LL;
    do
    {
      v20 = *(_QWORD *)(v7 + 8 * v10);
      *(_QWORD *)(v19 + 8) = v20;
    }
    while ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8 * v10), v19, v20) );
  }
  else
  {
LABEL_21:
    v12 = 0LL;
  }
LABEL_9:
  *v6 = v12;
  if ( v12 )
  {
    *((_QWORD *)this + 6) = *v12;
    *v12 = v6;
    *((_DWORD *)this + 14) = GetCurrentThreadId();
  }
  return this;
}
