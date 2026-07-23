/*
 * XREFs of IopCancelIrpsInCurrentThreadList @ 0x140408864
 * Callers:
 *     IopCancelIrpsInThreadList @ 0x1408EED94 (IopCancelIrpsInThreadList.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x140A6AAA0 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopCancelIrpsInCurrentThreadList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  KSPIN_LOCK *v4; // rdi
  _QWORD *v6; // r12
  unsigned int v8; // r15d
  KIRQL v9; // al
  _QWORD *v10; // rsi
  __int64 CurrentIrql; // rcx
  int v13; // eax
  KIRQL v14; // [rsp+20h] [rbp-48h]

  v4 = (KSPIN_LOCK *)(a2 + 1560);
  v6 = (_QWORD *)(a2 + 1344);
  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 1560));
  v10 = (_QWORD *)*v6;
  v14 = v9;
  if ( v6 != (_QWORD *)*v6 )
  {
    while ( 1 )
    {
      if ( *((char *)v10 + 35) < *((char *)v10 + 34) + 2 )
      {
        if ( a4 )
        {
          if ( (!a1 || v10[20] == a1) && (!a3 || v10[5] == a3) )
          {
            v13 = *((_DWORD *)v10 - 4);
            if ( (v13 & 0x402) == 0 && ((v13 & 0x84) != 0 || (*((_BYTE *)v10 + 39) & 2) != 0) )
            {
LABEL_12:
              v8 = 1;
              KeReleaseSpinLock(v4, 1u);
              IoCancelIrp((PIRP)(v10 - 4));
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
              KxAcquireSpinLock(v4);
            }
          }
        }
        else if ( (*(_DWORD *)(v10 - 2) & 2) == 0 && (!a1 || v10[20] == a1) && (!a3 || v10[5] == a3) )
        {
          goto LABEL_12;
        }
      }
      v10 = (_QWORD *)*v10;
      if ( v6 == v10 )
      {
        v9 = v14;
        v4 = (KSPIN_LOCK *)(a2 + 1560);
        break;
      }
    }
  }
  KeReleaseSpinLock(v4, v9);
  return v8;
}
