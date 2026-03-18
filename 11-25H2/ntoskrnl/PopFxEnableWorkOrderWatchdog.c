/*
 * XREFs of PopFxEnableWorkOrderWatchdog @ 0x14044FDD0
 * Callers:
 *     PopFxHandleDirectedPowerTransition @ 0x14044FCFC (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PopFxEnableWorkOrderWatchdog(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 168) = KeGetCurrentThread();
    if ( a2 )
    {
      KeSetCoalescableTimer((PKTIMER)(v2 + 16), (LARGE_INTEGER)(-10000LL * a2), 0, a2 / 0xA, (PKDPC)(v2 + 80));
      v3 = MEMORY[0xFFFFF78000000008];
      *(_QWORD *)(v2 + 152) = 0LL;
      *(_QWORD *)(v2 + 160) = v3;
      v5 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
      v6 = (__int64 *)qword_140F0CE68;
      if ( *(__int64 **)qword_140F0CE68 != &PopWorkOrderList )
        __fastfail(3u);
      *(_QWORD *)v2 = &PopWorkOrderList;
      *(_QWORD *)(v2 + 8) = v6;
      *v6 = v2;
      qword_140F0CE68 = v2;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64((volatile signed __int64 *)&PopWorkOrderLock, 0LL);
      else
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)&PopWorkOrderLock, retaddr);
      if ( KiIrqlFlags )
      {
        LOBYTE(v4) = v5;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
      }
      __writecr8(v5);
    }
  }
  return v2;
}
