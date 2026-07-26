/*
 * XREFs of ??1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ @ 0x140071240
 * Callers:
 *     ??_EMiniportDevicePnPEventNotify@AzTelemetry@@UEAAPEAXI@Z @ 0x1400DD4E0 (--_EMiniportDevicePnPEventNotify@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ?ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1401640C0 (-ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140004520 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$0.c)
 *     _tlgKeywordOn @ 0x1400713E0 (_tlgKeywordOn.c)
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x140075200 (-Stop@KStopwatch@@QEAA_KXZ.c)
 */

void __fastcall AzTelemetry::MiniportDevicePnPEventNotify::~MiniportDevicePnPEventNotify(
        AzTelemetry::MiniportDevicePnPEventNotify *this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int16 *v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)this = &AzTelemetry::MiniportDevicePnPEventNotify::`vftable';
  if ( (unsigned int)dword_14011A7B0 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_14011A7B0, 512LL) )
    {
      v2 = KStopwatch::Stop((AzTelemetry::MiniportDevicePnPEventNotify *)((char *)this + 24));
      v3 = *((_QWORD *)this + 2);
      v7 = v2;
      v6 = *((_DWORD *)this + 12);
      v8 = *(unsigned __int16 **)(v3 + 3856);
      v9 = v3 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v4,
        (__int64)&unk_140102E97,
        v3 + 6068,
        v5,
        &v9,
        &v8,
        (__int64)&v6,
        (__int64)&v7);
    }
  }
}
