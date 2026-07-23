/*
 * XREFs of PspSetProcessFreezeStateCallback @ 0x14046B9E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpTimerPause @ 0x14046BB18 (ExpTimerPause.c)
 *     ExpTimerResume @ 0x14046BDB8 (ExpTimerResume.c)
 *     PspRequestProcessExecutionState @ 0x140A87E04 (PspRequestProcessExecutionState.c)
 */

__int64 __fastcall PspSetProcessFreezeStateCallback(__int64 a1, _DWORD **a2)
{
  __int64 v2; // r8
  _BYTE *v3; // r14
  KSPIN_LOCK *v5; // r12
  KIRQL v6; // al
  __int64 v7; // r13
  _QWORD *v8; // rsi
  __int64 v9; // r12
  _QWORD *v10; // rbp
  KIRQL v12; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 672);
  v3 = a2;
  if ( (*(_DWORD *)(a1 + 500) & 0x40000008) == 0
    && (*(_DWORD *)(a1 + 500) & 0x4000000) != 0
    && (*(_DWORD *)(v2 + 1552) & 0x40000) != 0
    && (**a2 & 1) != 0
    && *(_DWORD *)(v2 + 1064) <= 1u )
  {
    v5 = (KSPIN_LOCK *)(a1 + 1800);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1800));
    v12 = v6;
    v7 = MEMORY[0xFFFFF78000000008];
    v8 = *(_QWORD **)(a1 + 1808);
    if ( v8 != (_QWORD *)(a1 + 1808) )
    {
      v9 = MEMORY[0xFFFFF78000000014];
      do
      {
        v10 = v8 - 36;
        if ( *(_BYTE *)(*(_QWORD *)v3 + 4LL) )
        {
          ExpTimerPause(v8 - 36, v9, v7, 0LL);
        }
        else
        {
          KxAcquireSpinLock(v10 + 8);
          ExpTimerResume((PKTIMER)(v8 - 36));
          KxReleaseSpinLock(v10 + 8);
        }
        v8 = (_QWORD *)*v8;
      }
      while ( v8 != (_QWORD *)(a1 + 1808) );
      v6 = v12;
      v5 = (KSPIN_LOCK *)(a1 + 1800);
    }
    KeReleaseSpinLock(v5, v6);
  }
  LOBYTE(a2) = v3[8];
  PspRequestProcessExecutionState(a1, a2, 0LL);
  return 0LL;
}
