/*
 * XREFs of ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140044DFC
 * Callers:
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14004E86C (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ?Initialize@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140053370 (-Initialize@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UC.c)
 *     ??1?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x140055498 (--1-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@.c)
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140055930 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??1?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA@XZ @ 0x140082C94 (--1-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@.c)
 *     ?Initialize@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x1400843E0 (-Initialize@-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UC.c)
 *     ?Initialize@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140084790 (-Initialize@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UC.c)
 *     ??1CSparseIndexMapRT@@QEAA@XZ @ 0x14008960C (--1CSparseIndexMapRT@@QEAA@XZ.c)
 *     ?SetMapSize@CSparseIndexMapRT@@QEAAJI@Z @ 0x14008FEF4 (-SetMapSize@CSparseIndexMapRT@@QEAAJI@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x140090DA0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDAC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

void __fastcall AERTDestroyZoneHeap(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  char v4; // al
  __int64 v5; // [rsp+40h] [rbp-28h]

  v3 = a1;
  if ( a1 )
    v4 = RtlDestroyMemoryZone();
  else
    v4 = 0;
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(a1, a2, a3, 4, v3, 0, 0, 0, v5, 0, v4);
}
