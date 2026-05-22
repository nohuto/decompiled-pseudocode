/*
 * XREFs of ?LogReceiveRegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x18008B6A4
 * Callers:
 *     ?RegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJIPEBUInputSiteId@@@Z @ 0x18003D640 (-RegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJIPEBUInputSit.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180001E60 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D7D0 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800AAB44 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall BamoImpl::BamoInputSiteManagerPrincipalImpl::LogReceiveRegisterInputSiteElementWithHint(
        BamoImpl::BamoInputSiteManagerPrincipalImpl *this,
        struct BamoInputSiteElementProxy *a2,
        const struct InputSiteId *a3)
{
  const struct _tlgProvider_t * near *v3; // rbx
  int v4; // r8d
  __int64 v5; // r9
  Microsoft::BamoImpl::BamoPrincipalImpl *v6; // r10
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10[6]; // [rsp+40h] [rbp-18h] BYREF
  const struct InputSiteId *v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = a3;
  v3 = ISMBamos_AutoBamos::BamoTraceLogging::s_providers;
  if ( ISMBamos_AutoBamos::BamoTraceLogging::s_providers
    && *(_DWORD *)ISMBamos_AutoBamos::BamoTraceLogging::s_providers > 5u
    && tlgKeywordOn((__int64)ISMBamos_AutoBamos::BamoTraceLogging::s_providers, 1LL) )
  {
    if ( v5 )
      v4 = *(_DWORD *)(v5 + 40);
    LODWORD(v11) = v4;
    v12 = *(_DWORD *)(*((_QWORD *)Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(v6) + 4) + 36LL);
    v10[0] = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId((Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal *)(v7 - 16));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v3,
      (__int64)&unk_18021AB9B,
      v8,
      v9,
      (__int64)v10,
      (__int64)&v12,
      (__int64)&v11);
  }
}
