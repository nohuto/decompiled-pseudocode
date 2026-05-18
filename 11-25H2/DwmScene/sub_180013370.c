/*
 * XREFs of sub_180013370 @ 0x180013370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180013370(__int64 a1, int a2)
{
  int v2; // edx

  if ( a2 )
  {
    v2 = a2 - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 188LL) = 3;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 16) + 188LL) = 1;
    }
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 188LL) = 0;
  }
  return 0LL;
}
