/*
 * XREFs of PopFxComponentRelationsCleanup @ 0x1405CE13C
 * Callers:
 *     PopFxUnregisterDevice @ 0x140A6EED4 (PopFxUnregisterDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxNextParentRelationSafe @ 0x1403A6340 (PopFxNextParentRelationSafe.c)
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 *     PopFxNextComponentChildRelationSafe @ 0x14043DFE8 (PopFxNextComponentChildRelationSafe.c)
 *     KxTryToAcquireSpinLock @ 0x140459EB8 (KxTryToAcquireSpinLock.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxComponentRelationsCleanup(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  KIRQL v3; // r14
  char *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  char v8; // si
  _QWORD *v9; // rax
  volatile signed __int64 *v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdx
  _QWORD **v13; // rsi
  char *v14; // rbx
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rdx
  char v22; // di
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  v1 = (KSPIN_LOCK *)(a1 + 128);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  while ( PopFxNextComponentChildRelationSafe(a1, 0LL, &P) )
  {
    v4 = (char *)P;
    *((_DWORD *)P + 4) &= ~4u;
    v5 = v4 + 32;
    *((_QWORD *)v4 + 3) = 0LL;
    v6 = *((_QWORD *)v4 + 4);
    if ( *(char **)(v6 + 8) != v4 + 32 || (v7 = (_QWORD *)*((_QWORD *)v4 + 5), (_QWORD *)*v7 != v5) )
LABEL_22:
      __fastfail(3u);
    *v7 = v6;
    v8 = 0;
    *(_QWORD *)(v6 + 8) = v7;
    *((_QWORD *)v4 + 5) = v4 + 32;
    *v5 = v5;
    if ( KxTryToAcquireSpinLock(*((volatile signed __int32 **)v4 + 6)) )
    {
      *((_DWORD *)v4 + 4) &= ~8u;
      v9 = v4 + 56;
      v10 = (volatile signed __int64 *)*((_QWORD *)v4 + 6);
      *((_QWORD *)v4 + 6) = 0LL;
      v11 = *((_QWORD *)v4 + 7);
      if ( *(char **)(v11 + 8) != v4 + 56 )
        goto LABEL_22;
      v12 = (_QWORD *)*((_QWORD *)v4 + 8);
      if ( (_QWORD *)*v12 != v9 )
        goto LABEL_22;
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *((_QWORD *)v4 + 8) = v4 + 56;
      *v9 = v9;
      KxReleaseSpinLock(v10);
      v8 = 1;
    }
    KxReleaseSpinLock((volatile signed __int64 *)v4 + 1);
    if ( v8 )
      ExFreePoolWithTag(v4, 0x4D584650u);
  }
  v13 = (_QWORD **)(a1 + 456);
  while ( PopFxNextParentRelationSafe(v13, 0LL, &P) )
  {
    v14 = (char *)P;
    v15 = *((_QWORD *)P + 3);
    PopFxIdleComponent(*(_QWORD *)(v15 + 80), *(unsigned int *)(v15 + 16), 2);
    *((_DWORD *)v14 + 4) &= 0xFFFFFFF5;
    v16 = v14 + 56;
    *((_QWORD *)v14 + 6) = 0LL;
    v17 = *((_QWORD *)v14 + 7);
    if ( *(char **)(v17 + 8) != v14 + 56 )
      goto LABEL_22;
    v18 = (_QWORD *)*((_QWORD *)v14 + 8);
    if ( (_QWORD *)*v18 != v16 )
      goto LABEL_22;
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    *((_QWORD *)v14 + 8) = v14 + 56;
    *v16 = v16;
    if ( KxTryToAcquireSpinLock((volatile signed __int32 *)(v15 + 128)) )
    {
      *((_DWORD *)v14 + 4) &= ~4u;
      v19 = v14 + 32;
      *((_QWORD *)v14 + 3) = 0LL;
      v20 = *((_QWORD *)v14 + 4);
      if ( *(char **)(v20 + 8) != v14 + 32 )
        goto LABEL_22;
      v21 = (_QWORD *)*((_QWORD *)v14 + 5);
      if ( (_QWORD *)*v21 != v19 )
        goto LABEL_22;
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      *((_QWORD *)v14 + 5) = v14 + 32;
      *v19 = v19;
      KxReleaseSpinLock((volatile signed __int64 *)(v15 + 128));
      v22 = 1;
    }
    else
    {
      v22 = 0;
    }
    KxReleaseSpinLock((volatile signed __int64 *)v14 + 1);
    if ( v22 )
      ExFreePoolWithTag(v14, 0x4D584650u);
  }
  KeReleaseSpinLock(v1, v3);
}
