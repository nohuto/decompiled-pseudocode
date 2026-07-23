/*
 * XREFs of IoPropagateActivityIdToThread @ 0x140404BB0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetActivityIdIrp @ 0x140404C20 (IoGetActivityIdIrp.c)
 */

__int64 __fastcall IoPropagateActivityIdToThread(__int64 a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY **a3)
{
  __int64 v3; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *Flink; // rax

  v3 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v3 || (*(_BYTE *)(v3 + 2) & 1) == 0 )
    return 3221226021LL;
  IoGetActivityIdIrp();
  CurrentThread = KeGetCurrentThread();
  Flink = CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
  CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = a2;
  *a3 = Flink;
  return 0LL;
}
