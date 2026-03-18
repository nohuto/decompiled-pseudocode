/*
 * XREFs of PopFxActivateComponentDependencies @ 0x1403B5F40
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1403B6358 (PopFxActivateComponentWorker.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     PopFxActivateComponent @ 0x1403B61EC (PopFxActivateComponent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall PopFxActivateComponentDependencies(__int64 a1)
{
  ULONG_PTR v1; // r14
  KIRQL v3; // al
  int v4; // ecx
  __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  _QWORD *v7; // r14
  _QWORD **v8; // r15
  _QWORD *v9; // rdi
  bool v10; // di
  __int64 v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdi
  int v16; // ecx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 80);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v4 = *(_DWORD *)(a1 + 172);
  v5 = 0LL;
  v6 = v3;
  *(_DWORD *)(a1 + 184) = v4;
  if ( v4 )
  {
    do
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v1 + 872) + 8LL * *(unsigned int *)(8 * v5 + *(_QWORD *)(a1 + 176)));
      PopFxActivateComponent(v1);
      *(_BYTE *)(8 * v5 + *(_QWORD *)(a1 + 176) + 4) = 1;
      if ( *(int *)(v12 + 88) < 0 )
      {
        *(_BYTE *)(8 * v5 + *(_QWORD *)(a1 + 176) + 4) = 0;
        --*(_DWORD *)(a1 + 184);
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *(_DWORD *)(a1 + 172) );
  }
  v7 = 0LL;
LABEL_3:
  if ( v7 )
  {
    KxReleaseSpinLock(v7 + 1);
    v8 = (_QWORD **)(v7 + 7);
  }
  else
  {
    v8 = (_QWORD **)(a1 + 456);
  }
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == (_QWORD *)(a1 + 456) )
      break;
    v7 = v9 - 7;
    KxAcquireSpinLock(v9 - 6);
    if ( (*(_DWORD *)(v9 - 5) & 4) != 0 )
    {
      v15 = v7[3];
      PopFxActivateComponent(*(_QWORD *)(v15 + 80));
      v16 = *((_DWORD *)v7 + 4);
      if ( *(int *)(v15 + 88) < 0 )
      {
        *((_DWORD *)v7 + 4) = v16 | 2;
      }
      else
      {
        *((_DWORD *)v7 + 4) = v16 | 1;
        ++*(_DWORD *)(a1 + 184);
      }
      goto LABEL_3;
    }
    KxReleaseSpinLock(v7 + 1);
    *((_DWORD *)v7 + 4) &= ~8u;
    v7[6] = 0LL;
    v13 = *v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v14 = (_QWORD *)v9[1], (_QWORD *)*v14 != v9) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    ExFreePoolWithTag(v9 - 7, 0x4D584650u);
  }
  v10 = *(_DWORD *)(a1 + 184) == 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 128), 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)(a1 + 128), retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v6);
  __writecr8(v6);
  return v10;
}
