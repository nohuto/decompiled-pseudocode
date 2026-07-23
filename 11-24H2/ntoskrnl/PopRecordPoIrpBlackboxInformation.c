/*
 * XREFs of PopRecordPoIrpBlackboxInformation @ 0x1404BD7D4
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x140765D88 (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopDiagGetDriverName @ 0x1403CBCB8 (PopDiagGetDriverName.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void PopRecordPoIrpBlackboxInformation()
{
  __int64 v0; // rsi
  int v1; // r14d
  void *v2; // rdi
  ULONG_PTR v3; // rbx
  KIRQL v4; // al
  int v5; // r12d
  KIRQL v6; // dl
  __int64 v7; // rax
  unsigned __int64 v8; // r11
  __int64 v9; // rax
  __int64 Pool2; // rax
  ULONG_PTR v11; // rcx
  _DWORD *v12; // r14
  __int64 i; // rsi
  __int64 v14; // r12
  __int64 v15; // r15
  _QWORD InputBuffer_8[4]; // [rsp+38h] [rbp-99h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-79h] BYREF
  wchar_t Src[64]; // [rsp+78h] [rbp-59h] BYREF

  memset(InputBuffer_8, 0, sizeof(InputBuffer_8));
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v0 = PopIrpList;
  v1 = 0;
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  v2 = 0LL;
  v3 = 64LL;
  while ( (__int64 *)v0 != &PopIrpList )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v0 + 288));
    v5 = *(_DWORD *)(v0 + 296);
    v6 = v4;
    if ( v5 == 1 )
      v7 = *(_QWORD *)(v0 + 48);
    else
      v7 = 0LL;
    *(_QWORD *)(v0 + 304) = v7;
    KeReleaseSpinLock((PKSPIN_LOCK)(v0 + 288), v6);
    if ( v5 == 1 )
    {
      if ( PopDiagGetDriverName(*(_QWORD *)(v0 + 32), Src) >= 0 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( Src[v9] );
        v8 = 2 * v9 + 26;
        if ( v8 < 0x18 )
          goto LABEL_14;
      }
      ++v1;
      if ( v3 + v8 < v3 )
        goto LABEL_14;
      v3 += v8;
    }
    v0 = *(_QWORD *)v0;
  }
  if ( !v1 )
  {
LABEL_14:
    v3 = 0LL;
    goto LABEL_26;
  }
  Pool2 = ExAllocatePool2(0x40uLL, v3, 0x42424F50u);
  v2 = (void *)Pool2;
  if ( Pool2 )
  {
    v11 = ExWorkerQueue;
    *(_DWORD *)(Pool2 + 8) = v1;
    v12 = (_DWORD *)(Pool2 + 40);
    *(_DWORD *)(Pool2 + 4) = 1;
    *(_DWORD *)Pool2 = v3;
    *(_QWORD *)(Pool2 + 16) = &PopIrpList;
    *(_QWORD *)(Pool2 + 24) = &PopIrpThreadList;
    *(_QWORD *)(Pool2 + 32) = v11;
    for ( i = PopIrpList; (__int64 *)i != &PopIrpList; i = *(_QWORD *)i )
    {
      if ( *(_QWORD *)(i + 304) )
      {
        v12[2] = *(unsigned __int8 *)(i + 184);
        v12[3] = *(_DWORD *)(i + 188);
        v12[4] = *(_DWORD *)(i + 192);
        v14 = 24LL;
        v12[1] = (KiQueryUnbiasedInterruptTime() - *(_QWORD *)(i + 304)) / 0x2710uLL;
        if ( PopDiagGetDriverName(*(_QWORD *)(i + 32), Src) >= 0 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( Src[v15] );
          v14 = 2 * v15 + 26;
          memmove(v12 + 5, Src, 2 * v15);
          *((_WORD *)v12 + v15 + 10) = 0;
        }
        *v12 = v14;
        v12 = (_DWORD *)((char *)v12 + v14);
      }
    }
  }
LABEL_26:
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    InputBuffer_8[3] = 4LL;
    InputBuffer_8[0] = v2;
    *(_OWORD *)&InputBuffer_8[1] = (unsigned int)v3;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer_8, 0x20u, 0LL, 0);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x42424F50u);
}
