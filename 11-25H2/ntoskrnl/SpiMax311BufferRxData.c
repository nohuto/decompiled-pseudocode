/*
 * XREFs of SpiMax311BufferRxData @ 0x140699E24
 * Callers:
 *     SpiMax311PutByte @ 0x140699F30 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x140699FC0 (SpiMax311RxReady.c)
 *     SpiMax311TxEmpty @ 0x14069A170 (SpiMax311TxEmpty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiMax311BufferRxData(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_140E64E20;
  v2 = ((_WORD)qword_140E64E20 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_140E64E20) )
  {
    word_140E64E2A[(unsigned int)qword_140E64E20] = a1;
    LODWORD(qword_140E64E20) = v2;
  }
  return result;
}
