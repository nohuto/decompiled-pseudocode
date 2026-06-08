/*
 * XREFs of sub_1400453C0 @ 0x1400453C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003460 @ 0x140003460 (sub_140003460.c)
 */

__int64 __fastcall sub_1400453C0(__int64 a1, int a2)
{
  int v4; // edx
  _QWORD *v5; // r10
  __int64 v6; // r11

  if ( a2 >= 5 )
  {
    return 5;
  }
  else
  {
    v4 = 0;
    if ( a2 >= 0 )
      v4 = a2;
    for ( ; v4 < 5; ++v4 )
    {
      if ( *(_BYTE *)sub_140003460(a1, v4) && *v5 == v6 )
        break;
    }
  }
  return (unsigned int)v4;
}
