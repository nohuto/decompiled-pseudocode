/*
 * XREFs of PspUserThreadStartup @ 0x1408FEA00
 * Callers:
 *     <none>
 * Callees:
 *     KeUpdateTebSchedulingPropertiesCurrentThread @ 0x1402057C8 (KeUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     PspTerminateThreadByPointer @ 0x1408A7CB0 (PspTerminateThreadByPointer.c)
 *     PspInitializeThunkContext @ 0x1408FE308 (PspInitializeThunkContext.c)
 *     PspDisablePrimaryTokenExchange @ 0x1408FEB00 (PspDisablePrimaryTokenExchange.c)
 *     PspNotifyThreadCreation @ 0x1408FEC38 (PspNotifyThreadCreation.c)
 *     PsGetSessionLocaleId @ 0x1408FF084 (PsGetSessionLocaleId.c)
 *     DbgkCreateMinimalThread @ 0x1408FF638 (DbgkCreateMinimalThread.c)
 */

__int16 PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rcx
  int *v2; // rsi
  int SessionLocaleId; // eax
  __int64 v4; // rdx
  int v5; // eax

  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
    PspTerminateThreadByPointer((ULONG_PTR)CurrentThread, 0xC000004B, 1);
  v2 = (int *)&CurrentThread->ApcState.Process[3].ActiveGroupsMask.Masks[1] + 1;
  if ( (*v2 & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    SessionLocaleId = PsGetSessionLocaleId(v1, CurrentThread->Teb);
    *(_DWORD *)(v4 + 264) = SessionLocaleId;
    KeUpdateTebSchedulingPropertiesCurrentThread();
    PspNotifyThreadCreation(CurrentThread);
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    LOWORD(v5) = KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  }
  else
  {
    v5 = *v2;
    if ( (*v2 & 1) == 0 )
      LOWORD(v5) = PspInitializeThunkContext();
  }
  return v5;
}
