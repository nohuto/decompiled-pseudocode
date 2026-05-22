/*
 * XREFs of ?EvaluatePosture@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_NK111@Z @ 0x18011383C
 * Callers:
 *     ?CalculateDevicePostureMode@DevicePostureHelpers@@YA?AW4DevicePostureMode@Input@Internal@UI@Windows@@W4DeviceConvertibility@1@@Z @ 0x180113540 (-CalculateDevicePostureMode@DevicePostureHelpers@@YA-AW4DevicePostureMode@Input@Internal@UI@Wind.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x180005CB0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?Instance@InputTraceLogging@@KAPEAV1@XZ @ 0x1800366D0 (-Instance@InputTraceLogging@@KAPEAV1@XZ.c)
 *     ?DevicePostureModeToString@InputTraceLogging@@CAPEBDW4DevicePostureMode@Input@Internal@UI@Windows@@@Z @ 0x180113698 (-DevicePostureModeToString@InputTraceLogging@@CAPEBDW4DevicePostureMode@Input@Internal@UI@Window.c)
 */

char __fastcall InputTraceLogging::Postures::EvaluatePosture(
        int a1,
        unsigned __int8 a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  int v6; // ebx
  int v8; // esi
  struct InputTraceLogging *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  int v15; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+54h] [rbp-1Ch] BYREF
  int v17; // [rsp+58h] [rbp-18h] BYREF
  int v18; // [rsp+5Ch] [rbp-14h] BYREF
  int v19; // [rsp+60h] [rbp-10h] BYREF
  const char *v20; // [rsp+68h] [rbp-8h] BYREF

  v6 = a4;
  v8 = a2;
  v10 = InputTraceLogging::Instance();
  if ( **((_DWORD **)v10 + 1) > 4u )
  {
    LOBYTE(v10) = tlgKeywordOn(*((_QWORD *)v10 + 1), 2LL);
    if ( (_BYTE)v10 )
    {
      v15 = a6;
      v16 = a5;
      v17 = v6;
      v18 = a3;
      v19 = v8;
      v20 = InputTraceLogging::DevicePostureModeToString(a1);
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      v13,
                      (__int64)&unk_180215548,
                      v11,
                      v12,
                      (const unsigned __int16 **)&v20,
                      (__int64)&v19,
                      (__int64)&v18,
                      (__int64)&v17,
                      (__int64)&v16,
                      (__int64)&v15);
    }
  }
  return (char)v10;
}
