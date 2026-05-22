/*
 * XREFs of ?EvaluatePosture@Postures@InputTraceLogging@@SAX_NKK0W4DevicePostureMode@Input@Internal@UI@Windows@@@Z @ 0x180111A70
 * Callers:
 *     ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@W4DeviceConvertibility@1@@Z @ 0x180111630 (-CalculateDevicePostureMode@DevicePostureHelpers@@YA-AW4DevicePostureMode@Input@Internal@UI@Wind.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U2@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@43AEBU?$_tlgWrapSz@D@@@Z @ 0x18000598C (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U2@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTe.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?DevicePostureModeToString@InputTraceLogging@@CAPEBDW4DevicePostureMode@Input@Internal@UI@Windows@@@Z @ 0x1801117F8 (-DevicePostureModeToString@InputTraceLogging@@CAPEBDW4DevicePostureMode@Input@Internal@UI@Window.c)
 */

char __fastcall InputTraceLogging::Postures::EvaluatePosture(char a1, int a2, int a3, char a4, int a5)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  char v14; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v15[3]; // [rsp+51h] [rbp-27h] BYREF
  int v16; // [rsp+54h] [rbp-24h] BYREF
  int v17; // [rsp+58h] [rbp-20h] BYREF
  const char *v18; // [rsp+60h] [rbp-18h] BYREF

  v9 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v9 > 4u )
  {
    LOBYTE(v9) = tlgKeywordOn((__int64)v9, 2LL);
    if ( (_BYTE)v9 )
    {
      v18 = InputTraceLogging::DevicePostureModeToString(a5);
      v14 = a4;
      v16 = a3;
      v17 = a2;
      v15[0] = a1;
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<char>>(
                     v12,
                     (__int64)&unk_18020BD78,
                     v10,
                     v11,
                     (__int64)v15,
                     (__int64)&v17,
                     (__int64)&v16,
                     (__int64)&v14,
                     (const unsigned __int16 **)&v18);
    }
  }
  return (char)v9;
}
