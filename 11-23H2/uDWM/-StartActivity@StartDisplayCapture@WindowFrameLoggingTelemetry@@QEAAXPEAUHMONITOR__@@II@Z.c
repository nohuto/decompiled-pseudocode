/*
 * XREFs of ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x1800D0CDC
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D1190 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D13B0 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180010F30 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18005EE0C (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Para.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x1800CF650 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800D5688 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 */

void __fastcall WindowFrameLoggingTelemetry::StartDisplayCapture::StartActivity(
        WindowFrameLoggingTelemetry::StartDisplayCapture *this,
        HMONITOR a2,
        int a3,
        int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // [rsp+50h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+54h] [rbp-34h] BYREF
  HMONITOR v13; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+60h] [rbp-28h] BYREF
  int v15; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = wil::details::static_lazy<WindowFrameLogging>::get(
         v8,
         (void (__cdecl *)())_lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v9 > 5u
    && (*(_QWORD *)(v9 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v9 + 24) & 0x200000000000LL) == *(_QWORD *)(v9 + 24) )
  {
    v15 = a4;
    v11 = a3;
    v13 = a2;
    v14 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v10 = wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      byte_1801265C2,
      *((_QWORD *)this + 6) + 8LL,
      v10,
      (__int64)&v14,
      (__int64)&CurrentThreadId,
      (__int64)&v13,
      (__int64)&v11,
      (__int64)&v15);
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
