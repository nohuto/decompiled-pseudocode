/*
 * XREFs of IopCancelApcRequired @ 0x140349078
 * Callers:
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1408BD868 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     IopCancelSynchronousIrpsForThread @ 0x140A98AD4 (IopCancelSynchronousIrpsForThread.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
  KxReleaseSpinLock(a1 + 1560);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = v6;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  __writecr8(v6);
  return v8;
}
