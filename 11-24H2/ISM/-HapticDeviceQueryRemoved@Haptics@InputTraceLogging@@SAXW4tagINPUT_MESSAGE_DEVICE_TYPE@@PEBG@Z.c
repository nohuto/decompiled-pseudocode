/*
 * XREFs of ?HapticDeviceQueryRemoved@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBG@Z @ 0x18018B1F0
 * Callers:
 *     ?QueryRemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x18018C590 (-QueryRemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?QueryRemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x18018C654 (-QueryRemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180064B88 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?InputMessageDeviceTypeToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800C95E0 (-InputMessageDeviceTypeToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 */

void __fastcall InputTraceLogging::Haptics::HapticDeviceQueryRemoved(
        enum tagINPUT_MESSAGE_DEVICE_TYPE a1,
        const unsigned __int16 *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  const WCHAR *v7; // [rsp+50h] [rbp+18h] BYREF
  const char *v8; // [rsp+58h] [rbp+20h] BYREF

  v4 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 512LL) )
  {
    v7 = a2;
    v8 = InputTraceLogging::InputMessageDeviceTypeToString(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v5,
      byte_180224D31,
      v5,
      v6,
      (const unsigned __int16 **)&v8,
      &v7);
  }
}
