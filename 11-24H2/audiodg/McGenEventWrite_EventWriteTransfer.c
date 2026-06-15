/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x14000FDE8
 * Callers:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDDC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxx_EventWriteTransfer @ 0x14000F258 (McTemplateU0pqxxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqx_EventWriteTransfer @ 0x14000F310 (McTemplateU0pqqqx_EventWriteTransfer.c)
 *     McTemplateU0pqqxxxx_EventWriteTransfer @ 0x14000F3BC (McTemplateU0pqqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqp_EventWriteTransfer @ 0x14000F474 (McTemplateU0pqp_EventWriteTransfer.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4FC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x14000F5A8 (McTemplateU0pq_EventWriteTransfer.c)
 *     ?Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x14000F620 (-Process@CAudioProcessor@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x14004AFD0 (McTemplateU0pqqqq_EventWriteTransfer.c)
 *     McTemplateU0pqqx_EventWriteTransfer @ 0x14004C5A0 (McTemplateU0pqqx_EventWriteTransfer.c)
 *     McTemplateU0pqqq_EventWriteTransfer @ 0x14004D3EC (McTemplateU0pqqq_EventWriteTransfer.c)
 *     ?ProcessingComplete@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXXZ @ 0x140051E60 (-ProcessingComplete@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlDat.c)
 *     ?SetCurrentTimeStamp@?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@MEAAXPEAUAE_CURRENT_POSITION@@_J@Z @ 0x140052070 (-SetCurrentTimeStamp@-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@.c)
 *     ?GetOutputDataPointer@?$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x1400529D0 (-GetOutputDataPointer@-$CCrossProcessServerOutputEndpoint@UStaticControlData_V1@@UVolatileContro.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x140085574 (McTemplateU0p_EventWriteTransfer.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x1400855D8 (McTemplateU0pqx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x140085664 (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140085720 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     McTemplateU0pxqxq_EventWriteTransfer @ 0x14008749C (McTemplateU0pxqxq_EventWriteTransfer.c)
 *     McTemplateU0pxxq_EventWriteTransfer @ 0x140088738 (McTemplateU0pxxq_EventWriteTransfer.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  ULONG v7; // r8d

  v5 = (unsigned __int16 *)qword_1400C33E8;
  v6 = 0;
  if ( qword_1400C33E8 )
  {
    UserData->Ptr = qword_1400C33E8;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v7 = 0;
  }
  UserData->Size = v7;
  UserData->Reserved = v6;
  return EventWriteTransfer(AUDIO_EVENT_PROVIDER_Context, a2, 0LL, 0LL, UserDataCount, UserData);
}
