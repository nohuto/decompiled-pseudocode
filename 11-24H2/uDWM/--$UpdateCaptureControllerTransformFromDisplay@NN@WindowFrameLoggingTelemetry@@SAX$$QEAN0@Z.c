/*
 * XREFs of ??$UpdateCaptureControllerTransformFromDisplay@NN@WindowFrameLoggingTelemetry@@SAX$$QEAN0@Z @ 0x1800AB92C
 * Callers:
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x180094C4C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B4B88 (-_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCap.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800B5024 (-_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCapture.c)
 *     ?_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800CF930 (-_UpdateCaptureControllerContentOffsetFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18000222C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180033FBC (-Provider@WindowFrameLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x18007A880 (_tlgKeywordOn.c)
 */

char __fastcall WindowFrameLoggingTelemetry::UpdateCaptureControllerTransformFromDisplay<double,double>(
        __int64 *a1,
        __int64 *a2)
{
  const struct _tlgProvider_t *v4; // rax
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // xmm1_8
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v4 = WindowFrameLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x200000000000LL);
    if ( (_BYTE)v4 )
    {
      v8 = *a1;
      v10 = *a2;
      v11 = v8;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                     v5,
                     (int)&unk_1801107C7,
                     v6,
                     v7,
                     (__int64)&v11,
                     (__int64)&v10);
    }
  }
  return (char)v4;
}
