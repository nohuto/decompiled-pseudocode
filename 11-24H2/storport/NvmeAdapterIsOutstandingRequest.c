/*
 * XREFs of NvmeAdapterIsOutstandingRequest @ 0x1400D3B80
 * Callers:
 *     NvmeAdapterWaitForOutstandingIoComplete @ 0x1400DAD70 (NvmeAdapterWaitForOutstandingIoComplete.c)
 *     NvmeAdapterPowerDownDevice @ 0x14012F2AC (NvmeAdapterPowerDownDevice.c)
 * Callees:
 *     NvmeControllerIsOutstandingRequest @ 0x1400DB950 (NvmeControllerIsOutstandingRequest.c)
 */

char __fastcall NvmeAdapterIsOutstandingRequest(__int64 a1)
{
  char IsOutstandingRequest; // di
  struct _ERESOURCE *v4; // rbp
  _QWORD *v5; // rsi
  _QWORD *i; // rbx

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
    return NvmeControllerIsOutstandingRequest(*(_QWORD *)(a1 + 1136));
  if ( (*(_BYTE *)(a1 + 416) & 0x40) == 0 )
    return 0;
  IsOutstandingRequest = 0;
  KeEnterCriticalRegion();
  v4 = (struct _ERESOURCE *)(a1 + 1176);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1176), 1u);
  v5 = (_QWORD *)(a1 + 1288);
  for ( i = *(_QWORD **)(a1 + 1288); i != v5; i = (_QWORD *)*i )
  {
    IsOutstandingRequest = NvmeControllerIsOutstandingRequest(i - 14);
    if ( IsOutstandingRequest )
      break;
  }
  ExReleaseResourceLite(v4);
  KeLeaveCriticalRegion();
  return IsOutstandingRequest;
}
