/*
 * XREFs of sub_14000A110 @ 0x14000A110
 * Callers:
 *     <none>
 * Callees:
 *     sub_140002350 @ 0x140002350 (sub_140002350.c)
 *     sub_140010260 @ 0x140010260 (sub_140010260.c)
 *     sub_1400102A0 @ 0x1400102A0 (sub_1400102A0.c)
 */

void __fastcall __noreturn sub_14000A110(unsigned __int8 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a2;
  if ( (_WORD)a2 )
  {
    a2 = 0LL;
    __writemsr(0x48u, 0LL);
  }
  if ( HIWORD(v2) )
    sub_1400102A0(HIWORD(v2), a2);
  sub_140002350(a1);
  sub_140010260(v5, v4);
}
