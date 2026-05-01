/*
 * XREFs of ?SnapWindowWithGuidedSnapAssist_@CSnapComponentTelemetry@@QEBAX_KAEAURect@Foundation@Windows@@H@Z @ 0x1805A0ED8
 * Callers:
 *     ?SnapWindowWithGuidedSnapAssist@CShellSnapComponent@@UEAAJ_KURect@Foundation@Windows@@IPEAU234@@Z @ 0x1805A0DD0 (-SnapWindowWithGuidedSnapAssist@CShellSnapComponent@@UEAAJ_KURect@Foundation@Windows@@IPEAU234@@.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x1801C4710 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 */

void __fastcall CSnapComponentTelemetry::SnapWindowWithGuidedSnapAssist_(
        CSnapComponentTelemetry *this,
        __int64 a2,
        struct Windows::Foundation::Rect *a3,
        int a4)
{
  const struct _tlgProvider_t *v7; // rax
  int v8; // [rsp+50h] [rbp-20h] BYREF
  int v9; // [rsp+54h] [rbp-1Ch] BYREF
  int v10; // [rsp+58h] [rbp-18h] BYREF
  int v11; // [rsp+5Ch] [rbp-14h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h] BYREF
  CSnapComponentTelemetry *v13; // [rsp+80h] [rbp+10h] BYREF

  v13 = this;
  v7 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    v8 = *((_DWORD *)a3 + 3);
    v9 = *((_DWORD *)a3 + 2);
    v10 = *((_DWORD *)a3 + 1);
    v11 = *(_DWORD *)a3;
    LODWORD(v13) = a4;
    v12 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      byte_1808130EB,
      0LL,
      0LL,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v13);
  }
}
