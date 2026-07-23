/*
 * XREFs of PsInitializeBootCpuPartitions @ 0x140C369DC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeOrAffinityEx2 @ 0x14032DDD0 (KeOrAffinityEx2.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1406A7610 (ZwEnumerateValueKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsCpuPartitionMoveCpus @ 0x14077663C (PsCpuPartitionMoveCpus.c)
 *     PsCreateCpuPartition @ 0x14077665C (PsCreateCpuPartition.c)
 *     RtlUnicodeStringToInteger @ 0x14097E410 (RtlUnicodeStringToInteger.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140C36DF4 (PspCopyNodeRelativeMaskToAffinityEx.c)
 */

__int64 PsInitializeBootCpuPartitions()
{
  __int64 Pool2; // rax
  __int64 v1; // rdi
  NTSTATUS v2; // ebx
  struct _KAFFINITY_EX *v3; // r13
  _WORD *v4; // rsi
  NTSTATUS v5; // eax
  ULONG v6; // r14d
  NTSTATUS v7; // eax
  ULONG v8; // ebx
  ULONG i; // edx
  unsigned int v10; // eax
  size_t v11; // r8
  NTSTATUS v12; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-71h] BYREF
  PVOID Object; // [rsp+78h] [rbp-41h] BYREF
  UNICODE_STRING String; // [rsp+80h] [rbp-39h] BYREF
  _QWORD v18[2]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v19[2]; // [rsp+A0h] [rbp-19h] BYREF
  _DWORD v20[2]; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+120h] [rbp+67h] BYREF
  ULONG Value; // [rsp+128h] [rbp+6Fh] BYREF
  HANDLE v25; // [rsp+130h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+138h] [rbp+7Fh] BYREF

  v18[0] = 11665584LL;
  Object = 0LL;
  Value = 0;
  v18[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\kernel\\CPU Partitions";
  ResultLength = 0;
  v19[1] = L"Masks";
  String = 0LL;
  v20[1] = 0;
  memset(&ObjectAttributes, 0, 44);
  v19[0] = 786442LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  Handle = 0LL;
  v25 = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL, 0x640uLL, 0x50707350uLL);
  v1 = Pool2;
  if ( !Pool2 )
  {
    v2 = -1073741670;
    goto LABEL_28;
  }
  v3 = (struct _KAFFINITY_EX *)(Pool2 + 536);
  *(_QWORD *)(Pool2 + 536) = 2097153LL;
  memset_0((void *)(Pool2 + 544), 0, 0x100uLL);
  v4 = (_WORD *)(v1 + 800);
  *(_QWORD *)(v1 + 800) = 2097153LL;
  memset_0((void *)(v1 + 808), 0, 0x100uLL);
  v20[0] = 256;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v18;
  v21 = v1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v5 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          do
          {
            v7 = ZwEnumerateKey(KeyHandle, v6, KeyBasicInformation, (PVOID)(v1 + 1064), 0x216u, &ResultLength);
            if ( v7 == -2147483622 )
            {
              v2 = 0;
              goto LABEL_27;
            }
            ++v6;
          }
          while ( v7 < 0 );
          *(_WORD *)(v1 + 2 * ((unsigned __int64)*(unsigned int *)(v1 + 1076) >> 1) + 1080) = 0;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)(v1 + 1080));
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v2 = ZwOpenKey(&Handle, 8u, &ObjectAttributes);
          if ( v2 < 0 )
            goto LABEL_27;
          ObjectAttributes.RootDirectory = Handle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v2 = ZwOpenKey(&v25, 1u, &ObjectAttributes);
          if ( v2 < 0 )
            goto LABEL_27;
          v8 = 0;
          for ( i = 0; ; i = v8 )
          {
            v12 = ZwEnumerateValueKey(v25, i, KeyValueFullInformation, (PVOID)(v1 + 256), 0x118u, &ResultLength);
            if ( v12 == -2147483622 )
              break;
            ++v8;
            if ( v12 >= 0 )
            {
              *(_DWORD *)(&String.MaximumLength + 1) = 0;
              String.Buffer = (wchar_t *)(v1 + 276);
              String.Length = *(_WORD *)(v1 + 272);
              String.MaximumLength = String.Length;
              if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0 )
              {
                memset_0((void *)v1, 0, 0x100uLL);
                v10 = *(_DWORD *)(v1 + 268);
                v11 = 256LL;
                if ( v10 <= 0x100 )
                  v11 = v10;
                memmove((void *)v1, (const void *)(v1 + *(unsigned int *)(v1 + 264) + 256LL), v11);
                PspCopyNodeRelativeMaskToAffinityEx((unsigned __int16)Value, v20, v3);
                KeOrAffinityEx2((struct _KAFFINITY_EX *)(v1 + 800), v3, (struct _KAFFINITY_EX *)(v1 + 800));
              }
            }
          }
          if ( !(unsigned int)KeIsEmptyAffinityEx((unsigned __int16 *)(v1 + 800)) )
            break;
LABEL_25:
          ZwClose(Handle);
          Handle = 0LL;
          ZwClose(v25);
          v25 = 0LL;
        }
        ObjectAttributes.RootDirectory = (HANDLE)PspCpuPartitionDirectoryHandle;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.SecurityDescriptor = (PVOID)PsCpuPartitionDefaultSd;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 592;
        ObjectAttributes.SecurityQualityOfService = 0LL;
      }
      while ( (int)PsCreateCpuPartition((__int64)&ObjectAttributes, 917511LL, 0, 1, PspSystemCpuPartition, &Object, 0LL) < 0 );
      if ( (int)PsCpuPartitionMoveCpus(
                  (__int64 *)Object,
                  (__int64 *)PspSystemCpuPartition,
                  (struct _KAFFINITY_EX *)(v1 + 800)) >= 0 )
      {
        memset_0((void *)(v1 + 808), 0, 8LL * (unsigned __int16)*v4);
        *v4 = 1;
        goto LABEL_25;
      }
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    }
  }
  v2 = 0;
  if ( v5 != -1073741772 )
    v2 = v5;
LABEL_27:
  ExFreePoolWithTag((PVOID)v1, 0);
LABEL_28:
  if ( v25 )
    ZwClose(v25);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
