/*
 * XREFs of SpiMax311RxReady @ 0x1406A51F0
 * Callers:
 *     <none>
 * Callees:
 *     SpiMax311BufferRxData @ 0x1406A5054 (SpiMax311BufferRxData.c)
 *     SpiSend16 @ 0x1406A53D8 (SpiSend16.c)
 */

bool __fastcall SpiMax311RxReady(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int16 v3; // cx

  v1 = a1;
  if ( !a1 || !*a1 )
    return 0;
  while ( 1 )
  {
    v3 = SpiSend16(a1, 0LL);
    if ( v3 >= 0 )
      break;
    SpiMax311BufferRxData(v3);
    a1 = v1;
  }
  return (_DWORD)qword_140E65060 != HIDWORD(qword_140E65060);
}
