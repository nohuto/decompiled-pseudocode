/*
 * XREFs of PspUserThreadStartup @ 0x1409212E0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeUpdateTebSchedulingPropertiesCurrentThread @ 0x14032CDA8 (KeUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     PspTerminateThreadByPointer @ 0x1408FDF10 (PspTerminateThreadByPointer.c)
 *     PspInitializeThunkContext @ 0x140920BE8 (PspInitializeThunkContext.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409213E0 (PspDisablePrimaryTokenExchange.c)
 *     PspNotifyThreadCreation @ 0x140921518 (PspNotifyThreadCreation.c)
 *     PsGetSessionLocaleId @ 0x140921964 (PsGetSessionLocaleId.c)
 *     DbgkCreateMinimalThread @ 0x140921F18 (DbgkCreateMinimalThread.c)
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
