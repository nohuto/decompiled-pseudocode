/*
 * XREFs of ?EvaluatePostureRemote@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_N1@Z @ 0x180111B30
 * Callers:
 *     ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@W4DeviceConvertibility@1@@Z @ 0x180111630 (-CalculateDevicePostureMode@DevicePostureHelpers@@YA-AW4DevicePostureMode@Input@Internal@UI@Wind.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?Instance@InputTraceLogging@@KAPEAV1@XZ @ 0x180039C40 (-Instance@InputTraceLogging@@KAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800698C0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?DevicePostureModeToString@InputTraceLogging@@CAPEBDW4DevicePostureMode@Input@Internal@UI@Windows@@@Z @ 0x1801117F8 (-DevicePostureModeToString@InputTraceLogging@@CAPEBDW4DevicePostureMode@Input@Internal@UI@Window.c)
 */

char __fastcall InputTraceLogging::Postures::EvaluatePostureRemote(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // ebx
  int v5; // edi
  struct InputTraceLogging *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+40h] [rbp-18h] BYREF
  const char *v11; // [rsp+48h] [rbp-10h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v5 = a2;
  v6 = InputTraceLogging::Instance();
  if ( **((_DWORD **)v6 + 1) > 4u )
  {
    LOBYTE(v6) = tlgKeywordOn(*((_QWORD *)v6 + 1), 2LL);
    if ( (_BYTE)v6 )
    {
      v12 = v3;
      v10 = v5;
      v11 = InputTraceLogging::DevicePostureModeToString(a1);
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v8,
                     byte_18020BF58,
                     v7,
                     v8,
                     (const unsigned __int16 **)&v11,
                     (__int64)&v10,
                     (__int64)&v12);
    }
  }
  return (char)v6;
}
