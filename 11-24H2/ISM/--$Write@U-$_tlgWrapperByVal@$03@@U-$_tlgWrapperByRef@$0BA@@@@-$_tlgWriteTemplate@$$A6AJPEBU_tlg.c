/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1800062B0
 * Callers:
 *     ?LogOnContainerGuidChanging@BamoContainerInfoInputObjectProxy@@AEAAXAEBU_GUID@@@Z @ 0x1801175F4 (-LogOnContainerGuidChanging@BamoContainerInfoInputObjectProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnEndpointIdChanging@BamoUIAHitTestInputObjectProxy@@AEAAXAEBU_GUID@@@Z @ 0x180118080 (-LogOnEndpointIdChanging@BamoUIAHitTestInputObjectProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoDragAreaClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011A34C (-LogOnTypeChanging@BamoDragAreaClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoDragSourceClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011A3B0 (-LogOnTypeChanging@BamoDragSourceClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoDropTargetClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011A414 (-LogOnTypeChanging@BamoDropTargetClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoEdgyDragSourceClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011A478 (-LogOnTypeChanging@BamoEdgyDragSourceClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoInputForwardAreaInputObjectProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011A4DC (-LogOnTypeChanging@BamoInputForwardAreaInputObjectProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoInputForwardTargetInputObjectProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011A540 (-LogOnTypeChanging@BamoInputForwardTargetInputObjectProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoResizeAreaClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011A5A4 (-LogOnTypeChanging@BamoResizeAreaClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoResizeControllerClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18011A608 (-LogOnTypeChanging@BamoResizeControllerClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnSourceTypeChanging@BamoDragManagerClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x1801453A8 (-LogOnSourceTypeChanging@BamoDragManagerClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoManualDragAreaClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18014846C (-LogOnTypeChanging@BamoManualDragAreaClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 *     ?LogOnTypeChanging@BamoManualResizeAreaClientProxy@@AEAAXAEBU_GUID@@@Z @ 0x18014E7AC (-LogOnTypeChanging@BamoManualResizeAreaClientProxy@@AEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  _QWORD v7[5]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  __int64 v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v10 = *a6;
  v12 = 0;
  v11 = 16;
  v7[4] = a5;
  v9 = 0;
  v8 = 4;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 4, v7);
}
