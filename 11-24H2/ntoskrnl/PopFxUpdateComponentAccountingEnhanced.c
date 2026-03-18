/*
 * XREFs of PopFxUpdateComponentAccountingEnhanced @ 0x1403152C4
 * Callers:
 *     PopPepDeviceDState @ 0x1403137A0 (PopPepDeviceDState.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x140315160 (PopPepStartComponentIdleStateChangeActivity.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     PopFxUpdateAccountingActiveTime @ 0x140311C70 (PopFxUpdateAccountingActiveTime.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PopFxUpdateComponentAccountingEnhanced(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 872) + 8LL * a2) + 200LL;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
  if ( *(_DWORD *)(v6 + 16) == 2 )
  {
    v10 = *(_DWORD *)(v6 + 12);
    if ( v10 != -1 )
    {
      if ( a4 )
      {
        if ( a3 >= v10 )
        {
          PopFxUpdateAccountingActiveTime(v6, MEMORY[0xFFFFF78000000008], 0LL);
          *(_BYTE *)(v6 + 8) = 0;
        }
      }
      else if ( !a3 && !*(_BYTE *)(v6 + 8) )
      {
        *(_QWORD *)(v6 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v6 + 8) = 1;
      }
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)v6);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = v7;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  __writecr8(v7);
  return result;
}
