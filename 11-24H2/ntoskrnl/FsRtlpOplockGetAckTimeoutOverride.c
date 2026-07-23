/*
 * XREFs of FsRtlpOplockGetAckTimeoutOverride @ 0x140709414
 * Callers:
 *     FsRtlInitializeOplockPerf @ 0x140C1B2E8 (FsRtlInitializeOplockPerf.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 FsRtlpOplockGetAckTimeoutOverride()
{
  _DWORD *v0; // rdi
  ULONG Length; // esi
  NTSTATUS v2; // ebx
  _BYTE *i; // r9
  _BYTE *PoolWithTag; // rax
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  unsigned __int64 v8; // rax
  ULONG ResultLength; // [rsp+38h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-49h] BYREF
  _BYTE P[96]; // [rsp+88h] [rbp-19h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v0 = P;
  *(&ObjectAttributes.Length + 1) = 0;
  Length = 84;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystem");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"OplockLowPrivilegeAckTimeoutMs");
    for ( i = P; ; i = PoolWithTag )
    {
      ResultLength = 0;
      v5 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, i, Length, &ResultLength);
      v2 = v5;
      if ( v5 != -2147483643 )
        break;
      if ( v0 != (_DWORD *)P )
        ExFreePoolWithTag(v0, 0);
      Length *= 2;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, Length, 0x74725346u);
      v0 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v2 = -1073741801;
        goto LABEL_12;
      }
    }
    if ( v5 >= 0 )
    {
      ZwClose(KeyHandle);
      KeyHandle = 0LL;
      if ( v0[1] != 4 )
        goto LABEL_14;
      v8 = (unsigned int)v0[3];
      if ( (unsigned int)v8 <= 0xFA )
      {
        g_OplockAckTimeoutMs = 250LL;
        goto LABEL_14;
      }
      g_OplockAckTimeoutMs = (unsigned int)v0[3];
      if ( v8 < 0xEA60 )
        goto LABEL_14;
      g_OplockAckTimeoutMs = 60000LL;
    }
    else
    {
      v6 = 0;
      if ( v2 != -1073741772 )
        v6 = v2;
      v2 = v6;
    }
  }
LABEL_12:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_14:
  if ( v0 != (_DWORD *)P )
    ExFreePoolWithTag(v0, 0);
  return (unsigned int)v2;
}
