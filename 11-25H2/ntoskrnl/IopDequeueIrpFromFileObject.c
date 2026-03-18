/*
 * XREFs of IopDequeueIrpFromFileObject @ 0x140284230
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     IopDropIrp @ 0x140283AE0 (IopDropIrp.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 *     IopIoRingCompleteIrp @ 0x1402A2964 (IopIoRingCompleteIrp.c)
 *     IopCopyCompleteReadRequest @ 0x1402D3570 (IopCopyCompleteReadRequest.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned int __fastcall IopDequeueIrpFromFileObject(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rbx
  KIRQL v4; // al
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rcx
  char v9; // al
  unsigned int result; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int64 *)(a2 + 184);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 184));
  v5 = (_QWORD *)(a1 + 32);
  v6 = v4;
  v7 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v7 + 8) != a1 + 32 || (v8 = *(_QWORD **)(a1 + 40), (_QWORD *)*v8 != v5) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  v9 = IopVelocityFlags;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *v5 = v5;
  if ( (v9 & 1) != 0 )
    ObFastDereferenceObject(
      &KeGetCurrentThread()[1].SchedulerApcFill5[72],
      *(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF9uLL,
      1883467593LL);
  else
    ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
  result = *(_DWORD *)(a1 + 16) & 0xFFFF5FFF | 0x8000;
  *(_DWORD *)(a1 + 16) = result;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = PopHibernateInProgress) != 0 )
    _InterlockedAnd64(v2, 0LL);
  else
    result = KiReleaseSpinLockInstrumented(v2, retaddr);
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v6);
  __writecr8(v6);
  return result;
}
