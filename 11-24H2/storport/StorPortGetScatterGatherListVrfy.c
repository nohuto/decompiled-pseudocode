/*
 * XREFs of StorPortGetScatterGatherListVrfy @ 0x1401C12D0
 * Callers:
 *     <none>
 * Callees:
 *     RaMiniportGetRaidAdapter @ 0x140036868 (RaMiniportGetRaidAdapter.c)
 *     RaidRemapScatterGatherList @ 0x1401C1008 (RaidRemapScatterGatherList.c)
 */

PVOID __fastcall StorPortGetScatterGatherListVrfy(__int64 a1, __int64 a2)
{
  __int64 RaidAdapter; // r8
  _BYTE *v3; // rcx
  int v5; // ecx
  __int64 v6; // rbx
  __int64 v7; // rcx

  RaidAdapter = 0LL;
  if ( a1 )
  {
    v3 = *(_BYTE **)(a1 - 16);
    if ( (v3[248] & 1) != 0 )
    {
      if ( *(_QWORD *)v3 )
        return 0LL;
    }
    else
    {
      RaidAdapter = RaMiniportGetRaidAdapter(v3);
    }
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_DWORD *)(a2 + 24);
    v6 = *(_QWORD *)(a2 + 96);
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 12);
    v6 = *(_QWORD *)(a2 + 48);
  }
  if ( !*(_BYTE *)(RaidAdapter + 4370) || (*(_BYTE *)(RaidAdapter + 4371) & 4) == 0 || (v5 & 0xC0) == 0 )
    return *(PVOID *)(v6 + 112);
  if ( KeGetCurrentIrql() > 2u )
    return *(PVOID *)(v6 + 112);
  if ( !RaidRemapScatterGatherList(*(unsigned int **)(v6 + 112), v6) )
    return *(PVOID *)(v6 + 112);
  v7 = *(_QWORD *)(v6 + 120);
  if ( (*(_BYTE *)(v7 + 10) & 5) != 0 )
    return *(PVOID *)(v7 + 24);
  else
    return MmMapLockedPagesSpecifyCache((PMDL)v7, 0, MmCached, 0LL, 0, 0x40000010u);
}
