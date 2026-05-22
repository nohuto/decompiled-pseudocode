/*
 * XREFs of ?LogReceiveProcessResult@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXIAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180140900
 * Callers:
 *     ?ProcessResult@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBUDragOperationResult@Input@Internal@UI@Windows@@I@Z @ 0x180140D10 (-ProcessResult@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBUDragOperationResult@Input@In.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180001FC4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x180040D40 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800AC044 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::LogReceiveProcessResult(
        BamoImpl::BamoGestureServicesPrincipalImpl *this,
        __int64 a2,
        const struct Windows::UI::Internal::Input::DragOperationResult *a3,
        struct BamoDragManagerClientProxy *a4)
{
  __int64 v4; // rbx
  int v5; // r8d
  __int64 v6; // r9
  Microsoft::BamoImpl::BamoPrincipalImpl *v7; // r10
  int v8; // r11d
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v14[4]; // [rsp+48h] [rbp-10h] BYREF
  const struct Windows::UI::Internal::Input::DragOperationResult *v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  v4 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    if ( v6 )
      v5 = *(_DWORD *)(v6 + 40);
    LODWORD(v15) = v5;
    v12 = v8;
    v13 = *(_DWORD *)(*((_QWORD *)Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(v7) + 4) + 36LL);
    v14[0] = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId((struct Microsoft::BamoImpl::ConnectionIndirector **)(v9 - 16));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      (__int64)&unk_18021555A,
      v10,
      v11,
      (__int64)v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v15);
  }
}
