/*
 * XREFs of PspUserThreadStartup @ 0x14090AF50
 * Callers:
 *     <none>
 * Callees:
 *     KeUpdateTebSchedulingPropertiesCurrentThread @ 0x140206238 (KeUpdateTebSchedulingPropertiesCurrentThread.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     PspTerminateThreadByPointer @ 0x1408F48F0 (PspTerminateThreadByPointer.c)
 *     PspInitializeThunkContext @ 0x14090A9A0 (PspInitializeThunkContext.c)
 *     PspDisablePrimaryTokenExchange @ 0x14090B050 (PspDisablePrimaryTokenExchange.c)
 *     PspNotifyThreadCreation @ 0x14090B188 (PspNotifyThreadCreation.c)
 *     PsGetSessionLocaleId @ 0x14090B5D4 (PsGetSessionLocaleId.c)
 *     DbgkCreateMinimalThread @ 0x14090B610 (DbgkCreateMinimalThread.c)
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
