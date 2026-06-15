/*
 * XREFs of ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C894
 * Callers:
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000AC50 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ??_GCAPONode@@QEAAPEAXI@Z @ 0x14000B930 (--_GCAPONode@@QEAAPEAXI@Z.c)
 *     ??_ECConnectionNode@@UEAAPEAXI@Z @ 0x14000D120 (--_ECConnectionNode@@UEAAPEAXI@Z.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x1400359F0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ??_G?$CComObject@VCAudioPump@@@ATL@@UEAAPEAXI@Z @ 0x140042EA0 (--_G-$CComObject@VCAudioPump@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z @ 0x1400454A0 (--_G-$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14007F320 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400891E0 (--_G-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140089230 (--_G-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140089280 (--_E-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400892D0 (--_G-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     _CProcessingData::CopyEndpointList_::_1_::dtor$0 @ 0x140091B53 (_CProcessingData--CopyEndpointList_--_1_--dtor$0.c)
 *     __lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator()_::_1_::dtor$5 @ 0x140091EA8 (__lambda_4f5bca04da2ba347195d47ea7d1a4d66_--operator()_--_1_--dtor$5.c)
 *     _CAudioProcessor::AttachEndpointToConnection_::_1_::dtor$0 @ 0x140093100 (_CAudioProcessor--AttachEndpointToConnection_--_1_--dtor$0.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$1 @ 0x140096DB7 (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x14000CDC0 (-AERTFree@@YAXPEAX0@Z.c)
 */

void __fastcall CProcessorTransaction::operator delete(void *a1)
{
  void *v2; // rax

  v2 = AERTGetDLLRTHeap();
  AERTFree(a1, v2);
}
