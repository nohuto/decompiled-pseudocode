/*
 * XREFs of PopFxActivateComponentWorker @ 0x140349BD0
 * Callers:
 *     PopFxActivateComponent @ 0x140203D5C (PopFxActivateComponent.c)
 *     PopFxIdleWorkerTail @ 0x1403492B0 (PopFxIdleWorkerTail.c)
 * Callees:
 *     PopFxActivateComponent @ 0x140203D5C (PopFxActivateComponent.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PopFxCompleteComponentActivation @ 0x14034C328 (PopFxCompleteComponentActivation.c)
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxActivateComponentWorker(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, void *a4)
{
  ULONG_PTR v7; // r13
  KIRQL v8; // al
  int v9; // ecx
  __int64 v10; // rbp
  _QWORD *v11; // rbp
  _QWORD **v12; // r15
  _QWORD *v13; // rbx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  ULONG_PTR v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rbx
  int v25; // ecx
  __int64 v26; // [rsp+20h] [rbp-68h]
  __int128 v27; // [rsp+30h] [rbp-58h] BYREF
  __int128 v28; // [rsp+40h] [rbp-48h]
  KIRQL v29; // [rsp+90h] [rbp+8h]

  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 244));
  if ( *(_BYTE *)(BugCheckParameter2 + 240) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 244), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(BugCheckParameter2 + 248), 0, 0);
    PopFxBugCheck(0x607uLL, BugCheckParameter2, 0xFFFFFFFFC0000056uLL, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 304));
  v7 = *(_QWORD *)(a2 + 80);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
  v9 = *(_DWORD *)(a2 + 172);
  v10 = 0LL;
  v29 = v8;
  *(_DWORD *)(a2 + 184) = v9;
  if ( v9 )
  {
    do
    {
      v21 = *(_QWORD *)(*(_QWORD *)(v7 + 872) + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 176) + 8 * v10));
      PopFxActivateComponent(v7, v21, 10);
      *(_BYTE *)(*(_QWORD *)(a2 + 176) + 8 * v10 + 4) = 1;
      if ( *(int *)(v21 + 88) < 0 )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 176) + 8 * v10 + 4) = 0;
        --*(_DWORD *)(a2 + 184);
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < *(_DWORD *)(a2 + 172) );
  }
  v11 = 0LL;
LABEL_4:
  if ( v11 )
  {
    KxReleaseSpinLock(v11 + 1);
    v12 = (_QWORD **)(v11 + 7);
  }
  else
  {
    v12 = (_QWORD **)(a2 + 456);
  }
  while ( 1 )
  {
    v13 = *v12;
    if ( *v12 == (_QWORD *)(a2 + 456) )
      break;
    v11 = v13 - 7;
    KxAcquireSpinLock(v13 - 6);
    if ( (*(_DWORD *)(v13 - 5) & 4) != 0 )
    {
      v24 = v11[3];
      PopFxActivateComponent(*(_QWORD *)(v24 + 80), v24, 10);
      v25 = *((_DWORD *)v11 + 4);
      if ( *(int *)(v24 + 88) < 0 )
      {
        *((_DWORD *)v11 + 4) = v25 | 2;
      }
      else
      {
        *((_DWORD *)v11 + 4) = v25 | 1;
        ++*(_DWORD *)(a2 + 184);
      }
      goto LABEL_4;
    }
    KxReleaseSpinLock(v11 + 1);
    *((_DWORD *)v11 + 4) &= ~8u;
    v11[6] = 0LL;
    v22 = *v13;
    if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v23 = (_QWORD *)v13[1], (_QWORD *)*v23 != v13) )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    ExFreePoolWithTag(v13 - 7, 0x4D584650u);
  }
  v14 = *(_DWORD *)(a2 + 184);
  KxReleaseSpinLock(a2 + 128);
  if ( KiIrqlFlags )
  {
    LOBYTE(v15) = v29;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
  }
  result = v29;
  __writecr8(v29);
  if ( a3 )
    return PopFxCompleteComponentActivation(BugCheckParameter2);
  if ( !v14 )
  {
    v17 = *(unsigned int *)(a2 + 16);
    if ( a4 )
      memset_0(a4, 0, 0x40uLL);
    v18 = *(_QWORD *)(BugCheckParameter2 + 56);
    if ( *(_BYTE *)(v18 + 124) )
    {
      v19 = *(_QWORD *)(v18 + 32);
      v27 = 0LL;
      DWORD2(v27) = v17;
      v20 = *(_QWORD *)(v19 + 64);
      *(_QWORD *)&v27 = *(_QWORD *)(v19 + 72);
      BYTE12(v27) = 1;
      v28 = 0uLL;
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(7LL, &v27) )
      {
        if ( BYTE8(v28) )
          PopFxBugCheck(0x612uLL, v20, 0LL, 0LL);
      }
    }
    result = PopPepProcessEvent(v18, v18 + 208 * v17 + 192, 6u, 2u, v26, (__int64)a4);
    if ( (_BYTE)result )
    {
      if ( !a4 )
        PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
      if ( (_BYTE)result == 1 )
        return PopFxProcessWork(0LL, a4);
    }
  }
  return result;
}
