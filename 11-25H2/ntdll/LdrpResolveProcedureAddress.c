/*
 * XREFs of LdrpResolveProcedureAddress @ 0x180013B70
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpHandleProtectedDelayload @ 0x180022ED0 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveDelayloadAddress @ 0x1800DC3E0 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     LdrpDestroyNode @ 0x180008BB8 (LdrpDestroyNode.c)
 *     LdrpReleaseTlsEntry @ 0x180008C0C (LdrpReleaseTlsEntry.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlReleaseActivationContext @ 0x18001A130 (RtlReleaseActivationContext.c)
 *     RtlCharToInteger @ 0x180020480 (RtlCharToInteger.c)
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
 *     LdrpUnmapModule @ 0x180024A44 (LdrpUnmapModule.c)
 *     LdrpLoadForwardedDll @ 0x18004A820 (LdrpLoadForwardedDll.c)
 *     LdrpFreeUnicodeString @ 0x18006F7E0 (LdrpFreeUnicodeString.c)
 *     LdrpCheckRedirection @ 0x180072D28 (LdrpCheckRedirection.c)
 *     RtlGuardCheckImageBase @ 0x180076B80 (RtlGuardCheckImageBase.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     strrchr @ 0x180128430 (strrchr.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpResolveProcedureAddress(__int64 a1, _QWORD *a2, const char *a3, ULONG a4, char a5, __int64 *a6)
{
  __int64 *v6; // r14
  unsigned __int64 v7; // rax
  char *v8; // rbx
  char v10; // r12
  unsigned int SizeOfHeapCommit_high; // r13d
  bool v12; // si
  unsigned __int64 v13; // r14
  char *v14; // rdi
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  int v17; // eax
  char *v18; // rdi
  int v19; // r11d
  int v20; // r9d
  int j; // eax
  int v22; // eax
  int v23; // r10d
  __int64 v24; // r8
  const char *v25; // rcx
  signed __int64 v26; // rdx
  unsigned __int8 v27; // al
  int v28; // eax
  ULONG v29; // ebx
  char *v30; // rbx
  int v31; // edi
  _QWORD *v32; // rbx
  void *v35; // rbx
  __int64 SizeOfHeapCommit_low; // r10
  unsigned int *v37; // rdx
  unsigned int i; // r8d
  __int64 v39; // r9
  __int64 v40; // rax
  ULONG v41; // ebx
  unsigned int v42; // eax
  char *v43; // rax
  char *v44; // r15
  unsigned __int64 v45; // rax
  char *v46; // rbx
  __int64 v47; // rax
  char **v48; // rdx
  PVOID *v49; // rcx
  char v50; // al
  _QWORD *v51; // rdi
  _QWORD *v52; // rsi
  _ACTIVATION_CONTEXT *v53; // rcx
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-B8h]
  ULONG Value; // [rsp+4Ch] [rbp-B4h] BYREF
  char **v57; // [rsp+50h] [rbp-B0h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A0h]
  ANSI_STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  __int64 v61; // [rsp+80h] [rbp-80h]
  __int128 v62; // [rsp+88h] [rbp-78h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  int v64[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v65; // [rsp+B0h] [rbp-50h]
  __int128 v66; // [rsp+C0h] [rbp-40h]
  __int128 v67; // [rsp+D0h] [rbp-30h]
  __int128 v68; // [rsp+E0h] [rbp-20h]
  __int128 v69; // [rsp+F0h] [rbp-10h]
  __int128 v70; // [rsp+100h] [rbp+0h]
  __int128 v71; // [rsp+110h] [rbp+10h]

  v6 = a6;
  v7 = a2[10];
  v8 = 0LL;
  v61 = (__int64)a2;
  v59 = a1;
  v57 = (char **)a6;
  Value = a4;
  BaseAddress = a2;
  v55 = 0;
  v66 = v7;
  SourceString = 0LL;
  *(_OWORD *)v64 = 0LL;
  v65 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( a1 && LdrpRedirectionModule && LdrpRedirectionModule != a1 )
  {
    if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
    {
      v10 = *(_BYTE *)(a1 + 104) & 1;
    }
    else if ( LdrpRedirectionCalloutFunc )
    {
      v50 = LdrpRedirectionCalloutFunc(*(_QWORD *)(a1 + 80));
      a1 = v59;
      v10 = v50;
    }
    else
    {
      v10 = 1;
    }
  }
  else
  {
    v10 = 0;
  }
  while ( 1 )
  {
    if ( v10 )
    {
      if ( a3 )
      {
        v40 = LdrpCheckRedirection(a1, BaseAddress, a3);
        if ( v40 != -4530927 )
        {
          *v6 = v40;
          return 0LL;
        }
      }
    }
    SizeOfHeapCommit_high = 0;
    v12 = 1;
    OutHeaders = 0LL;
    v13 = *((_QWORD *)BaseAddress + 6);
    v14 = (char *)v13;
    if ( (v13 & 3) != 0 )
    {
      v14 = (char *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
      v12 = (v13 & 1) == 0;
    }
    RtlImageNtHeaderEx(1u, v14, 0LL, &OutHeaders);
    if ( !OutHeaders )
      goto LABEL_35;
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      if ( !HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
        goto LABEL_66;
      SizeOfHeapCommit_low = LODWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
      if ( (_DWORD)SizeOfHeapCommit_low )
      {
        SizeOfHeapCommit_high = HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
        if ( v12 || (unsigned int)SizeOfHeapCommit_low < OutHeaders->OptionalHeader.SizeOfHeaders )
        {
          v8 = &v14[SizeOfHeapCommit_low];
          v17 = 0;
        }
        else
        {
          v37 = (unsigned int *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
          for ( i = 0; ; ++i )
          {
            if ( i >= OutHeaders->FileHeader.NumberOfSections )
            {
              v8 = 0LL;
              goto LABEL_66;
            }
            v39 = v37[3];
            if ( (unsigned int)SizeOfHeapCommit_low >= (unsigned int)v39
              && (unsigned int)SizeOfHeapCommit_low < (unsigned int)v39 + v37[4] )
            {
              break;
            }
            v37 += 10;
          }
          v8 = &v14[v37[5] - v39 + SizeOfHeapCommit_low];
          if ( !v8 )
            goto LABEL_66;
          v17 = 0;
        }
      }
      else
      {
        v17 = -1073741822;
      }
    }
    else
    {
      if ( Magic != 523 || !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
      {
LABEL_66:
        v17 = -1073741811;
        goto LABEL_15;
      }
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        SizeOfHeapCommit_high = OutHeaders->OptionalHeader.DataDirectory[0].Size;
        if ( v12 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
        {
          v8 = &v14[VirtualAddress];
          v17 = 0;
        }
        else
        {
          v8 = (char *)RtlAddressInSectionTable(OutHeaders, v14, VirtualAddress);
          v17 = 0;
          if ( !v8 )
            v17 = -1073741811;
        }
      }
      else
      {
        v17 = -1073741822;
      }
    }
LABEL_15:
    v18 = 0LL;
    if ( v17 >= 0 )
      v18 = v8;
    if ( !v18 )
      goto LABEL_35;
    if ( a3 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrsnap.c",
        838LL,
        "LdrpGetProcedureAddress",
        2LL,
        "Locating procedure \"%s\" by name\n",
        a3);
      v19 = 0;
      v20 = *((_DWORD *)v18 + 6) - 1;
      for ( j = v20; ; j = v19 + v20 )
      {
        v22 = j / 2;
        v23 = v22;
        if ( v20 < v19 )
          break;
        v24 = v22;
        v25 = a3;
        v26 = v13 + *(unsigned int *)(v13 + *((unsigned int *)v18 + 8) + 4LL * v22) - (_QWORD)a3;
        while ( 1 )
        {
          v27 = *v25;
          if ( *v25 != v25[v26] )
            break;
          ++v25;
          if ( !v27 )
          {
            v28 = 0;
            goto LABEL_25;
          }
        }
        v28 = v27 < (unsigned int)v25[v26] ? -1 : 1;
LABEL_25:
        if ( !v28 )
        {
          v29 = *(unsigned __int16 *)(v13 + *((unsigned int *)v18 + 9) + 2 * v24);
          goto LABEL_27;
        }
        if ( v28 >= 0 )
          v19 = v23 + 1;
        else
          v20 = v23 - 1;
      }
      LdrpLogInternal(
        "minkernel\\ldr\\ldrsnap.c",
        2286LL,
        "LdrpNameToOrdinal",
        1LL,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        a3,
        (const void *)v13);
LABEL_35:
      v31 = -1073741702;
      goto LABEL_36;
    }
    v41 = Value;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      856LL,
      "LdrpGetProcedureAddress",
      2LL,
      "Loading procedure 0x%lx by ordinal\n",
      Value);
    if ( !v41 )
    {
      v31 = -1073741811;
      goto LABEL_36;
    }
    v29 = v41 - *((_DWORD *)v18 + 4);
LABEL_27:
    if ( v29 >= *((_DWORD *)v18 + 5) )
      break;
    v30 = (char *)(v13 + *(unsigned int *)(v13 + *((unsigned int *)v18 + 7) + 4LL * (int)v29));
    v6 = (__int64 *)v57;
    *v57 = v30;
    if ( v30 < v18 || v30 >= &v18[SizeOfHeapCommit_high] )
    {
      v31 = 0;
      goto LABEL_37;
    }
    v42 = v55++;
    if ( v42 >= 0x20 || (a5 & 2) != 0 || (v43 = strrchr(v30, 46), (v44 = v43) == 0LL) || (v45 = v43 - v30, v45 > 0xFFFF) )
    {
LABEL_95:
      v31 = -1073741701;
      goto LABEL_38;
    }
    a3 = v44 + 1;
    SourceString.Buffer = v30;
    SourceString.Length = v45;
    SourceString.MaximumLength = v45;
    if ( *a3 == 35 )
    {
      if ( RtlCharToInteger(a3 + 1, 0, &Value) < 0 )
        goto LABEL_95;
      a3 = 0LL;
    }
    DWORD2(v65) = *((_DWORD *)BaseAddress + 68);
    v31 = LdrpLoadForwardedDll(&SourceString, (int)v64, v61, BaseAddress, 2, (__int64)&BaseAddress);
    if ( v31 < 0 )
      goto LABEL_38;
    v46 = (char *)BaseAddress;
    v47 = *((_QWORD *)BaseAddress + 19);
    if ( *(_DWORD *)(v47 + 24) != -1
      && (*(_BYTE *)(*(_QWORD *)v47 - 56LL) & 0x20) == 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 69, 0xFFFFFFFF) == 1 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v48 = (char **)*((_QWORD *)v46 + 20);
      if ( v48[1] != v46 + 160 || (v49 = (PVOID *)*((_QWORD *)v46 + 21), *v49 != v46 + 160) )
        __fastfail(3u);
      *v49 = v48;
      v48[1] = (char *)v49;
      v51 = (_QWORD *)*((_QWORD *)v46 + 19);
      v52 = (_QWORD *)*v51;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *((_WORD *)v46 + 55) )
        LdrpReleaseTlsEntry((__int64)v46, 0LL);
      LdrpUnmapModule(v46);
      v53 = (_ACTIVATION_CONTEXT *)*((_QWORD *)v46 + 17);
      if ( (unsigned __int64)&v53[-1].InlineStorageMapEntries[31] + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
        RtlReleaseActivationContext(v53);
      if ( *((_QWORD *)v46 + 10) )
        LdrpFreeUnicodeString(v46 + 72);
      RtlFreeHeap(LdrpHeap, 0, v46);
      if ( v52 == v51 )
        LdrpDestroyNode(v51);
    }
    a1 = v59;
    v8 = 0LL;
  }
  v31 = (a3 != 0LL) - 1073741512;
LABEL_36:
  v6 = (__int64 *)v57;
LABEL_37:
  if ( (a5 & 1) != 0 && v31 >= 0 )
  {
    if ( (a5 & 2) != 0 )
    {
      RtlGuardCheckImageBase(*((PVOID *)BaseAddress + 23));
    }
    else
    {
      v35 = (void *)*((_QWORD *)BaseAddress + 6);
      if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        v63 = 0LL;
        v62 = 0LL;
        if ( (unsigned __int64)v35 < *((_QWORD *)&xmmword_1801E9430 + 1)
          || (unsigned __int64)v35 >= *((_QWORD *)&xmmword_1801E9430 + 1)
                                    + (unsigned __int64)(unsigned int)qword_1801E9440 )
        {
          RtlpxLookupFunctionTable(v35);
        }
        else
        {
          v62 = xmmword_1801E9430;
        }
        if ( *((void **)&v62 + 1) != v35 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_38:
  if ( BYTE12(v71) )
  {
    v32 = (_QWORD *)(*(_QWORD *)v64 - 128LL);
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    if ( v32[10]-- != 1LL )
      v32 = 0LL;
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v32 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v32);
  }
  if ( v31 < 0 )
    *v6 = 0LL;
  return (unsigned int)v31;
}
