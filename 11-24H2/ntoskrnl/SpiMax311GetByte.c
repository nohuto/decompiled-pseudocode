/*
 * XREFs of SpiMax311GetByte @ 0x1406A5090
 * Callers:
 *     <none>
 * Callees:
 *     SpiSend16 @ 0x1406A53D8 (SpiSend16.c)
 */

__int64 __fastcall SpiMax311GetByte(_QWORD *a1, _BYTE *a2)
{
  __int16 v3; // cx
  unsigned __int16 v5; // ax

  if ( !a1 || !*a1 )
    return 3LL;
  if ( HIDWORD(qword_140E65060) == (_DWORD)qword_140E65060 )
  {
    v5 = SpiSend16(a1, 0LL);
    if ( (v5 & 0x8000u) == 0 )
    {
      return 1LL;
    }
    else
    {
      *a2 = v5;
      return (v5 >> 9) & 2;
    }
  }
  else
  {
    v3 = word_140E6506A[HIDWORD(qword_140E65060)];
    *a2 = v3;
    HIDWORD(qword_140E65060) = (WORD2(qword_140E65060) + 1) & 0x3FF;
    if ( (v3 & 0x400) != 0 )
      return 2LL;
    else
      return 0LL;
  }
}
