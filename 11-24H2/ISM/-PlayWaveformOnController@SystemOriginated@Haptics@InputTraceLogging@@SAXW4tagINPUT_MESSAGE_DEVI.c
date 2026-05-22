/*
 * XREFs of ?PlayWaveformOnController@SystemOriginated@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBGK@Z @ 0x1800C9C74
 * Callers:
 *     ?PlayWaveformOnController@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@IIAEBUtagINPUT_HAPTIC_SETTINGS@@@Z @ 0x1800C9B14 (-PlayWaveformOnController@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINP.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800031D0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?InputMessageDeviceTypeToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800C95E0 (-InputMessageDeviceTypeToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 */

void __fastcall InputTraceLogging::Haptics::SystemOriginated::PlayWaveformOnController(
        enum tagINPUT_MESSAGE_DEVICE_TYPE a1,
        const unsigned __int16 *a2,
        int a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  const WCHAR *v9; // [rsp+40h] [rbp-18h] BYREF
  const char *v10; // [rsp+48h] [rbp-10h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v6 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v6 > 4u && tlgKeywordOn((__int64)v6, 512LL) )
  {
    v11 = a3;
    v9 = a2;
    v10 = InputTraceLogging::InputMessageDeviceTypeToString(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v8,
      (__int64)&unk_180211DA3,
      v7,
      v8,
      (const unsigned __int16 **)&v10,
      &v9,
      (__int64)&v11);
  }
}
