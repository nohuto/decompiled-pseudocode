/*
 * XREFs of sub_14002D040 @ 0x14002D040
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005DD0 @ 0x140005DD0 (sub_140005DD0.c)
 *     sub_140008FEC @ 0x140008FEC (sub_140008FEC.c)
 */

void __fastcall sub_14002D040(int a1)
{
  int **i; // rcx
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  if ( a1 == 1 && _InterlockedExchange(&dword_140018E98, 0) )
  {
    for ( i = &off_1400179C8; ; i = (int **)(v3 + 7) )
    {
      v2 = sub_140008FEC(i);
      v3 = v2;
      if ( !v2 )
        break;
      if ( (*(_DWORD *)v2[1] & 1) != 0 )
        sub_140005DD0(*((_DWORD *)v2 + 6), v2[1]);
    }
  }
}
