/*
 * XREFs of RtlpResolveAssemblyStorageMapEntry @ 0x1800033D8
 * Callers:
 *     RtlGetAssemblyStorageRoot @ 0x180002CD8 (RtlGetAssemblyStorageRoot.c)
 * Callees:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180003A80 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180003E84 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x18000402C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlInitUnicodeStringEx @ 0x1800044C0 (RtlInitUnicodeStringEx.c)
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     DbgPrintEx @ 0x180074670 (DbgPrintEx.c)
 *     RtlReleaseRelativeName @ 0x180094110 (RtlReleaseRelativeName.c)
 *     wcsrchr @ 0x180125E80 (wcsrchr.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenFile @ 0x1801606B0 (NtOpenFile.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpResolveAssemblyStorageMapEntry(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rsi
  NTSTATUS v8; // ebx
  wchar_t *Buffer; // r13
  int v10; // eax
  __int64 v12; // rdx
  char *v13; // r8
  char *v14; // rcx
  unsigned int v15; // r9d
  const wchar_t *v16; // r14
  wchar_t *v17; // rax
  unsigned __int16 v18; // bx
  __int64 *v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  unsigned int *v23; // rax
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // r14
  bool v26; // zf
  int v27; // ecx
  int v28; // eax
  HANDLE ContainingDirectory; // rax
  int v30; // eax
  int inserted; // eax
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  ULONG OpenOptions[2]; // [rsp+28h] [rbp-D8h]
  char v34; // [rsp+40h] [rbp-C0h]
  __int64 *v35; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 Atom; // [rsp+60h] [rbp-A0h]
  unsigned int *v39; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp-88h]
  unsigned int *v41; // [rsp+80h] [rbp-80h]
  int v42; // [rsp+88h] [rbp-78h] BYREF
  _BYTE *v43; // [rsp+90h] [rbp-70h]
  char v44; // [rsp+98h] [rbp-68h]
  unsigned __int64 v45; // [rsp+A0h] [rbp-60h]
  char v46; // [rsp+A8h] [rbp-58h]
  unsigned int *v47; // [rsp+B0h] [rbp-50h]
  __int128 v48; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v49; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v50[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-18h]
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+F0h] [rbp-10h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+110h] [rbp+10h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp+20h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v56[544]; // [rsp+160h] [rbp+60h] BYREF
  char v57; // [rsp+380h] [rbp+280h] BYREF

  v5 = a3;
  v51 = a5;
  v8 = 0;
  memset_thunk_772440563353939046(&v39, 0, 0x40uLL);
  v34 = 0;
  v50[0] = 34078720LL;
  v37 = 0LL;
  v50[1] = &v57;
  Buffer = 0LL;
  v35 = 0LL;
  Handle = 0LL;
  v49 = (UNICODE_STRING)0LL;
  Atom = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  memset(&RelativeName, 0, sizeof(RelativeName));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  if ( a1 )
  {
    if ( !a2 || !(_DWORD)v5 || (unsigned int)v5 > *(_DWORD *)(a1 + 4) )
    {
      v10 = *(_DWORD *)(a1 + 4);
      goto LABEL_3;
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5) )
      return (unsigned int)v8;
    _mm_lfence();
    v12 = a2[6];
    v13 = (char *)a2 + *(unsigned int *)((char *)&a2[6 * v5 + 4] + *(unsigned int *)((char *)a2 + v12 + 12));
    v14 = (char *)a2 + *(unsigned int *)((char *)a2 + v12 + 16);
    v15 = *((_DWORD *)v13 + 20);
    if ( v15 > 0xFFFE )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: Assembly directory name stored in assembly information too long (%lu bytes) - ACTIVATION_CONTEXT_DATA at %p\n",
        v15,
        a2);
      v8 = -1073741562;
      goto LABEL_22;
    }
    if ( (v13[4] & 0x10) == 0 )
    {
      LOWORD(v48) = *((_WORD *)v13 + 40);
      WORD1(v48) = v48;
      v21 = *((unsigned int *)v13 + 21);
      v39 = a2;
      *((_QWORD *)&v48 + 1) = &v14[v21];
      LODWORD(v40) = v5;
      v43 = v56;
      v41 = 0LL;
      v42 = 34996224;
      v44 = 0;
      v46 = 0;
      v45 = 0LL;
      RtlpAssemblyStorageMapResolutionDefaultCallback(1LL, &v39, a5);
      if ( v46 )
      {
        v8 = -1073741536;
        goto LABEL_22;
      }
      if ( v44 )
      {
        v30 = RtlpProbeAssemblyStorageRootForAssembly(
                v22,
                (unsigned int)&v42,
                (unsigned int)&v48,
                (unsigned int)v50,
                (__int64)&v37,
                (__int64)&v35,
                (__int64)&Handle);
        v8 = v30;
        if ( v30 < 0 )
        {
          ShareAccess[0] = v30;
          DbgPrintEx(
            0x33u,
            0,
            "SXS: Attempt to probe known root of assembly storage (\"%wZ\") failed; Status = 0x%08lx\n",
            &v42,
            *(_QWORD *)ShareAccess);
        }
        else
        {
          inserted = RtlpInsertAssemblyStorageMapEntry(a1, (unsigned int)v5, &v42, &Handle);
          v8 = inserted;
          if ( inserted < 0 )
            DbgPrintEx(
              0x33u,
              0,
              "SXS: Attempt to insert well known storage root into assembly storage map assembly roster index %lu failed;"
              " Status = 0x%08lx\n",
              v5,
              inserted);
          else
            v8 = 0;
        }
        goto LABEL_22;
      }
      v23 = v41;
      v24 = 0LL;
      v25 = v45;
      v47 = v41;
      v34 = 1;
      while ( 1 )
      {
        v26 = v24 == v25;
        if ( v24 >= v25 )
          goto LABEL_39;
        v39 = v23;
        v40 = v24;
        v43 = v56;
        v42 = 34996224;
        LOWORD(v41) = 0;
        RtlpAssemblyStorageMapResolutionDefaultCallback(2LL, &v39, v51);
        if ( (_BYTE)v41 )
          break;
        if ( BYTE1(v41) )
        {
          if ( !(_WORD)v42 )
            goto LABEL_51;
          v25 = v24 + 1;
        }
        if ( (_WORD)v42 )
        {
          v27 = (int)Handle;
          if ( Handle )
          {
            NtClose(Handle);
            Handle = 0LL;
          }
          v28 = RtlpProbeAssemblyStorageRootForAssembly(
                  v27,
                  (unsigned int)&v42,
                  (unsigned int)&v48,
                  (unsigned int)v50,
                  (__int64)&v37,
                  (__int64)&v35,
                  (__int64)&Handle);
          v8 = v28;
          if ( v28 >= 0 )
          {
            v26 = v24 == v25;
LABEL_39:
            if ( !v26 )
              goto LABEL_17;
LABEL_51:
            DbgPrintEx(
              0x33u,
              0,
              "SXS: Unable to resolve storage root for assembly directory %wZ in %Iu tries\n",
              &v48,
              v24);
            v8 = -1072365564;
            goto LABEL_21;
          }
          if ( v28 != -1072365564 )
          {
            OpenOptions[0] = v28;
            DbgPrintEx(
              0x33u,
              0,
              "SXS: Attempt to probe assembly storage root %wZ for assembly directory %wZ failed with status = 0x%08lx\n",
              &v42,
              &v48,
              *(_QWORD *)OpenOptions);
            goto LABEL_21;
          }
        }
        v23 = v47;
        ++v24;
      }
      v8 = -1073741536;
      goto LABEL_21;
    }
    v35 = v50;
    v16 = (const wchar_t *)&v14[*((unsigned int *)v13 + 6)];
    if ( !v16 )
      return (unsigned int)-1073741595;
    v17 = wcsrchr(v16, 0x5Cu);
    if ( !v17 )
    {
      v8 = -1073741595;
      goto LABEL_22;
    }
    v18 = 2 * (v17 - v16 + 2);
    if ( v18 > 0x208u )
    {
      WORD1(v37) = 2 * (v17 - v16 + 2);
      Atom = RtlpAllocateAtom(v18);
      if ( !Atom )
      {
        v8 = -1073741801;
        goto LABEL_22;
      }
      v19 = &v37;
      v35 = &v37;
    }
    else
    {
      v19 = v35;
    }
    memmove((void *)v19[1], v16, v18 - 2LL);
    *(_WORD *)(v35[1] + 2 * ((unsigned __int64)v18 >> 1) - 2) = 0;
    *(_WORD *)v35 = v18 - 2;
LABEL_17:
    if ( !Handle )
    {
      DestinationString = 0LL;
      if ( RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)v35[1]) < 0
        || (int)RtlpDosPathNameToRelativeNtPathName(
                  2,
                  (unsigned int)&DestinationString,
                  0,
                  (unsigned int)&v49,
                  0LL,
                  0LL,
                  (__int64)&RelativeName) < 0 )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n",
          (const wchar_t *)v35[1]);
        v8 = -1073741766;
        goto LABEL_20;
      }
      Buffer = v49.Buffer;
      if ( RelativeName.RelativeName.Length )
      {
        ContainingDirectory = RelativeName.ContainingDirectory;
        v49 = RelativeName.RelativeName;
      }
      else
      {
        ContainingDirectory = 0LL;
        RelativeName.ContainingDirectory = 0LL;
      }
      ObjectAttributes.RootDirectory = ContainingDirectory;
      ObjectAttributes.ObjectName = &v49;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = NtOpenFile(&Handle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
      RtlReleaseRelativeName(&RelativeName);
      if ( v8 < 0 )
      {
        DbgPrintEx(
          0x33u,
          0,
          "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
          (const wchar_t *)v35[1],
          v8);
        goto LABEL_20;
      }
    }
    v20 = RtlpInsertAssemblyStorageMapEntry(a1, (unsigned int)v5, v35, &Handle);
    v8 = v20;
    if ( v20 < 0 )
      DbgPrintEx(0x33u, 0, "SXS: Storage resolution failed to insert entry to storage map; Status = 0x%08lx\n", v20);
    else
      v8 = 0;
LABEL_20:
    if ( !v34 )
      goto LABEL_22;
LABEL_21:
    v39 = v47;
    RtlpAssemblyStorageMapResolutionDefaultCallback(4LL, &v39, v51);
    goto LABEL_22;
  }
  v10 = 0;
LABEL_3:
  DbgPrintEx(
    0x33u,
    0,
    "SXS: %s() bad parameters\n"
    "SXS:   Map                : %p\n"
    "SXS:   Data               : %p\n"
    "SXS:   AssemblyRosterIndex: 0x%lx\n"
    "SXS:   Map->AssemblyCount : 0x%lx\n",
    "RtlpResolveAssemblyStorageMapEntry",
    (const void *)a1,
    a2,
    v5,
    v10);
  v8 = -1073741811;
LABEL_22:
  if ( Atom )
    RtlpSysVolFree();
  if ( Handle )
    NtClose(Handle);
  if ( Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
  return (unsigned int)v8;
}
