/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180003A80
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800033D8 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x180004514 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     RtlGetNtSystemRoot @ 0x18007F510 (RtlGetNtSystemRoot.c)
 *     RtlDoesFileExists_UEx @ 0x1800935F0 (RtlDoesFileExists_UEx.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x180160690 (NtEnumerateKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

int __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  size_t v7; // rax
  HANDLE v8; // r12
  int v9; // r15d
  int v10; // r14d
  NTSTATUS v11; // eax
  const wchar_t *NtSystemRoot; // r15
  unsigned __int16 v13; // dx
  __int16 v14; // r14
  int v15; // ecx
  __int64 v16; // rbx
  size_t v17; // r15
  wchar_t *Buffer; // rdx
  char *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 Length; // [rsp+20h] [rbp-E0h]
  ULONG ResultLength[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v25[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h]
  char *v27; // [rsp+40h] [rbp-C0h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE KeyInformation[12]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v30; // [rsp+8Ch] [rbp-74h]
  char v31; // [rsp+90h] [rbp-70h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
    *(_QWORD *)ResultLength = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180172000;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = NtOpenKey((PHANDLE)ResultLength, 8u, &ObjectAttributes);
    v10 = v11;
    if ( v11 >= 0 || v11 == -1073741772 || v11 == -1073741431 )
    {
      v7 = *(_QWORD *)ResultLength;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v7;
      return v7;
    }
    LODWORD(v7) = DbgPrintEx(0x33u, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_180172000, v11);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_16;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    LODWORD(v7) = 2;
    if ( v6 == 2 && *(_QWORD *)a2 )
      LODWORD(v7) = NtClose(*(HANDLE *)a2);
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
          *(_OWORD *)&v19[v17] = xmmword_18017A130;
          v21 = *(_QWORD *)(a2 + 32);
          *(_WORD *)(a2 + 24) = v17 + 14;
          LODWORD(v7) = RtlDoesFileExists_UEx(v21, v20);
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
    NtSystemRoot = RtlGetNtSystemRoot();
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
  LODWORD(v7) = -1;
  if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL
    || (LODWORD(v7) = (unsigned int)memset_thunk_772440563353939046(KeyInformation, 0, 0x220uLL),
        v8 = *(HANDLE *)a2,
        v9 = *(_DWORD *)(a2 + 8),
        ResultLength[0] = 0,
        v26 = 0,
        !v8) )
  {
LABEL_25:
    *(_BYTE *)(a2 + 17) = 1;
    return v7;
  }
  LODWORD(v7) = NtEnumerateKey(v8, v9 - 2, KeyBasicInformation, KeyInformation, 0x220u, ResultLength);
  v10 = v7;
  if ( (v7 & 0x80000000) != 0LL )
  {
    if ( (_DWORD)v7 != -2147483622 )
    {
      LODWORD(v7) = DbgPrintEx(
                      0x33u,
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
  LODWORD(v7) = v30;
  if ( v30 <= 0xFFFE )
  {
    v25[0] = v30;
    v25[1] = v30;
    v27 = &v31;
    LODWORD(v7) = RtlpGetAssemblyStorageMapRootLocation(v8, v25, a2 + 24);
    v10 = v7;
    if ( (v7 & 0x80000000) == 0LL )
      return v7;
    LODWORD(Length) = v7;
    LODWORD(v7) = DbgPrintEx(
                    0x33u,
                    0,
                    "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                    v25,
                    Length);
    goto LABEL_11;
  }
  *(_BYTE *)(a2 + 16) = 1;
  if ( a3 )
    *a3 = -1073741562;
  return v7;
}
