/*
 * XREFs of ExpWatchProductTypeWork @ 0x1406EB400
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CmSizeOfThreadInfo @ 0x14064A070 (CmSizeOfThreadInfo.c)
 *     CmInitializeThreadInfo @ 0x14065C5E4 (CmInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 *     CmpLockRegistryFreezeAware @ 0x140884780 (CmpLockRegistryFreezeAware.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 *     NtFlushKey @ 0x140A73170 (NtFlushKey.c)
 *     NtOpenKey @ 0x140AD33A0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

NTSTATUS ExpWatchProductTypeWork()
{
  char v0; // r12
  char v1; // si
  char v2; // bl
  HANDLE v3; // r15
  _KAFFINITY_EX **v4; // r14
  __int64 *v5; // rdi
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
  struct _LIST_ENTRY *Blink; // rcx
  ULONG_PTR v24; // r8
  int v25; // eax
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // rsp
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // ebx
  signed __int64 v33; // rdx
  ULONG_PTR v34; // rtt
  NTSTATUS result; // eax
  size_t Size; // [rsp+28h] [rbp-38h]
  size_t Sizea; // [rsp+28h] [rbp-38h]
  size_t Sizeb; // [rsp+28h] [rbp-38h]
  char v39; // [rsp+60h] [rbp+0h] BYREF
  LARGE_INTEGER Interval; // [rsp+68h] [rbp+8h] BYREF
  __int64 v41; // [rsp+70h] [rbp+10h] BYREF
  UNICODE_STRING v42; // [rsp+78h] [rbp+18h] BYREF
  void *v43; // [rsp+88h] [rbp+28h] BYREF
  char *v44; // [rsp+90h] [rbp+30h]
  HANDLE Handle; // [rsp+98h] [rbp+38h] BYREF
  HANDLE v46; // [rsp+A0h] [rbp+40h]
  _DWORD v47[2]; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v48; // [rsp+B0h] [rbp+50h]
  UNICODE_STRING *p_DestinationString; // [rsp+B8h] [rbp+58h]
  int v50; // [rsp+C0h] [rbp+60h]
  int v51; // [rsp+C4h] [rbp+64h]
  __int128 v52; // [rsp+C8h] [rbp+68h]
  UNICODE_STRING DestinationString; // [rsp+D8h] [rbp+78h] BYREF
  _OWORD v54[2]; // [rsp+E8h] [rbp+88h] BYREF
  __int16 v55; // [rsp+108h] [rbp+A8h]

  v47[1] = 0;
  v0 = 1;
  v51 = 0;
  DestinationString = 0LL;
  Handle = 0LL;
  v1 = 0;
  v42 = 0LL;
  LODWORD(v41) = 0;
  v2 = 0;
  v39 = 1;
  v3 = 0LL;
  v43 = 0LL;
  v4 = 0LL;
  v44 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  v47[0] = 48;
  p_DestinationString = &DestinationString;
  v48 = 0LL;
  v50 = 576;
  v52 = 0LL;
  v5 = KeAbPreAcquire((__int64)&ExpKeyManipLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&ExpKeyManipLock, 0, v5, (unsigned __int64)&ExpKeyManipLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( ExpProductTypeKey )
  {
    v6 = NtOpenKey(&v43, 131103LL, v47);
    if ( v6 == -1073741670 )
    {
      Interval.QuadPart = -10000000LL;
      do
      {
        KeDelayExecutionThread(0, 0, &Interval);
        v6 = NtOpenKey(&v43, 131103LL, v47);
      }
      while ( v6 == -1073741670 );
    }
    if ( v6 < 0 )
      KeBugCheckEx(0x9Au, 0xDuLL, (unsigned int)v6, 0LL, 0LL);
    v3 = ExpProductTypeKey;
    v46 = ExpProductTypeKey;
    ExpProductTypeKey = v43;
    if ( !ExpSetupModeDetected )
    {
      RtlInitUnicodeString(&v42, L"ProductType");
      ValueKey = NtQueryValueKey(ExpProductTypeKey, 34, (__int64)&v41);
      if ( ValueKey == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          ValueKey = NtQueryValueKey(ExpProductTypeKey, 34, (__int64)&v41);
        }
        while ( ValueKey == -1073741670 );
      }
      if ( ValueKey >= 0 )
      {
        v8 = L"LanmanNT";
        do
        {
          v9 = *(const wchar_t *)((char *)v8 + (char *)v54 + 12 - (char *)L"LanmanNT");
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
          v12 = *(const wchar_t *)((char *)v11 + (char *)v54 + 12 - (char *)L"ServerNT");
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
          *(_OWORD *)ExpProductTypeValueInfo = v54[0];
          *(_OWORD *)(v19 + 16) = v54[1];
          *(_WORD *)(v19 + 32) = v55;
        }
        v20 = (char *)((char *)v54 + 12 - v16);
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
        v39 = v0;
      }
      Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
      if ( !qword_140FD7478 || (v25 = guard_dispatch_icall_no_overrides(Blink), v24 = (unsigned int)v25, v25 < 0) )
        KeBugCheckEx(0x9Au, 0x11uLL, v24, 1uLL, 0LL);
      v26 = (unsigned int)CmSizeOfThreadInfo();
      v27 = v26 + 15;
      if ( v26 + 15 <= v26 )
        v27 = 0xFFFFFFFFFFFFFF0LL;
      v28 = alloca(v27 & 0xFFFFFFFFFFFFFFF0uLL);
      v4 = (_KAFFINITY_EX **)&v39;
      v44 = &v39;
      CmInitializeThreadInfo((_KAFFINITY_EX *)&v39);
      LOBYTE(v29) = 1;
      CmpLockRegistryFreezeAware(v29);
      v1 = 1;
      LODWORD(Size) = *(_DWORD *)(ExpProductTypeValueInfo + 8);
      v30 = NtSetValueKey(
              (int)ExpProductTypeKey,
              (int)&v42,
              0,
              *(_DWORD *)(ExpProductTypeValueInfo + 4),
              ExpProductTypeValueInfo + 12,
              Size);
      if ( v30 == -1073741670 )
      {
        Interval.QuadPart = -10000000LL;
        do
        {
          KeDelayExecutionThread(0, 0, &Interval);
          LODWORD(Sizea) = *(_DWORD *)(ExpProductTypeValueInfo + 8);
          v30 = NtSetValueKey(
                  (int)ExpProductTypeKey,
                  (int)&v42,
                  0,
                  *(_DWORD *)(ExpProductTypeValueInfo + 4),
                  ExpProductTypeValueInfo + 12,
                  Sizea);
        }
        while ( v30 == -1073741670 );
      }
      if ( v30 < 0 )
        KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v30, 1uLL, 0LL);
      if ( qword_140E61D68 )
      {
        RtlInitUnicodeString(&v42, L"ProductSuite");
        LODWORD(Sizea) = *((_DWORD *)qword_140E61D68 + 2);
        v31 = NtSetValueKey(
                (int)ExpProductTypeKey,
                (int)&v42,
                0,
                *((_DWORD *)qword_140E61D68 + 1),
                (__int64)qword_140E61D68 + 12,
                Sizea);
        if ( v31 == -1073741670 )
        {
          Interval.QuadPart = -10000000LL;
          do
          {
            KeDelayExecutionThread(0, 0, &Interval);
            LODWORD(Sizeb) = *((_DWORD *)qword_140E61D68 + 2);
            v31 = NtSetValueKey(
                    (int)ExpProductTypeKey,
                    (int)&v42,
                    0,
                    *((_DWORD *)qword_140E61D68 + 1),
                    (__int64)qword_140E61D68 + 12,
                    Sizeb);
          }
          while ( v31 == -1073741670 );
        }
        if ( v31 < 0 )
          KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v31, 2uLL, 0LL);
      }
      else
      {
        RtlInitUnicodeString(&v42, L"ProductSuite");
        NtDeleteValueKey(ExpProductTypeKey, &v42);
      }
    }
    v32 = NtNotifyChangeMultipleKeys(
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
    if ( v32 == -1073741670 )
    {
      Interval.QuadPart = -10000000LL;
      do
      {
        KeDelayExecutionThread(0, 0, &Interval);
        v32 = NtNotifyChangeMultipleKeys(
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
      while ( v32 == -1073741670 );
      v4 = (_KAFFINITY_EX **)v44;
      v3 = v46;
      v0 = v39;
    }
    if ( v1 )
      CmpUnlockRegistry();
    if ( v4 )
      CmCleanupThreadInfo(v4);
    if ( v32 < 0 )
      KeBugCheckEx(0x9Au, 0x11uLL, (unsigned int)v32, 4uLL, 0LL);
    v2 = v1;
    if ( !ExpSetupModeDetected
      && v0
      && (int)PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, ExpExpirationThread, 3221226090LL, 0LL, 0LL) >= 0 )
    {
      ZwClose(Handle);
    }
  }
  _m_prefetchw(&ExpKeyManipLock);
  v33 = ExpKeyManipLock - 16;
  if ( (ExpKeyManipLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v33 = 0LL;
  if ( (ExpKeyManipLock & 2) != 0
    || (v34 = ExpKeyManipLock,
        v34 != _InterlockedCompareExchange64((volatile signed __int64 *)&ExpKeyManipLock, v33, ExpKeyManipLock)) )
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
