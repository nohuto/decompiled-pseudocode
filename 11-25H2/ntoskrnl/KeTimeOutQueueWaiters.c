/*
 * XREFs of KeTimeOutQueueWaiters @ 0x14043F744
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x14043ED50 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14064E8B0 (ExpWorkerFactoryManagerThread.c)
 *     ExpWorkQueueManagerThread @ 0x140A17020 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeTimeOutQueueWaiters(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebp
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v8; // rdi
  unsigned int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rax
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
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v3);
  v8 = *(_QWORD **)(v3 + 16);
  while ( 1 )
  {
    v9 = v4;
    if ( v8 == (_QWORD *)(v3 + 8) || v4 >= a3 )
      break;
    v10 = (__int64)v8;
    v8 = (_QWORD *)v8[1];
    if ( *(_BYTE *)(v10 + 16) == 3 )
    {
      if ( v13 - *(_DWORD *)(*(_QWORD *)(v10 + 24) + 436LL) < (unsigned int)v6 )
        break;
      v11 = *(_QWORD *)v10;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || *v8 != v10 )
        __fastfail(3u);
      *v8 = v11;
      *(_QWORD *)(v11 + 8) = v8;
      ++v4;
      if ( !(unsigned __int8)KiTryUnwaitThread((__int64)KeGetCurrentPrcb(), v10, 258LL, 0LL) )
        v4 = v9;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  KiExitDispatcher(KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
  return v4;
}
