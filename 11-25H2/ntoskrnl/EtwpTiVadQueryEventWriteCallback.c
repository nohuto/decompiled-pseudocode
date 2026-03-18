/*
 * XREFs of EtwpTiVadQueryEventWriteCallback @ 0x1409FEA00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     EtwpTiClearBloomFilter @ 0x1403BD328 (EtwpTiClearBloomFilter.c)
 *     EtwProviderEnabled @ 0x1403BE620 (EtwProviderEnabled.c)
 *     EtwpTiFillVadEventWrite @ 0x1404618A0 (EtwpTiFillVadEventWrite.c)
 *     EtwpTiQueryVad @ 0x1409FEB00 (EtwpTiQueryVad.c)
 *     EtwpTiFreeVad @ 0x1409FEC64 (EtwpTiFreeVad.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTiVadQueryEventWriteCallback(unsigned int *P)
{
  int Vad; // ebp
  char *Pool2; // rsi
  __int64 v4; // rcx
  unsigned int i; // edi
  void *v6; // rcx
  BOOLEAN v7; // [rsp+20h] [rbp-28h]

  Vad = 0;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v7 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x10000000uLL);
    Vad = EtwpTiQueryVad(Pool2, *((_QWORD *)P + 8), *((_QWORD *)P + 9), P[13], v7);
  }
  EtwpTiFillVadEventWrite(
    *((PEVENT_DATA_DESCRIPTOR *)P + 4),
    P[12],
    1,
    (__int64)Pool2,
    Vad,
    P[13],
    *((PCEVENT_DESCRIPTOR *)P + 7));
  for ( i = 0; i < P[13]; ++i )
  {
    if ( _bittest(&Vad, i) )
      EtwpTiFreeVad(&Pool2[64 * (unsigned __int64)i]);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  EtwpTiClearBloomFilter(v4, *((_QWORD *)P + 10));
  v6 = (void *)*((_QWORD *)P + 8);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x69547445u);
  ExFreePoolWithTag(P, 0);
}
