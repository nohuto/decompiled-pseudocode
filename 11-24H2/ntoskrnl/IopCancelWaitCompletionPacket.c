/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x14041B244
 * Callers:
 *     IopCloseWaitCompletionPacket @ 0x14041B150 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x1404DC5F0 (NtCancelWaitCompletionPacket.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ?KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z @ 0x1402D381C (-KiDeregisterObjectWaitBlock@@YAEPEAXPEAU_KWAIT_BLOCK@@@Z.c)
 *     ObGetAssociatedWaitObject @ 0x14041B310 (ObGetAssociatedWaitObject.c)
 *     KeRemoveQueueEntry @ 0x14041B3A0 (KeRemoveQueueEntry.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall IopCancelWaitCompletionPacket(struct _KWAIT_BLOCK *a1, char a2, unsigned __int8 a3)
{
  PVOID Object; // r14
  unsigned __int64 v5; // rdi
  volatile signed __int32 *AssociatedWaitObject; // rax
  char v8; // al
  PVOID SparePtr; // rsi
  __int64 v10; // rdx

  Object = a1[1].Object;
  v5 = a3;
  AssociatedWaitObject = (volatile signed __int32 *)ObGetAssociatedWaitObject(Object);
  v8 = KiDeregisterObjectWaitBlock(AssociatedWaitObject, a1);
  SparePtr = a1[1].SparePtr;
  if ( !v8 && (!a2 || !(unsigned __int8)KeRemoveQueueEntry(a1[1].SparePtr, a1)) )
    return 0;
  a1[1].SparePtr = 0LL;
  LOBYTE(a1[2].WaitListEntry.Blink) = 0;
  KxReleaseSpinLock((volatile signed __int64 *)&a1[2]);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = v5;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  }
  __writecr8(v5);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  ObfDereferenceObjectWithTag(SparePtr, 0x746C6644u);
  ObfDereferenceObjectWithTag(a1, 0x746C6644u);
  return 1;
}
