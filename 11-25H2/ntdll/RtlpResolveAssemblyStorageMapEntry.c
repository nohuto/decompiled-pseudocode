/*
 * XREFs of RtlpResolveAssemblyStorageMapEntry @ 0x1800E2898
 * Callers:
 *     RtlGetAssemblyStorageRoot @ 0x1800E2198 (RtlGetAssemblyStorageRoot.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800A2FC0 (RtlReleaseRelativeName.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800E2F40 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800E3344 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800E34EC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     wcsrchr @ 0x180129730 (wcsrchr.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // r9
  __int64 v13; // rdx
  char *v14; // r8
  char *v15; // rcx
  unsigned int v16; // r9d
  const wchar_t *v17; // r14
  wchar_t *v18; // rax
  unsigned __int16 v19; // bx
  __int64 *v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  int v23; // ecx
  unsigned int *v24; // rax
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r14
  bool v27; // zf
  int v28; // ecx
  int v29; // eax
  void *v30; // rax
  int v31; // eax
  int inserted; // eax
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  ULONG OpenOptions[2]; // [rsp+28h] [rbp-D8h]
  char v35; // [rsp+40h] [rbp-C0h]
  __int64 *v36; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 Atom; // [rsp+60h] [rbp-A0h]
  unsigned int *v40; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp-88h]
  unsigned int *v42; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h] BYREF
  _BYTE *v44; // [rsp+90h] [rbp-70h]
  char v45; // [rsp+98h] [rbp-68h]
  unsigned __int64 v46; // [rsp+A0h] [rbp-60h]
  char v47; // [rsp+A8h] [rbp-58h]
  unsigned int *v48; // [rsp+B0h] [rbp-50h]
  __int128 v49; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v50; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v51[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-18h]
  __int128 v53; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v54; // [rsp+100h] [rbp+0h]
  __int128 v55; // [rsp+110h] [rbp+10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp+20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v58[544]; // [rsp+160h] [rbp+60h] BYREF
  char v59; // [rsp+380h] [rbp+280h] BYREF

  v5 = a3;
  v52 = a5;
  v8 = 0;
  memset_thunk_772440563353939046(&v40, 0, 0x40uLL);
  v35 = 0;
  v51[0] = 34078720LL;
  v38 = 0LL;
  v51[1] = &v59;
  v9 = 0LL;
  v36 = 0LL;
  Handle = 0LL;
  v50 = 0uLL;
  Atom = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
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
    v13 = a2[6];
    v14 = (char *)a2 + *(unsigned int *)((char *)&a2[6 * v5 + 4] + *(unsigned int *)((char *)a2 + v13 + 12));
    v15 = (char *)a2 + *(unsigned int *)((char *)a2 + v13 + 16);
    v16 = *((_DWORD *)v14 + 20);
    if ( v16 > 0xFFFE )
    {
      DbgPrintEx(
        51,
        0,
        "SXS: Assembly directory name stored in assembly information too long (%lu bytes) - ACTIVATION_CONTEXT_DATA at %p\n",
        v16,
        a2);
      v8 = -1073741562;
      goto LABEL_22;
    }
    if ( (v14[4] & 0x10) == 0 )
    {
      LOWORD(v49) = *((_WORD *)v14 + 40);
      WORD1(v49) = v49;
      v22 = *((unsigned int *)v14 + 21);
      v40 = a2;
      *((_QWORD *)&v49 + 1) = &v15[v22];
      LODWORD(v41) = v5;
      v44 = v58;
      v42 = 0LL;
      v43 = 34996224;
      v45 = 0;
      v47 = 0;
      v46 = 0LL;
      RtlpAssemblyStorageMapResolutionDefaultCallback(1LL, &v40, a5);
      if ( v47 )
      {
        v8 = -1073741536;
        goto LABEL_22;
      }
      if ( v45 )
      {
        v31 = RtlpProbeAssemblyStorageRootForAssembly(
                v23,
                (unsigned int)&v43,
                (unsigned int)&v49,
                (unsigned int)v51,
                (__int64)&v38,
                (__int64)&v36,
                (__int64)&Handle);
        v8 = v31;
        if ( v31 < 0 )
        {
          ShareAccess[0] = v31;
          DbgPrintEx(
            51,
            0,
            "SXS: Attempt to probe known root of assembly storage (\"%wZ\") failed; Status = 0x%08lx\n",
            &v43,
            *(_QWORD *)ShareAccess);
        }
        else
        {
          inserted = RtlpInsertAssemblyStorageMapEntry(a1, (unsigned int)v5, &v43, &Handle);
          v8 = inserted;
          if ( inserted < 0 )
            DbgPrintEx(
              51,
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
      v24 = v42;
      v25 = 0LL;
      v26 = v46;
      v48 = v42;
      v35 = 1;
      while ( 1 )
      {
        v27 = v25 == v26;
        if ( v25 >= v26 )
          goto LABEL_39;
        v40 = v24;
        v41 = v25;
        v44 = v58;
        v43 = 34996224;
        LOWORD(v42) = 0;
        RtlpAssemblyStorageMapResolutionDefaultCallback(2LL, &v40, v52);
        if ( (_BYTE)v42 )
          break;
        if ( BYTE1(v42) )
        {
          if ( !(_WORD)v43 )
            goto LABEL_51;
          v26 = v25 + 1;
        }
        if ( (_WORD)v43 )
        {
          v28 = (int)Handle;
          if ( Handle )
          {
            NtClose(Handle);
            Handle = 0LL;
          }
          v29 = RtlpProbeAssemblyStorageRootForAssembly(
                  v28,
                  (unsigned int)&v43,
                  (unsigned int)&v49,
                  (unsigned int)v51,
                  (__int64)&v38,
                  (__int64)&v36,
                  (__int64)&Handle);
          v8 = v29;
          if ( v29 >= 0 )
          {
            v27 = v25 == v26;
LABEL_39:
            if ( !v27 )
              goto LABEL_17;
LABEL_51:
            DbgPrintEx(
              51,
              0,
              "SXS: Unable to resolve storage root for assembly directory %wZ in %Iu tries\n",
              &v49,
              v25);
            v8 = -1072365564;
            goto LABEL_21;
          }
          if ( v29 != -1072365564 )
          {
            OpenOptions[0] = v29;
            DbgPrintEx(
              51,
              0,
              "SXS: Attempt to probe assembly storage root %wZ for assembly directory %wZ failed with status = 0x%08lx\n",
              &v43,
              &v49,
              *(_QWORD *)OpenOptions);
            goto LABEL_21;
          }
        }
        v24 = v48;
        ++v25;
      }
      v8 = -1073741536;
      goto LABEL_21;
    }
    v36 = v51;
    v17 = (const wchar_t *)&v15[*((unsigned int *)v14 + 6)];
    if ( !v17 )
      return (unsigned int)-1073741595;
    v18 = wcsrchr(v17, 0x5Cu);
    if ( !v18 )
    {
      v8 = -1073741595;
      goto LABEL_22;
    }
    v19 = 2 * (v18 - v17 + 2);
    if ( v19 > 0x208u )
    {
      WORD1(v38) = 2 * (v18 - v17 + 2);
      Atom = RtlpAllocateAtom();
      if ( !Atom )
      {
        v8 = -1073741801;
        goto LABEL_22;
      }
      v20 = &v38;
      v36 = &v38;
    }
    else
    {
      v20 = v36;
    }
    memmove((void *)v20[1], v17, v19 - 2LL);
    *(_WORD *)(v36[1] + 2 * ((unsigned __int64)v19 >> 1) - 2) = 0;
    *(_WORD *)v36 = v19 - 2;
LABEL_17:
    if ( !Handle )
    {
      v55 = 0LL;
      if ( (int)RtlInitUnicodeStringEx((__int64)&v55, (const wchar_t *)v36[1]) < 0
        || (int)RtlpDosPathNameToRelativeNtPathName(
                  2,
                  (unsigned __int16 *)&v55,
                  0LL,
                  (unsigned __int16 *)&v50,
                  0LL,
                  0LL,
                  (__int64)&v53) < 0 )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n",
          (const wchar_t *)v36[1]);
        v8 = -1073741766;
        goto LABEL_20;
      }
      v9 = *((_QWORD *)&v50 + 1);
      if ( (_WORD)v53 )
      {
        v30 = (void *)v54;
        v50 = v53;
      }
      else
      {
        v30 = 0LL;
        *(_QWORD *)&v54 = 0LL;
      }
      ObjectAttributes.RootDirectory = v30;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v50;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = NtOpenFile(&Handle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
      RtlReleaseRelativeName((__int64)&v53);
      if ( v8 < 0 )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
          (const wchar_t *)v36[1],
          v8);
        goto LABEL_20;
      }
    }
    v21 = RtlpInsertAssemblyStorageMapEntry(a1, (unsigned int)v5, v36, &Handle);
    v8 = v21;
    if ( v21 < 0 )
      DbgPrintEx(51, 0, "SXS: Storage resolution failed to insert entry to storage map; Status = 0x%08lx\n", v21);
    else
      v8 = 0;
LABEL_20:
    if ( !v35 )
      goto LABEL_22;
LABEL_21:
    v40 = v48;
    RtlpAssemblyStorageMapResolutionDefaultCallback(4LL, &v40, v52);
    goto LABEL_22;
  }
  v10 = 0;
LABEL_3:
  DbgPrintEx(
    51,
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
    RtlpSysVolFree(Atom);
  if ( Handle )
    NtClose(Handle);
  if ( v9 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9, v11);
  return (unsigned int)v8;
}
