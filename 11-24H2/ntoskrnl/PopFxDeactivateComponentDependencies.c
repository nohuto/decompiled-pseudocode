/*
 * XREFs of PopFxDeactivateComponentDependencies @ 0x140230AD4
 * Callers:
 *     PopFxIdleWorkerTail @ 0x1404E22FC (PopFxIdleWorkerTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxDeactivateComponentDependencies(__int64 a1)
{
  volatile signed __int64 *v1; // r12
  KIRQL v3; // al
  ULONG_PTR v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 i; // r14
  _QWORD *v7; // rbx
  _QWORD **v8; // rbp
  _QWORD **v9; // rsi
  _QWORD *v10; // rdi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v1 = (volatile signed __int64 *)(a1 + 128);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v4 = *(_QWORD *)(a1 + 80);
  v5 = 0LL;
  for ( i = v3; (unsigned int)v5 < *(_DWORD *)(a1 + 172); v5 = (unsigned int)(v5 + 1) )
    PopFxIdleComponent(v4, *(unsigned int *)(*(_QWORD *)(a1 + 176) + 8 * v5));
  v7 = 0LL;
  v8 = (_QWORD **)(a1 + 456);
LABEL_3:
  if ( v7 )
  {
    KxReleaseSpinLock(v7 + 1);
    v9 = (_QWORD **)(v7 + 7);
  }
  else
  {
    v9 = v8;
  }
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 == v8 )
      break;
    v7 = v10 - 7;
    KxAcquireSpinLock(v10 - 6);
    if ( (*(_DWORD *)(v10 - 5) & 4) != 0 )
    {
      PopFxIdleComponent(*(_QWORD *)(v7[3] + 80LL), *(unsigned int *)(v7[3] + 16LL));
      *((_DWORD *)v7 + 4) &= ~2u;
      goto LABEL_3;
    }
    KxReleaseSpinLock(v7 + 1);
    *((_DWORD *)v7 + 4) &= ~8u;
    v7[6] = 0LL;
    v13 = *v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v14 = (_QWORD *)v10[1], (_QWORD *)*v14 != v10) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    ExFreePoolWithTag(v10 - 7, 0x4D584650u);
  }
  result = KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = i;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
  }
  __writecr8(i);
  return result;
}
