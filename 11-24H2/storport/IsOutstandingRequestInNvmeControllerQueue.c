/*
 * XREFs of IsOutstandingRequestInNvmeControllerQueue @ 0x1400CB764
 * Callers:
 *     NvmeControllerIsOutstandingRequest @ 0x1400DB950 (NvmeControllerIsOutstandingRequest.c)
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400E9958 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeControllerIoPollingTimerCallback @ 0x1400F10F0 (NvmeControllerIoPollingTimerCallback.c)
 *     NvmeNamespaceIsOutstandingRequest @ 0x1401051EC (NvmeNamespaceIsOutstandingRequest.c)
 *     NvmeIoPollingDpcRoutine @ 0x14011C900 (NvmeIoPollingDpcRoutine.c)
 *     NvmeControllerDetectCommandTimeout @ 0x140136F70 (NvmeControllerDetectCommandTimeout.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsOutstandingRequestInNvmeControllerQueue(__int64 a1, __int64 a2)
{
  int v3; // ebx
  USHORT DepthSList; // ax
  __int64 v6; // rcx
  union _SLIST_HEADER *v8; // rcx

  v3 = *(_DWORD *)(a2 + 124);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 88) + 136LL) & 2) == 0 )
    --v3;
  DepthSList = ExQueryDepthSList((PSLIST_HEADER)(a2 + 64));
  v6 = *(unsigned __int16 *)(a2 + 136);
  if ( !(_WORD)v6 )
    v3 -= *(unsigned __int16 *)(a2 + 150);
  if ( (*(_BYTE *)(a1 + 136) & 2) != 0 )
    return _InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 148), 0, 0) != 0;
  if ( (_WORD)v6 )
    v8 = (union _SLIST_HEADER *)(*(_QWORD *)(a1 + 1184) - 16LL + 16 * v6);
  else
    v8 = (union _SLIST_HEADER *)(a1 + 1168);
  return DepthSList < v3 - (unsigned int)ExQueryDepthSList(v8);
}
