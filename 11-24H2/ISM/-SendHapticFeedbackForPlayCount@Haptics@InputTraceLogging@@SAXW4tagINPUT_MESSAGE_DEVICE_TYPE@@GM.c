/*
 * XREFs of ?SendHapticFeedbackForPlayCount@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMII@Z @ 0x180186C38
 * Callers:
 *     ?SendHapticFeedbackForPlayCountImpl@TouchpadHapticDevice@@QEAAJGMII@Z @ 0x180186D20 (-SendHapticFeedbackForPlayCountImpl@TouchpadHapticDevice@@QEAAJGMII@Z.c)
 *     ?SendHapticFeedbackForPlayCountImpl@PenHapticDevice@@QEAAJGMII@Z @ 0x180188520 (-SendHapticFeedbackForPlayCountImpl@PenHapticDevice@@QEAAJGMII@Z.c)
 *     ?SendHapticFeedbackForPlayCountImpl@MouseHapticDevice@@QEAAJGMII@Z @ 0x180188E30 (-SendHapticFeedbackForPlayCountImpl@MouseHapticDevice@@QEAAJGMII@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x180008888 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?InputMessageDeviceTypeToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800C95E0 (-InputMessageDeviceTypeToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 */

void __fastcall InputTraceLogging::Haptics::SendHapticFeedbackForPlayCount(
        enum tagINPUT_MESSAGE_DEVICE_TYPE a1,
        __int16 a2,
        float a3,
        int a4,
        unsigned int a5)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  _WORD v11[2]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+54h] [rbp-24h] BYREF
  int v13; // [rsp+58h] [rbp-20h] BYREF
  float v14; // [rsp+5Ch] [rbp-1Ch] BYREF
  const char *v15; // [rsp+60h] [rbp-18h] BYREF

  v8 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 512LL) )
  {
    v12 = a5;
    v14 = a3;
    v13 = a4;
    v11[0] = a2;
    v15 = InputTraceLogging::InputMessageDeviceTypeToString(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (__int64)&unk_180224599,
      v9,
      v10,
      (const unsigned __int16 **)&v15,
      (__int64)v11,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
}
