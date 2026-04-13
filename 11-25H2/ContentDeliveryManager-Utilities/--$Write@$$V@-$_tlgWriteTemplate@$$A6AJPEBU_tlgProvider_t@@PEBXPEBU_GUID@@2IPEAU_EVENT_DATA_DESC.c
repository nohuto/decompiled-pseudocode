/*
 * XREFs of ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180001D5C
 * Callers:
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180049168 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x18004918C (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x18006B980 (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ @ 0x18008EA10 (-ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ.c)
 *     ?SoftLandingV1Unexpected@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXXZ @ 0x1800A018C (-SoftLandingV1Unexpected@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXX.c)
 *     ?BackfillItems@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXXZ @ 0x1800AC148 (-BackfillItems@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXXZ.c)
 *     ?FillInItemsWithBindings@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXXZ @ 0x1800AC6D8 (-FillInItemsWithBindings@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAX.c)
 *     ?SortedAndValidated@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXXZ @ 0x1800AEF0C (-SortedAndValidated@LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CB8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 2u, &v4);
}
