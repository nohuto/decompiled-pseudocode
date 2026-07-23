/*
 * XREFs of PoFxRemoveDeviceRelation @ 0x1405CDE10
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     PoFxIdleDevice @ 0x1402F11C4 (PoFxIdleDevice.c)
 *     PopFxNextParentRelationSafe @ 0x1403A6340 (PopFxNextParentRelationSafe.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 *     PopFxReferenceDevice @ 0x1403AA248 (PopFxReferenceDevice.c)
 *     PopFxNextComponentChildRelationSafe @ 0x14043DFE8 (PopFxNextComponentChildRelationSafe.c)
 *     PopFxActivateDevice @ 0x140490A10 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxRemoveDeviceRelation(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  KIRQL v7; // al
  ULONG_PTR v8; // rbp
  KIRQL v9; // r14
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  _QWORD **v12; // rdx
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  KIRQL v15; // r13
  __int64 v16; // rcx
  char v17; // si
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rdx
  KIRQL v21; // r14
  __int64 i; // rdx
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return (unsigned int)-1073741585;
  if ( !a2 )
    return (unsigned int)-1073741584;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  if ( !v6 )
    return (unsigned int)-1073741584;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 88));
  v8 = *(_QWORD *)(v6 + 80);
  v9 = v7;
  if ( !v8 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 88), v7);
    return (unsigned int)-1073741584;
  }
  PopFxReferenceDevice(*(_QWORD *)(v6 + 80), 6);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 88), v9);
  v10 = *(_DWORD *)(v8 + 868);
  v11 = 0;
  if ( !v10 )
    goto LABEL_29;
  v12 = *(_QWORD ***)(v8 + 872);
  do
  {
    v13 = *v12;
    v14 = *a3 - **v12;
    if ( *a3 == **v12 )
      v14 = a3[1] - v13[1];
    if ( !v14 )
      break;
    ++v11;
    ++v12;
    v13 = 0LL;
  }
  while ( v11 < v10 );
  if ( v13 )
  {
    PopFxActivateDevice(*(_QWORD *)(a1 + 96), 0, 0);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1280));
    v24 = 0LL;
    v16 = 0LL;
    v17 = 0;
    while ( PopFxNextParentRelationSafe((_QWORD **)(a1 + 1304), v16, &v24) )
    {
      v16 = v24;
      if ( *(_QWORD **)(v24 + 24) == v13 )
      {
        *(_DWORD *)(v24 + 16) &= ~8u;
        v18 = (_QWORD *)(v16 + 56);
        *(_QWORD *)(v16 + 48) = 0LL;
        v19 = *(_QWORD *)(v16 + 56);
        if ( *(_QWORD *)(v19 + 8) != v16 + 56 || (v20 = *(_QWORD **)(v16 + 64), (_QWORD *)*v20 != v18) )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        v17 = 1;
        *(_QWORD *)(v16 + 64) = v16 + 56;
        *v18 = v18;
        KxReleaseSpinLock((volatile signed __int64 *)(v16 + 8));
        break;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1280), v15);
    if ( v17 )
    {
      v21 = KeAcquireSpinLockRaiseToDpc(v13 + 16);
      v24 = 0LL;
      for ( i = 0LL; PopFxNextComponentChildRelationSafe((__int64)v13, i, &v24); i = v24 )
        ;
      KeReleaseSpinLock(v13 + 16, v21);
      PopFxIdleComponent(v8, *((unsigned int *)v13 + 4), 2);
    }
    else
    {
      v3 = -1073741811;
    }
    PoFxIdleDevice(*(_QWORD *)(a1 + 96));
  }
  else
  {
LABEL_29:
    v3 = -1073741583;
  }
  PopFxDereferenceDevice(v8, 6);
  return v3;
}
