/*
 * XREFs of EtwpTiVadQueryEventWriteCallback @ 0x1409FBC80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     EtwpTiClearBloomFilter @ 0x1403D3604 (EtwpTiClearBloomFilter.c)
 *     EtwProviderEnabled @ 0x1403D47F0 (EtwProviderEnabled.c)
 *     EtwpTiFillVadEventWrite @ 0x140460324 (EtwpTiFillVadEventWrite.c)
 *     EtwpTiQueryVad @ 0x1409FBD80 (EtwpTiQueryVad.c)
 *     EtwpTiFreeVad @ 0x1409FBEE4 (EtwpTiFreeVad.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
