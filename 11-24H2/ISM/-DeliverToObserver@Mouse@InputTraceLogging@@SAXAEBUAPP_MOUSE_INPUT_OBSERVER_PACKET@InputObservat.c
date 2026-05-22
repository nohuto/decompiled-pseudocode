/*
 * XREFs of ?DeliverToObserver@Mouse@InputTraceLogging@@SAXAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x1801396AC
 * Callers:
 *     ?OnInputGenerated@?$CPointerInputObserverServer@$0L@@@UEBAXAEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@Z @ 0x1801397B0 (-OnInputGenerated@-$CPointerInputObserverServer@$0L@@@UEBAXAEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x180006B9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapperByVal@$01@@.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::Mouse::DeliverToObserver(
        const struct InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int16 v5; // cx
  int v6; // [rsp+60h] [rbp-20h] BYREF
  int v7; // [rsp+64h] [rbp-1Ch] BYREF
  int v8; // [rsp+68h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp-10h] BYREF
  __int16 v10; // [rsp+98h] [rbp+18h] BYREF
  int v11; // [rsp+A0h] [rbp+20h] BYREF
  int v12; // [rsp+A8h] [rbp+28h] BYREF

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u && tlgKeywordOn((__int64)v2, 64LL) )
  {
    v5 = *((_WORD *)a1 + 28);
    v12 = *((_DWORD *)a1 + 8);
    v6 = *((_DWORD *)a1 + 7);
    v7 = *((_DWORD *)a1 + 6);
    v8 = *((_DWORD *)a1 + 10);
    v9 = *((_QWORD *)a1 + 1);
    v10 = v5;
    v11 = *((_DWORD *)a1 + 9);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>>(
      v3,
      (__int64)&unk_18021DFCE,
      v3,
      v4,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10);
  }
}
