/*
 * XREFs of CmSetCallbackObjectContext @ 0x140949880
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1409494F0 (VrpPostOpenOrCreate.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14094B860 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x140A71EB8 (VrpPreLoadKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpUnlockContextList @ 0x140949BA0 (CmpUnlockContextList.c)
 *     CmpLockContextListExclusive @ 0x140949C0C (CmpLockContextListExclusive.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall CmSetCallbackObjectContext(PVOID Object, PLARGE_INTEGER Cookie, PVOID NewContext, PVOID *OldContext)
{
  char v8; // bp
  _QWORD *v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // rbx
  struct _KTHREAD *v12; // rax
  __int64 *v13; // rbx
  __int64 **v14; // rbx
  __int64 **i; // r15
  __int64 *j; // rbx
  NTSTATUS v17; // esi
  LARGE_INTEGER *Pool2; // rax
  LONGLONG *v19; // rcx
  __int64 *v20; // rbx
  LARGE_INTEGER *v21; // rax
  LARGE_INTEGER **v22; // rdx
  LONGLONG v23; // rax
  LONGLONG v24; // rdx
  void *v25; // r12
  signed __int64 v26; // rdx
  ULONG_PTR v27; // rtt
  signed __int64 v28; // rdx
  ULONG_PTR v29; // rtt
  LONGLONG v31; // rax
  _OWORD v32[3]; // [rsp+20h] [rbp-38h] BYREF

  v32[0] = 0LL;
  v8 = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)v32);
  if ( Object && *(_DWORD *)Object == 1803104306 )
  {
    if ( v9 )
      *v9 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0, v11, (unsigned __int64)&CmpCallbackListLock);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock, 0, v13, (unsigned __int64)&CmpContextListLock);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    v14 = (__int64 **)((char *)Object + 72);
    while ( 2 )
    {
      for ( i = (__int64 **)*v14; i != v14; i = (__int64 **)*i )
      {
        v31 = (LONGLONG)i[4];
        if ( v31 < Cookie->QuadPart )
          break;
        if ( v31 == Cookie->QuadPart )
        {
          v25 = (void *)_InterlockedExchange64((volatile __int64 *)i + 7, (__int64)NewContext);
          if ( OldContext )
            *OldContext = v25;
          v17 = 0;
          goto LABEL_30;
        }
      }
      if ( !v8 )
      {
        CmpUnlockContextList();
        v8 = 1;
        CmpLockContextListExclusive();
        continue;
      }
      break;
    }
    for ( j = (__int64 *)CallbackListHead; ; j = (__int64 *)*j )
    {
      if ( j == &CallbackListHead )
      {
        v17 = -1073741584;
        goto LABEL_30;
      }
      if ( Cookie->QuadPart == j[3] )
        break;
    }
    v17 = 0;
    Pool2 = (LARGE_INTEGER *)ExAllocatePool2(0x100uLL);
    v19 = (LONGLONG *)Pool2;
    if ( Pool2 )
    {
      Pool2[5].QuadPart = (LONGLONG)j;
      v20 = j + 8;
      Pool2[4] = *Cookie;
      v21 = Pool2 + 2;
      v19[7] = (LONGLONG)NewContext;
      v19[6] = (LONGLONG)Object;
      v22 = (LARGE_INTEGER **)v20[1];
      if ( *v22 != (LARGE_INTEGER *)v20
        || (v21->QuadPart = (LONGLONG)v20,
            v19[3] = (LONGLONG)v22,
            *v22 = v21,
            v20[1] = (__int64)v21,
            v23 = (LONGLONG)i[1],
            v24 = *(_QWORD *)v23,
            *(_QWORD *)(*(_QWORD *)v23 + 8LL) != v23) )
      {
        __fastfail(3u);
      }
      *v19 = v24;
      v19[1] = v23;
      *(_QWORD *)(v24 + 8) = v19;
      *(_QWORD *)v23 = v19;
    }
    else
    {
      v17 = -1073741670;
    }
LABEL_30:
    _m_prefetchw(&CmpContextListLock);
    v26 = CmpContextListLock - 16;
    if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v26 = 0LL;
    if ( (CmpContextListLock & 2) != 0
      || (v27 = CmpContextListLock,
          v27 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, v26, CmpContextListLock)) )
    {
      ExfReleasePushLock(&CmpContextListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    _m_prefetchw(&CmpCallbackListLock);
    v28 = CmpCallbackListLock - 16;
    if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v28 = 0LL;
    if ( (CmpCallbackListLock & 2) != 0
      || (v29 = CmpCallbackListLock,
          v29 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpCallbackListLock,
                   v28,
                   CmpCallbackListLock)) )
    {
      ExfReleasePushLock(&CmpCallbackListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    CmCleanupThreadInfo((_KAFFINITY_EX **)v32);
    return v17;
  }
  else
  {
    CmCleanupThreadInfo((_KAFFINITY_EX **)v32);
    return -1073741585;
  }
}
