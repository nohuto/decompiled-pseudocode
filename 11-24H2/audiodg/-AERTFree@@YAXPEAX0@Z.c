/*
 * XREFs of ?AERTFree@@YAXPEAX0@Z @ 0x14000CDC0
 * Callers:
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C894 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ @ 0x14000CCF0 (-RemoveAll@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXXZ.c)
 *     ??_ECPrivateAPO@@UEAAPEAXI@Z @ 0x14000CFC0 (--_ECPrivateAPO@@UEAAPEAXI@Z.c)
 *     ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x14000D5BC (-CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCac.c)
 *     ?ReleaseConnection@CConnectionNode@@QEAAXXZ @ 0x14000EF6C (-ReleaseConnection@CConnectionNode@@QEAAXXZ.c)
 *     ?AllocateBuffer@CCpuMemoryBufferFactory@@UEAAJ_KPEAPEAUIDeviceGraphBuffer@@@Z @ 0x1400197C0 (-AllocateBuffer@CCpuMemoryBufferFactory@@UEAAJ_KPEAPEAUIDeviceGraphBuffer@@@Z.c)
 *     ??1CCpuMemoryBuffer@@UEAA@XZ @ 0x14002234C (--1CCpuMemoryBuffer@@UEAA@XZ.c)
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140039150 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 *     wil::details::lambda_call__lambda_4ad8e298f3ae73e5f189321865e7eb90___::_lambda_call__lambda_4ad8e298f3ae73e5f189321865e7eb90___ @ 0x14003E010 (wil--details--lambda_call__lambda_4ad8e298f3ae73e5f189321865e7eb90___--_lambda_call__lambda_4ad8.c)
 *     ?Free@CCpuMemoryBufferFactory@@UEAAX_K@Z @ 0x140045EE0 (-Free@CCpuMemoryBufferFactory@@UEAAX_K@Z.c)
 *     ?Initialize@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140053C50 (-Initialize@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UC.c)
 *     ??3?$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@SAXPEAX@Z @ 0x140055148 (--3-$CCrossProcessClientOutputEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlD.c)
 *     ??1?$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x1400553C8 (--1-$CCrossProcessBaseEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@.c)
 *     ??1?$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAA@XZ @ 0x140080EC4 (--1-$CCrossProcessBaseEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@.c)
 *     ?Initialize@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x1400832F0 (-Initialize@-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UC.c)
 *     ?Initialize@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400836A0 (-Initialize@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UC.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDDC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

void __fastcall AERTFree(void *a1, void *a2, int a3)
{
  char v3; // bl

  v3 = (char)a2;
  if ( g_bSkipRTHeap )
  {
    operator delete(a1);
  }
  else
  {
    if ( a2 && a1 )
      RtlFreeMemoryBlockLookaside(a2, a1);
    if ( (byte_1400C4541 & 4) != 0 )
      McTemplateU0pqpqqqqqq_EventWriteTransfer((_DWORD)a1, (_DWORD)a2, a3, 6, v3, 0, 0, 0);
  }
}
