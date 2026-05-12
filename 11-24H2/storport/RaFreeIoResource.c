/*
 * XREFs of RaFreeIoResource @ 0x140029070
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x140050F10 (StorRemoveIoGatewayItem.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1400BE310 (StorUnitExecuteNvmeSrbComplete.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaFreeIoResource(__int64 a1, struct _SLIST_ENTRY *a2)
{
  if ( *(_DWORD *)(a1 + 64) )
    a1 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * LODWORD(a2->Next));
  return ExpInterlockedPushEntrySList((PSLIST_HEADER)a1, a2);
}
