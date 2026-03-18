/*
 * XREFs of ExpWatchProductTypeWork @ 0x1406F6C60
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     CmCleanupThreadInfo @ 0x14041EE40 (CmCleanupThreadInfo.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     CmInitializeThreadInfo @ 0x140667F38 (CmInitializeThreadInfo.c)
 *     CmSizeOfThreadInfo @ 0x140667F50 (CmSizeOfThreadInfo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     NtSetValueKey @ 0x14086A810 (NtSetValueKey.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     NtDeleteValueKey @ 0x140979A90 (NtDeleteValueKey.c)
 *     CmpLockRegistryFreezeAware @ 0x14097DFD8 (CmpLockRegistryFreezeAware.c)
 *     PsCreateSystemThreadEx @ 0x140A224A0 (PsCreateSystemThreadEx.c)
 *     NtOpenKeyEx @ 0x140A4A0B0 (NtOpenKeyEx.c)
 *     NtFlushKey @ 0x140A74F60 (NtFlushKey.c)
 *     NtQueryValueKey @ 0x140AE41C0 (NtQueryValueKey.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

NTSTATUS ExpWatchProductTypeWork()
{
  char v0; // r12
  char v1; // si
  char v2; // bl
  HANDLE v3; // r15
  char *v4; // r14
  _QWORD *v5; // rdi
  int v6; // eax
  int ValueKey; // eax
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
  __int64 v26; // r9
  int v27; // eax
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  void *v30; // rsp
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  signed __int64 v35; // rdx
  ULONG_PTR v36; // rtt
  NTSTATUS result; // eax
  size_t Size; // [rsp+28h] [rbp-38h]
  size_t Sizea; // [rsp+28h] [rbp-38h]
  size_t Sizeb; // [rsp+28h] [rbp-38h]
  char v41; // [rsp+60h] [rbp+0h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp+8h] BYREF
  __int64 v43; // [rsp+70h] [rbp+10h] BYREF
  UNICODE_STRING v44; // [rsp+78h] [rbp+18h] BYREF
  void *v45; // [rsp+88h] [rbp+28h] BYREF
  char *v46; // [rsp+90h] [rbp+30h]
  HANDLE Handle; // [rsp+98h] [rbp+38h] BYREF
  HANDLE v48; // [rsp+A0h] [rbp+40h]
  _DWORD v49[2]; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v50; // [rsp+B0h] [rbp+50h]
  UNICODE_STRING *p_DestinationString; // [rsp+B8h] [rbp+58h]
  int v52; // [rsp+C0h] [rbp+60h]
  int v53; // [rsp+C4h] [rbp+64h]
  __int128 v54; // [rsp+C8h] [rbp+68h]
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp+78h] BYREF
  _OWORD v56[2]; // [rsp+E8h] [rbp+88h] BYREF
  __int16 v57; // [rsp+108h] [rbp+A8h]

  v49[1] = 0;
  v0 = 1;
  v53 = 0;
  DestinationString = 0LL;
  Handle = 0LL;
  v1 = 0;
  v44 = 0LL;
  LODWORD(v43) = 0;
  v2 = 0;
  v41 = 1;
  v3 = 0LL;
  v45 = 0LL;
  v4 = 0LL;
  v46 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v49[0] = 48;
  p_DestinationString = &DestinationString;
  v50 = 0LL;
  v52 = 576;
  v54 = 0LL;
  v5 = KeAbPreAcquire((__int64)&ExpKeyManipLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&ExpKeyManipLock, 0, v5, (__int64)&ExpKeyManipLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( ExpProductTypeKey )
  {
    v6 = NtOpenKeyEx(&v45, 131103LL, v49, 0LL);
    if ( v6 == -1073741670 )
    {
      Interval.QuadPart = -10000000LL;
      do
      {
        KeDelayExecutionThread(0, 0, &Interval);
        v6 = NtOpenKeyEx(&v45, 131103LL, v49, 0LL);
      }
      while ( v6 == -1073741670 );
    }
    if ( v6 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v6, 0LL, 0LL);
    v3 = ExpProductTypeKey;
    v48 = ExpProductTypeKey;
    ExpProductTypeKey = v45;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&v44, L"ProductType");
      ValueKey = NtQueryValueKey(ExpProductTypeKey, 34, (__int64)&v43);
      if ( ValueKey == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          ValueKey = NtQueryValueKey(ExpProductTypeKey, 34, (__int64)&v43);
        }
        while ( ValueKey == -1073741670 );
      }
      if ( ValueKey >= 0 )
      {
        v8 = L"LanmanNT";
        do
        {
          v9 = *(const wchar_t *)((char *)v8 + (char *)v56 + 12 - (char *)L"LanmanNT");
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
          v12 = *(const wchar_t *)((char *)v11 + (char *)v56 + 12 - (char *)L"ServerNT");
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
          *(_OWORD *)ExpProductTypeValueInfo = v56[0];
          *(_OWORD *)(v19 + 16) = v56[1];
          *(_WORD *)(v19 + 32) = v57;
        }
        v20 = (char *)((char *)v56 + 12 - v16);
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
        v41 = v0;
      }
      Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
      if ( !qword_140FD7478
        || (v27 = guard_dispatch_icall_no_overrides(Blink, v23, v25, v26), v25 = (unsigned int)v27, v27 < 0) )
      {
        KeBugCheckEx(0x9Au, 0x11uLL, v25, 1uLL, 0LL);
      }
      v28 = (unsigned int)CmSizeOfThreadInfo();
      v29 = v28 + 15;
      if ( v28 + 15 <= v28 )
        v29 = 0xFFFFFFFFFFFFFF0LL;
      v30 = alloca(v29 & 0xFFFFFFFFFFFFFFF0uLL);
      v4 = &v41;
      v46 = &v41;
      CmInitializeThreadInfo((_KAFFINITY_EX *)&v41);
      LOBYTE(v31) = 1;
      CmpLockRegistryFreezeAware(v31);
      v1 = 1;
      LODWORD(Size) = *(_DWORD *)(ExpProductTypeValueInfo + 8);
      v32 = NtSetValueKey(
              (int)ExpProductTypeKey,
              (int)&v44,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              ExpProductTypeValueInfo + 12,
              Size);
      if ( v32 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(Sizea) = *(_DWORD *)(ExpProductTypeValueInfo + 8);
          v32 = NtSetValueKey(
                  (int)ExpProductTypeKey,
                  (int)&v44,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  ExpProductTypeValueInfo + 12,
                  Sizea);
        }
        while ( v32 == -1073741670 );
      }
      if ( v32 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v32, 1uLL, 0LL);
      if ( qword_140E61FA8 )
      {
        RtlInitUnicodeString(&v44, L"ProductSuite");
        LODWORD(Sizea) = *((_DWORD *)qword_140E61FA8 + 2);
        v33 = NtSetValueKey(
                (int)ExpProductTypeKey,
                (int)&v44,
                0,
                *((_DWORD *)qword_140E61FA8 + 1),
                (__int64)qword_140E61FA8 + 12,
                Sizea);
        if ( v33 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            LODWORD(Sizeb) = *((_DWORD *)qword_140E61FA8 + 2);
            v33 = NtSetValueKey(
                    (int)ExpProductTypeKey,
                    (int)&v44,
                    0,
                    *((_DWORD *)qword_140E61FA8 + 1),
                    (__int64)qword_140E61FA8 + 12,
                    Sizeb);
          }
          while ( v33 == -1073741670 );
        }
        if ( v33 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v33, 2uLL, 0LL);
      }
      else
      {
        RtlInitUnicodeString(&v44, L"ProductSuite");
        NtDeleteValueKey(ExpProductTypeKey, &v44);
      }
    }
    v34 = NtNotifyChangeMultipleKeys(
            (_DWORD)ExpProductTypeKey,
            0,
            0,
            0,
            (__int64)&ExpWatchProductTypeWorkItem,
            1LL,
            (__int64)&ExpProductTypeIoSb,
            268435461,
            0,
            (__int64)&ExpProductTypeChangeBuffer,
            4,
            1);
    if ( v34 == -1073741670 )
    {
      Interval.QuadPart = -10000000LL;
      do
      {
        KeDelayExecutionThread(0, 0, &Interval);
        v34 = NtNotifyChangeMultipleKeys(
                (_DWORD)ExpProductTypeKey,
                0,
                0,
                0,
                (__int64)&ExpWatchProductTypeWorkItem,
                1LL,
                (__int64)&ExpProductTypeIoSb,
                268435461,
                0,
                (__int64)&ExpProductTypeChangeBuffer,
                4,
                1);
      }
      while ( v34 == -1073741670 );
      v4 = v46;
      v3 = v48;
      v0 = v41;
    }
    if ( v1 )
      CmpUnlockRegistry();
    if ( v4 )
      CmCleanupThreadInfo((__int64)v4);
    if ( v34 < 0 )
      KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v34, 4uLL, 0LL);
    v2 = v1;
    if ( !ExpSetupModeDetected
      && v0
      && (int)PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, ExpExpirationThread, 3221226090LL, 0LL, 0LL) >= 0 )
    {
      ZwClose(Handle);
    }
  }
  _m_prefetchw(&ExpKeyManipLock);
  v35 = ExpKeyManipLock - 16;
  if ( (ExpKeyManipLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v35 = 0LL;
  if ( (ExpKeyManipLock & 2) != 0
    || (v36 = ExpKeyManipLock,
        v36 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v35, ExpKeyManipLock)) )
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
