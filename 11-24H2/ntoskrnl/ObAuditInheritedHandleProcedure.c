/*
 * XREFs of ObAuditInheritedHandleProcedure @ 0x140740D30
 * Callers:
 *     <none>
 * Callees:
 *     SeAuditHandleDuplication @ 0x140863C90 (SeAuditHandleDuplication.c)
 *     ExUnlockHandleTableEntry @ 0x140891F80 (ExUnlockHandleTableEntry.c)
 */

char __fastcall ObAuditInheritedHandleProcedure(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx

  v4 = *a2;
  ExUnlockHandleTableEntry(a1, a2);
  if ( ((v4 >> 17) & 4) != 0 )
    SeAuditHandleDuplication(a3, a3, a4[1], *a4);
  return 0;
}
