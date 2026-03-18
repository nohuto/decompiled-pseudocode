/*
 * XREFs of IommuRegisterInterfaceStateChangeCallbackLegacy @ 0x140566E30
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14054DDE0 (HalpIommuDeviceGetDomainTypes.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuRegisterInterfaceStateChangeCallbackLegacy(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  signed __int8 v15; // cf
  _QWORD *v16; // rbp
  __int64 *v17; // rax

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
        v15 = _interlockedbittestandset64((volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
        v16 = v11;
        if ( v15 )
          ExfAcquirePushLockExclusiveEx(
            &IommuInterfaceStateChangeCallbackPushLock,
            (__int64)v11,
            (__int64)&IommuInterfaceStateChangeCallbackPushLock);
        if ( v16 )
          *((_BYTE *)v16 + 10) = 1;
        *(_DWORD *)(v10 + 40) = *a4;
        if ( (*a4 & 1) != 0 )
          *(_DWORD *)(v10 + 44) = HalpIommuDeviceGetDomainTypes(a3, v12, v13, v14);
        guard_dispatch_icall_no_overrides(v10 + 40, a2, v13, v14);
        v17 = (__int64 *)qword_140F8ECD8;
        if ( *(__int64 **)qword_140F8ECD8 != &IommuInterfaceStateChangeCallbackListHead )
          __fastfail(3u);
        *(_QWORD *)v10 = &IommuInterfaceStateChangeCallbackListHead;
        *(_QWORD *)(v10 + 8) = v17;
        *v17 = v10;
        qword_140F8ECD8 = v10;
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
