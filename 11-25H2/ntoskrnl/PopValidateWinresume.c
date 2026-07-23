/*
 * XREFs of PopValidateWinresume @ 0x140746DC4
 * Callers:
 *     PopInitializeHibernateGlobals @ 0x14074684C (PopInitializeHibernateGlobals.c)
 *     PopWnfHibernateRevocationCheckCallback @ 0x140747210 (PopWnfHibernateRevocationCheckCallback.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     MinCrypK_ParseRevocationList @ 0x140693E78 (MinCrypK_ParseRevocationList.c)
 *     MinCryptK_GetBootAppSvnFromRevocationList @ 0x140693F94 (MinCryptK_GetBootAppSvnFromRevocationList.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     PopLoadFileInMemory @ 0x14073D3E4 (PopLoadFileInMemory.c)
 *     PopDiagTraceHibernateRevoked @ 0x14074A694 (PopDiagTraceHibernateRevoked.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140753AC0 (PopBcdGetApplicationPathFromResumeObject.c)
 *     I_MincryptFreeChainInfo @ 0x140817AE8 (I_MincryptFreeChainInfo.c)
 *     LdrResSearchResource @ 0x14083CDF0 (LdrResSearchResource.c)
 *     BcdOpenStore @ 0x140A24A98 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140A24B8C (BcdCloseStore.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopValidateWinresume(_BYTE *a1)
{
  HANDLE v2; // r14
  unsigned int v3; // esi
  void *v4; // r15
  void *v5; // r12
  UNICODE_STRING *Pool2; // rax
  UNICODE_STRING *v7; // r13
  int SystemInformation; // ebx
  int v9; // eax
  __int64 v10; // r8
  UNICODE_STRING *v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  int BootAppSvnFromRevocationList; // eax
  __int64 v16; // [rsp+40h] [rbp-99h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-91h]
  unsigned int *v18; // [rsp+50h] [rbp-89h] BYREF
  void *v19; // [rsp+58h] [rbp-81h] BYREF
  HANDLE BcdStoreHandle; // [rsp+60h] [rbp-79h] BYREF
  void *v21; // [rsp+68h] [rbp-71h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-59h] BYREF
  __int64 v24; // [rsp+90h] [rbp-49h]
  __int64 v25; // [rsp+98h] [rbp-41h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-39h] BYREF
  UNICODE_STRING v27; // [rsp+A8h] [rbp-31h] BYREF
  __int128 v28; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-11h]
  __int128 v30; // [rsp+D8h] [rbp-1h]
  ULONG v31; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v32; // [rsp+148h] [rbp+6Fh] BYREF
  int v33; // [rsp+150h] [rbp+77h] BYREF
  unsigned int v34; // [rsp+158h] [rbp+7Fh]

  *a1 = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  v25 = 0LL;
  v31 = 0;
  DestinationString = 0LL;
  v26 = 0LL;
  v2 = 0LL;
  v33 = 0;
  v3 = 0;
  *(_QWORD *)&v27.Length = 0LL;
  v4 = 0LL;
  BcdStoreHandle = 0LL;
  v5 = 0LL;
  v17 = 0;
  Destination.Buffer = 0LL;
  v32 = 0;
  v19 = 0LL;
  v34 = 0;
  v16 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v27.Buffer = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
  v7 = Pool2;
  if ( !Pool2 )
    goto LABEL_2;
  SystemInformation = ZwQuerySystemInformation(SystemSystemPartitionInformation, Pool2, 0x218u, 0LL);
  if ( SystemInformation < 0 )
    goto LABEL_27;
  RtlInitUnicodeString(&DestinationString, L"\\EFI\\Microsoft\\Boot\\boot.stl");
  Destination.MaximumLength = v7->Length + DestinationString.Length;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  if ( !Destination.Buffer )
  {
LABEL_2:
    SystemInformation = -1073741670;
    goto LABEL_27;
  }
  RtlAppendUnicodeStringToString(&Destination, v7);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  v9 = PopLoadFileInMemory(&Destination, &v21, (ULONG *)&v33);
  v5 = v21;
  SystemInformation = v9;
  if ( v9 < 0 )
    goto LABEL_27;
  SystemInformation = MinCrypK_ParseRevocationList((int)v21, v33, v10, (__int64)&v26, (__int64)&v28, (__int64)&v25);
  if ( SystemInformation < 0 )
    goto LABEL_27;
  v12 = BcdOpenStore(v11, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle);
  v2 = BcdStoreHandle;
  SystemInformation = v12;
  if ( v12 < 0 )
    goto LABEL_27;
  SystemInformation = PopBcdGetApplicationPathFromResumeObject(BcdStoreHandle, &v27);
  if ( SystemInformation < 0 )
    goto LABEL_27;
  SystemInformation = PopLoadFileInMemory(&v27, &v19, &v31);
  if ( SystemInformation < 0 )
  {
    v4 = v19;
    goto LABEL_27;
  }
  DestinationString.Buffer = L"OS_RELEASE_VERSION";
  v16 = v31;
  v24 = 0LL;
  v4 = v19;
  *(_QWORD *)&DestinationString.Length = 10LL;
  SystemInformation = LdrResSearchResource(
                        (_DWORD)v19,
                        (unsigned int)&DestinationString,
                        3,
                        4608,
                        (__int64)&v18,
                        (__int64)&v16,
                        0LL,
                        0LL);
  if ( SystemInformation >= 0 )
  {
    if ( v18 && v16 == 4 )
    {
      v34 = *v18;
      if ( v34 != 167772176 )
      {
        SystemInformation = -1073700860;
        goto LABEL_11;
      }
      if ( (__int64)BootAppSvnInfo < v25 )
      {
        BootAppSvnFromRevocationList = MinCryptK_GetBootAppSvnFromRevocationList(v26, v13, 167772176, &v32);
        v3 = v32;
        SystemInformation = BootAppSvnFromRevocationList;
        if ( BootAppSvnFromRevocationList < 0 )
          goto LABEL_27;
      }
      else
      {
        v3 = DWORD2(BootAppSvnInfo);
      }
      *(_QWORD *)&DestinationString.Length = 10LL;
      DestinationString.Buffer = L"SECURITY_VERSION_NUMBER";
      v16 = v31;
      v24 = 0LL;
      SystemInformation = LdrResSearchResource(
                            (_DWORD)v4,
                            (unsigned int)&DestinationString,
                            3,
                            4608,
                            (__int64)&v18,
                            (__int64)&v16,
                            0LL,
                            0LL);
      if ( SystemInformation < 0 )
        goto LABEL_11;
      if ( !v18 || v16 != 4 )
      {
        *a1 = 1;
        SystemInformation = -1073741687;
        goto LABEL_28;
      }
      v17 = *v18;
      if ( v17 < v3 )
      {
        *a1 = 1;
        SystemInformation = -1073741790;
        goto LABEL_28;
      }
    }
    else
    {
      SystemInformation = -1073741687;
      *a1 = 1;
    }
LABEL_27:
    if ( !*a1 )
      goto LABEL_29;
    goto LABEL_28;
  }
LABEL_11:
  *a1 = 1;
LABEL_28:
  PopDiagTraceHibernateRevoked(v3, v17, v34);
LABEL_29:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x206D654Du);
  if ( v27.Buffer )
    ExFreePoolWithTag(v27.Buffer, 0);
  if ( v2 )
    BcdCloseStore(v2);
  if ( (_QWORD)v29 && (_DWORD)v28 )
  {
    I_MincryptFreeChainInfo();
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0x206D654Du);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x72626968u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72626968u);
  return (unsigned int)SystemInformation;
}
