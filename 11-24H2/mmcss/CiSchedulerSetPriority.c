/*
 * XREFs of CiSchedulerSetPriority @ 0x140003260
 * Callers:
 *     CiSchedulerUpdateSuspendState @ 0x140001390 (CiSchedulerUpdateSuspendState.c)
 *     CiSchedulerAddThread @ 0x140001650 (CiSchedulerAddThread.c)
 *     CiSchedulerCommitPriority @ 0x140001790 (CiSchedulerCommitPriority.c)
 *     CiSchedulerThreadFunction @ 0x1400018F0 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiLogSchedulerEvent @ 0x140003860 (CiLogSchedulerEvent.c)
 */

char __fastcall CiSchedulerSetPriority(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int8 v3; // dl
  unsigned int v4; // edi

  if ( (*(_BYTE *)(a1 + 148) & 1) != 0 )
    return 0;
  if ( CiThreadsMovedUp )
  {
    v2 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(v2 + 120) || !*(_BYTE *)(v2 + 132) && *(_QWORD *)(v2 + 80) )
    {
      v3 = *(_BYTE *)(*(_QWORD *)(a1 + 64) + 40LL);
      if ( v3 > *(_BYTE *)(a1 + 104) )
        v3 = *(_BYTE *)(a1 + 104);
    }
    else
    {
      v3 = *(_BYTE *)(a1 + 104);
    }
  }
  else
  {
    v3 = *(_BYTE *)(a1 + 106);
  }
  v4 = v3;
  if ( *(unsigned __int8 *)(a1 + 107) != v3 )
  {
    *(_BYTE *)(a1 + 107) = v3;
    if ( byte_14000A0D0 )
      CiLogSchedulerEvent(a1, v3);
    KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 96), v4);
  }
  return 1;
}
