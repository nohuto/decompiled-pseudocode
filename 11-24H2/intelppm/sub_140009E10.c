/*
 * XREFs of sub_140009E10 @ 0x140009E10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001A70 @ 0x140001A70 (sub_140001A70.c)
 *     sub_140002350 @ 0x140002350 (sub_140002350.c)
 *     sub_1400102A0 @ 0x1400102A0 (sub_1400102A0.c)
 */

unsigned __int64 __fastcall sub_140009E10(unsigned __int8 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  int v5; // eax
  unsigned __int64 result; // rax

  v2 = a2;
  if ( _InterlockedExchange(&dword_140019B08, 0) == 1 )
  {
    v4 = sub_140002350((unsigned __int8 *)&dword_140019ADC);
    sub_140001A70(&dword_140019ADC, v4 & 0xFFFFFFFD);
    if ( qword_140019AEC )
    {
      v5 = sub_140002350((unsigned __int8 *)&dword_140019AE8);
      sub_140001A70(&dword_140019AE8, v5 & 0xFFFFFFFD);
    }
  }
  if ( (_WORD)v2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(v2) )
    sub_1400102A0(HIWORD(v2), a2);
  result = sub_140002350(a1);
  if ( (_WORD)v2 )
  {
    result = (unsigned __int16)v2;
    __writemsr(0x48u, (unsigned __int16)v2);
  }
  else
  {
    _mm_lfence();
  }
  return result;
}
