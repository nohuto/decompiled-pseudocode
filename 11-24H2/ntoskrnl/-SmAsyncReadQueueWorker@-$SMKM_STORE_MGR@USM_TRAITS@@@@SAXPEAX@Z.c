/*
 * XREFs of ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140424090
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     SmWorkItemQueue @ 0x14029F5CC (SmWorkItemQueue.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  KSPIN_LOCK *v4; // r14
  unsigned __int64 v5; // rsi
  KIRQL v6; // al
  KIRQL v7; // dl
  LARGE_INTEGER v8; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v10; // rdi
  LONGLONG v11; // rax
  LARGE_INTEGER v12; // rbx
  int v13; // r15d
  unsigned __int64 v14; // rax
  KIRQL v15; // al
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rbp
  int v18; // ebp
  _QWORD *v19; // rdi
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 32) & 7;
  PerformanceFrequency.QuadPart = 0LL;
  LODWORD(v3) = 100;
  v4 = (KSPIN_LOCK *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) + 768);
  v5 = (v1 & 0xFFFFFFFFFFFFFFFCuLL) + 24 * ((8 * (v1 & 3)) | v2);
  v6 = KeAcquireSpinLockRaiseToDpc(v4);
  --*(_DWORD *)(v5 + 16);
  v7 = v6;
  ++*(_DWORD *)(v5 + 20);
LABEL_2:
  KeReleaseSpinLock(v4, v7);
  v8 = KeQueryPerformanceCounter(&PerformanceFrequency);
  SmWorkItemQueue();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = PerformanceFrequency;
  v11 = 1000000 * (PerformanceCounter.QuadPart - v8.QuadPart);
  v12.QuadPart = 0LL;
  v13 = 0;
  v14 = v11 / PerformanceFrequency.QuadPart;
  if ( v14 >= (unsigned int)v3 )
    LODWORD(v14) = v3;
  v3 = (unsigned int)v14;
  while ( 1 )
  {
LABEL_5:
    v15 = KeAcquireSpinLockRaiseToDpc(v4);
    v16 = *(_QWORD **)(v5 + 8);
    v17 = v15;
    if ( *v16 )
    {
      if ( v16 == (_QWORD *)v5 )
      {
        v7 = v15;
      }
      else
      {
        v19 = *(_QWORD **)v5;
        *(_QWORD *)v5 = **(_QWORD **)v5;
        if ( v19 == v16 )
        {
          *(_QWORD *)(v5 + 8) = v5;
          v7 = v15;
          *(_QWORD *)v5 = 0LL;
        }
        else
        {
          --*v16;
          v7 = v15;
        }
      }
      goto LABEL_2;
    }
    if ( v13 )
      break;
    KxReleaseSpinLock((volatile signed __int64 *)v4);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v17);
    __writecr8(v17);
    if ( !v12.QuadPart )
      v12 = KeQueryPerformanceCounter(0LL);
    v18 = 0;
    while ( *(_DWORD *)(v5 + 16) <= *(_DWORD *)(v5 + 20) )
    {
      if ( **(_QWORD **)(v5 + 8) )
        goto LABEL_5;
      if ( (++v18 & 0x7F) == 0
        && 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v12.QuadPart) / v10.QuadPart >= v3 )
      {
        break;
      }
      _mm_pause();
    }
    v13 = 1;
  }
  --*(_DWORD *)(v5 + 20);
  KeReleaseSpinLock(v4, v15);
}
