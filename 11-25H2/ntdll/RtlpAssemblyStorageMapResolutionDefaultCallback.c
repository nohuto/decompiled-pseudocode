/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800E2F40
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800E2898 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlGetNtSystemRoot @ 0x18006C630 (RtlGetNtSystemRoot.c)
 *     RtlDoesFileExists_UEx @ 0x1800A24A0 (RtlDoesFileExists_UEx.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E3980 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x180163860 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  size_t v7; // rax
  HANDLE v8; // r12
  int v9; // r15d
  int v10; // r14d
  int v11; // eax
  const wchar_t *NtSystemRoot; // r15
  unsigned __int16 v13; // dx
  __int16 v14; // r14
  int v15; // ecx
  __int64 v16; // rbx
  size_t v17; // r15
  wchar_t *Buffer; // rdx
  char *v19; // rbx
  __int64 v20; // rdx
  const wchar_t *v21; // rcx
  __int64 v23; // [rsp+20h] [rbp-E0h]
  size_t v24; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v25[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h]
  char *v27; // [rsp+40h] [rbp-C0h]
  _QWORD v28[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+68h] [rbp-98h]
  _BYTE v30[12]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v31; // [rsp+8Ch] [rbp-74h]
  char v32; // [rsp+90h] [rbp-70h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    v28[0] = 48LL;
    v28[3] = 64LL;
    v24 = 0LL;
    v28[1] = 0LL;
    v28[2] = &unk_180175D00;
    v29 = 0LL;
    v11 = NtOpenKey(&v24, 8LL, v28);
    v10 = v11;
    if ( v11 >= 0 || v11 == -1073741772 || v11 == -1073741431 )
    {
      v7 = v24;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v7;
      return v7;
    }
    LOBYTE(v7) = DbgPrintEx(51, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180175D00, v11);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_16;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    LOBYTE(v7) = 2;
    if ( v6 == 2 && *(_QWORD *)a2 )
      LOBYTE(v7) = NtClose(*(HANDLE *)a2);
    return v7;
  }
  if ( !*(_QWORD *)(a2 + 8) )
  {
    v7 = (size_t)NtCurrentPeb();
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 8LL) & 0x8000) != 0 )
    {
      v7 = (size_t)NtCurrentPeb();
      v17 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 32) + 96LL);
      if ( v17 + 16 > 0xFFFE )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741562;
      }
      else
      {
        v7 = *(unsigned __int16 *)(a2 + 26);
        if ( v17 + 16 > v7 )
        {
          *(_BYTE *)(a2 + 16) = 1;
          if ( a3 )
            *a3 = -1073741789;
        }
        else
        {
          Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
          if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
            Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
          v19 = *(char **)(a2 + 32);
          memmove(v19, Buffer, v17);
          LOBYTE(v20) = 1;
          *(_OWORD *)&v19[v17] = xmmword_1801824A8;
          v21 = *(const wchar_t **)(a2 + 32);
          *(_WORD *)(a2 + 24) = v17 + 14;
          LOBYTE(v7) = RtlDoesFileExists_UEx(v21, v20);
          if ( !(_BYTE)v7 )
            *(_WORD *)(a2 + 24) = 0;
        }
      }
    }
    else
    {
      *(_WORD *)(a2 + 24) = 0;
    }
    return v7;
  }
  if ( *(_QWORD *)(a2 + 8) == 1LL )
  {
    NtSystemRoot = (const wchar_t *)RtlGetNtSystemRoot();
    v13 = 0;
    LOWORD(v7) = 0;
    v14 = 0;
    if ( NtSystemRoot )
    {
      v7 = 2 * wcslen(NtSystemRoot);
      if ( v7 >= 0xFFFE )
        LOWORD(v7) = -4;
      v13 = v7;
      v14 = v7;
    }
    v15 = (unsigned __int16)v7;
    LODWORD(v7) = *(unsigned __int16 *)(a2 + 26);
    *(_WORD *)(a2 + 24) = 0;
    if ( v15 + 16 > (unsigned int)v7 )
    {
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741789;
    }
    else
    {
      v16 = v13;
      memmove(*(void **)(a2 + 32), NtSystemRoot, v13);
      v7 = *(_QWORD *)(a2 + 32);
      *(_OWORD *)(v7 + v16) = *(_OWORD *)L"\\WinSxS\\";
      *(_WORD *)(a2 + 24) = v14 + 16;
    }
    return v7;
  }
  LOBYTE(v7) = -1;
  if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL
    || (LOBYTE(v7) = (unsigned __int8)memset_thunk_772440563353939046(v30, 0, 0x220uLL),
        v8 = *(HANDLE *)a2,
        v9 = *(_DWORD *)(a2 + 8),
        LODWORD(v24) = 0,
        v26 = 0,
        !v8) )
  {
LABEL_25:
    *(_BYTE *)(a2 + 17) = 1;
    return v7;
  }
  LODWORD(v7) = NtEnumerateKey(v8, (unsigned int)(v9 - 2), 0LL, v30, 544, &v24);
  v10 = v7;
  if ( (v7 & 0x80000000) != 0LL )
  {
    if ( (_DWORD)v7 != -2147483622 )
    {
      LOBYTE(v7) = DbgPrintEx(
                     51,
                     0,
                     "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                     v9 - 2,
                     v7);
LABEL_11:
      *(_BYTE *)(a2 + 16) = 1;
LABEL_16:
      if ( a3 )
        *a3 = v10;
      return v7;
    }
    goto LABEL_25;
  }
  LOBYTE(v7) = v31;
  if ( v31 <= 0xFFFE )
  {
    v25[0] = v31;
    v25[1] = v31;
    v27 = &v32;
    LODWORD(v7) = RtlpGetAssemblyStorageMapRootLocation(v8, v25, a2 + 24);
    v10 = v7;
    if ( (v7 & 0x80000000) == 0LL )
      return v7;
    LODWORD(v23) = v7;
    LOBYTE(v7) = DbgPrintEx(
                   51,
                   0,
                   "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                   v25,
                   v23);
    goto LABEL_11;
  }
  *(_BYTE *)(a2 + 16) = 1;
  if ( a3 )
    *a3 = -1073741562;
  return v7;
}
