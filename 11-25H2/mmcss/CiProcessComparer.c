/*
 * XREFs of CiProcessComparer @ 0x1C000DDB0
 * Callers:
 *     CiProcessCreate @ 0x1C000DAC0 (CiProcessCreate.c)
 *     CiProcessLocate @ 0x1C000DC90 (CiProcessLocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiProcessComparer(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 40);
  if ( a1 >= v2 )
    return a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
