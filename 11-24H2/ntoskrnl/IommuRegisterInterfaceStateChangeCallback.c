/*
 * XREFs of IommuRegisterInterfaceStateChangeCallback @ 0x140566C30
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14054DDE0 (HalpIommuDeviceGetDomainTypes.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuRegisterInterfaceStateChangeCallback(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int DomainTypes; // ebx
  unsigned int v9; // ebp
  _QWORD *v10; // rax
  __int64 v11; // rsi
  volatile signed __int64 *v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // r13
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // r13
  __int64 *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  int v25; // [rsp+78h] [rbp+20h] BYREF
  int v26; // [rsp+7Ch] [rbp+24h]

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
      v13 = KeAbPreAcquire(a3 + 416, 0LL);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 416), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a3 + 416), (__int64)v13, a3 + 416);
      if ( v14 )
        *((_BYTE *)v14 + 10) = 1;
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
        v16 = KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
        v20 = v16;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(
            &IommuInterfaceStateChangeCallbackPushLock,
            (__int64)v16,
            (__int64)&IommuInterfaceStateChangeCallbackPushLock);
        if ( v20 )
          *((_BYTE *)v20 + 10) = 1;
        *(_DWORD *)(v11 + 40) = *a4;
        if ( (*a4 & 1) != 0 )
        {
          DomainTypes = HalpIommuDeviceGetDomainTypes(a3, v17, v18, v19);
          *(_DWORD *)(v11 + 44) = DomainTypes;
        }
        v21 = (__int64 *)qword_140F8ECD8;
        v25 = *a4;
        v26 = DomainTypes;
        if ( *(__int64 **)qword_140F8ECD8 != &IommuInterfaceStateChangeCallbackListHead )
          __fastfail(3u);
        *(_QWORD *)(v11 + 8) = qword_140F8ECD8;
        *(_QWORD *)v11 = &IommuInterfaceStateChangeCallbackListHead;
        *v21 = v11;
        qword_140F8ECD8 = v11;
        if ( (_InterlockedExchangeAdd64(
                (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock);
        KeAbPostRelease((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock);
        if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 416));
        KeAbPostRelease(a3 + 416);
        guard_dispatch_icall_no_overrides(&v25, a2, v22, v23);
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
