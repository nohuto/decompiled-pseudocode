/*
 * XREFs of HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x1404D9CC4
 * Callers:
 *     HalpNotifyIommuDomainPolicyChange @ 0x14054DFB0 (HalpNotifyIommuDomainPolicyChange.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline @ 0x14054D414 (Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14054DDE0 (HalpIommuDeviceGetDomainTypes.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuInvokeInterfaceStateChangeCallbacks(__int64 a1, char a2)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  _QWORD *v6; // rax
  signed __int8 v7; // cf
  _QWORD *v8; // rdi
  __int64 i; // rdi
  char v10; // si
  int DomainTypes; // eax
  int v12; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+50h] [rbp+18h] BYREF
  int v20; // [rsp+54h] [rbp+1Ch]

  v4 = 0LL;
  v19 = 0;
  v20 = 0;
  v5 = 0LL;
  v6 = KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      &IommuInterfaceStateChangeCallbackPushLock,
      (__int64)v6,
      (__int64)&IommuInterfaceStateChangeCallbackPushLock);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  for ( i = IommuInterfaceStateChangeCallbackListHead;
        (__int64 *)i != &IommuInterfaceStateChangeCallbackListHead;
        i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(*(_QWORD *)(i + 32) + 8LL) == a1 )
    {
      v10 = 0;
      if ( (a2 & 1) != 0 && (*(_DWORD *)(i + 40) & 1) != 0 )
      {
        DomainTypes = HalpIommuDeviceGetDomainTypes();
        v12 = DomainTypes;
        if ( *(_DWORD *)(i + 44) != DomainTypes )
        {
          *(_DWORD *)(i + 44) = DomainTypes;
          IsEnabledDeviceUsageNoInline = Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline();
          v19 |= 1u;
          v20 = v12;
          if ( IsEnabledDeviceUsageNoInline )
          {
            v4 = *(_QWORD *)(i + 16);
            v5 = *(_QWORD *)(i + 24);
          }
          else
          {
            v10 = 1;
          }
        }
        if ( !(unsigned int)Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline() && v10 )
          guard_dispatch_icall_no_overrides(&v19, *(_QWORD *)(i + 24), v14, v15);
      }
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock);
  KeAbPostRelease((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock);
  result = Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( v4 )
      return guard_dispatch_icall_no_overrides(&v19, v5, v17, v18);
  }
  return result;
}
