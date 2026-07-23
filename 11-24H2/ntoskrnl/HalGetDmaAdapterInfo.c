/*
 * XREFs of HalGetDmaAdapterInfo @ 0x1404BCB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalGetDmaAdapterInfo(__int64 a1, _DWORD *a2)
{
  int v3; // r8d
  __int64 v4; // rax

  if ( *a2 != 1 )
    return 3221225659LL;
  a2[3] = *(_DWORD *)(a1 + 448);
  if ( *(_BYTE *)(a1 + 441) )
  {
    if ( !*(_BYTE *)(a1 + 440) )
      a2[4] = 3;
    a2[2] = -1;
    v3 = 1;
    a2[1] = 0;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 368);
    a2[1] = 1;
    a2[2] = 1;
    a2[4] = 0;
    v3 = *(_DWORD *)(v4 + 164);
  }
  a2[5] = v3;
  if ( *(_DWORD *)(a1 + 520) == 2 )
    a2[4] |= 4u;
  return 0LL;
}
