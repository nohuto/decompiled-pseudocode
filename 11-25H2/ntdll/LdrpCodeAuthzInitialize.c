/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x1800142A0
 * Callers:
 *     LdrpInitializeKernel32Functions @ 0x1800CB874 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrLoadDll @ 0x180014E40 (LdrLoadDll.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     LdrUnloadDll @ 0x1800475F0 (LdrUnloadDll.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18005F470 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     ZwQueryKey @ 0x1801634E0 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 LdrpCodeAuthzInitialize()
{
  unsigned int v0; // ebx
  int v1; // esi
  PVOID v2; // rdi
  __int64 v3; // rdx
  PVOID v4; // r8
  int Length; // edi
  unsigned int v6; // r14d
  char *v7; // r15
  size_t v8; // rax
  unsigned int v9; // r14d
  char *v10; // r15
  NTSTATUS v11; // edi
  NTSTATUS v13; // edi
  NTSTATUS v14; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-C0h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp-B0h] BYREF
  PVOID DllHandle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID ProcedureAddress; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+68h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  __int128 KeyInformation; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v24; // [rsp+B8h] [rbp-48h]
  __int128 v25; // [rsp+C8h] [rbp-38h]
  _BYTE KeyValueInformation[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v27; // [rsp+E4h] [rbp-1Ch]
  int v28; // [rsp+E8h] [rbp-18h]
  unsigned int v29; // [rsp+ECh] [rbp-14h]
  PVOID *Callback; // [rsp+168h] [rbp+68h]

  v0 = 0;
  v1 = 0;
  DllHandle = 0LL;
  ProcedureAddress = 0LL;
  OutHeaders = 0LL;
  if ( !LdrpIsSecureProcess )
  {
    RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
    if ( (unsigned __int16)(OutHeaders->OptionalHeader.Subsystem - 2) <= 1u )
    {
      KeyHandle = 0LL;
      ResultLength = 0;
      if ( NtOpenKey(&KeyHandle, 3u, (POBJECT_ATTRIBUTES)&::ObjectAttributes) >= 0 )
      {
        v14 = NtQueryValueKey(
                KeyHandle,
                (PUNICODE_STRING)&stru_1801750A0,
                KeyValuePartialInformation,
                KeyValueInformation,
                0x50u,
                &ResultLength);
        NtClose(KeyHandle);
        if ( v14 >= 0 && v29 && v27 == 4 && v28 == 4 )
          return v0;
      }
      OutHeaders = 0LL;
      ResultLength = 0;
      KeyHandle = 0LL;
      KeyInformation = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      if ( NtOpenKey((PHANDLE)&OutHeaders, 0x20019u, &stru_1801CE7C8) >= 0 )
      {
        v13 = ZwQueryKey(OutHeaders, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
        NtClose(OutHeaders);
        if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
        {
          if ( DWORD1(v24) )
            v1 = 2;
        }
      }
      if ( NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_180175030) >= 0 )
      {
        if ( NtQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x50u,
               &ResultLength) >= 0
          && v27 == 4
          && v28 == 4
          && v29 > 1 )
        {
          v1 = 1;
        }
        NtClose(KeyHandle);
      }
      if ( v1 == 1
        || (CurrentUserKeyPath = 0LL,
            *(_OWORD *)BaseAddress = 0LL,
            memset(&ObjectAttributes, 0, 44),
            RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) < 0) )
      {
LABEL_7:
        if ( v1 )
        {
          if ( v1 == 2 )
          {
            LdrpSaferIsDllAllowedRoutine = __ROR8__(
                                             (unsigned __int64)LdrpCodeAuthzCheckDllAllowedSrpV2 ^ MEMORY[0x7FFE0330],
                                             MEMORY[0x7FFE0330] & 0x3F);
            LdrpAdvapi32DllHandle = 0x180000000uLL;
          }
          else if ( LdrLoadDll(0LL, 0LL, (PUNICODE_STRING)&DllName, &DllHandle) < 0 )
          {
            return (unsigned int)-1073741515;
          }
          else
          {
            v2 = DllHandle;
            if ( LdrGetProcedureAddressForCaller(
                   DllHandle,
                   (PANSI_STRING)&ProcedureName,
                   0,
                   &ProcedureAddress,
                   0,
                   Callback) >= 0
              && ProcedureAddress )
            {
              LdrpAdvapi32DllHandle = (__int64)v2;
              LdrpSaferIsDllAllowedRoutine = __ROR8__(
                                               (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                               MEMORY[0x7FFE0330] & 0x3F);
            }
            else
            {
              LdrUnloadDll(v2);
              return (unsigned int)-1073741511;
            }
          }
        }
        return v0;
      }
      Length = CurrentUserKeyPath.Length;
      if ( (unsigned int)CurrentUserKeyPath.Length + 120 > 0xFFFE
        || (WORD1(BaseAddress[0]) = CurrentUserKeyPath.Length + 120,
            BaseAddress[1] = RtlAllocateHeap(
                               NtCurrentPeb()->ProcessHeap,
                               NtdllBaseTag + 1572864,
                               (unsigned __int16)(CurrentUserKeyPath.Length + 120)),
            (v4 = BaseAddress[1]) == 0LL) )
      {
LABEL_31:
        if ( CurrentUserKeyPath.Buffer )
          RtlpSysVolFree(CurrentUserKeyPath.Buffer, v3, v4);
        goto LABEL_7;
      }
      v6 = CurrentUserKeyPath.Length;
      if ( CurrentUserKeyPath.Length )
      {
        if ( Length + (unsigned int)LOWORD(BaseAddress[0]) > WORD1(BaseAddress[0]) )
        {
LABEL_30:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[1]);
          goto LABEL_31;
        }
        v7 = (char *)BaseAddress[1] + 2 * ((unsigned __int64)LOWORD(BaseAddress[0]) >> 1);
        memmove(v7, CurrentUserKeyPath.Buffer, CurrentUserKeyPath.Length);
        LOWORD(BaseAddress[0]) += v6;
        if ( (unsigned int)LOWORD(BaseAddress[0]) + 1 < WORD1(BaseAddress[0]) )
          *(_WORD *)&v7[2 * ((unsigned __int64)v6 >> 1)] = 0;
      }
      v8 = wcslen(L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers");
      if ( v8 <= 0x7FFE )
      {
        v9 = (unsigned __int16)(2 * v8);
        if ( v9 + LOWORD(BaseAddress[0]) <= WORD1(BaseAddress[0]) )
        {
          v10 = (char *)BaseAddress[1] + 2 * ((unsigned __int64)LOWORD(BaseAddress[0]) >> 1);
          memmove(v10, L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers", (unsigned __int16)(2 * v8));
          LOWORD(BaseAddress[0]) += v9;
          if ( (unsigned int)LOWORD(BaseAddress[0]) + 1 < WORD1(BaseAddress[0]) )
            *(_WORD *)&v10[2 * ((unsigned __int64)v9 >> 1)] = 0;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
          {
            v11 = NtQueryValueKey(
                    KeyHandle,
                    (PUNICODE_STRING)&ValueName,
                    KeyValuePartialInformation,
                    KeyValueInformation,
                    0x50u,
                    &ResultLength);
            NtClose(KeyHandle);
            if ( v11 >= 0 && v27 == 4 && v28 == 4 && v29 > 1 )
              v1 = 1;
          }
        }
      }
      goto LABEL_30;
    }
  }
  return 0LL;
}
