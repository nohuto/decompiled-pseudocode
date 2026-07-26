/*
 * XREFs of ??1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ @ 0x1400DD2D4
 * Callers:
 *     ??_EMiniportFilterResourceRequirements@AzTelemetry@@UEAAPEAXI@Z @ 0x14009C400 (--_EMiniportFilterResourceRequirements@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ?ndisMInvokeFilterResourceRequirements@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14009D42C (-ndisMInvokeFilterResourceRequirements@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140004520 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$0.c)
 *     _tlgKeywordOn @ 0x1400713E0 (_tlgKeywordOn.c)
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x140075200 (-Stop@KStopwatch@@QEAA_KXZ.c)
 */

void __fastcall AzTelemetry::MiniportFilterResourceRequirements::~MiniportFilterResourceRequirements(
        LARGE_INTEGER *this)
{
  unsigned __int64 v2; // rax
  LARGE_INTEGER v3; // r8
  __int64 v4; // r9
  unsigned int v5; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int16 *v7; // [rsp+60h] [rbp+18h] BYREF
  LONGLONG v8; // [rsp+68h] [rbp+20h] BYREF

  this->QuadPart = (LONGLONG)&AzTelemetry::MiniportFilterResourceRequirements::`vftable';
  if ( (unsigned int)dword_14011A7B0 > 5 && tlgKeywordOn((__int64)&dword_14011A7B0, 512LL) )
  {
    v2 = KStopwatch::Stop(this + 4);
    v3 = this[3];
    v6 = v2;
    v5 = *(_DWORD *)this[1].QuadPart;
    v7 = *(unsigned __int16 **)(v3.QuadPart + 3856);
    v8 = v3.QuadPart + 4008;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v5,
      (__int64)&unk_140102DE5,
      v3.QuadPart + 6068,
      v4,
      &v8,
      &v7,
      (__int64)&v5,
      (__int64)&v6);
  }
}
