/*
 * XREFs of ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140431B50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     SmWorkItemQueue @ 0x14028F9CC (SmWorkItemQueue.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  _QWORD *v4; // rdi
  KSPIN_LOCK *v5; // r14
  unsigned __int64 v6; // rsi
  KIRQL v7; // al
  KIRQL v8; // dl
  LARGE_INTEGER v9; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v11; // rdi
  LONGLONG v12; // rax
  LARGE_INTEGER v13; // rbx
  int v14; // r15d
  unsigned __int64 v15; // rax
  KIRQL v16; // al
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rbp
  int v19; // ebp
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 32) & 7;
  PerformanceFrequency.QuadPart = 0LL;
  LODWORD(v3) = 100;
  v4 = (_QWORD *)a1;
  v5 = (KSPIN_LOCK *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) + 768);
  v6 = (v1 & 0xFFFFFFFFFFFFFFFCuLL) + 24 * ((8 * (v1 & 3)) | v2);
  v7 = KeAcquireSpinLockRaiseToDpc(v5);
  --*(_DWORD *)(v6 + 16);
  v8 = v7;
  ++*(_DWORD *)(v6 + 20);
LABEL_2:
  KeReleaseSpinLock(v5, v8);
  v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
  SmWorkItemQueue(v4[4] & 0xFFFFFFFFFFFFFFF8uLL, (unsigned __int64)(v4 - 5), 0);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v11 = PerformanceFrequency;
  v12 = 1000000 * (PerformanceCounter.QuadPart - v9.QuadPart);
  v13.QuadPart = 0LL;
  v14 = 0;
  v15 = v12 / PerformanceFrequency.QuadPart;
  if ( v15 >= (unsigned int)v3 )
    LODWORD(v15) = v3;
  v3 = (unsigned int)v15;
  while ( 1 )
  {
LABEL_5:
    v16 = KeAcquireSpinLockRaiseToDpc(v5);
    v17 = *(_QWORD **)(v6 + 8);
    v18 = v16;
    if ( *v17 )
    {
      if ( v17 == (_QWORD *)v6 )
      {
        v4 = 0LL;
        v8 = v16;
      }
      else
      {
        v4 = *(_QWORD **)v6;
        *(_QWORD *)v6 = **(_QWORD **)v6;
        if ( v4 == v17 )
        {
          *(_QWORD *)(v6 + 8) = v6;
          v8 = v16;
          *(_QWORD *)v6 = 0LL;
        }
        else
        {
          --*v17;
          v8 = v16;
        }
      }
      goto LABEL_2;
    }
    if ( v14 )
      break;
    KxReleaseSpinLock((volatile signed __int64 *)v5);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v18);
    __writecr8(v18);
    if ( !v13.QuadPart )
      v13 = KeQueryPerformanceCounter(0LL);
    v19 = 0;
    while ( *(_DWORD *)(v6 + 16) <= *(_DWORD *)(v6 + 20) )
    {
      if ( **(_QWORD **)(v6 + 8) )
        goto LABEL_5;
      if ( (++v19 & 0x7F) == 0
        && 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v13.QuadPart) / v11.QuadPart >= v3 )
      {
        break;
      }
      _mm_pause();
    }
    v14 = 1;
  }
  --*(_DWORD *)(v6 + 20);
  KeReleaseSpinLock(v5, v16);
}
