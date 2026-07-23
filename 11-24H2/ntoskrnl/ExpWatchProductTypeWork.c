/*
 * XREFs of ExpWatchProductTypeWork @ 0x1406F4C60
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmCleanupThreadInfo @ 0x140414B80 (CmCleanupThreadInfo.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmInitializeThreadInfo @ 0x140666824 (CmInitializeThreadInfo.c)
 *     CmSizeOfThreadInfo @ 0x14066683C (CmSizeOfThreadInfo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 *     NtDeleteValueKey @ 0x1409622A0 (NtDeleteValueKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     NtOpenKeyEx @ 0x140A40DD0 (NtOpenKeyEx.c)
 *     NtFlushKey @ 0x140A6F280 (NtFlushKey.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

NTSTATUS ExpWatchProductTypeWork()
{
  char v0; // r12
  char v1; // si
  char v2; // bl
  HANDLE v3; // r15
  char *v4; // r14
  char *v5; // rdi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  const wchar_t *v8; // rax
  int v9; // edx
  int v10; // ecx
  const wchar_t *v11; // rax
  int v12; // edx
  int v13; // ecx
  char v14; // r10
  const wchar_t *v15; // rax
  char *v16; // rdx
  int v17; // r8d
  int v18; // ecx
  __int64 v19; // rcx
  char *v20; // rcx
  unsigned __int16 v21; // ax
  int v22; // eax
  __int64 v23; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  ULONG_PTR v25; // r8
  int v26; // eax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  void *v29; // rsp
  __int64 v30; // rcx
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  NTSTATUS v33; // ebx
  signed __int64 v34; // rdx
  ULONG_PTR v35; // rtt
  NTSTATUS result; // eax
  char v37; // [rsp+60h] [rbp+0h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp+8h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+10h] BYREF
  UNICODE_STRING ValueName; // [rsp+78h] [rbp+18h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+28h] BYREF
  char *v42; // [rsp+90h] [rbp+30h]
  HANDLE Handle; // [rsp+98h] [rbp+38h] BYREF
  HANDLE v44; // [rsp+A0h] [rbp+40h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp+48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp+78h] BYREF
  _OWORD KeyValueInformation[2]; // [rsp+E8h] [rbp+88h] BYREF
  __int16 v48; // [rsp+108h] [rbp+A8h]

  *(&ObjectAttributes.Length + 1) = 0;
  v0 = 1;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  DestinationString = 0LL;
  Handle = 0LL;
  v1 = 0;
  ValueName = 0LL;
  ResultLength = 0;
  v2 = 0;
  v37 = 1;
  v3 = 0LL;
  KeyHandle = 0LL;
  v4 = 0LL;
  v42 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  v5 = (char *)KeAbPreAcquire((__int64)&ExpKeyManipLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&ExpKeyManipLock, 0, v5, (__int64)&ExpKeyManipLock);
  if ( v5 )
    v5[10] = 1;
  if ( ExpProductTypeKey )
  {
    v6 = NtOpenKeyEx(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0);
    if ( v6 == -1073741670 )
    {
      Interval.QuadPart = -10000000LL;
      do
      {
        KeDelayExecutionThread(0, 0, &Interval);
        v6 = NtOpenKeyEx(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0);
      }
      while ( v6 == -1073741670 );
    }
    if ( v6 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v6, 0LL, 0LL);
    v3 = ExpProductTypeKey;
    v44 = ExpProductTypeKey;
    ExpProductTypeKey = KeyHandle;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&ValueName, L"ProductType");
      v7 = NtQueryValueKey(
             ExpProductTypeKey,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x22u,
             &ResultLength);
      if ( v7 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v7 = NtQueryValueKey(
                 ExpProductTypeKey,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x22u,
                 &ResultLength);
        }
        while ( v7 == -1073741670 );
      }
      if ( v7 >= 0 )
      {
        v8 = L"LanmanNT";
        do
        {
          v9 = *(const wchar_t *)((char *)v8 + (char *)KeyValueInformation + 12 - (char *)L"LanmanNT");
          v10 = *v8 - v9;
          if ( v10 )
            break;
          ++v8;
        }
        while ( v9 );
        if ( !v10 )
          goto LABEL_24;
        v11 = L"ServerNT";
        do
        {
          v12 = *(const wchar_t *)((char *)v11 + (char *)KeyValueInformation + 12 - (char *)L"ServerNT");
          v13 = *v11 - v12;
          if ( v13 )
            break;
          ++v11;
        }
        while ( v12 );
        v14 = 0;
        if ( !v13 )
LABEL_24:
          v14 = 1;
        v15 = L"WinNT";
        v16 = (char *)(ExpProductTypeValueInfo + 12);
        do
        {
          v17 = *(const wchar_t *)((char *)v15 + ExpProductTypeValueInfo + 12 - (_QWORD)L"WinNT");
          v18 = *v15 - v17;
          if ( v18 )
            break;
          ++v15;
        }
        while ( v17 );
        if ( v18 && v14 )
        {
          v19 = ExpProductTypeValueInfo;
          v0 = 0;
          *(_OWORD *)ExpProductTypeValueInfo = KeyValueInformation[0];
          *(_OWORD *)(v19 + 16) = KeyValueInformation[1];
          *(_WORD *)(v19 + 32) = v48;
        }
        v20 = (char *)((char *)KeyValueInformation + 12 - v16);
        while ( 1 )
        {
          v21 = *(_WORD *)v16;
          if ( *(_WORD *)v16 != *(_WORD *)&v20[(_QWORD)v16] )
            break;
          v16 += 2;
          if ( !v21 )
          {
            v22 = 0;
            goto LABEL_36;
          }
        }
        v22 = v21 < *(_WORD *)&v20[(_QWORD)v16] ? -1 : 1;
LABEL_36:
        v0 = v22 != 0 ? v0 : 0;
        v37 = v0;
      }
      Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
      if ( !qword_140FD8488 || (v26 = guard_dispatch_icall_no_overrides(Blink, v23), v25 = (unsigned int)v26, v26 < 0) )
        KeBugCheckEx(0x9Au, 0x11uLL, v25, 1uLL, 0LL);
      v27 = (unsigned int)CmSizeOfThreadInfo();
      v28 = v27 + 15;
      if ( v27 + 15 <= v27 )
        v28 = 0xFFFFFFFFFFFFFF0LL;
      v29 = alloca(v28 & 0xFFFFFFFFFFFFFFF0uLL);
      v4 = &v37;
      v42 = &v37;
      CmInitializeThreadInfo((_KAFFINITY_EX *)&v37);
      LOBYTE(v30) = 1;
      CmpLockRegistryFreezeAware(v30);
      v1 = 1;
      v31 = NtSetValueKey(
              ExpProductTypeKey,
              &ValueName,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              (PVOID)(ExpProductTypeValueInfo + 12),
              *(_DWORD *)(ExpProductTypeValueInfo + 8));
      if ( v31 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v31 = NtSetValueKey(
                  ExpProductTypeKey,
                  &ValueName,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  (PVOID)(ExpProductTypeValueInfo + 12),
                  *(_DWORD *)(ExpProductTypeValueInfo + 8));
        }
        while ( v31 == -1073741670 );
      }
      if ( v31 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v31, 1uLL, 0LL);
      if ( qword_140E61EE8 )
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        v32 = NtSetValueKey(
                ExpProductTypeKey,
                &ValueName,
                0,
                *((_DWORD *)qword_140E61EE8 + 1),
                (char *)qword_140E61EE8 + 12,
                *((_DWORD *)qword_140E61EE8 + 2));
        if ( v32 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            v32 = NtSetValueKey(
                    ExpProductTypeKey,
                    &ValueName,
                    0,
                    *((_DWORD *)qword_140E61EE8 + 1),
                    (char *)qword_140E61EE8 + 12,
                    *((_DWORD *)qword_140E61EE8 + 2));
          }
          while ( v32 == -1073741670 );
        }
        if ( v32 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v32, 2uLL, 0LL);
      }
      else
      {
        RtlInitUnicodeString(&ValueName, L"ProductSuite");
        NtDeleteValueKey(ExpProductTypeKey, &ValueName);
      }
    }
    v33 = NtNotifyChangeMultipleKeys(
            ExpProductTypeKey,
            0,
            0LL,
            0LL,
            ExpWatchProductTypeWorkItem,
            (PVOID)1,
            &ExpProductTypeIoSb,
            0x10000005u,
            0,
            &ExpProductTypeChangeBuffer,
            4u,
            1u);
    if ( v33 == -1073741670 )
    {
      Interval.QuadPart = -10000000LL;
      do
      {
        KeDelayExecutionThread(0, 0, &Interval);
        v33 = NtNotifyChangeMultipleKeys(
                ExpProductTypeKey,
                0,
                0LL,
                0LL,
                ExpWatchProductTypeWorkItem,
                (PVOID)1,
                &ExpProductTypeIoSb,
                0x10000005u,
                0,
                &ExpProductTypeChangeBuffer,
                4u,
                1u);
      }
      while ( v33 == -1073741670 );
      v4 = v42;
      v3 = v44;
      v0 = v37;
    }
    if ( v1 )
      CmpUnlockRegistry();
    if ( v4 )
      CmCleanupThreadInfo((__int64)v4);
    if ( v33 < 0 )
      KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v33, 4uLL, 0LL);
    v2 = v1;
    if ( !ExpSetupModeDetected
      && v0
      && (int)PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, ExpExpirationThread, 3221226090LL, 0LL, 0LL) >= 0 )
    {
      ZwClose(Handle);
    }
  }
  _m_prefetchw(&ExpKeyManipLock);
  v34 = ExpKeyManipLock - 16;
  if ( (ExpKeyManipLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v34 = 0LL;
  if ( (ExpKeyManipLock & 2) != 0
    || (v35 = ExpKeyManipLock,
        v35 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v34, ExpKeyManipLock)) )
  {
    ExfReleasePushLock(&ExpKeyManipLock);
  }
  result = KeAbPostRelease((ULONG_PTR)&ExpKeyManipLock);
  if ( v3 )
  {
    if ( v2 )
      NtFlushKey(v3);
    return ObCloseHandle(v3, 0);
  }
  return result;
}
