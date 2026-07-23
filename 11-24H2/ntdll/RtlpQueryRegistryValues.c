/*
 * XREFs of RtlpQueryRegistryValues @ 0x1800829E0
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x180082114 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCheckPortableOperatingSystem @ 0x180082490 (RtlCheckPortableOperatingSystem.c)
 *     RtlQueryRegistryValuesEx @ 0x180082720 (RtlQueryRegistryValuesEx.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1800838E4 (RtlpFindRegTziForCurrentYear.c)
 *     RtlQueryRegistryValues @ 0x180083C10 (RtlQueryRegistryValues.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x180145280 (RtlpEtcGetDwordFromRegistry.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpGetRegistryHandle @ 0x180083108 (RtlpGetRegistryHandle.c)
 *     RtlpCallQueryRegistryRoutine @ 0x1800832B4 (RtlpCallQueryRegistryRoutine.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1801602B0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180160410 (ZwFreeVirtualMemory.c)
 *     ZwDeleteValueKey @ 0x180161C20 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpQueryRegistryValues(__int64 a1, const wchar_t *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r15
  int v9; // r13d
  __int64 result; // rax
  size_t v11; // rax
  NTSTATUS v12; // edi
  char *v13; // rsi
  HANDLE v14; // rcx
  HANDLE v15; // r10
  ULONG v16; // r12d
  int v17; // edx
  int v18; // eax
  const wchar_t *v19; // rcx
  int v20; // r15d
  ULONG i; // r14d
  NTSTATUS v22; // eax
  int v23; // eax
  int v24; // r14d
  size_t v25; // rax
  int v26; // eax
  NTSTATUS v27; // eax
  const wchar_t *v28; // rax
  const wchar_t *v29; // rcx
  size_t v30; // rax
  int v31; // eax
  int v32; // [rsp+30h] [rbp-A9h]
  ULONG ResultLength; // [rsp+40h] [rbp-99h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-91h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-81h] BYREF
  __int64 v37; // [rsp+60h] [rbp-79h] BYREF
  const wchar_t *v38; // [rsp+68h] [rbp-71h]
  _UNICODE_STRING ValueName; // [rsp+70h] [rbp-69h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-59h] BYREF
  PVOID v41; // [rsp+88h] [rbp-51h] BYREF
  PVOID v42; // [rsp+90h] [rbp-49h] BYREF
  PVOID v43; // [rsp+98h] [rbp-41h] BYREF
  ULONG_PTR v44; // [rsp+A0h] [rbp-39h] BYREF
  PVOID v45; // [rsp+A8h] [rbp-31h] BYREF
  ULONG_PTR v46; // [rsp+B0h] [rbp-29h] BYREF
  PVOID v47; // [rsp+B8h] [rbp-21h] BYREF
  ULONG_PTR v48; // [rsp+C0h] [rbp-19h] BYREF
  PVOID v49; // [rsp+C8h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-9h] BYREF

  v6 = a4;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  ResultLength = 0;
  v9 = a1;
  ValueName = 0LL;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &KeyHandle);
  if ( (int)result < 0 )
    return result;
  v37 = 0LL;
  if ( (v9 & 0x40000000) != 0 )
  {
    v38 = 0LL;
  }
  else
  {
    v38 = a2;
    if ( a2 )
    {
      v11 = 2 * wcslen(a2);
      if ( v11 >= 0xFFFE )
        LOWORD(v11) = -4;
      LOWORD(v37) = v11;
      WORD1(v37) = v11 + 2;
    }
  }
  RegionSize = 4096LL;
  BaseAddress = 0LL;
  v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( v12 >= 0 )
  {
    v13 = (char *)BaseAddress;
  }
  else
  {
    v13 = 0LL;
    BaseAddress = 0LL;
  }
  if ( !v13 )
  {
    if ( (v9 & 0x40000000) == 0 )
      NtClose(KeyHandle);
    return (unsigned int)v12;
  }
  *((_DWORD *)v13 + 2) = 0;
  v14 = KeyHandle;
  v15 = KeyHandle;
  v16 = RegionSize - 2;
  for ( Handle = KeyHandle; ; v15 = Handle )
  {
    if ( !*(_QWORD *)a3 && (*(_BYTE *)(a3 + 8) & 0x21) == 0 )
      goto LABEL_40;
    v17 = *(_DWORD *)(a3 + 8);
    if ( (v17 & 0x20) != 0 && (!*(_QWORD *)(a3 + 16) || (v17 & 1) != 0 || *(_QWORD *)a3) )
    {
LABEL_70:
      v12 = -1073741811;
      goto LABEL_40;
    }
    if ( (v17 & 3) != 0 && v15 != v14 )
    {
      NtClose(v15);
      v14 = KeyHandle;
      v15 = KeyHandle;
      Handle = KeyHandle;
    }
    v18 = *(_DWORD *)(a3 + 8);
    if ( (v18 & 1) == 0 )
      break;
    v28 = *(const wchar_t **)(a3 + 16);
    if ( !v28 )
      goto LABEL_70;
    v29 = *(const wchar_t **)(a3 + 16);
    v37 = 0LL;
    v38 = v28;
    v30 = 2 * wcslen(v29);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    if ( v30 >= 0xFFFE )
      LOWORD(v30) = -4;
    LOWORD(v37) = v30;
    WORD1(v37) = v30 + 2;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v37;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = NtOpenKey(&Handle, 0x2000000u, &ObjectAttributes);
    if ( v12 < 0 )
      goto LABEL_63;
    if ( *(_QWORD *)a3 )
    {
      v15 = Handle;
      goto LABEL_18;
    }
LABEL_64:
    v14 = KeyHandle;
    a3 += 56LL;
  }
  v19 = *(const wchar_t **)(a3 + 16);
  if ( v19 )
  {
    v24 = 0;
    ValueName.Buffer = *(wchar_t **)(a3 + 16);
    *(_QWORD *)&ValueName.Length = 0LL;
    v25 = 2 * wcslen(v19);
    if ( v25 >= 0xFFFE )
      LOWORD(v25) = -4;
    ValueName.Length = v25;
    ValueName.MaximumLength = v25 + 2;
    while ( 1 )
    {
      v26 = v24++;
      if ( v26 > 4 )
      {
        DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1277);
        goto LABEL_39;
      }
      v27 = NtQueryValueKey(Handle, &ValueName, KeyValueFullInformation, v13, v16, &ResultLength);
      v12 = v27;
      if ( v27 == -2147483643 )
        goto LABEL_32;
      if ( v27 < 0 )
        break;
      if ( *((_DWORD *)v13 + 1) == 7 )
      {
        *(_WORD *)&v13[ResultLength] = 0;
        *((_DWORD *)v13 + 3) += 2;
      }
      LOBYTE(v32) = a6;
      ResultLength = v16;
      v31 = RtlpCallQueryRegistryRoutine(Handle, a3, v13, &ResultLength, v6, a5, v32);
      v12 = v31;
      if ( v31 != -1073741789 )
      {
        if ( v31 < 0 )
          goto LABEL_63;
        if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
          ZwDeleteValueKey(Handle, &ValueName);
        goto LABEL_64;
      }
      v47 = v13;
      RegionSize = ResultLength + 10LL;
      v46 = RegionSize;
      v41 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v47, &v46, 0x8000u);
      v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v41, 0LL, &RegionSize, 0x1000u, 4u);
      if ( v12 >= 0 )
      {
        v13 = (char *)v41;
      }
      else
      {
        v13 = 0LL;
        v41 = 0LL;
      }
LABEL_36:
      if ( !v13 )
        goto LABEL_39;
      *((_DWORD *)v13 + 2) = 0;
      v16 = RegionSize - 2;
    }
    if ( v27 == -1073741772 )
    {
      *((_DWORD *)v13 + 1) = 0;
      *((_DWORD *)v13 + 3) = 0;
      LOBYTE(v32) = a6;
      ResultLength = v16;
      v27 = RtlpCallQueryRegistryRoutine(Handle, a3, v13, &ResultLength, v6, a5, v32);
      v12 = v27;
    }
    if ( v27 != -1073741789 )
      goto LABEL_63;
LABEL_32:
    v49 = v13;
    RegionSize = ResultLength + 10LL;
    v48 = RegionSize;
    v42 = 0LL;
    if ( v13 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v49, &v48, 0x8000u);
    v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v42, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v12 >= 0 )
    {
      v13 = (char *)v42;
    }
    else
    {
      v13 = 0LL;
      v42 = 0LL;
    }
    goto LABEL_36;
  }
  if ( (v18 & 8) != 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
            0LL,
            0LL,
            0LL,
            0LL,
            v6,
            *(_QWORD *)(a3 + 24));
    goto LABEL_63;
  }
LABEL_18:
  v20 = 0;
  for ( i = 0; ; ++i )
  {
    v22 = ZwEnumerateValueKey(v15, i, KeyValueFullInformation, v13, v16, &ResultLength);
    v12 = v22;
    if ( v22 == -2147483643 )
      goto LABEL_20;
    if ( v22 == -2147483622 )
      break;
    if ( v22 >= 0 )
    {
      LOBYTE(v32) = a6;
      ResultLength = v16;
      v22 = RtlpCallQueryRegistryRoutine(Handle, a3, v13, &ResultLength, a4, a5, v32);
      v12 = v22;
    }
    if ( v22 != -1073741789 )
    {
      if ( v22 < 0 )
        goto LABEL_62;
      v20 = 0;
      if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
      {
        ValueName.Buffer = (wchar_t *)(v13 + 20);
        ValueName.Length = *((_WORD *)v13 + 8);
        ValueName.MaximumLength = *((_WORD *)v13 + 8);
        if ( ZwDeleteValueKey(Handle, &ValueName) >= 0 )
          --i;
      }
      goto LABEL_75;
    }
LABEL_20:
    v45 = v13;
    RegionSize = ResultLength + 10LL;
    v44 = RegionSize;
    v43 = 0LL;
    if ( v13 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v45, &v44, 0x8000u);
    v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v43, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v12 >= 0 )
    {
      v13 = (char *)v43;
    }
    else
    {
      v13 = 0LL;
      v43 = 0LL;
    }
    if ( !v13 )
      goto LABEL_62;
    *((_DWORD *)v13 + 2) = 0;
    --i;
    v23 = v20;
    v16 = RegionSize - 2;
    ++v20;
    if ( v23 > 4 )
    {
      DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1458);
      goto LABEL_62;
    }
LABEL_75:
    v15 = Handle;
  }
  if ( i || (*(_BYTE *)(a3 + 8) & 4) == 0 )
    v12 = 0;
  else
    v12 = -1073741772;
LABEL_62:
  v6 = a4;
LABEL_63:
  if ( v12 >= 0 )
    goto LABEL_64;
LABEL_39:
  v15 = Handle;
  v14 = KeyHandle;
LABEL_40:
  if ( v14 && (v9 & 0x40000000) == 0 )
  {
    NtClose(v14);
    v14 = KeyHandle;
    v15 = Handle;
  }
  if ( v15 && v15 != v14 )
    NtClose(v15);
  v45 = (PVOID)RegionSize;
  v44 = (ULONG_PTR)v13;
  if ( v13 )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)&v44, (PSIZE_T)&v45, 0x8000u);
  return (unsigned int)v12;
}
