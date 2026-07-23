/*
 * XREFs of KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404F6E34
 * Callers:
 *     KiSearchForNewThread @ 0x1402A59F0 (KiSearchForNewThread.c)
 *     KeTransitionProcessorParkState @ 0x1403D720C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140284920 (KiInsertQueueDpc.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiShouldSearchSharedReadyQueue @ 0x140426AF0 (KiShouldSearchSharedReadyQueue.c)
 */

void __fastcall KiDisarmForceParkDutyCyclingIfNecessary(__int64 a1, char a2)
{
  ULONG_PTR v2; // rsi
  __int64 v3; // rbx
  _QWORD *v5; // rdx
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rdx
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 34544);
  v3 = *(_QWORD *)(a1 + 36424);
  if ( *(_DWORD *)(v2 + 336)
    && (a2
     || !*(_DWORD *)(a1 + 33752)
     && (!v3 || !KiShouldSearchSharedReadyQueue(a1, *(_QWORD *)(a1 + 36424)) || !*(_DWORD *)(v3 + 8))) )
  {
    *(_BYTE *)(a1 + 35) |= 0x20u;
    if ( v3 )
    {
      v9 = 0LL;
      if ( (KiVelocityFlags & 0x200000) != 0 )
      {
        *((_QWORD *)&v9 + 1) = v3;
        *(_QWORD *)&v9 = 0LL;
        v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v3, (__int64)&v9);
        if ( v5 )
          KxWaitForLockOwnerShip((__int64)&v9, v5);
      }
      else
      {
        v10 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        {
          do
            KeYieldProcessorEx(&v10);
          while ( *(_QWORD *)v3 );
        }
      }
      v6 = (KiVelocityFlags & 0x200000) == 0;
      *(_QWORD *)(v3 + 1768) &= ~*(_QWORD *)(a1 + 200);
      if ( v6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
      }
      else
      {
        _m_prefetchw(&v9);
        v7 = v9;
        if ( (_QWORD)v9 )
          goto LABEL_15;
        if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v9 + 1), 0LL, (signed __int64)&v9) != &v9 )
        {
          v7 = KxWaitForLockChainValid((__int64 *)&v9);
LABEL_15:
          *(_QWORD *)&v9 = 0LL;
          v8 = *((_QWORD *)&v9 + 1);
          if ( (((unsigned __int8)v8 ^ (unsigned __int8)_InterlockedExchange64(
                                                          (volatile __int64 *)(v7 + 8),
                                                          *((__int64 *)&v9 + 1))) & 4) != 0 )
            KeWakeAddressAll(v7 + 8, v8);
        }
      }
    }
    *(_DWORD *)(v2 + 336) = 0;
    *(_DWORD *)(v2 + 340) = 4;
    KiInsertQueueDpc(v2, 0LL, 0LL, 0LL, 0);
  }
}
