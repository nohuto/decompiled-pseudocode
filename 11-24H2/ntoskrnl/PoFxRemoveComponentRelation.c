/*
 * XREFs of PoFxRemoveComponentRelation @ 0x1405CDBB0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     PopFxActivateComponent @ 0x1402AE4EC (PopFxActivateComponent.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     PopFxNextParentRelationSafe @ 0x1403A6340 (PopFxNextParentRelationSafe.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 *     PopFxReferenceDevice @ 0x1403AA248 (PopFxReferenceDevice.c)
 *     PopFxNextComponentChildRelationSafe @ 0x14043DFE8 (PopFxNextComponentChildRelationSafe.c)
 */

__int64 __fastcall PoFxRemoveComponentRelation(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r13
  __int64 v8; // rdi
  KIRQL v9; // al
  ULONG_PTR v10; // rbp
  KIRQL v11; // r15
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  _QWORD **v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  KSPIN_LOCK *v17; // r15
  KIRQL v18; // r13
  __int64 v19; // rcx
  char v20; // si
  _QWORD *v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rdx
  KIRQL v24; // r15
  __int64 i; // rdx
  __int64 v27; // [rsp+20h] [rbp-38h]
  __int64 v28; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( !BugCheckParameter2 )
    return (unsigned int)-1073741585;
  if ( a2 >= *(_DWORD *)(BugCheckParameter2 + 868) )
    return (unsigned int)-1073741584;
  _mm_lfence();
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * a2);
  v27 = v7;
  if ( !a3 )
    return (unsigned int)-1073741583;
  v8 = *(_QWORD *)(*(_QWORD *)(a3 + 312) + 40LL);
  if ( !v8 )
    return (unsigned int)-1073741583;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 88));
  v10 = *(_QWORD *)(v8 + 80);
  v11 = v9;
  if ( !v10 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 88), v9);
    return (unsigned int)-1073741583;
  }
  PopFxReferenceDevice(*(_QWORD *)(v8 + 80), 6);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 88), v11);
  v12 = *(_DWORD *)(v10 + 868);
  v13 = 0;
  if ( !v12 )
    goto LABEL_31;
  v14 = *(_QWORD ***)(v10 + 872);
  do
  {
    v15 = *v14;
    v16 = *a4 - **v14;
    if ( *a4 == **v14 )
      v16 = a4[1] - v15[1];
    if ( !v16 )
      break;
    ++v13;
    ++v14;
    v15 = 0LL;
  }
  while ( v13 < v12 );
  if ( v15 )
  {
    PopFxActivateComponent(BugCheckParameter2, v7, 1LL, 0);
    v17 = (KSPIN_LOCK *)(v7 + 128);
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 128));
    v19 = 0LL;
    v28 = 0LL;
    v20 = 0;
    while ( PopFxNextParentRelationSafe((_QWORD **)(v27 + 456), v19, &v28) )
    {
      v19 = v28;
      if ( *(_QWORD **)(v28 + 24) == v15 )
      {
        *(_DWORD *)(v28 + 16) &= ~8u;
        v21 = (_QWORD *)(v19 + 56);
        *(_QWORD *)(v19 + 48) = 0LL;
        v22 = *(_QWORD *)(v19 + 56);
        if ( *(_QWORD *)(v22 + 8) != v19 + 56 || (v23 = *(_QWORD **)(v19 + 64), (_QWORD *)*v23 != v21) )
          __fastfail(3u);
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        v20 = 1;
        *(_QWORD *)(v19 + 64) = v19 + 56;
        *v21 = v21;
        KxReleaseSpinLock((volatile signed __int64 *)(v19 + 8));
        break;
      }
    }
    KeReleaseSpinLock(v17, v18);
    if ( v20 )
    {
      v24 = KeAcquireSpinLockRaiseToDpc(v15 + 16);
      v28 = 0LL;
      for ( i = 0LL; PopFxNextComponentChildRelationSafe((__int64)v15, i, &v28); i = v28 )
        ;
      KeReleaseSpinLock(v15 + 16, v24);
      PopFxIdleComponent(v10, *((unsigned int *)v15 + 4), 2);
    }
    else
    {
      v4 = -1073741811;
    }
    PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(v27 + 16), 2);
  }
  else
  {
LABEL_31:
    v4 = -1073741582;
  }
  PopFxDereferenceDevice(v10, 6);
  return v4;
}
