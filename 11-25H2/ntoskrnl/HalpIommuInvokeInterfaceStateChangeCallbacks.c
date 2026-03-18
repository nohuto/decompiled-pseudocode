/*
 * XREFs of HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x1404D0120
 * Callers:
 *     HalpNotifyIommuDomainPolicyChange @ 0x14054B6A0 (HalpNotifyIommuDomainPolicyChange.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14054B4C8 (HalpIommuDeviceGetDomainTypes.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuInvokeInterfaceStateChangeCallbacks(__int64 a1, char a2)
{
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rdi
  __int64 i; // rdi
  int DomainTypes; // eax
  int v10; // [rsp+40h] [rbp+18h] BYREF
  int v11; // [rsp+44h] [rbp+1Ch]

  v10 = 0;
  v11 = 0;
  v4 = KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(
      &IommuInterfaceStateChangeCallbackPushLock,
      v4,
      (__int64)&IommuInterfaceStateChangeCallbackPushLock);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  for ( i = IommuInterfaceStateChangeCallbackListHead;
        (__int64 *)i != &IommuInterfaceStateChangeCallbackListHead;
        i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(*(_QWORD *)(i + 32) + 8LL) == a1 )
    {
      if ( (a2 & 1) != 0 && (*(_DWORD *)(i + 40) & 1) != 0 )
      {
        DomainTypes = HalpIommuDeviceGetDomainTypes();
        if ( *(_DWORD *)(i + 44) != DomainTypes )
        {
          *(_DWORD *)(i + 44) = DomainTypes;
          v10 |= 1u;
          v11 = DomainTypes;
          guard_dispatch_icall_no_overrides(&v10, *(_QWORD *)(i + 24));
        }
      }
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock);
  return KeAbPostRelease((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock);
}
