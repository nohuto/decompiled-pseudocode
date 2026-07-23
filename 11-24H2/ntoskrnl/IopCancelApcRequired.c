/*
 * XREFs of IopCancelApcRequired @ 0x1402309F4
 * Callers:
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1408EEB98 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     IopCancelSynchronousIrpsForThread @ 0x140A99A54 (IopCancelSynchronousIrpsForThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopCancelApcRequired(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rbp
  _QWORD *v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1560));
  v7 = *(_QWORD **)(a1 + 1344);
  if ( v7 == (_QWORD *)(a1 + 1344) )
  {
    v8 = 0;
  }
  else if ( a3 || (v8 = 1, a2) )
  {
    while ( 1 )
    {
      v8 = 0;
      if ( (_QWORD *)(a1 + 1344) == v7 )
        break;
      if ( (*(_DWORD *)(v7 - 2) & 2) == 0 && (v7[5] == a3 && (!a2 || v7[20] == a2) || !a3 && v7[20] == a2) )
      {
        v8 = 1;
        break;
      }
      v7 = (_QWORD *)*v7;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)(a1 + 1560));
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = v6;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  __writecr8(v6);
  return v8;
}
