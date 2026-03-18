/*
 * XREFs of EtwpRundownNotifications @ 0x140895250
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x14089CEA0 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     EtwpUnreferenceDataBlock @ 0x140896A38 (EtwpUnreferenceDataBlock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpRundownNotifications(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  signed __int64 *v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rax
  __int64 *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // r8
  _QWORD *v11; // r8
  signed __int64 v12; // rax
  signed __int64 v13; // rdx
  signed __int64 v14; // rtt
  _QWORD *v15; // rbx
  __int64 v16; // rax
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 800);
  if ( v2 )
  {
    P[1] = P;
    v4 = (signed __int64 *)(v2 + 16);
    P[0] = P;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire(v2 + 16, 0LL);
    v7 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 16), v6, v2 + 16);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    v8 = *(_QWORD **)(v2 + 24);
    while ( v8 != (_QWORD *)(v2 + 24) )
    {
      v9 = v8;
      v8 = (_QWORD *)*v8;
      if ( v9[3] == a2 )
      {
        if ( (_QWORD *)v8[1] != v9
          || (v10 = (_QWORD *)v9[1], (_QWORD *)*v10 != v9)
          || (*v10 = v8, v8[1] = v10, v11 = P[0], *((PVOID **)P[0] + 1) != P) )
        {
LABEL_12:
          __fastfail(3u);
        }
        *v9 = P[0];
        v9[1] = P;
        v11[1] = v9;
        P[0] = v9;
      }
    }
    _m_prefetchw(v4);
    v12 = *v4;
    v13 = *v4 - 16;
    if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v13 = 0LL;
    if ( (v12 & 2) != 0 || (v14 = *v4, v14 != _InterlockedCompareExchange64(v4, v13, v12)) )
      ExfReleasePushLock((_QWORD *)(v2 + 16));
    KeAbPostRelease(v2 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    while ( 1 )
    {
      v15 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P )
        goto LABEL_12;
      v16 = *(_QWORD *)P[0];
      if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
        goto LABEL_12;
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v16 + 8) = P;
      EtwpUnreferenceDataBlock(v15[2]);
      _m_prefetchw((char *)v15 + 52);
      if ( (_InterlockedAnd((volatile signed __int32 *)v15 + 13, 0xFFFFFFFE) & 0xFFFFFFFE) == 0 )
        ExFreePoolWithTag(v15, 0);
    }
  }
}
