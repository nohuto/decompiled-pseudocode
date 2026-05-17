/*
 * XREFs of RtlpQueryRegistryValues @ 0x1800B6140
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x1800B5874 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCheckPortableOperatingSystem @ 0x1800B5BF0 (RtlCheckPortableOperatingSystem.c)
 *     RtlQueryRegistryValuesEx @ 0x1800B5E80 (RtlQueryRegistryValuesEx.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1800B7044 (RtlpFindRegTziForCurrentYear.c)
 *     RtlQueryRegistryValues @ 0x1800B7370 (RtlQueryRegistryValues.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x180146ED0 (RtlpEtcGetDwordFromRegistry.c)
 * Callees:
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpGetRegistryHandle @ 0x1800B6868 (RtlpGetRegistryHandle.c)
 *     RtlpCallQueryRegistryRoutine @ 0x1800B6A14 (RtlpCallQueryRegistryRoutine.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x180161EF0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     ZwDeleteValueKey @ 0x180163860 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpQueryRegistryValues(__int64 a1, const wchar_t *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r15
  int v9; // r13d
  __int64 result; // rax
  size_t v11; // rax
  int v12; // edi
  __int64 v13; // rsi
  HANDLE v14; // rcx
  HANDLE v15; // r10
  unsigned int v16; // r12d
  int v17; // edx
  int v18; // eax
  const wchar_t *v19; // rcx
  int v20; // r15d
  unsigned int j; // r14d
  int v22; // eax
  int v23; // eax
  int v24; // r14d
  size_t v25; // rax
  int v26; // eax
  int v27; // eax
  const wchar_t *v28; // rax
  const wchar_t *v29; // rcx
  size_t v30; // rax
  int v31; // eax
  unsigned int v32; // [rsp+40h] [rbp-99h] BYREF
  HANDLE i; // [rsp+48h] [rbp-91h] BYREF
  __int64 v34; // [rsp+50h] [rbp-89h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-81h] BYREF
  __int64 v36; // [rsp+60h] [rbp-79h] BYREF
  const wchar_t *v37; // [rsp+68h] [rbp-71h]
  __int128 v38; // [rsp+70h] [rbp-69h] BYREF
  __int64 v39; // [rsp+80h] [rbp-59h] BYREF
  __int64 v40; // [rsp+88h] [rbp-51h] BYREF
  __int64 v41; // [rsp+90h] [rbp-49h] BYREF
  __int64 v42; // [rsp+98h] [rbp-41h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-11h] BYREF
  __int128 v49; // [rsp+D0h] [rbp-9h] BYREF
  __int128 v50; // [rsp+E0h] [rbp+7h]
  __int128 v51; // [rsp+F0h] [rbp+17h]

  v6 = a4;
  *(_QWORD *)&v51 = 0LL;
  DWORD2(v51) = 0;
  Handle = 0LL;
  v49 = 0LL;
  v32 = 0;
  v50 = 0LL;
  v9 = a1;
  v38 = 0LL;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  if ( (int)result < 0 )
    return result;
  v36 = 0LL;
  if ( (v9 & 0x40000000) != 0 )
  {
    v37 = 0LL;
  }
  else
  {
    v37 = a2;
    if ( a2 )
    {
      v11 = 2 * wcslen(a2);
      if ( v11 >= 0xFFFE )
        LOWORD(v11) = -4;
      LOWORD(v36) = v11;
      WORD1(v36) = v11 + 2;
    }
  }
  v34 = 4096LL;
  v39 = 0LL;
  v12 = ZwAllocateVirtualMemory(-1LL, &v39, 0LL, &v34, 4096, 4);
  if ( v12 >= 0 )
  {
    v13 = v39;
  }
  else
  {
    v13 = 0LL;
    v39 = 0LL;
  }
  if ( !v13 )
  {
    if ( (v9 & 0x40000000) == 0 )
      NtClose(Handle);
    return (unsigned int)v12;
  }
  *(_DWORD *)(v13 + 8) = 0;
  v14 = Handle;
  v15 = Handle;
  v16 = v34 - 2;
  for ( i = Handle; ; v15 = i )
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
      v14 = Handle;
      v15 = Handle;
      i = Handle;
    }
    v18 = *(_DWORD *)(a3 + 8);
    if ( (v18 & 1) == 0 )
      break;
    v28 = *(const wchar_t **)(a3 + 16);
    if ( !v28 )
      goto LABEL_70;
    v29 = *(const wchar_t **)(a3 + 16);
    v36 = 0LL;
    v37 = v28;
    v30 = 2 * wcslen(v29);
    LODWORD(v49) = 48;
    DWORD2(v50) = 576;
    if ( v30 >= 0xFFFE )
      LOWORD(v30) = -4;
    LOWORD(v36) = v30;
    WORD1(v36) = v30 + 2;
    *((_QWORD *)&v49 + 1) = Handle;
    *(_QWORD *)&v50 = &v36;
    v51 = 0LL;
    v12 = NtOpenKey(&i, 0x2000000LL, &v49);
    if ( v12 < 0 )
      goto LABEL_63;
    if ( *(_QWORD *)a3 )
    {
      v15 = i;
      goto LABEL_18;
    }
LABEL_64:
    v14 = Handle;
    a3 += 56LL;
  }
  v19 = *(const wchar_t **)(a3 + 16);
  if ( v19 )
  {
    v24 = 0;
    *((_QWORD *)&v38 + 1) = *(_QWORD *)(a3 + 16);
    *(_QWORD *)&v38 = 0LL;
    v25 = 2 * wcslen(v19);
    if ( v25 >= 0xFFFE )
      LOWORD(v25) = -4;
    LOWORD(v38) = v25;
    WORD1(v38) = v25 + 2;
    while ( 1 )
    {
      v26 = v24++;
      if ( v26 > 4 )
      {
        DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1277);
        goto LABEL_39;
      }
      v27 = NtQueryValueKey(i, &v38, 1LL, v13, v16, &v32);
      v12 = v27;
      if ( v27 == -2147483643 )
        goto LABEL_32;
      if ( v27 < 0 )
        break;
      if ( *(_DWORD *)(v13 + 4) == 7 )
      {
        *(_WORD *)(v32 + v13) = 0;
        *(_DWORD *)(v13 + 12) += 2;
      }
      v32 = v16;
      v31 = RtlpCallQueryRegistryRoutine((_DWORD)i, a3, v13, (unsigned int)&v32, v6, a5, a6);
      v12 = v31;
      if ( v31 != -1073741789 )
      {
        if ( v31 < 0 )
          goto LABEL_63;
        if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
          ZwDeleteValueKey(i, &v38);
        goto LABEL_64;
      }
      v46 = v13;
      v34 = v32 + 10LL;
      v45 = v34;
      v40 = 0LL;
      ZwFreeVirtualMemory(-1LL, &v46, &v45, 0x8000LL);
      v12 = ZwAllocateVirtualMemory(-1LL, &v40, 0LL, &v34, 4096, 4);
      if ( v12 >= 0 )
      {
        v13 = v40;
      }
      else
      {
        v13 = 0LL;
        v40 = 0LL;
      }
LABEL_36:
      if ( !v13 )
        goto LABEL_39;
      *(_DWORD *)(v13 + 8) = 0;
      v16 = v34 - 2;
    }
    if ( v27 == -1073741772 )
    {
      *(_DWORD *)(v13 + 4) = 0;
      *(_DWORD *)(v13 + 12) = 0;
      v32 = v16;
      v27 = RtlpCallQueryRegistryRoutine((_DWORD)i, a3, v13, (unsigned int)&v32, v6, a5, a6);
      v12 = v27;
    }
    if ( v27 != -1073741789 )
      goto LABEL_63;
LABEL_32:
    v48 = v13;
    v34 = v32 + 10LL;
    v47 = v34;
    v41 = 0LL;
    if ( v13 )
      ZwFreeVirtualMemory(-1LL, &v48, &v47, 0x8000LL);
    v12 = ZwAllocateVirtualMemory(-1LL, &v41, 0LL, &v34, 4096, 4);
    if ( v12 >= 0 )
    {
      v13 = v41;
    }
    else
    {
      v13 = 0LL;
      v41 = 0LL;
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
  for ( j = 0; ; ++j )
  {
    v22 = ZwEnumerateValueKey(v15, j, 1LL, v13, v16, &v32);
    v12 = v22;
    if ( v22 == -2147483643 )
      goto LABEL_20;
    if ( v22 == -2147483622 )
      break;
    if ( v22 >= 0 )
    {
      v32 = v16;
      v22 = RtlpCallQueryRegistryRoutine((_DWORD)i, a3, v13, (unsigned int)&v32, a4, a5, a6);
      v12 = v22;
    }
    if ( v22 != -1073741789 )
    {
      if ( v22 < 0 )
        goto LABEL_62;
      v20 = 0;
      if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
      {
        *((_QWORD *)&v38 + 1) = v13 + 20;
        LOWORD(v38) = *(_WORD *)(v13 + 16);
        WORD1(v38) = *(_WORD *)(v13 + 16);
        if ( (int)ZwDeleteValueKey(i, &v38) >= 0 )
          --j;
      }
      goto LABEL_75;
    }
LABEL_20:
    v44 = v13;
    v34 = v32 + 10LL;
    v43 = v34;
    v42 = 0LL;
    if ( v13 )
      ZwFreeVirtualMemory(-1LL, &v44, &v43, 0x8000LL);
    v12 = ZwAllocateVirtualMemory(-1LL, &v42, 0LL, &v34, 4096, 4);
    if ( v12 >= 0 )
    {
      v13 = v42;
    }
    else
    {
      v13 = 0LL;
      v42 = 0LL;
    }
    if ( !v13 )
      goto LABEL_62;
    *(_DWORD *)(v13 + 8) = 0;
    --j;
    v23 = v20;
    v16 = v34 - 2;
    ++v20;
    if ( v23 > 4 )
    {
      DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1458);
      goto LABEL_62;
    }
LABEL_75:
    v15 = i;
  }
  if ( j || (*(_BYTE *)(a3 + 8) & 4) == 0 )
    v12 = 0;
  else
    v12 = -1073741772;
LABEL_62:
  v6 = a4;
LABEL_63:
  if ( v12 >= 0 )
    goto LABEL_64;
LABEL_39:
  v15 = i;
  v14 = Handle;
LABEL_40:
  if ( v14 && (v9 & 0x40000000) == 0 )
  {
    NtClose(v14);
    v14 = Handle;
    v15 = i;
  }
  if ( v15 && v15 != v14 )
    NtClose(v15);
  v44 = v34;
  v43 = v13;
  if ( v13 )
    ZwFreeVirtualMemory(-1LL, &v43, &v44, 0x8000LL);
  return (unsigned int)v12;
}
