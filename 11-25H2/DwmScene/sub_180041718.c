/*
 * XREFs of sub_180041718 @ 0x180041718
 * Callers:
 *     sub_18004126C @ 0x18004126C (sub_18004126C.c)
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_180041718(__int64 a1)
{
  if ( !*(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 8) == 0LL;
  if ( *(_DWORD *)a1 != 1 )
    return 1;
  return *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24);
}
