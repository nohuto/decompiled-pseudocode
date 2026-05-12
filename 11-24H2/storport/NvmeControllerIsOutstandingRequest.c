/*
 * XREFs of NvmeControllerIsOutstandingRequest @ 0x1400DB950
 * Callers:
 *     NvmeAdapterIsOutstandingRequest @ 0x1400D3B80 (NvmeAdapterIsOutstandingRequest.c)
 *     NvmeControllerWaitForOutstandingIoComplete @ 0x1400F5D14 (NvmeControllerWaitForOutstandingIoComplete.c)
 * Callees:
 *     IsOutstandingRequestInNvmeControllerQueue @ 0x1400CB764 (IsOutstandingRequestInNvmeControllerQueue.c)
 */

bool __fastcall NvmeControllerIsOutstandingRequest(__int64 a1)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *(unsigned __int16 *)(a1 + 22); i = (unsigned int)(i + 1) )
  {
    if ( IsOutstandingRequestInNvmeControllerQueue(a1, *(_QWORD *)(a1 + 728) + 192 * i) )
      return 1;
  }
  return IsOutstandingRequestInNvmeControllerQueue(a1, *(_QWORD *)(a1 + 712));
}
