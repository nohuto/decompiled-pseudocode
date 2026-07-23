/*
 * XREFs of PsGetThreadServerSilo @ 0x1403C24D0
 * Callers:
 *     EtwTracePageFault @ 0x140260AD0 (EtwTracePageFault.c)
 *     EtwpTraceIoInit @ 0x1403C1EF0 (EtwpTraceIoInit.c)
 *     EtwpTraceIo @ 0x1403C2130 (EtwpTraceIo.c)
 *     EtwpTraceRedirectedIo @ 0x14064D360 (EtwpTraceRedirectedIo.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x14096D6B0 (ObpReferenceCurrentDeviceMap.c)
 *     IopGetThreadActiveConsoleId @ 0x140A9982C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsIsServerSilo @ 0x1403C35A8 (PsIsServerSilo.c)
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
