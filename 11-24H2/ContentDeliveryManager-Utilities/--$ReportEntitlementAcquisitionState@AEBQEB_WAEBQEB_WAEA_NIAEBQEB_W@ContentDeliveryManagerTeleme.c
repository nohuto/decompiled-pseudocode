/*
 * XREFs of ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI0@Z @ 0x180090F34
 * Callers:
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x180091800 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$12 @ 0x1800BB4AD (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$12.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$13 @ 0x1800BB4FB (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$13.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180001C8C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@_W@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@_W@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180003BBC (--$Write@U-$_tlgWrapSz@_W@@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteT.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044660 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 */

char __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int,wchar_t const * const &>(
        const wchar_t **a1,
        const wchar_t **a2,
        _BYTE *a3,
        int *a4,
        const wchar_t **a5)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  const wchar_t *v13; // rdx
  _BYTE v15[4]; // [rsp+50h] [rbp-28h] BYREF
  int v16; // [rsp+54h] [rbp-24h] BYREF
  const wchar_t *v17; // [rsp+58h] [rbp-20h] BYREF
  const wchar_t *v18; // [rsp+60h] [rbp-18h] BYREF
  const wchar_t *v19; // [rsp+68h] [rbp-10h] BYREF

  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v9 > 5u )
  {
    LOBYTE(v9) = tlgKeywordOn((__int64)v9, 0x400000000000LL);
    if ( (_BYTE)v9 )
    {
      v16 = *a4;
      v15[0] = *a3;
      v13 = *a5;
      v18 = *a2;
      v19 = *a1;
      v17 = v13;
      LOBYTE(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>>(
                     v12,
                     byte_1801640AD,
                     v10,
                     v11,
                     &v19,
                     &v18,
                     (__int64)v15,
                     (__int64)&v16,
                     &v17);
    }
  }
  return (char)v9;
}
