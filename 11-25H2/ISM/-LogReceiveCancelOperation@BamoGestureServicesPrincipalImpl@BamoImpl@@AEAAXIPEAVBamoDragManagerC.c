/*
 * XREFs of ?LogReceiveCancelOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXIPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180140838
 * Callers:
 *     ?CancelOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIIW4GestureProcessorType@@@Z @ 0x18013FDC8 (-CancelOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIIW4GestureProcessorType@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x180002640 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x180040D40 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAIXZ @ 0x1800AC044 (-GetItemId@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@.c)
 */

void __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::LogReceiveCancelOperation(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  int v5; // r9d
  int v6; // r10d
  Microsoft::BamoImpl::BamoPrincipalImpl *v7; // r11
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+54h] [rbp-24h] BYREF
  int v13; // [rsp+58h] [rbp-20h] BYREF
  int v14; // [rsp+5Ch] [rbp-1Ch] BYREF
  _DWORD v15[6]; // [rsp+60h] [rbp-18h] BYREF

  v2 = (__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1);
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v11 = v5;
    if ( v4 )
      v6 = *(_DWORD *)(v4 + 40);
    v12 = v6;
    v13 = a2;
    v14 = *(_DWORD *)(*((_QWORD *)Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(v7) + 4) + 36LL);
    v15[0] = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::GetItemId((struct Microsoft::BamoImpl::ConnectionIndirector **)(v8 - 16));
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_18021584F,
      v9,
      v10,
      (__int64)v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11);
  }
}
