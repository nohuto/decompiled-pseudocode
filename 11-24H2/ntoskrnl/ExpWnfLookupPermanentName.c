/*
 * XREFs of ExpWnfLookupPermanentName @ 0x14085ACA8
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407BF7A8 (ExpNtDeleteWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x1408AAC70 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     ExpNtUpdateWnfStateData @ 0x1408AC580 (ExpNtUpdateWnfStateData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1408AE824 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A1946C (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateNameInformation @ 0x140AE3050 (NtQueryWnfStateNameInformation.c)
 * Callees:
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x140836D2C (ExpWnfSpecializeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14085A2E0 (RtlLengthSecurityDescriptor.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14085AE94 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x14085AF60 (ExpWnfComposeValueName.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14085B000 (RtlValidRelativeSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfLookupPermanentName(unsigned __int64 a1, PSECURITY_DESCRIPTOR **a2)
{
  PSECURITY_DESCRIPTOR *v4; // rdi
  unsigned int v5; // ebx
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // r14
  char v8; // r15
  int NameStoreRegistryRoot; // ebx
  char *i; // rsi
  NTSTATUS v11; // eax
  char *v12; // rbx
  ULONG v13; // esi
  ULONG v14; // eax
  unsigned int v15; // esi
  char *v16; // rbx
  _DWORD *v17; // rcx
  __int64 Pool2; // rax
  ULONG Length; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  char v23; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&ValueName.Length = 2228224LL;
  KeyHandle = 0LL;
  Length = 0;
  v4 = 0LL;
  ValueName.Buffer = (wchar_t *)&v23;
  ExpWnfComposeValueName(a1, &ValueName);
  v5 = (a1 >> 4) & 3;
  if ( v5 )
  {
    v7 = 0LL;
    v8 = 0;
  }
  else
  {
    v6 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
    v7 = PsAttachSiloToCurrentThread(v6);
    v8 = 1;
  }
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(v5, &KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    goto LABEL_13;
  for ( i = 0LL; ; i = (char *)(Pool2 + 24) )
  {
    v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, i, Length, &Length);
    NameStoreRegistryRoot = v11;
    if ( v11 != -1073741789 )
      break;
    if ( v4 )
      ExFreePoolWithTag(v4, 0x20666E57u);
    Pool2 = ExAllocatePool2(0x100uLL);
    v4 = (PSECURITY_DESCRIPTOR *)Pool2;
    if ( !Pool2 )
    {
      NameStoreRegistryRoot = -1073741670;
      goto LABEL_13;
    }
  }
  if ( v11 >= 0 )
  {
    if ( *((_DWORD *)i + 1) == 3 )
    {
      v12 = i + 12;
      *(_OWORD *)v4 = 0LL;
      v4[2] = 0LL;
      v13 = *((_DWORD *)i + 2);
      v4[2] = v12;
      if ( RtlValidRelativeSecurityDescriptor(v12, v13, 0) )
      {
        ExpWnfSpecializeSecurityDescriptor(v4[2]);
        v14 = RtlLengthSecurityDescriptor(v4[2]);
        v15 = v13 - v14;
        v16 = &v12[v14];
        if ( v15 >= 4 )
        {
          v17 = v16 + 4;
          *(_DWORD *)v4 = *(_DWORD *)v16;
          NameStoreRegistryRoot = 0;
          if ( v15 - 4 < 0x10 )
            v17 = 0LL;
          v4[1] = v17;
          *a2 = v4;
          goto LABEL_13;
        }
      }
    }
    NameStoreRegistryRoot = -1073741823;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x20666E57u);
LABEL_13:
  if ( v8 )
    PsDetachSiloFromCurrentThread(v7);
  return (unsigned int)NameStoreRegistryRoot;
}
