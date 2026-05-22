/*
 * XREFs of ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x1800E81EC
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E9D1C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U3@U3@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@55AEBU?$_tlgWrapperByVal@$03@@66666@Z @ 0x180004938 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U3@U3@U-$_tlgWrapper.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall LampArrayTelemetry::LogLampArrayDeviceAdded(
        LampArrayTelemetry *this,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const WCHAR *v14; // r10
  __int16 v15; // [rsp+80h] [rbp-11h] BYREF
  __int16 v16; // [rsp+82h] [rbp-Fh] BYREF
  int v17; // [rsp+84h] [rbp-Dh] BYREF
  int v18; // [rsp+88h] [rbp-9h] BYREF
  int v19; // [rsp+8Ch] [rbp-5h] BYREF
  int v20; // [rsp+90h] [rbp-1h] BYREF
  int v21; // [rsp+94h] [rbp+3h] BYREF
  int v22; // [rsp+98h] [rbp+7h] BYREF
  const WCHAR *v23; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+A8h] [rbp+17h] BYREF
  LampArrayTelemetry *v25; // [rsp+C0h] [rbp+2Fh] BYREF

  v25 = this;
  if ( (unsigned int)dword_18024E248 > 5 && tlgKeywordOn((__int64)&dword_18024E248, 0x400000000000LL) )
  {
    v17 = a11;
    v18 = a10;
    v19 = a9;
    v20 = a8;
    v21 = a7;
    v22 = a6;
    LOWORD(v25) = a5;
    v15 = v13;
    v16 = v12;
    v23 = v14;
    v24 = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      (__int64)&unk_18021393C,
      v12,
      v13,
      (__int64)&v24,
      &v23,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v25,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
}
