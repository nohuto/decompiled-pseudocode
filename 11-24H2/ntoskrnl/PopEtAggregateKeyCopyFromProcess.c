/*
 * XREFs of PopEtAggregateKeyCopyFromProcess @ 0x14099BC30
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x14099D018 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     PopEtAggregateKeyCopy @ 0x14099BED8 (PopEtAggregateKeyCopy.c)
 */

__int64 __fastcall PopEtAggregateKeyCopyFromProcess(__int64 a1, struct _KPROCESS *a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // r9
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 CycleTime; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  Flink = a2[3].ProcessListEntry.Flink;
  CycleTime = 0LL;
  v9 = 0LL;
  v7[0] = Flink[28].Blink;
  v7[1] = Flink[29].Flink;
  if ( (*(_DWORD *)(a3 + 8) & 1) != 0 )
  {
    LODWORD(v9) = (unsigned int)PsGetProcessId(a2);
    CycleTime = a2[3].CycleTime;
  }
  return PopEtAggregateKeyCopy(a1, v7);
}
