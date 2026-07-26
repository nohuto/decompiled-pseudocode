/*
 * XREFs of ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x14005DF50
 * Callers:
 *     ?reserve@?$KArray@UEtwProtocolBind@@$00@Rtl@@QEAA_N_K@Z @ 0x14000180C (-reserve@-$KArray@UEtwProtocolBind@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z @ 0x1400018C4 (-reserve@-$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@_W$00@Rtl@@QEAA_N_K@Z @ 0x140001980 (-reserve@-$KArray@_W$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140002E54 (-reserve@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$0.c)
 *     ?reserve@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x140002FE8 (-reserve@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x1400030E4 (-reserve@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1400031E0 (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K@Z @ 0x14000329C (-reserve@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N_K@Z @ 0x14000340C (-reserve@-$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x14006CE70 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 *     ?reserve@?$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z @ 0x140072DF0 (-reserve@-$KArray@UKnobDescriptor@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140074B10 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_MINIPORT_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x140091DEC (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@CAJPEBU-$TriageDataCollect.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x140091ED4 (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@CAJPEBU-$TriageDataCollect.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_FILTER_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_FILTER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x140097E4C (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@CAJPEBU-$TriageDataCollector.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@X@@CAJPEBU?$TriageDataCollector@X@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@X@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@X@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x1400987E8 (-DuplicateCollectorsArray@-$ObjectTriageData@X@@CAJPEBU-$TriageDataCollector@X@@_KAEAV-$unique_a.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_FILTER_DRIVER_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x140099C9C (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@CAJPEBU-$TriageDataCo.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_COMMON_OPEN_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_COMMON_OPEN_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x1400B775C (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@CAJPEBU-$TriageDataColl.c)
 *     ?DuplicateCollectorsArray@?$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@CAJPEBU?$TriageDataCollector@U_NDIS_PROTOCOL_BLOCK@@@@_KAEAV?$unique_any_array_ptr@U?$TriageDataCollector@U_NDIS_PROTOCOL_BLOCK@@@@UTriageDataCollectorArrayDeleter@?$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@Uempty_deleter@wil@@_K@wil@@@Z @ 0x1400B7844 (-DuplicateCollectorsArray@-$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@CAJPEBU-$TriageDataCollect.c)
 *     ?Create@KHistogram@@SAPEAV1@_K0K@Z @ 0x1401387F0 (-Create@KHistogram@@SAPEAV1@_K0K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = a1 * a2;
    return 0LL;
  }
  else
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
}
