/*
 * XREFs of ??$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z @ 0x1800CF548
 * Callers:
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D524C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180010F30 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800CF5D0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerTransformFromDisplay<double,double>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 result; // rax
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // xmm1_8
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  result = (__int64)wil::details::static_lazy<WindowFrameLogging>::get(
                      (__int64)a1,
                      (void (__cdecl *)())_lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
  v7 = *(_QWORD *)(result + 8);
  if ( *(_DWORD *)v7 > 5u && (*(_QWORD *)(v7 + 16) & 0x200000000000LL) != 0 )
  {
    result = *(_QWORD *)(v7 + 24) & 0x200000000000LL;
    if ( result == *(_QWORD *)(v7 + 24) )
    {
      v8 = *a1;
      v9 = *a2;
      v10 = v8;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
               v7,
               (unsigned int)&unk_18012677D,
               v5,
               v6,
               (__int64)&v10,
               (__int64)&v9);
    }
  }
  return result;
}
