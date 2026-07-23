/*
 * XREFs of IommuRegisterInterfaceStateChangeCallback @ 0x140564930
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14054B68C (HalpIommuDeviceGetDomainTypes.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuRegisterInterfaceStateChangeCallback(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int DomainTypes; // ebx
  unsigned int v9; // ebp
  _QWORD *v10; // rax
  __int64 v11; // rsi
  volatile signed __int64 *v12; // rdi
  char *v13; // rax
  char *v14; // r13
  __int64 v15; // rcx
  char *v16; // rax
  char *v17; // r13
  __int64 *v18; // rax
  int v20; // [rsp+78h] [rbp+20h] BYREF
  int v21; // [rsp+7Ch] [rbp+24h]

  DomainTypes = 0;
  v9 = 0;
  if ( *a4 )
  {
    v10 = (_QWORD *)HalpMmAllocCtxAlloc(a1, 48LL);
    v11 = (__int64)v10;
    if ( v10 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
      v10[5] = 0LL;
      v10[2] = a1;
      v12 = (volatile signed __int64 *)(a3 + 416);
      v10[3] = a2;
      v10[4] = a3;
      v13 = (char *)KeAbPreAcquire(a3 + 416, 0LL);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 416), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a3 + 416), v13, a3 + 416);
      if ( v14 )
        v14[10] = 1;
      if ( *(_QWORD *)(a3 + 80) )
      {
        if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 416));
        KeAbPostRelease(a3 + 416);
        HalpMmAllocCtxFree(v15, v11);
        return (unsigned int)-1073741823;
      }
      else
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a3 + 8), 0x446C6148u);
        *(_QWORD *)(a3 + 80) = v11;
        v16 = (char *)KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
        v17 = v16;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(
            &IommuInterfaceStateChangeCallbackPushLock,
            v16,
            (__int64)&IommuInterfaceStateChangeCallbackPushLock);
        if ( v17 )
          v17[10] = 1;
        *(_DWORD *)(v11 + 40) = *a4;
        if ( (*a4 & 1) != 0 )
        {
          DomainTypes = HalpIommuDeviceGetDomainTypes(a3);
          *(_DWORD *)(v11 + 44) = DomainTypes;
        }
        v18 = (__int64 *)qword_140F8EEC8;
        v20 = *a4;
        v21 = DomainTypes;
        if ( *(__int64 **)qword_140F8EEC8 != &IommuInterfaceStateChangeCallbackListHead )
          __fastfail(3u);
        *(_QWORD *)(v11 + 8) = qword_140F8EEC8;
        *(_QWORD *)v11 = &IommuInterfaceStateChangeCallbackListHead;
        *v18 = v11;
        qword_140F8EEC8 = v11;
        if ( (_InterlockedExchangeAdd64(
                (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock);
        KeAbPostRelease((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock);
        if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 416));
        KeAbPostRelease(a3 + 416);
        guard_dispatch_icall_no_overrides(&v20, a2);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741582;
  }
  return v9;
}
