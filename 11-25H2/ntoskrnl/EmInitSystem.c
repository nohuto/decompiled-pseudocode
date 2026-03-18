/*
 * XREFs of EmInitSystem @ 0x140C4F21C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14069B200 (ZwReadFile.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14069B360 (ZwQueryInformationFile.c)
 *     ZwEnumerateValueKey @ 0x14069B3A0 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x14069B400 (ZwQueryKey.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     ZwCreateFile @ 0x14069BBE0 (ZwCreateFile.c)
 *     RtlAppendStringToString @ 0x140A7D0B0 (RtlAppendStringToString.c)
 *     EmpProviderRegister @ 0x140AAEEF0 (EmpProviderRegister.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     EmpParseInfDatabase @ 0x140C05724 (EmpParseInfDatabase.c)
 *     EmpCacheBiosDate @ 0x140C4E024 (EmpCacheBiosDate.c)
 */

__int64 __fastcall EmInitSystem(int a1, __int64 a2)
{
  _DWORD *Pool2; // rsi
  ULONG_PTR v3; // r14
  __int64 v4; // rax
  SIZE_T v5; // rcx
  int v6; // ebx
  NTSTATUS v8; // eax
  ULONG v9; // r12d
  ULONG i; // r13d
  NTSTATUS v11; // eax
  ULONG v12; // ebx
  void *v13; // rax
  __int64 v14; // rdi
  void *v15; // rcx
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  STRING Destination; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-30h] BYREF
  __int128 FileInformation; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-10h]
  char v26; // [rsp+100h] [rbp+0h] BYREF

  v25 = 0LL;
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
      v6 = 0;
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
    v6 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
    if ( v6 >= 0 )
    {
      v8 = ZwQueryKey(Handle, KeyFullInformation, 0LL, 0, &ResultLength);
      v6 = v8;
      if ( v8 == -2147483643 || v8 == -1073741789 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, ResultLength, 0x74694D45uLL);
        if ( Pool2 )
        {
          v6 = ZwQueryKey(Handle, KeyFullInformation, Pool2, ResultLength, &ResultLength);
          if ( v6 < 0 )
            goto LABEL_7;
          v9 = Pool2[10] + 16;
          v3 = ExAllocatePool2(0x100uLL, v9, 0x74694D45uLL);
          if ( v3 )
          {
            for ( i = 0; ; ++i )
            {
              v11 = ZwEnumerateValueKey(Handle, i, KeyValuePartialInformation, (PVOID)v3, v9, &ResultLength);
              v6 = v11;
              if ( v11 == -2147483622 )
                break;
              if ( v11 < 0 )
                goto LABEL_7;
              *(_DWORD *)&Destination.Length = 0x1000000;
              Destination.Buffer = &v26;
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
              v6 = ZwCreateFile(
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
              if ( v6 < 0 )
                goto LABEL_7;
              v6 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
              if ( v6 < 0 )
              {
                ZwClose(FileHandle);
                goto LABEL_7;
              }
              if ( HIDWORD(FileInformation) )
              {
                ZwClose(FileHandle);
                goto LABEL_19;
              }
              v12 = DWORD2(FileInformation);
              LODWORD(v19) = DWORD2(FileInformation);
              v13 = (void *)ExAllocatePool2(0x100uLL, DWORD2(FileInformation), 0x74694D45uLL);
              v14 = (__int64)v13;
              if ( !v13 )
              {
                ZwClose(FileHandle);
                goto LABEL_21;
              }
              v6 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v13, v12, 0LL, 0LL);
              ZwClose(FileHandle);
              v15 = (void *)v14;
              if ( v6 < 0 )
                goto LABEL_35;
              v6 = EmpParseInfDatabase(v14, v19);
              if ( v6 < 0 )
              {
                v15 = (void *)v14;
LABEL_35:
                ExFreePoolWithTag(v15, 0x74694D45u);
                goto LABEL_7;
              }
            }
            goto LABEL_6;
          }
        }
LABEL_21:
        v6 = -1073741670;
        goto LABEL_7;
      }
      if ( !v8 )
LABEL_19:
        v6 = -1073741823;
    }
  }
  else
  {
    dword_140F8DC98 |= 0x80000000;
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
    if ( !v5 || (a2 = *(unsigned int *)(v4 + 32), !(_DWORD)a2) || (v6 = EmpParseInfDatabase(v5, a2), v6 >= 0) )
    {
      EmpCacheBiosDate(v5, a2);
      EmpProviderRegister(0LL, 0LL, 0, (__int64)&off_140006490, 6u, &v19);
      EmpProviderRegister(0LL, 0LL, 0, (__int64)&off_140006520, 1u, &v19);
      v6 = EmpProviderRegister(0LL, 0LL, 0, (__int64)&BuiltinCallbackReg, 6u, EmBuiltinProviderHandle);
      if ( v6 >= 0 )
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
  return (unsigned int)v6;
}
