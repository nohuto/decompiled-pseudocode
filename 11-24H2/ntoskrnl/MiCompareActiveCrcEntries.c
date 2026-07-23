/*
 * XREFs of MiCompareActiveCrcEntries @ 0x140423220
 * Callers:
 *     MiProcessCrcList @ 0x1409E6C70 (MiProcessCrcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompareActiveCrcEntries(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // ecx
  unsigned int v5; // eax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 > *(_QWORD *)(a2 + 8) )
    return 1LL;
  if ( v2 < *(_QWORD *)(a2 + 8) )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 > *(_QWORD *)(a2 + 24) )
    return 1LL;
  if ( v3 >= *(_QWORD *)(a2 + 24) )
  {
    v4 = *(_DWORD *)(a1 + 32) & 0x1F;
    v5 = *(_DWORD *)(a2 + 32) & 0x1F;
    if ( v4 <= v5 )
      return (unsigned int)-(v4 < v5);
    return 1LL;
  }
  return 0xFFFFFFFFLL;
}
