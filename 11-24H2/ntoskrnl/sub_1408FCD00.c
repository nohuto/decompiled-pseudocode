/*
 * XREFs of sub_1408FCD00 @ 0x1408FCD00
 * Callers:
 *     sub_1408FBE0C @ 0x1408FBE0C (sub_1408FBE0C.c)
 *     sub_1408FC0E0 @ 0x1408FC0E0 (sub_1408FC0E0.c)
 *     sub_1408FC48C @ 0x1408FC48C (sub_1408FC48C.c)
 *     sub_1408FC59C @ 0x1408FC59C (sub_1408FC59C.c)
 *     sub_1408FC89C @ 0x1408FC89C (sub_1408FC89C.c)
 *     sub_1408FCBC0 @ 0x1408FCBC0 (sub_1408FCBC0.c)
 *     sub_1409DFA70 @ 0x1409DFA70 (sub_1409DFA70.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1408FCD00(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    if ( a2 )
      return a2 - *(_QWORD *)(a1 + 48);
    else
      LOBYTE(v2) = -1;
  }
  else
  {
    LOBYTE(v2) = a2 != 0;
  }
  return v2;
}
