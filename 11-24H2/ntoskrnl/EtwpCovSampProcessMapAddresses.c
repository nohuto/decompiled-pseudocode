/*
 * XREFs of EtwpCovSampProcessMapAddresses @ 0x140922EB0
 * Callers:
 *     EtwpCovSampContextAddAddresses @ 0x1409229E0 (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x140922AE8 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140922D10 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall EtwpCovSampProcessMapAddresses(
        __int64 a1,
        volatile signed __int32 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  volatile signed __int32 *v7; // rdi
  unsigned __int64 *v9; // r13
  __int64 v10; // r14
  unsigned int v11; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *v13; // rax
  char *v14; // rbx
  struct _KTHREAD **v15; // rdx
  unsigned int v16; // r9d
  unsigned __int64 *v17; // rbx
  __int64 v18; // r12
  __int64 v19; // r15
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r8
  unsigned int v23; // r14d
  int v24; // r10d
  unsigned int v25; // r9d
  int v26; // r8d
  __int64 v27; // rdx
  unsigned __int64 *v28; // rdx
  bool v29; // zf
  __int64 v30; // rdx
  unsigned int *v31; // rbx
  __int64 result; // rax
  int v33; // [rsp+70h] [rbp+8h]

  v7 = a2;
  v9 = (unsigned __int64 *)(a1 + 8);
  *a7 = 0;
  v10 = a3;
  v11 = a4;
  v33 = MEMORY[0xFFFFF78000000320];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = (char *)KeAbPreAcquire(a1 + 8, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v13, (__int64)v9);
  if ( v14 )
    v14[10] = 1;
  v15 = (struct _KTHREAD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  if ( v7 != *(volatile signed __int32 **)a1 || (v16 = a6) == 0 )
  {
    v31 = a7;
    goto LABEL_31;
  }
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( !v11 )
    goto LABEL_29;
  while ( 1 )
  {
    v21 = *(_QWORD *)(v10 + 8 * v19);
    if ( v17 )
    {
      if ( v21 < v20 || v21 >= *v17 )
      {
        v17 = 0LL;
      }
      else
      {
        v22 = v17[1];
        if ( v22 )
          goto LABEL_22;
      }
    }
    v23 = *(_DWORD *)(a1 + 32);
    v24 = -1;
    v25 = v23;
    if ( v23 )
    {
      do
      {
        v26 = (int)(v25 - v24) / 2 + v24;
        if ( v21 >= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v26) )
        {
          v24 += (int)(v25 - v24) / 2;
          v26 = v25;
        }
        v25 = v26;
      }
      while ( v24 + 1 != v26 );
      v11 = a4;
    }
    if ( v25 >= v23 )
    {
      v16 = a6;
      goto LABEL_27;
    }
    v27 = v25;
    v16 = a6;
    v28 = (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 16 * v27);
    v22 = v28[1];
    v20 = *v28 - *(_QWORD *)(v22 + 40);
    if ( v21 >= v20 )
      break;
LABEL_27:
    v10 = a3;
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= v11 )
      goto LABEL_28;
  }
  v17 = v28;
LABEL_22:
  v29 = *(_DWORD *)(v22 + 132) == 0;
  *(_DWORD *)(v22 + 136) = v33;
  if ( v29 )
    _InterlockedExchange((volatile __int32 *)(v22 + 132), 1);
  v30 = 8 * v18;
  *(_DWORD *)(v30 + a5) = *(_DWORD *)(v22 + 124);
  v18 = (unsigned int)(v18 + 1);
  *(_DWORD *)(v30 + a5 + 4) = v21 - v20;
  if ( (unsigned int)v18 < v16 )
    goto LABEL_27;
LABEL_28:
  v9 = (unsigned __int64 *)(a1 + 8);
LABEL_29:
  v31 = a7;
  v15 = (struct _KTHREAD **)(a1 + 16);
  v7 = a2;
  *a7 = v18;
LABEL_31:
  if ( *v15 == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( (volatile signed __int32 *)a1 == v7 + 312 )
  {
    _InterlockedAdd(v7 + 284, v11);
    result = *v31;
    _InterlockedAdd(v7 + 285, result);
  }
  else
  {
    _InterlockedAdd(v7 + 282, v11);
    result = *v31;
    _InterlockedAdd(v7 + 283, result);
  }
  return result;
}
