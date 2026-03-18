/*
 * XREFs of IopDequeueIrpFromFileObject @ 0x14031A230
 * Callers:
 *     IopCopyCompleteReadRequest @ 0x140268870 (IopCopyCompleteReadRequest.c)
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     IopDropIrp @ 0x1403C5110 (IopDropIrp.c)
 *     IopIoRingCompleteIrp @ 0x1403C5DA0 (IopIoRingCompleteIrp.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

int __fastcall IopDequeueIrpFromFileObject(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rbx
  KIRQL v4; // al
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  int result; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int64 *)(a2 + 184);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 184));
  v5 = *(_QWORD *)(a1 + 32);
  v6 = (_QWORD *)(a1 + 32);
  v7 = v4;
  if ( *(_QWORD *)(v5 + 8) != a1 + 32 || (v8 = *(_QWORD **)(a1 + 40), (_QWORD *)*v8 != v6) )
    __fastfail(3u);
  *v8 = v5;
  *(_QWORD *)(v5 + 8) = v8;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *v6 = v6;
  ObFastDereferenceObject(
    &KeGetCurrentThread()[1].SchedulerApcFill5[72],
    *(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF9uLL,
    1883467593LL);
  result = *(_DWORD *)(a1 + 16) & 0xFFFF5FFF | 0x8000;
  *(_DWORD *)(a1 + 16) = result;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || (result = PopHibernateInProgress) != 0 )
    _InterlockedAnd64(v2, 0LL);
  else
    result = KiReleaseSpinLockInstrumented(v2, retaddr);
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v7);
  __writecr8(v7);
  return result;
}
