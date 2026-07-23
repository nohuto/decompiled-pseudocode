/*
 * XREFs of EtwpTiVadQueryEventWriteCallback @ 0x1409F49C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwProviderEnabled @ 0x140262770 (EtwProviderEnabled.c)
 *     EtwpTiClearBloomFilter @ 0x140262E58 (EtwpTiClearBloomFilter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     EtwpTiFillVadEventWrite @ 0x140455204 (EtwpTiFillVadEventWrite.c)
 *     EtwpTiQueryVad @ 0x1409F4AC0 (EtwpTiQueryVad.c)
 *     EtwpTiFreeVad @ 0x1409F4C24 (EtwpTiFreeVad.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  Pool2 = (char *)ExAllocatePool2(0x100uLL, (unsigned __int64)P[13] << 6, 0x6E734954u);
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
