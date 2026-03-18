/*
 * XREFs of IommuRegisterInterfaceStateChangeCallback @ 0x1405643C0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14054B4C8 (HalpIommuDeviceGetDomainTypes.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuRegisterInterfaceStateChangeCallback(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 *v11; // rax
  signed __int8 v12; // cf
  __int64 *v13; // rbp
  __int64 *v14; // rax

  v4 = 0;
  if ( *a4 )
  {
    if ( *(_QWORD *)(a3 + 80) )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v9 = (_QWORD *)HalpMmAllocCtxAlloc(a1, 48LL);
      v10 = (__int64)v9;
      if ( v9 )
      {
        *v9 = 0LL;
        v9[1] = 0LL;
        v9[4] = 0LL;
        v9[5] = 0LL;
        v9[2] = a1;
        v9[3] = a2;
        ObfReferenceObjectWithTag(*(PVOID *)(a3 + 8), 0x446C6148u);
        *(_QWORD *)(v10 + 32) = a3;
        *(_QWORD *)(a3 + 80) = v10;
        v11 = KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
        v12 = _interlockedbittestandset64((volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
        v13 = v11;
        if ( v12 )
          ExfAcquirePushLockExclusiveEx(
            &IommuInterfaceStateChangeCallbackPushLock,
            v11,
            (__int64)&IommuInterfaceStateChangeCallbackPushLock);
        if ( v13 )
          *((_BYTE *)v13 + 10) = 1;
        *(_DWORD *)(v10 + 40) = *a4;
        if ( (*a4 & 1) != 0 )
          *(_DWORD *)(v10 + 44) = HalpIommuDeviceGetDomainTypes(a3);
        guard_dispatch_icall_no_overrides(v10 + 40);
        v14 = (__int64 *)qword_140F8E538;
        if ( *(__int64 **)qword_140F8E538 != &IommuInterfaceStateChangeCallbackListHead )
          __fastfail(3u);
        *(_QWORD *)v10 = &IommuInterfaceStateChangeCallbackListHead;
        *(_QWORD *)(v10 + 8) = v14;
        *v14 = v10;
        qword_140F8E538 = v10;
        if ( (_InterlockedExchangeAdd64(
                (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock);
        KeAbPostRelease((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741582;
  }
  return v4;
}
