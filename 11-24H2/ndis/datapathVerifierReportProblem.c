/*
 * XREFs of datapathVerifierReportProblem @ 0x1400A2250
 * Callers:
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140019DC0 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140021B80 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140026980 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140073CE0 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     validateMemoryPages @ 0x1400A238C (validateMemoryPages.c)
 *     verifySingleMdl @ 0x1400A243C (verifySingleMdl.c)
 *     verifySingleNb @ 0x1400A2498 (verifySingleNb.c)
 *     verifySingleNbl @ 0x1400A25DC (verifySingleNbl.c)
 *     verifySingleTxNbl @ 0x1400A26BC (verifySingleTxNbl.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisLiveBugCheck@@YAX_K000@Z @ 0x14009049C (-ndisLiveBugCheck@@YAX_K000@Z.c)
 */

void __fastcall datapathVerifierReportProblem(unsigned int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rsi

  v5 = a1;
  if ( ndisDatapathVerifierMode == 2 )
    ndisBugCheckEx(0x32uLL, a1, a2, a3);
  if ( KeGetCurrentIrql() )
  {
    if ( !_InterlockedCompareExchange(&dword_14011CEC4, 1, 0) )
    {
      qword_14011CF28 = a3;
      qword_14011CF10 = 50LL;
      qword_14011CF18 = v5;
      qword_14011CF20 = a2;
      RtlCaptureStackBackTrace(3u, 8u, &BackTrace, 0LL);
      WorkItem.Parameter = 0LL;
      WorkItem.List.Flink = 0LL;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))datapathVerifierReportProblemAsync;
      ExQueueWorkItem(&WorkItem, NormalWorkQueue);
    }
  }
  else
  {
    ndisLiveBugCheck(50LL, v5, a2, a3);
  }
}
