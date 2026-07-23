/*
 * XREFs of RtlpProbeAssemblyStorageRootForAssembly @ 0x1800E34EC
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800E2898 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800A2FC0 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpProbeAssemblyStorageRootForAssembly(
        __int64 a1,
        const void **a2,
        unsigned __int16 *a3,
        const void *a4,
        __int64 a5,
        __int64 *a6,
        HANDLE *a7)
{
  __int64 v7; // r15
  unsigned __int64 v9; // rdx
  SIZE_T v10; // r14
  WCHAR *v11; // rbx
  _WORD *v12; // rsi
  _WORD *v13; // rcx
  unsigned __int16 v14; // si
  NTSTATUS v15; // edi
  HANDLE ContainingDirectory; // rax
  HANDLE *v18; // rcx
  _WORD *v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  PVOID Atom; // rax
  unsigned __int8 v23; // [rsp+60h] [rbp-A0h]
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  __int128 v26; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v27; // [rsp+90h] [rbp-70h] BYREF
  HANDLE *v28; // [rsp+A0h] [rbp-60h]
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+A8h] [rbp-58h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F8h] [rbp-8h] BYREF
  WCHAR SourceString[264]; // [rsp+110h] [rbp+10h] BYREF

  *(_QWORD *)&DestinationString.Length = a3;
  v7 = (__int64)a4;
  v28 = a7;
  v23 = 0;
  FileHandle = 0LL;
  v26 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  v27 = 0LL;
  memset(&RelativeName, 0, sizeof(RelativeName));
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( !a2 || !a3 || !a4 || !a5 || !a6 || !a7 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters\n"
      "SXS:  Flags:               0x%lx\n"
      "SXS:  Root:                %p\n"
      "SXS:  AssemblyDirectory:   %p\n"
      "SXS:  PreAllocatedString:  %p\n"
      "SXS:  DynamicString:       %p\n"
      "SXS:  StringUsed:          %p\n"
      "SXS:  OpenDirectoryHandle: %p\n",
      "RtlpProbeAssemblyStorageRootForAssembly",
      0,
      a2,
      a3,
      a4,
      (const void *)a5,
      a6,
      a7);
    v15 = -1073741811;
    goto LABEL_34;
  }
  v9 = *(unsigned __int16 *)a2;
  if ( (_WORD)v9 )
  {
    v19 = a2[1];
    if ( v19[(v9 >> 1) - 1] != 92 && v19[(v9 >> 1) - 1] != 47 )
    {
      v23 = 1;
      v9 += 2LL;
    }
  }
  v10 = v9 + *a3 + 4LL;
  if ( v10 > 0xFFFE )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: Assembly storage resolution failing probe because combined path length does not fit in an UNICODE_STRING.\n");
    v15 = -1073741562;
    goto LABEL_34;
  }
  if ( v10 > 0x208 )
  {
    *((_QWORD *)&v26 + 1) = RtlpAllocateAtom((unsigned __int16)v10);
    v11 = (WCHAR *)*((_QWORD *)&v26 + 1);
    if ( !*((_QWORD *)&v26 + 1) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: Assembly storage resolution failing probe because attempt to allocate %u bytes failed.\n",
        (unsigned __int16)v10);
      v15 = -1073741801;
      goto LABEL_20;
    }
  }
  else
  {
    v11 = SourceString;
    *((_QWORD *)&v26 + 1) = SourceString;
  }
  memmove(v11, a2[1], *(unsigned __int16 *)a2);
  v12 = (WCHAR *)((char *)v11 + *(unsigned __int16 *)a2);
  if ( v23 )
    *v12++ = 92;
  memmove(
    v12,
    *(const void **)(*(_QWORD *)&DestinationString.Length + 8LL),
    **(unsigned __int16 **)&DestinationString.Length);
  v13 = *(_WORD **)&DestinationString.Length;
  DestinationString = 0LL;
  *(_WORD *)((char *)v12 + (unsigned __int16)*v13) = 0;
  v14 = *v13 + *(_WORD *)a2 + 2 * v23;
  if ( RtlInitUnicodeStringEx(&DestinationString, v11) >= 0
    && (int)RtlpDosPathNameToRelativeNtPathName(
              2,
              &DestinationString.Length,
              0LL,
              &v27.Length,
              0LL,
              0LL,
              (__int64)&RelativeName) >= 0 )
  {
    *(_QWORD *)&DestinationString.Length = v27.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = RelativeName.ContainingDirectory;
      v27 = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.RootDirectory = ContainingDirectory;
    ObjectAttributes.ObjectName = &v27;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v15 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    RtlReleaseRelativeName(&RelativeName);
    if ( v15 < 0 )
    {
      v20 = (unsigned int)(v15 + 1073741809);
      if ( (unsigned int)v20 <= 0x2B && (v21 = 0x82000000001LL, _bittest64(&v21, v20)) )
        v15 = -1072365564;
      else
        DbgPrintEx(
          0x33u,
          0,
          "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
          v11,
          v15);
      goto LABEL_32;
    }
    if ( v10 > *(unsigned __int16 *)(v7 + 2) )
    {
      if ( v11 == SourceString )
      {
        Atom = RtlpAllocateAtom(v10);
        *(_QWORD *)(a5 + 8) = Atom;
        if ( !Atom )
        {
          v15 = -1073741801;
          goto LABEL_32;
        }
        memmove(Atom, v11, v14);
      }
      else
      {
        *(_QWORD *)(a5 + 8) = v11;
        v11 = 0LL;
        *((_QWORD *)&v26 + 1) = 0LL;
      }
      *(_WORD *)(a5 + 2) = v10;
      v7 = a5;
    }
    else
    {
      memmove(*(void **)(v7 + 8), v11, v14);
    }
    v18 = v28;
    v15 = 0;
    *a6 = v7;
    *(_DWORD *)(*(_QWORD *)(v7 + 8) + v14) = 92;
    *(_WORD *)*a6 = v14 + 2;
    *v18 = FileHandle;
    FileHandle = 0LL;
LABEL_32:
    if ( !*(_QWORD *)&DestinationString.Length )
      goto LABEL_20;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)&DestinationString.Length);
LABEL_34:
    v11 = (WCHAR *)*((_QWORD *)&v26 + 1);
    goto LABEL_20;
  }
  DbgPrintEx(0x33u, 0, "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n", v11);
  v15 = -1073741766;
LABEL_20:
  if ( v11 && v11 != SourceString )
    RtlpSysVolFree(v11);
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)v15;
}
