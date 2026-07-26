/*
 * XREFs of datapathVerifierReportProblem @ 0x1400AA400
 * Callers:
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x14001F1B0 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140035040 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140047CF0 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x14008F880 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     validateMemoryPages @ 0x1400AA53C (validateMemoryPages.c)
 *     verifySingleMdl @ 0x1400AA5EC (verifySingleMdl.c)
 *     verifySingleNb @ 0x1400AA648 (verifySingleNb.c)
 *     verifySingleNbl @ 0x1400AA78C (verifySingleNbl.c)
 *     verifySingleTxNbl @ 0x1400AA86C (verifySingleTxNbl.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisLiveBugCheck@@YAX_K000@Z @ 0x14009B88C (-ndisLiveBugCheck@@YAX_K000@Z.c)
 */

void __fastcall datapathVerifierReportProblem(unsigned int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rsi

  v5 = a1;
  if ( ndisDatapathVerifierMode == 2 )
    ndisBugCheckEx(0x32uLL, a1, a2, a3);
  if ( KeGetCurrentIrql() )
  {
    if ( !_InterlockedCompareExchange(&dword_140126F74, 1, 0) )
    {
      qword_140126FD8 = a3;
      qword_140126FC0 = 50LL;
      qword_140126FC8 = v5;
      qword_140126FD0 = a2;
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
