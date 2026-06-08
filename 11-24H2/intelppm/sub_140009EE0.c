/*
 * XREFs of sub_140009EE0 @ 0x140009EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001A70 @ 0x140001A70 (sub_140001A70.c)
 *     sub_140002350 @ 0x140002350 (sub_140002350.c)
 *     sub_1400102A0 @ 0x1400102A0 (sub_1400102A0.c)
 */

void __fastcall sub_140009EE0(unsigned __int8 *a1, unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdx

  _InterlockedExchange(&dword_140019B08, 1);
  v4 = sub_140002350((unsigned __int8 *)&dword_140019ADC);
  sub_140001A70(&dword_140019ADC, v4 | 2LL);
  if ( qword_140019AEC )
  {
    v5 = sub_140002350((unsigned __int8 *)&dword_140019AE8);
    sub_140001A70(&dword_140019AE8, v5 | 2LL);
  }
  v6 = (unsigned int)sub_140002350((unsigned __int8 *)&dword_140019AF4);
  sub_140001A70(&dword_140019AF4, v6 | 1);
  if ( (_WORD)a2 )
  {
    v7 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(a2) )
    sub_1400102A0(HIWORD(a2), v7);
  sub_140002350(a1);
  sub_140001A70(&dword_140019AF4, v6);
  if ( (_WORD)a2 )
    __writemsr(0x48u, (unsigned __int16)a2);
  else
    _mm_lfence();
}
