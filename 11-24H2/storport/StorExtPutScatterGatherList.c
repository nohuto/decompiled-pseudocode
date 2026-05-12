/*
 * XREFs of StorExtPutScatterGatherList @ 0x140073610
 * Callers:
 *     <none>
 * Callees:
 *     RaMiniportGetRaidAdapter @ 0x140036868 (RaMiniportGetRaidAdapter.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall StorExtPutScatterGatherList(__int64 a1)
{
  _BYTE *v1; // rcx
  __int64 RaidAdapter; // rax

  v1 = *(_BYTE **)(a1 - 16);
  if ( (v1[248] & 1) == 0 )
  {
    RaidAdapter = RaMiniportGetRaidAdapter(v1);
    if ( RaidAdapter )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(RaidAdapter + 880) + 8LL) + 96LL))();
  }
}
