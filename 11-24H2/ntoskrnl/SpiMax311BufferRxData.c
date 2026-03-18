/*
 * XREFs of SpiMax311BufferRxData @ 0x1406A5054
 * Callers:
 *     SpiMax311PutByte @ 0x1406A5160 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x1406A51F0 (SpiMax311RxReady.c)
 *     SpiMax311TxEmpty @ 0x1406A53A0 (SpiMax311TxEmpty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiMax311BufferRxData(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_140E65060;
  v2 = ((_WORD)qword_140E65060 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_140E65060) )
  {
    word_140E6506A[(unsigned int)qword_140E65060] = a1;
    LODWORD(qword_140E65060) = v2;
  }
  return result;
}
