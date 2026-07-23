/*
 * XREFs of MiCountSlabContextAvailablePagesForDefrag @ 0x140687AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCountSlabContextAvailablePagesForDefrag(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax

  v3 = *(_QWORD *)(a2 + 104);
  v4 = *(_QWORD *)(a2 + 96) + **(_QWORD **)(a2 + 80);
  if ( v4 > v3 )
    *a3 += v4 - v3;
  return 0LL;
}
