/*
 * XREFs of EtwpGetGuidList @ 0x14089DF60
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 *     EtwpGetTraceGuidList @ 0x1408972CC (EtwpGetTraceGuidList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     EtwpGetNextGuidEntry @ 0x14089E1C0 (EtwpGetNextGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 */

__int64 __fastcall EtwpGetGuidList(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // r14
  unsigned int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // ebp
  __int64 v9; // r12
  unsigned int v10; // esi
  __int64 NextGuidEntry; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  char v15; // r15
  _QWORD **v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r12
  _QWORD **v19; // r14
  signed __int64 *i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v22; // rdi
  _QWORD **v23; // rax
  _QWORD *v24; // r8
  signed __int64 j; // rdx
  signed __int64 v26; // rax
  __int64 v28; // [rsp+30h] [rbp-58h]

  v5 = a3;
  v6 = a2;
  v7 = 0;
  v8 = a4;
  v9 = a1;
  v10 = 0;
  NextGuidEntry = EtwpGetNextGuidEntry(a1, 0LL, a2);
  while ( 1 )
  {
    v12 = v10;
    if ( !NextGuidEntry )
      break;
    v13 = NextGuidEntry + 40;
    if ( v6 )
      goto LABEL_7;
    v14 = *(_QWORD *)v13 - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
    if ( *(_QWORD *)v13 == *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 )
      v14 = *(_QWORD *)(NextGuidEntry + 48) - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
    if ( v14 )
    {
LABEL_7:
      if ( ++v10 > 0xFFFFFFF )
      {
        v7 = -2147483643;
        *a5 = v10;
        return v7;
      }
      if ( v10 <= v8 )
        *(_OWORD *)(v5 + 16 * v12) = *(_OWORD *)v13;
    }
    v15 = 0;
    v16 = (_QWORD **)NextGuidEntry;
    NextGuidEntry = 0LL;
    v17 = 16LL * v6;
    v18 = v9
        + 464
        + 56LL
        * (((unsigned __int8)*(_DWORD *)v13 ^ (unsigned __int8)(*(_DWORD *)(v13 + 4) ^ *(_DWORD *)(v13 + 8) ^ *(_DWORD *)(v13 + 12))) & 0x3F);
    v19 = (_QWORD **)(v17 + v18);
    v28 = v17 - 48;
    for ( i = (signed __int64 *)(v18 + 48); ; v19 = (_QWORD **)((char *)i + v28) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v22 = KeAbPreAcquire((__int64)i, 0LL);
      if ( _InterlockedCompareExchange64(i, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(i, 0, v22, (unsigned __int64)i);
      if ( v22 )
        *((_BYTE *)v22 + 10) = 1;
      v23 = v19;
      if ( v16 )
        v23 = v16;
      v24 = *v23;
LABEL_18:
      if ( v24 != v19 )
      {
        NextGuidEntry = (__int64)v24;
        _m_prefetchw(v24 + 4);
        for ( j = v24[4]; ; j = v26 )
        {
          if ( !j )
          {
            v24 = (_QWORD *)*v24;
            goto LABEL_18;
          }
          v26 = _InterlockedCompareExchange64(v24 + 4, j + 1, j);
          if ( j == v26 )
            break;
        }
        if ( j < 0 )
          KeBugCheckEx(0x11Du, 9uLL, (ULONG_PTR)v24, 0LL, 0LL);
        v15 = 1;
      }
      v7 = 0;
      if ( _InterlockedCompareExchange64(i, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(i);
      KeAbPostRelease((ULONG_PTR)i);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v16 )
        EtwpUnreferenceGuidEntry(v16);
      if ( v15 )
        break;
      v18 += 56LL;
      i += 7;
      if ( v18 == a1 + 4048 )
      {
        NextGuidEntry = 0LL;
        break;
      }
      v16 = 0LL;
    }
    v6 = a2;
    v8 = a4;
    v5 = a3;
    v9 = a1;
  }
  *a5 = v10;
  if ( v10 > v8 )
    return (unsigned int)-1073741789;
  return v7;
}
