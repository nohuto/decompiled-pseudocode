/*
 * XREFs of CmpReadBuildVersion @ 0x1407D5804
 * Callers:
 *     CmpRecordShutdownStopTime @ 0x1407D5A2C (CmpRecordShutdownStopTime.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall CmpReadBuildVersion(struct _PRIVILEGE_SET **a1, ULONG *a2, _DWORD *a3)
{
  struct _PRIVILEGE_SET *v6; // rsi
  struct _PRIVILEGE_SET *Pool; // rdi
  NTSTATUS v8; // ebx
  struct _PRIVILEGE_SET *v9; // rax
  ULONG LowPart; // r14d
  __int64 ResultLength; // [rsp+30h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+7h] BYREF
  int v17; // [rsp+90h] [rbp+17h]

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  Pool = 0LL;
  v17 = 0;
  KeyValueInformation = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS NT\\CURRENTVERSION");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v8 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"CurrentBuildNumber");
    v8 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, (PULONG)&ResultLength);
    if ( v8 == -1073741789 )
    {
      Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, (unsigned int)ResultLength, 0x30384D43u);
      if ( !Pool )
      {
LABEL_4:
        v8 = -1073741670;
        goto LABEL_11;
      }
      v8 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             Pool,
             ResultLength,
             (PULONG)&ResultLength + 1);
      if ( v8 >= 0 )
      {
        v9 = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, Pool->Privilege[0].Luid.LowPart, 0x30384D43u);
        v6 = v9;
        if ( !v9 )
          goto LABEL_4;
        memmove(v9, &Pool->Privilege[0].Luid.HighPart, Pool->Privilege[0].Luid.LowPart);
        LowPart = Pool->Privilege[0].Luid.LowPart;
        RtlInitUnicodeString(&DestinationString, L"UBR");
        v8 = ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               (PULONG)&ResultLength + 1);
        if ( v8 >= 0 )
        {
          if ( *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
          {
            *a3 = HIDWORD(KeyValueInformation);
            *a1 = v6;
            v6 = 0LL;
            *a2 = LowPart;
          }
          else
          {
            v8 = -1073741762;
          }
        }
      }
    }
  }
LABEL_11:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool )
    CmSiFreeMemory(Pool);
  if ( v8 < 0 && v6 )
    CmSiFreeMemory(v6);
  return (unsigned int)v8;
}
