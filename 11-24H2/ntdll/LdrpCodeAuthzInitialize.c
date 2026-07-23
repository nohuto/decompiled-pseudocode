/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x18006E240
 * Callers:
 *     LdrpInitializeKernel32Functions @ 0x1800C6FD8 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180018C40 (RtlFormatCurrentUserKeyPath.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     LdrUnloadDll @ 0x1800480B0 (LdrUnloadDll.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     LdrLoadDll @ 0x18006EDE0 (LdrLoadDll.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     ZwQueryKey @ 0x180160310 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 LdrpCodeAuthzInitialize()
{
  unsigned int v0; // ebx
  int v1; // esi
  PVOID v2; // rdi
  int Length; // edi
  unsigned int v4; // r14d
  char *v5; // r15
  size_t v6; // rax
  unsigned int v7; // r14d
  char *v8; // r15
  NTSTATUS v9; // edi
  NTSTATUS v11; // edi
  NTSTATUS v12; // edi
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-C0h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp-B0h] BYREF
  PVOID DllHandle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID ProcedureAddress; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+68h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  __int128 KeyInformation; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v22; // [rsp+B8h] [rbp-48h]
  __int128 v23; // [rsp+C8h] [rbp-38h]
  _BYTE KeyValueInformation[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v25; // [rsp+E4h] [rbp-1Ch]
  int v26; // [rsp+E8h] [rbp-18h]
  unsigned int v27; // [rsp+ECh] [rbp-14h]
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
      if ( NtOpenKey(&KeyHandle, 3u, (POBJECT_ATTRIBUTES)&stru_1801726C0) >= 0 )
      {
        v12 = NtQueryValueKey(
                KeyHandle,
                (PUNICODE_STRING)&stru_180172760,
                KeyValuePartialInformation,
                KeyValueInformation,
                0x50u,
                &ResultLength);
        NtClose(KeyHandle);
        if ( v12 >= 0 && v27 && v25 == 4 && v26 == 4 )
          return v0;
      }
      OutHeaders = 0LL;
      ResultLength = 0;
      KeyHandle = 0LL;
      KeyInformation = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      if ( NtOpenKey((PHANDLE)&OutHeaders, 0x20019u, &stru_1801CB7C8) >= 0 )
      {
        v11 = ZwQueryKey(OutHeaders, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
        NtClose(OutHeaders);
        if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
        {
          if ( DWORD1(v22) )
            v1 = 2;
        }
      }
      if ( NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_1801726F0) >= 0 )
      {
        if ( NtQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_180172750,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x50u,
               &ResultLength) >= 0
          && v25 == 4
          && v26 == 4
          && v27 > 1 )
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
          else if ( LdrLoadDll(0LL, 0LL, (PUNICODE_STRING)&stru_180172720, &DllHandle) < 0 )
          {
            return (unsigned int)-1073741515;
          }
          else
          {
            v2 = DllHandle;
            if ( LdrGetProcedureAddressForCaller(
                   DllHandle,
                   (PANSI_STRING)&stru_180172740,
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
            (BaseAddress[1] = RtlAllocateHeap(
                                NtCurrentPeb()->ProcessHeap,
                                NtdllBaseTag + 1572864,
                                (unsigned __int16)(CurrentUserKeyPath.Length + 120))) == 0LL) )
      {
LABEL_31:
        if ( CurrentUserKeyPath.Buffer )
          RtlpSysVolFree(CurrentUserKeyPath.Buffer);
        goto LABEL_7;
      }
      v4 = CurrentUserKeyPath.Length;
      if ( CurrentUserKeyPath.Length )
      {
        if ( Length + (unsigned int)LOWORD(BaseAddress[0]) > WORD1(BaseAddress[0]) )
        {
LABEL_30:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[1]);
          goto LABEL_31;
        }
        v5 = (char *)BaseAddress[1] + 2 * ((unsigned __int64)LOWORD(BaseAddress[0]) >> 1);
        memmove(v5, CurrentUserKeyPath.Buffer, CurrentUserKeyPath.Length);
        LOWORD(BaseAddress[0]) += v4;
        if ( (unsigned int)LOWORD(BaseAddress[0]) + 1 < WORD1(BaseAddress[0]) )
          *(_WORD *)&v5[2 * ((unsigned __int64)v4 >> 1)] = 0;
      }
      v6 = wcslen(L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers");
      if ( v6 <= 0x7FFE )
      {
        v7 = (unsigned __int16)(2 * v6);
        if ( v7 + LOWORD(BaseAddress[0]) <= WORD1(BaseAddress[0]) )
        {
          v8 = (char *)BaseAddress[1] + 2 * ((unsigned __int64)LOWORD(BaseAddress[0]) >> 1);
          memmove(v8, L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers", (unsigned __int16)(2 * v6));
          LOWORD(BaseAddress[0]) += v7;
          if ( (unsigned int)LOWORD(BaseAddress[0]) + 1 < WORD1(BaseAddress[0]) )
            *(_WORD *)&v8[2 * ((unsigned __int64)v7 >> 1)] = 0;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
          {
            v9 = NtQueryValueKey(
                   KeyHandle,
                   (PUNICODE_STRING)&stru_180172750,
                   KeyValuePartialInformation,
                   KeyValueInformation,
                   0x50u,
                   &ResultLength);
            NtClose(KeyHandle);
            if ( v9 >= 0 && v25 == 4 && v26 == 4 && v27 > 1 )
              v1 = 1;
          }
        }
      }
      goto LABEL_30;
    }
  }
  return 0LL;
}
