/*
 * XREFs of PfpParametersWatcher @ 0x1407484A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1403C5B9C (FsRtlAcquirePushLockExclusive.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     VmpReleasePushLockExclusive @ 0x1404860F0 (VmpReleasePushLockExclusive.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A67B0 (ZwCreateKey.c)
 *     ZwNotifyChangeKey @ 0x1406A8870 (ZwNotifyChangeKey.c)
 *     PfpRpShutdown @ 0x140746FD0 (PfpRpShutdown.c)
 *     PfSnParametersRead @ 0x140747CD0 (PfSnParametersRead.c)
 *     PfpParametersRead @ 0x1407482D0 (PfpParametersRead.c)
 */

void __fastcall PfpParametersWatcher(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  void *v3; // rcx
  NTSTATUS v4; // eax
  void *v5; // rcx
  char v6; // di
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+17h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+67h] BYREF

  v1 = (volatile signed __int64 *)(a1 + 504);
  KeyHandle = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  FsRtlAcquirePushLockExclusive((unsigned __int64 *)(a1 + 504));
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    v4 = ZwNotifyChangeKey(
           v3,
           0LL,
           (PIO_APC_ROUTINE)(a1 + 32),
           (PVOID)1,
           (PIO_STATUS_BLOCK)(a1 + 16),
           0x1000000Fu,
           0,
           (PVOID)(a1 + 64),
           4u,
           1u);
    if ( v4 >= 0 )
      goto LABEL_8;
    if ( v4 == -1073741444 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\PrefetchParameters");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 576;
      if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      {
        v5 = *(void **)(a1 + 8);
        *(_QWORD *)(a1 + 8) = KeyHandle;
        if ( v5 )
          ZwClose(v5);
        if ( ZwNotifyChangeKey(
               *(HANDLE *)(a1 + 8),
               0LL,
               (PIO_APC_ROUTINE)(a1 + 32),
               (PVOID)1,
               (PIO_STATUS_BLOCK)(a1 + 16),
               0x1000000Fu,
               0,
               (PVOID)(a1 + 64),
               4u,
               1u) >= 0 )
        {
LABEL_8:
          v6 = 0;
          if ( (int)PfpParametersRead(a1) >= 0 )
          {
            if ( ((*(_DWORD *)(a1 + 68) & 2) != 0) != (dword_140E66F90 & 1) )
            {
              if ( (*(_DWORD *)(a1 + 68) & 2) != 0 )
              {
                _InterlockedExchange64((volatile __int64 *)&stru_140E66F80, 0LL);
                dword_140E66F90 |= 1u;
              }
              else
              {
                PfpRpShutdown((__int64)&unk_140E66EF8);
              }
            }
            v6 = 1;
          }
          if ( (int)PfSnParametersRead(a1) >= 0 || v6 )
          {
            if ( *(_QWORD *)a1 )
              KeSetEvent(*(PRKEVENT *)a1, 0, 0);
          }
        }
      }
    }
  }
  VmpReleasePushLockExclusive(v1);
}
