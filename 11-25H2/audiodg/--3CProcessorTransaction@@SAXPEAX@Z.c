/*
 * XREFs of ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C864
 * Callers:
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000AC20 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ??_GCAPONode@@QEAAPEAXI@Z @ 0x14000B900 (--_GCAPONode@@QEAAPEAXI@Z.c)
 *     ??_ECConnectionNode@@UEAAPEAXI@Z @ 0x14000D0F0 (--_ECConnectionNode@@UEAAPEAXI@Z.c)
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x140035CF0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 *     ??_G?$CComObject@VCAudioPump@@@ATL@@UEAAPEAXI@Z @ 0x1400431A0 (--_G-$CComObject@VCAudioPump@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z @ 0x1400457A0 (--_G-$CComObject@VCAudioProcessor@@@ATL@@UEAAPEAXI@Z.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400810F0 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140089760 (--_G-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400897B0 (--_G-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140089800 (--_E-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140089850 (--_G-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     _CProcessingData::CopyEndpointList_::_1_::dtor$0 @ 0x1400920D3 (_CProcessingData--CopyEndpointList_--_1_--dtor$0.c)
 *     __lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator()_::_1_::dtor$5 @ 0x140092428 (__lambda_4f5bca04da2ba347195d47ea7d1a4d66_--operator()_--_1_--dtor$5.c)
 *     _CAudioProcessor::AttachEndpointToConnection_::_1_::dtor$0 @ 0x1400936A0 (_CAudioProcessor--AttachEndpointToConnection_--_1_--dtor$0.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$1 @ 0x140097333 (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD4C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x14000CD90 (-AERTFree@@YAXPEAX0@Z.c)
 */

void __fastcall CProcessorTransaction::operator delete(void *a1)
{
  void *v2; // rax

  v2 = AERTGetDLLRTHeap();
  AERTFree(a1, v2);
}
