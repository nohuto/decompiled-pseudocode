/*
 * XREFs of PopFxActivateComponentDependencies @ 0x1402AE240
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1402AE658 (PopFxActivateComponentWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x1402AE4EC (PopFxActivateComponent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall PopFxActivateComponentDependencies(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r14
  KIRQL v5; // al
  int v6; // ecx
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  _QWORD *v9; // r14
  _QWORD **v10; // r15
  _QWORD *v11; // rdi
  bool v12; // di
  __int64 v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdi
  int v18; // ecx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 80);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v6 = *(_DWORD *)(a1 + 172);
  v7 = 0LL;
  v8 = v5;
  *(_DWORD *)(a1 + 184) = v6;
  if ( v6 )
  {
    do
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v2 + 872) + 8LL * *(unsigned int *)(8 * v7 + *(_QWORD *)(a1 + 176)));
      PopFxActivateComponent(v2, v14, 10LL, a2);
      *(_BYTE *)(8 * v7 + *(_QWORD *)(a1 + 176) + 4) = 1;
      if ( *(int *)(v14 + 88) < 0 )
      {
        *(_BYTE *)(8 * v7 + *(_QWORD *)(a1 + 176) + 4) = 0;
        --*(_DWORD *)(a1 + 184);
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *(_DWORD *)(a1 + 172) );
  }
  v9 = 0LL;
LABEL_3:
  if ( v9 )
  {
    KxReleaseSpinLock(v9 + 1);
    v10 = (_QWORD **)(v9 + 7);
  }
  else
  {
    v10 = (_QWORD **)(a1 + 456);
  }
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == (_QWORD *)(a1 + 456) )
      break;
    v9 = v11 - 7;
    KxAcquireSpinLock(v11 - 6);
    if ( (*(_DWORD *)(v11 - 5) & 4) != 0 )
    {
      v17 = v9[3];
      PopFxActivateComponent(*(_QWORD *)(v17 + 80), v17, 10LL, 0LL);
      v18 = *((_DWORD *)v9 + 4);
      if ( *(int *)(v17 + 88) < 0 )
      {
        *((_DWORD *)v9 + 4) = v18 | 2;
      }
      else
      {
        *((_DWORD *)v9 + 4) = v18 | 1;
        ++*(_DWORD *)(a1 + 184);
      }
      goto LABEL_3;
    }
    KxReleaseSpinLock(v9 + 1);
    *((_DWORD *)v9 + 4) &= ~8u;
    v9[6] = 0LL;
    v15 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v16 = (_QWORD *)v11[1], (_QWORD *)*v16 != v11) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    ExFreePoolWithTag(v11 - 7, 0x4D584650u);
  }
  v12 = *(_DWORD *)(a1 + 184) == 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 128), 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)(a1 + 128), retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v8);
  __writecr8(v8);
  return v12;
}
