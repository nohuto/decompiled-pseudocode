/*
 * XREFs of ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801AED44
 * Callers:
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800ED820 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18017A500 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     _lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_::operator() @ 0x18046D680 (_lambda_07c09ec2b66b1cd0a67fc9fd25c7941f_--operator().c)
 *     _lambda_3f93e84ee3927ec557523765ee2fe070_::operator() @ 0x18046DB9C (_lambda_3f93e84ee3927ec557523765ee2fe070_--operator().c)
 *     _lambda_5c8612707d1ce1f8a03bb177e1540ce1_::operator() @ 0x18046DD6C (_lambda_5c8612707d1ce1f8a03bb177e1540ce1_--operator().c)
 *     _lambda_a469c2389bb8dc71f832d95fbc03d5e0_::operator() @ 0x18046E9FC (_lambda_a469c2389bb8dc71f832d95fbc03d5e0_--operator().c)
 *     _lambda_fc11afed419eac497169c2fc21e58d6f_::operator() @ 0x18046F208 (_lambda_fc11afed419eac497169c2fc21e58d6f_--operator().c)
 *     ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180472D50 (-OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x180473474 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800E3E94 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?ReportStopActivity@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1801AEEA0 (-ReportStopActivity@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_T.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18029644C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        int a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rax
  int v6; // r14d
  const struct wil::FailureInfo *v7; // rdx
  int v8; // esi
  int v9; // r14d
  const struct _tlgProvider_t *v10; // rbx
  _BYTE v11[192]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v12; // [rsp+110h] [rbp+67h] BYREF
  PSRWLOCK SRWLock; // [rsp+120h] [rbp+77h] BYREF
  __int64 v14; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v4 )
  {
    v4 += 33;
    AcquireSRWLockExclusive(v4);
    v12 = 0LL;
  }
  else
  {
    SRWLock = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 272);
  v6 = *(_DWORD *)(v5 + 248);
  if ( v6 < 1 )
  {
    memset_0(v11, 0, 0x98uLL);
    wil::details::WilFailFast((wil::details *)v11, v7);
  }
  v8 = *(_DWORD *)(v5 + 72);
  if ( v8 >= 0 )
  {
    *(_DWORD *)(v5 + 72) = a2;
    v8 = a2;
  }
  v9 = v6 - 1;
  *(_DWORD *)(v5 + 248) = v9;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v9 )
  {
    v10 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v10 > 5u )
    {
      LODWORD(v12) = GetCurrentThreadId();
      LODWORD(SRWLock) = a2;
      v14 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v10,
        byte_1807E0E76,
        (const GUID *)(*(_QWORD *)(a1 + 272) + 8LL),
        0LL,
        (__int64)&v14,
        (__int64)&SRWLock,
        (__int64)&v12);
    }
  }
  else
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
      a1,
      (unsigned int)v8);
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
