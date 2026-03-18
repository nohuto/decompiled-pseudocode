/*
 * XREFs of HalpFindAdapterByRequestLine @ 0x140550720
 * Callers:
 *     HalGetAdapterV3 @ 0x1406F42C8 (HalGetAdapterV3.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall HalpFindAdapterByRequestLine(__int64 a1, int a2)
{
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rsi
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int64 *v7; // rbp
  _QWORD **v8; // rdi
  _QWORD *i; // rax

  v4 = *(unsigned __int8 *)(a1 + 176);
  v5 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v4);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
  v7 = (volatile signed __int64 *)(a1 + 168);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
  v8 = (_QWORD **)(a1 + 16);
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 20) == a2 )
    {
      v5 = i - 58;
      break;
    }
  }
  KxReleaseSpinLock(v7);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v5;
}
