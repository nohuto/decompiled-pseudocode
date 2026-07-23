/*
 * XREFs of EmInitSystem @ 0x140C62920
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1406A7470 (ZwReadFile.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1406A75D0 (ZwQueryInformationFile.c)
 *     ZwEnumerateValueKey @ 0x1406A7610 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     ZwCreateFile @ 0x1406A7E50 (ZwCreateFile.c)
 *     RtlAppendStringToString @ 0x140A7B170 (RtlAppendStringToString.c)
 *     EmpProviderRegister @ 0x140AAEE50 (EmpProviderRegister.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     EmpParseInfDatabase @ 0x140C187C4 (EmpParseInfDatabase.c)
 *     EmpCacheBiosDate @ 0x140C64A08 (EmpCacheBiosDate.c)
 */

__int64 __fastcall EmInitSystem(int a1, __int64 a2)
{
  _DWORD *Pool2; // rsi
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // edx
  int v7; // ebx
  NTSTATUS v9; // eax
  ULONG v10; // r12d
  ULONG i; // r13d
  NTSTATUS v12; // eax
  ULONG v13; // ebx
  void *v14; // rax
  __int64 v15; // rdi
  void *v16; // rcx
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  STRING Destination; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-10h]
  char v27; // [rsp+100h] [rbp+0h] BYREF

  v26 = 0LL;
  Pool2 = 0LL;
  v3 = 0LL;
  ResultLength = 0;
  Handle = (HANDLE)-1LL;
  FileHandle = (HANDLE)-1LL;
  FileInformation = 0LL;
  Destination = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( a1 )
  {
    if ( a1 != 1 )
    {
LABEL_6:
      v7 = 0;
      goto LABEL_7;
    }
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Errata\\Dynamic");
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v7 >= 0 )
    {
      v9 = ZwQueryKey(Handle, KeyFullInformation, 0LL, 0, &ResultLength);
      v7 = v9;
      if ( v9 == -2147483643 || v9 == -1073741789 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, ResultLength, 0x74694D45uLL);
        if ( Pool2 )
        {
          v7 = ZwQueryKey(Handle, KeyFullInformation, Pool2, ResultLength, &ResultLength);
          if ( v7 < 0 )
            goto LABEL_7;
          v10 = Pool2[10] + 16;
          v3 = ExAllocatePool2(0x100uLL, v10, 0x74694D45uLL);
          if ( v3 )
          {
            for ( i = 0; ; ++i )
            {
              v12 = ZwEnumerateValueKey(Handle, i, KeyValuePartialInformation, (PVOID)v3, v10, &ResultLength);
              v7 = v12;
              if ( v12 == -2147483622 )
                break;
              if ( v12 < 0 )
                goto LABEL_7;
              *(_DWORD *)&Destination.Length = 0x1000000;
              Destination.Buffer = &v27;
              RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\inf\\");
              RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
              *(_BYTE *)(*(unsigned int *)(v3 + 8) + v3 + 12) = 0;
              RtlInitUnicodeString(&DestinationString, (PCWSTR)(v3 + 12));
              RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&Destination;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v7 = ZwCreateFile(
                     &FileHandle,
                     0x120089u,
                     &ObjectAttributes,
                     &IoStatusBlock,
                     0LL,
                     0x80u,
                     1u,
                     1u,
                     0x20u,
                     0LL,
                     0);
              if ( v7 < 0 )
                goto LABEL_7;
              v7 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
              if ( v7 < 0 )
              {
                ZwClose(FileHandle);
                goto LABEL_7;
              }
              if ( HIDWORD(FileInformation) )
              {
                ZwClose(FileHandle);
                goto LABEL_19;
              }
              v13 = DWORD2(FileInformation);
              LODWORD(v20) = DWORD2(FileInformation);
              v14 = (void *)ExAllocatePool2(0x100uLL, DWORD2(FileInformation), 0x74694D45uLL);
              v15 = (__int64)v14;
              if ( !v14 )
              {
                ZwClose(FileHandle);
                goto LABEL_21;
              }
              v7 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v14, v13, 0LL, 0LL);
              ZwClose(FileHandle);
              v16 = (void *)v15;
              if ( v7 < 0 )
                goto LABEL_35;
              v7 = EmpParseInfDatabase(v15, v20);
              if ( v7 < 0 )
              {
                v16 = (void *)v15;
LABEL_35:
                ExFreePoolWithTag(v16, 0x74694D45u);
                goto LABEL_7;
              }
            }
            goto LABEL_6;
          }
        }
LABEL_21:
        v7 = -1073741670;
        goto LABEL_7;
      }
      if ( !v9 )
LABEL_19:
        v7 = -1073741823;
    }
  }
  else
  {
    dword_140F8E628 |= 0x80000000;
    EmpRuleUpdateWorker.WorkerRoutine = (void (__fastcall *)(void *))EmpRuleUpdateWorkerThread;
    EmpParseLock = 0LL;
    EmpDatabaseLock = 0LL;
    EmpEvaluationQueueLock = 0LL;
    EmpPagingLock = 0LL;
    EmpEntryListHead = 0LL;
    EmpCallbackListHead = 0LL;
    EmpRuleListHead = 0LL;
    EmpTargetRuleListHead = 0LL;
    EmpRuleUpdateQueue = 0LL;
    EmpWorkerBusy = 0;
    EmpRuleUpdateWorker.Parameter = 0LL;
    EmpRuleUpdateWorker.List.Flink = 0LL;
    v4 = *(_QWORD *)(a2 + 240);
    EmpStringTable = 0LL;
    EmpNumberOfEntryTypes = 0;
    EmpNumberOfCallbacks = 0;
    v5 = *(_QWORD *)(v4 + 24);
    EmpNumberOfRules = 0;
    EmpNumberOfStrings = 0;
    EmpNumberOfTargetRules = 0;
    if ( !v5 || (v6 = *(_DWORD *)(v4 + 32)) == 0 || (v7 = EmpParseInfDatabase(v5, v6), v7 >= 0) )
    {
      EmpCacheBiosDate();
      EmpProviderRegister(0LL, 0LL, 0, (__int64)&off_1400064B0, 6u, &v20);
      EmpProviderRegister(0LL, 0LL, 0, (__int64)&off_140006540, 1u, &v20);
      v7 = EmpProviderRegister(0LL, 0LL, 0, (__int64)&BuiltinCallbackReg, 6u, &EmBuiltinProviderHandle);
      if ( v7 >= 0 )
        goto LABEL_6;
    }
  }
LABEL_7:
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x74694D45u);
  if ( v3 )
    ExFreePoolWithTag((PVOID)v3, 0x74694D45u);
  return (unsigned int)v7;
}
