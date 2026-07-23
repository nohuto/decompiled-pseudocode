/*
 * XREFs of sub_140463394 @ 0x140463394
 * Callers:
 *     sub_140463324 @ 0x140463324 (sub_140463324.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140463394(__int64 a1, unsigned int a2)
{
  int v2; // r9d
  int v3; // r8d
  __int64 result; // rax
  unsigned int v6; // edx

  v2 = 0;
  v3 = *(_DWORD *)a1 - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v3 < v2 )
        return v2;
      LODWORD(result) = (v3 + v2) / 2;
      v6 = *(_DWORD *)(*(_QWORD *)(a1 + 4) + 4LL * (int)result) & 0xFFFFFFF;
      if ( a2 >= v6 )
        break;
      v3 = result - 1;
    }
    if ( a2 <= v6 )
      break;
    v2 = result + 1;
  }
  return (int)result;
}
