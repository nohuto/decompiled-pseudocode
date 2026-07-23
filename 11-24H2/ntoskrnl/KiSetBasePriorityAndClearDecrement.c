/*
 * XREFs of KiSetBasePriorityAndClearDecrement @ 0x1404476F4
 * Callers:
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1404470CC (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x1404DDF20 (KeSetBasePriorityThread.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140284100 (KiAbQueueAutoBoostDpc.c)
 */

__int64 __fastcall KiSetBasePriorityAndClearDecrement(__int64 a1, _DWORD *a2)
{
  struct _KDPC *CurrentPrcb; // rcx
  PVOID *v5; // rdx
  PVOID *p_SystemArgument2; // r8
  __int64 result; // rax

  if ( a2 )
  {
    CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
    if ( (char)*a2 < *(char *)(a1 + 563) )
    {
      if ( *(_BYTE *)(a1 + 793) )
      {
        v5 = (PVOID *)(a1 + 816);
        if ( *(_QWORD *)(a1 + 816) == 1LL )
        {
          p_SystemArgument2 = &CurrentPrcb[581].SystemArgument2;
          if ( CurrentPrcb != (struct _KDPC *)-37232LL )
          {
            *v5 = *p_SystemArgument2;
            *p_SystemArgument2 = v5;
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
