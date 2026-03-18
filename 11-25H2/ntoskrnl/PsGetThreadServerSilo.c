/*
 * XREFs of PsGetThreadServerSilo @ 0x140310C30
 * Callers:
 *     EtwpTraceIoInit @ 0x140310650 (EtwpTraceIoInit.c)
 *     EtwpTraceIo @ 0x140310890 (EtwpTraceIo.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     EtwTracePageFault @ 0x1403BF7D0 (EtwTracePageFault.c)
 *     EtwpTraceRedirectedIo @ 0x140642D90 (EtwpTraceRedirectedIo.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14097EE00 (ObpReferenceCurrentDeviceMap.c)
 *     IopGetThreadActiveConsoleId @ 0x140A988A4 (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsIsServerSilo @ 0x1403104CC (PsIsServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 1688);
  if ( v1 == -3 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL);
  if ( v1 && !PsIsServerSilo(*(_QWORD *)(a1 + 1688)) )
  {
    while ( !PsIsServerSilo(*(_QWORD *)(v1 + 1304)) )
      ;
  }
  return v1;
}
