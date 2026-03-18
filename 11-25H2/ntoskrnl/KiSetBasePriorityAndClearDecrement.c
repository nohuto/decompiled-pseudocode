/*
 * XREFs of KiSetBasePriorityAndClearDecrement @ 0x14020D7F0
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402691AC (KeSetPriorityAndQuantumProcess.c)
 *     KeRemovePriQueue @ 0x140305410 (KeRemovePriQueue.c)
 *     KeSetBasePriorityThread @ 0x1404713B0 (KeSetBasePriorityThread.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x1402E5E60 (KiAbQueueAutoBoostDpc.c)
 */

__int64 __fastcall KiSetBasePriorityAndClearDecrement(__int64 a1, _DWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v5; // rdx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r8
  __int64 result; // rax

  if ( a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (char)*a2 < *(char *)(a1 + 563) )
    {
      if ( *(_BYTE *)(a1 + 793) )
      {
        v5 = (struct _SINGLE_LIST_ENTRY *)(a1 + 816);
        if ( *(_QWORD *)(a1 + 816) == 1LL )
        {
          p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
          if ( CurrentPrcb != (struct _KPRCB *)-37232LL )
          {
            v5->Next = p_AbSelfIoBoostsList->Next;
            p_AbSelfIoBoostsList->Next = v5;
            _InterlockedAdd16((volatile signed __int16 *)(a1 + 868), 1u);
            KiAbQueueAutoBoostDpc(CurrentPrcb);
          }
        }
      }
    }
    *(_BYTE *)(a1 + 563) = *(_BYTE *)a2;
  }
  result = 61455LL;
  *(_BYTE *)(a1 + 870) = 0;
  *(_WORD *)(a1 + 518) &= 0xF00Fu;
  return result;
}
