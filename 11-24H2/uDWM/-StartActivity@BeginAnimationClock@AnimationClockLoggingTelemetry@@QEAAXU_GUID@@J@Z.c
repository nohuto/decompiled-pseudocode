/*
 * XREFs of ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x18005A070
 * Callers:
 *     ?Begin@CAnimationClock@@QEAAJK@Z @ 0x180059BD8 (-Begin@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?EnsureWatchingCurrentThread@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180032DFC (-EnsureWatchingCurrentThread@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflecto.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180032F40 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 *     ?zInternalStart@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180032F74 (-zInternalStart@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0Is.c)
 *     ?Provider@AnimationClockLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180032FE0 (-Provider@AnimationClockLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@3@Z @ 0x18005A134 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U1@@-$_tlg.c)
 */

void __fastcall AnimationClockLoggingTelemetry::BeginAnimationClock::StartActivity(
        AnimationClockLoggingTelemetry::BeginAnimationClock *this,
        struct _GUID *a2,
        int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rax
  int v8; // edi
  int v9; // eax
  DWORD CurrentThreadId; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h] BYREF
  struct _GUID *v12; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+58h] [rbp-10h] BYREF

  v3 = a3;
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v7 = AnimationClockLogging::Provider(v6);
  v8 = (int)v7;
  if ( *(_DWORD *)v7 > 4u )
  {
    v11 = v3;
    v12 = a2;
    v13 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v9 = wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
      v8,
      (unsigned int)&unk_18010F932,
      *((_QWORD *)this + 34) + 8,
      v9,
      (__int64)&v13,
      (__int64)&CurrentThreadId,
      (__int64)&v12,
      (__int64)&v11);
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
