/*
 * XREFs of HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x1404D3740
 * Callers:
 *     HalpNotifyIommuDomainPolicyChange @ 0x14054B860 (HalpNotifyIommuDomainPolicyChange.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14054B68C (HalpIommuDeviceGetDomainTypes.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuInvokeInterfaceStateChangeCallbacks(__int64 a1, char a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  char *v6; // rax
  signed __int8 v7; // cf
  char *v8; // rdi
  __int64 i; // rdi
  int DomainTypes; // eax
  __int64 result; // rax
  int v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+54h] [rbp+1Ch]

  v4 = 0LL;
  v12 = 0;
  v13 = 0;
  v5 = 0LL;
  v6 = (char *)KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      &IommuInterfaceStateChangeCallbackPushLock,
      v6,
      (__int64)&IommuInterfaceStateChangeCallbackPushLock);
  if ( v8 )
    v8[10] = 1;
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
          v12 |= 1u;
          v13 = DomainTypes;
          v4 = *(_QWORD *)(i + 16);
          v5 = *(_QWORD *)(i + 24);
        }
      }
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock);
  result = KeAbPostRelease((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock);
  if ( v4 )
    return guard_dispatch_icall_no_overrides(&v12, v5);
  return result;
}
