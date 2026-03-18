/*
 * XREFs of CmSetCallbackObjectContext @ 0x14098AF60
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409FE37C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPreLoadKey @ 0x140A73F7C (VrpPreLoadKey.c)
 *     VrpPostOpenOrCreate @ 0x140AE85D0 (VrpPostOpenOrCreate.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpUnlockContextList @ 0x14098B2A0 (CmpUnlockContextList.c)
 *     CmpLockContextListExclusive @ 0x14098B30C (CmpLockContextListExclusive.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall CmSetCallbackObjectContext(PVOID Object, PLARGE_INTEGER Cookie, PVOID NewContext, PVOID *OldContext)
{
  char v8; // bp
  _QWORD *v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rbx
  struct _KTHREAD *v12; // rax
  _QWORD *v13; // rbx
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
  LONGLONG v24; // rax
  LONGLONG v25; // rdx
  void *v26; // r12
  signed __int64 v27; // rdx
  ULONG_PTR v28; // rtt
  signed __int64 v29; // rdx
  ULONG_PTR v30; // rtt
  __int128 v32; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+30h] [rbp-38h]

  v33 = 0LL;
  v32 = 0LL;
  v8 = 0;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v32);
  if ( Object && *(_DWORD *)Object == 1803104306 )
  {
    if ( v9 )
      *v9 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((__int64)&CmpCallbackListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&CmpCallbackListLock, 0, v11, (__int64)&CmpCallbackListLock);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    v13 = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock, 0, v13, (__int64)&CmpContextListLock);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    v14 = (__int64 **)((char *)Object + 72);
    while ( 2 )
    {
      for ( i = (__int64 **)*v14; i != v14; i = (__int64 **)*i )
      {
        v23 = (LONGLONG)i[4];
        if ( v23 < Cookie->QuadPart )
          break;
        if ( v23 == Cookie->QuadPart )
        {
          v26 = (void *)_InterlockedExchange64((volatile __int64 *)i + 7, (__int64)NewContext);
          if ( OldContext )
            *OldContext = v26;
          v17 = 0;
          goto LABEL_33;
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
        goto LABEL_33;
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
            v24 = (LONGLONG)i[1],
            v25 = *(_QWORD *)v24,
            *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24) )
      {
        __fastfail(3u);
      }
      *v19 = v25;
      v19[1] = v24;
      *(_QWORD *)(v25 + 8) = v19;
      *(_QWORD *)v24 = v19;
    }
    else
    {
      v17 = -1073741670;
    }
LABEL_33:
    _m_prefetchw(&CmpContextListLock);
    v27 = CmpContextListLock - 16;
    if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v27 = 0LL;
    if ( (CmpContextListLock & 2) != 0
      || (v28 = CmpContextListLock,
          v28 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, v27, CmpContextListLock)) )
    {
      ExfReleasePushLock(&CmpContextListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
    KeLeaveCriticalRegionThread();
    _m_prefetchw(&CmpCallbackListLock);
    v29 = CmpCallbackListLock - 16;
    if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v29 = 0LL;
    if ( (CmpCallbackListLock & 2) != 0
      || (v30 = CmpCallbackListLock,
          v30 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpCallbackListLock,
                   v29,
                   CmpCallbackListLock)) )
    {
      ExfReleasePushLock(&CmpCallbackListLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
    KeLeaveCriticalRegionThread();
    CmpCleanupThreadInfo((_KAFFINITY_EX **)&v32);
    return v17;
  }
  else
  {
    CmpCleanupThreadInfo((_KAFFINITY_EX **)&v32);
    return -1073741585;
  }
}
