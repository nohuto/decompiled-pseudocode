/*
 * XREFs of KeTimeOutQueueWaiters @ 0x1402F1880
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x14032BA00 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x140659160 (ExpWorkerFactoryManagerThread.c)
 *     ExpWorkQueueManagerThread @ 0x1408F84F0 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeTimeOutQueueWaiters(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebp
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v8; // rdi
  unsigned int v9; // r13d
  _QWORD *v10; // rdx
  __int64 v12; // rax
  int v13; // [rsp+60h] [rbp+8h]

  v3 = a1;
  v4 = 0;
  v13 = MEMORY[0xFFFFF78000000320];
  v6 = (unsigned __int64)((a2 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v3);
  v8 = *(_QWORD **)(v3 + 16);
  while ( 1 )
  {
    v9 = v4;
    if ( v8 == (_QWORD *)(v3 + 8) || v4 >= a3 )
      break;
    v10 = v8;
    v8 = (_QWORD *)v8[1];
    if ( *((_BYTE *)v10 + 16) == 3 )
    {
      if ( v13 - *(_DWORD *)(v10[3] + 436LL) < (unsigned int)v6 )
        break;
      v12 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v8 != v10 )
        __fastfail(3u);
      *v8 = v12;
      *(_QWORD *)(v12 + 8) = v8;
      ++v4;
      if ( !(unsigned __int8)KiTryUnwaitThread(KeGetCurrentPrcb(), v10, 258LL, 0LL) )
        v4 = v9;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  KiExitDispatcher((unsigned __int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
  return v4;
}
