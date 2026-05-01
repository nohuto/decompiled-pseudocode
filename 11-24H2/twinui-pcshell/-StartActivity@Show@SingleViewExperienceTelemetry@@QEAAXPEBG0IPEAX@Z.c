/*
 * XREFs of ?StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x1800B10EC
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800AF724 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800342C0 (-EnsureWatchingCurrentThread@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDA.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B1538 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@543@Z @ 0x1801C04E8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U1@@-$_tlgWrit.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Show::StartActivity(
        SingleViewExperienceTelemetry::Show *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        void *a5)
{
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rsi
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  const struct _tlgProvider_t *v13; // r10
  const GUID *v14; // r8
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  DWORD CurrentThreadId; // [rsp+58h] [rbp-51h] BYREF
  int v19; // [rsp+5Ch] [rbp-4Dh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-49h] BYREF
  void *v21; // [rsp+70h] [rbp-39h] BYREF
  const unsigned __int16 *v22; // [rsp+78h] [rbp-31h] BYREF
  const unsigned __int16 *v23; // [rsp+80h] [rbp-29h] BYREF
  __int64 v24; // [rsp+88h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-11h] BYREF
  void *v26; // [rsp+A8h] [rbp-1h]
  int v27; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B4h] [rbp+Bh]
  const unsigned __int16 *v29; // [rsp+B8h] [rbp+Fh]
  int v30; // [rsp+C0h] [rbp+17h]
  int v31; // [rsp+C4h] [rbp+1Bh]
  __int64 *v32; // [rsp+C8h] [rbp+1Fh]
  __int64 v33; // [rsp+D0h] [rbp+27h]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v10 = SingleViewExperienceLogging::Provider(v9);
  if ( *(_DWORD *)v10 > 5u
    && (*((_QWORD *)v10 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v10 + 3) & 0x200000000000LL) == *((_QWORD *)v10 + 3) )
  {
    v21 = a5;
    v19 = a4;
    v22 = a3;
    v23 = a2;
    *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
    CurrentThreadId = GetCurrentThreadId();
    v17 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    ((void (__fastcall *)(const struct _tlgProvider_t *, void *, __int64, __int64, EVENT_DESCRIPTOR *, DWORD *, const unsigned __int16 **, const unsigned __int16 **, int *, void **))_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>)(
      v10,
      &unk_18081F6ED,
      *((_QWORD *)this + 34) + 8LL,
      v17,
      &EventDescriptor,
      &CurrentThreadId,
      &v23,
      &v22,
      &v19,
      &v21);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
  if ( a4 != 2 )
  {
    v12 = SingleViewExperienceLogging::Provider(v11);
    v13 = v12;
    if ( *(_DWORD *)v12 > 5u
      && (*((_QWORD *)v12 + 2) & 0x400000000000LL) != 0
      && (*((_QWORD *)v12 + 3) & 0x400000000000LL) == *((_QWORD *)v12 + 3) )
    {
      v14 = (const GUID *)(*((_QWORD *)this + 34) + 8LL);
      v24 = 0x1000000LL;
      v32 = &v24;
      v33 = 8LL;
      if ( a3 )
      {
        v15 = -1LL;
        do
          ++v15;
        while ( a3[v15] );
        v16 = 2 * v15 + 2;
      }
      else
      {
        a3 = &pvData;
        v16 = 2;
      }
      v30 = v16;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *((_QWORD *)v13 + 1);
      v31 = 0;
      EventDescriptor.Keyword = 0x400000000000LL;
      v29 = a3;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v26 = &unk_18081F88D;
      UserData.Reserved = 2;
      v27 = 46;
      v28 = 1;
      CurrentThreadId = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*((_QWORD *)v13 + 4), &EventDescriptor, v14, 0LL, 4u, &UserData);
    }
  }
}
