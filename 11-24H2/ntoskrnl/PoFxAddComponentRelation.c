/*
 * XREFs of PoFxAddComponentRelation @ 0x1405CD500
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     PopFxActivateComponent @ 0x1402AE4EC (PopFxActivateComponent.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 *     PopFxReferenceDevice @ 0x1403AA248 (PopFxReferenceDevice.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PoFxAddComponentRelation(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r15
  __int64 v8; // rdi
  volatile LONG *v9; // rsi
  KIRQL v10; // al
  ULONG_PTR v11; // rdi
  KIRQL v12; // r14
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  _QWORD **v15; // rdx
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  __int64 Pool2; // rax
  _QWORD *v19; // r12
  _QWORD *v20; // r14
  KIRQL v21; // al
  _QWORD *v22; // r8
  KSPIN_LOCK *v23; // r12
  KIRQL v24; // al
  _QWORD *v25; // rsi
  _QWORD *v26; // rdx

  v4 = 0;
  if ( !BugCheckParameter2 )
    return (unsigned int)-1073741585;
  if ( a2 >= *(_DWORD *)(BugCheckParameter2 + 868) )
    return (unsigned int)-1073741584;
  _mm_lfence();
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * a2);
  if ( !a3 )
    return (unsigned int)-1073741583;
  v8 = *(_QWORD *)(*(_QWORD *)(a3 + 312) + 40LL);
  if ( !v8 )
    return (unsigned int)-1073741583;
  v9 = (volatile LONG *)(v8 + 88);
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 88));
  v11 = *(_QWORD *)(v8 + 80);
  v12 = v10;
  if ( !v11 )
  {
    ExReleaseSpinLockExclusive(v9, v10);
    return (unsigned int)-1073741583;
  }
  PopFxReferenceDevice(v11, 6);
  ExReleaseSpinLockExclusive(v9, v12);
  v13 = *(_DWORD *)(v11 + 868);
  v14 = 0;
  if ( !v13 )
    goto LABEL_27;
  v15 = *(_QWORD ***)(v11 + 872);
  do
  {
    v16 = *v15;
    v17 = *a4 - **v15;
    if ( *a4 == **v15 )
      v17 = a4[1] - v16[1];
    if ( !v17 )
      break;
    ++v14;
    ++v15;
    v16 = 0LL;
  }
  while ( v14 < v13 );
  if ( v16 )
  {
    if ( (_QWORD *)v7 == v16
      || (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 864), 0, 0) & 1) != 0
      || (_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 864), 0, 0) & 1) != 0 )
    {
      v4 = -1073741811;
    }
    else
    {
      Pool2 = ExAllocatePool2(0x40uLL, 0x48uLL, 0x4D584650u);
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 1;
        v19 = (_QWORD *)(Pool2 + 56);
        *(_QWORD *)(Pool2 + 8) = 0LL;
        v20 = (_QWORD *)(Pool2 + 32);
        *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
        *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
        *(_QWORD *)(Pool2 + 64) = Pool2 + 56;
        *(_QWORD *)(Pool2 + 56) = Pool2 + 56;
        *(_DWORD *)(Pool2 + 16) |= 0xEu;
        *(_QWORD *)(Pool2 + 24) = v16;
        *(_QWORD *)(Pool2 + 48) = v7 + 128;
        PopFxActivateComponent(v11, (__int64)v16, 1LL, 0);
        PopFxActivateComponent(BugCheckParameter2, v7, 1LL, 0);
        v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 128));
        v22 = *(_QWORD **)(v7 + 464);
        if ( *v22 != v7 + 456 )
          goto LABEL_26;
        *v19 = v7 + 456;
        v19[1] = v22;
        *v22 = v19;
        *(_QWORD *)(v7 + 464) = v19;
        KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 128), v21);
        v23 = v16 + 16;
        v24 = KeAcquireSpinLockRaiseToDpc(v16 + 16);
        v25 = v16 + 55;
        v26 = (_QWORD *)v25[1];
        if ( (_QWORD *)*v26 != v25 )
LABEL_26:
          __fastfail(3u);
        v20[1] = v26;
        *v20 = v25;
        *v26 = v20;
        v25[1] = v20;
        KeReleaseSpinLock(v23, v24);
        PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(v7 + 16), 2);
      }
      else
      {
        v4 = -1073741670;
      }
    }
  }
  else
  {
LABEL_27:
    v4 = -1073741582;
  }
  PopFxDereferenceDevice(v11, 6);
  return v4;
}
