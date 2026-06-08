/*
 * XREFs of sub_140005D70 @ 0x140005D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140010260 @ 0x140010260 (sub_140010260.c)
 *     sub_1400102A0 @ 0x1400102A0 (sub_1400102A0.c)
 */

void __fastcall __noreturn sub_140005D70(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = WORD1(a2);
  if ( (_WORD)a2 )
  {
    a1 = 72LL;
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( (_WORD)v2 )
    sub_1400102A0((unsigned __int16)v2, a2);
  sub_140010260(a1, a2);
}
