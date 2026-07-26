/*
 * XREFs of ??1MiniportDriverUnload@AzTelemetry@@UEAA@XZ @ 0x14008BEC0
 * Callers:
 *     ??_GMiniportDriverUnload@AzTelemetry@@UEAAPEAXI@Z @ 0x14009C3C0 (--_GMiniportDriverUnload@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ?ndisMInvokeDriverUnload@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_DRIVER_OBJECT@@@Z @ 0x14013808C (-ndisMInvokeDriverUnload@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14000448C (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A.c)
 *     _tlgKeywordOn @ 0x1400713E0 (_tlgKeywordOn.c)
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x140075200 (-Stop@KStopwatch@@QEAA_KXZ.c)
 */

void __fastcall AzTelemetry::MiniportDriverUnload::~MiniportDriverUnload(LARGE_INTEGER *this)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  unsigned __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int16 *v5; // [rsp+48h] [rbp+10h] BYREF

  this->QuadPart = (LONGLONG)&AzTelemetry::MiniportDriverUnload::`vftable';
  if ( (unsigned int)dword_14011A7B0 > 5 && tlgKeywordOn((__int64)&dword_14011A7B0, 512LL) )
  {
    v4 = KStopwatch::Stop(this + 3);
    v5 = (unsigned __int16 *)(this[2].QuadPart + 488);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
      v2,
      (__int64)&unk_140102F4A,
      0LL,
      v3,
      &v5,
      (__int64)&v4);
  }
}
