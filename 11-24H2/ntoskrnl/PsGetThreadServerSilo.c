/*
 * XREFs of PsGetThreadServerSilo @ 0x140348A90
 * Callers:
 *     EtwTracePageFault @ 0x140216580 (EtwTracePageFault.c)
 *     EtwpTraceIoInit @ 0x1403484B0 (EtwpTraceIoInit.c)
 *     EtwpTraceIo @ 0x1403486F0 (EtwpTraceIo.c)
 *     EtwpTraceRedirectedIo @ 0x14064ED50 (EtwpTraceRedirectedIo.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140984EA0 (ObpReferenceCurrentDeviceMap.c)
 *     IopGetThreadActiveConsoleId @ 0x140A9E2BC (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsIsServerSilo @ 0x140349B68 (PsIsServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 1688);
  if ( v1 == -3 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1520LL);
  if ( v1 && !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(a1 + 1688)) )
  {
    while ( !(unsigned __int8)PsIsServerSilo(*(_QWORD *)(v1 + 1304)) )
      ;
  }
  return v1;
}
