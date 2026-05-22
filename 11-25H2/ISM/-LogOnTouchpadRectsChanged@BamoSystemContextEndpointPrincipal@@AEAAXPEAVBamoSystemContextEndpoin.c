/*
 * XREFs of ?LogOnTouchpadRectsChanged@BamoSystemContextEndpointPrincipal@@AEAAXPEAVBamoSystemContextEndpointStub@@@Z @ 0x1800AC2B0
 * Callers:
 *     ?UpdateTouchpadRects@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800ACDD4 (-UpdateTouchpadRects@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001DE4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18006D918 (-GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800AC044 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall BamoSystemContextEndpointPrincipal::LogOnTouchpadRectsChanged(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoSystemContextEndpointStub *a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  int PeerId; // [rsp+50h] [rbp+18h] BYREF
  int ItemId; // [rsp+58h] [rbp+20h] BYREF

  v2 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    PeerId = Microsoft::Bamo::BaseBamoPeer::GetPeerId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(v4 + 48) + 16LL));
    ItemId = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_180205F6D,
      v5,
      v6,
      (__int64)&ItemId,
      (__int64)&PeerId);
  }
}
