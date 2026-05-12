/*
 * XREFs of GatewayCheckWaitTimeout @ 0x1400A5CB0
 * Callers:
 *     RaidAdapterCheckWaitTimeout @ 0x140058F80 (RaidAdapterCheckWaitTimeout.c)
 * Callees:
 *     StorGetPendingIoCount @ 0x1400A6E90 (StorGetPendingIoCount.c)
 */

__int64 __fastcall GatewayCheckWaitTimeout(__int64 a1, int a2, __int64 a3)
{
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  char v7; // r12
  unsigned int PendingIoCount; // r15d
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD **v14; // r14
  _QWORD *v15; // r11
  __int64 v16; // rdx
  ULONGLONG v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  bool v23; // zf
  _QWORD *v24; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  ULONGLONG v26; // [rsp+80h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  v26 = UnbiasedInterruptTime;
  v7 = 0;
  PendingIoCount = 0;
  if ( !(unsigned int)StorGetPendingIoCount(v5) )
    return 0LL;
  v9 = *(_DWORD *)(v5 + 968);
  v10 = 0LL;
  if ( !v9 )
    return 0LL;
  while ( *(_QWORD *)(*(_QWORD *)(v5 + 960) + 320 * v10 + 264) == *(_QWORD *)(v5 + 960) + 320 * v10 + 264 )
  {
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v9 )
      return 0LL;
  }
  v12 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 968LL) )
  {
    do
    {
      v13 = a1 + 320 * v12;
      v14 = (_QWORD **)(v13 + 264);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v13, &LockHandle);
      v15 = *(_QWORD **)(v13 + 264);
      do
      {
        if ( v15 == v14 )
          break;
        v16 = v15[3];
        if ( (*(_BYTE *)(v16 + 506) & 2) == 0 )
        {
          v17 = *(v15 - 2);
          if ( v17 == -1LL || v17 >= v26 )
            break;
        }
        if ( (*(_BYTE *)(v16 + 506) & 2) == 0 && !v7 )
        {
          v5 = *(_QWORD *)(v16 + 24);
          v7 = 1;
          PendingIoCount = StorGetPendingIoCount(v5);
        }
        v18 = *v15;
        if ( *(_QWORD **)(*v15 + 8LL) != v15 )
          goto LABEL_30;
        v19 = (_QWORD *)v15[1];
        if ( (_QWORD *)*v19 != v15 )
          goto LABEL_30;
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        v20 = v15[2] + 120LL;
        v21 = *(_QWORD *)v20;
        if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 )
          goto LABEL_30;
        v22 = *(_QWORD **)(v15[2] + 128LL);
        if ( *v22 != v20 )
          goto LABEL_30;
        v23 = FeatureFixKcsanRacyAccessV2 == 0;
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        if ( v23 )
          --*(_DWORD *)(v13 + 24);
        else
          _InterlockedDecrement((volatile signed __int32 *)(v13 + 24));
        v24 = *(_QWORD **)(a3 + 8);
        if ( *v24 != a3 )
LABEL_30:
          __fastfail(3u);
        *v15 = a3;
        ++v6;
        v15[1] = v24;
        *v24 = v15;
        *(_QWORD *)(a3 + 8) = v15;
        v15 = *v14;
      }
      while ( v6 != a2 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v6 == a2 )
        break;
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < *(_DWORD *)(*(_QWORD *)(a1 + 48) + 968LL) );
    if ( v7 )
    {
      if ( PendingIoCount > *(_DWORD *)(v5 + 5348) )
        *(_DWORD *)(v5 + 5348) = PendingIoCount;
    }
  }
  return v6;
}
