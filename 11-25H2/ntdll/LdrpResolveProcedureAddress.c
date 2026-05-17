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

__int64 __fastcall LdrpResolveProcedureAddress(__int64 a1, __int64 a2, char *a3, ULONG a4, char a5, __int64 *a6)
{
  __int64 *v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  char v10; // r12
  int v11; // r13d
  bool v12; // si
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int16 v16; // ax
  __int64 v17; // rax
  int v18; // eax
  char *v19; // rdi
  int v20; // r11d
  int v21; // r9d
  int j; // eax
  int v23; // eax
  int v24; // r10d
  __int64 v25; // r8
  char *v26; // rcx
  unsigned __int8 v27; // al
  int v28; // eax
  signed int v29; // ebx
  char *v30; // rbx
  int v31; // edi
  __int64 v32; // rbx
  unsigned __int64 v35; // rbx
  __int64 v36; // r10
  unsigned int i; // r8d
  __int64 v38; // r9
  __int64 v39; // rax
  ULONG v40; // ebx
  unsigned int v41; // eax
  char *v42; // rax
  char *v43; // r15
  unsigned __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // rcx
  char v49; // al
  _QWORD *v50; // rdi
  _QWORD *v51; // rsi
  __int64 v52; // rcx
  __int64 v53; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v54; // [rsp+48h] [rbp-B8h]
  ULONG Value; // [rsp+4Ch] [rbp-B4h] BYREF
  char **v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A0h]
  STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int128 v61; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+98h] [rbp-68h]
  __int128 v63; // [rsp+A0h] [rbp-60h]
  __int128 v64; // [rsp+B0h] [rbp-50h]
  __int128 v65; // [rsp+C0h] [rbp-40h]
  __int128 v66; // [rsp+D0h] [rbp-30h]
  __int128 v67; // [rsp+E0h] [rbp-20h]
  __int128 v68; // [rsp+F0h] [rbp-10h]
  __int128 v69; // [rsp+100h] [rbp+0h]
  __int128 v70; // [rsp+110h] [rbp+10h]

  v6 = a6;
  v7 = *(_QWORD *)(a2 + 80);
  v8 = 0LL;
  v60 = a2;
  v58 = a1;
  v56 = (char **)a6;
  Value = a4;
  v53 = a2;
  v54 = 0;
  v65 = v7;
  SourceString = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  if ( a1 && LdrpRedirectionModule && LdrpRedirectionModule != a1 )
  {
    if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
    {
      v10 = *(_BYTE *)(a1 + 104) & 1;
    }
    else if ( LdrpRedirectionCalloutFunc )
    {
      v49 = LdrpRedirectionCalloutFunc(*(_QWORD *)(a1 + 80));
      a1 = v58;
      v10 = v49;
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
        v39 = LdrpCheckRedirection(a1, v53, a3);
        if ( v39 != -4530927 )
        {
          *v6 = v39;
          return 0LL;
        }
      }
    }
    v11 = 0;
    v12 = 1;
    v57 = 0LL;
    v13 = *(_QWORD *)(v53 + 48);
    v14 = v13;
    if ( (v13 & 3) != 0 )
    {
      v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      v12 = (v13 & 1) == 0;
    }
    RtlImageNtHeaderEx(1LL, v14, 0LL, &v57);
    if ( !v57 )
      goto LABEL_35;
    v16 = *(_WORD *)(v57 + 24);
    v15 = 267LL;
    if ( v16 == 267 )
    {
      if ( !*(_DWORD *)(v57 + 116) )
        goto LABEL_66;
      v36 = *(unsigned int *)(v57 + 120);
      if ( (_DWORD)v36 )
      {
        v11 = *(_DWORD *)(v57 + 124);
        if ( v12 || (unsigned int)v36 < *(_DWORD *)(v57 + 84) )
        {
          v8 = v14 + v36;
          v18 = 0;
        }
        else
        {
          v15 = *(unsigned __int16 *)(v57 + 20) + v57 + 24;
          for ( i = 0; ; ++i )
          {
            if ( i >= *(unsigned __int16 *)(v57 + 6) )
            {
              v8 = 0LL;
              goto LABEL_66;
            }
            v38 = *(unsigned int *)(v15 + 12);
            if ( (unsigned int)v36 >= (unsigned int)v38 && (unsigned int)v36 < (int)v38 + *(_DWORD *)(v15 + 16) )
              break;
            v15 += 40LL;
          }
          v8 = v14 + *(unsigned int *)(v15 + 20) - v38 + v36;
          if ( !v8 )
            goto LABEL_66;
          v18 = 0;
        }
      }
      else
      {
        v18 = -1073741822;
      }
    }
    else
    {
      v15 = 523LL;
      if ( v16 != 523 || !*(_DWORD *)(v57 + 132) )
      {
LABEL_66:
        v18 = -1073741811;
        goto LABEL_15;
      }
      v17 = *(unsigned int *)(v57 + 136);
      if ( (_DWORD)v17 )
      {
        v11 = *(_DWORD *)(v57 + 140);
        if ( v12 || (unsigned int)v17 < *(_DWORD *)(v57 + 84) )
        {
          v8 = v14 + v17;
          v18 = 0;
        }
        else
        {
          v8 = RtlAddressInSectionTable(v57, v14, (unsigned int)v17);
          v18 = 0;
          if ( !v8 )
            v18 = -1073741811;
        }
      }
      else
      {
        v18 = -1073741822;
      }
    }
LABEL_15:
    v19 = 0LL;
    if ( v18 >= 0 )
      v19 = (char *)v8;
    if ( !v19 )
      goto LABEL_35;
    if ( a3 )
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrsnap.c",
        838,
        (int)"LdrpGetProcedureAddress",
        2,
        "Locating procedure \"%s\" by name\n",
        (char)a3);
      v20 = 0;
      v21 = *((_DWORD *)v19 + 6) - 1;
      for ( j = v21; ; j = v20 + v21 )
      {
        v23 = j / 2;
        v24 = v23;
        if ( v21 < v20 )
          break;
        v25 = v23;
        v26 = a3;
        v15 = v13 + *(unsigned int *)(v13 + *((unsigned int *)v19 + 8) + 4LL * v23) - (_QWORD)a3;
        while ( 1 )
        {
          v27 = *v26;
          if ( *v26 != v26[v15] )
            break;
          ++v26;
          if ( !v27 )
          {
            v28 = 0;
            goto LABEL_25;
          }
        }
        v28 = v27 < (unsigned __int8)v26[v15] ? -1 : 1;
LABEL_25:
        if ( !v28 )
        {
          v29 = *(unsigned __int16 *)(v13 + *((unsigned int *)v19 + 9) + 2 * v25);
          goto LABEL_27;
        }
        if ( v28 >= 0 )
          v20 = v24 + 1;
        else
          v21 = v24 - 1;
      }
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrsnap.c",
        2286,
        (int)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        (char)a3);
LABEL_35:
      v31 = -1073741702;
      goto LABEL_36;
    }
    v40 = Value;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      856,
      (int)"LdrpGetProcedureAddress",
      2,
      "Loading procedure 0x%lx by ordinal\n",
      Value);
    if ( !v40 )
    {
      v31 = -1073741811;
      goto LABEL_36;
    }
    v29 = v40 - *((_DWORD *)v19 + 4);
LABEL_27:
    if ( (unsigned int)v29 >= *((_DWORD *)v19 + 5) )
      break;
    v15 = v29;
    v30 = (char *)(v13 + *(unsigned int *)(v13 + *((unsigned int *)v19 + 7) + 4LL * v29));
    v6 = (__int64 *)v56;
    *v56 = v30;
    if ( v30 < v19 || v30 >= &v19[v11] )
    {
      v31 = 0;
      goto LABEL_37;
    }
    v41 = v54++;
    if ( v41 >= 0x20 || (a5 & 2) != 0 || (v42 = strrchr(v30, 46), (v43 = v42) == 0LL) || (v44 = v42 - v30, v44 > 0xFFFF) )
    {
LABEL_95:
      v31 = -1073741701;
      goto LABEL_38;
    }
    a3 = v43 + 1;
    SourceString.Buffer = v30;
    SourceString.Length = v44;
    SourceString.MaximumLength = v44;
    if ( *a3 == 35 )
    {
      if ( RtlCharToInteger(a3 + 1, 0, &Value) < 0 )
        goto LABEL_95;
      a3 = 0LL;
    }
    DWORD2(v64) = *(_DWORD *)(v53 + 272);
    v31 = LdrpLoadForwardedDll(&SourceString, 2, (__int64)&v53);
    if ( v31 < 0 )
      goto LABEL_38;
    v45 = v53;
    v46 = *(_QWORD *)(v53 + 152);
    if ( *(_DWORD *)(v46 + 24) != -1
      && (*(_BYTE *)(*(_QWORD *)v46 - 56LL) & 0x20) == 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)(v53 + 276), 0xFFFFFFFF) == 1 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpModuleDatatableLock);
      v47 = *(_QWORD *)(v45 + 160);
      if ( *(_QWORD *)(v47 + 8) != v45 + 160 || (v48 = *(_QWORD **)(v45 + 168), *v48 != v45 + 160) )
        __fastfail(3u);
      *v48 = v47;
      *(_QWORD *)(v47 + 8) = v48;
      v50 = *(_QWORD **)(v45 + 152);
      v51 = (_QWORD *)*v50;
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( *(_WORD *)(v45 + 110) )
        LdrpReleaseTlsEntry(v45, 0LL);
      LdrpUnmapModule(v45);
      v52 = *(_QWORD *)(v45 + 136);
      if ( (unsigned __int64)(v52 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        RtlReleaseActivationContext(v52);
      if ( *(_QWORD *)(v45 + 80) )
        LdrpFreeUnicodeString(v45 + 72);
      RtlFreeHeap(LdrpHeap, 0LL, v45);
      if ( v51 == v50 )
        LdrpDestroyNode((__int64)v50);
    }
    a1 = v58;
    v8 = 0LL;
  }
  v31 = (a3 != 0LL) - 1073741512;
LABEL_36:
  v6 = (__int64 *)v56;
LABEL_37:
  if ( (a5 & 1) != 0 && v31 >= 0 )
  {
    if ( (a5 & 2) != 0 )
    {
      LOBYTE(v15) = 1;
      RtlGuardCheckImageBase(*(_QWORD *)(v53 + 184), v15);
    }
    else
    {
      v35 = *(_QWORD *)(v53 + 48);
      if ( qword_1801EC4F8 && (dword_1801EC4DC & 1) == 0 )
      {
        v62 = 0LL;
        v61 = 0LL;
        if ( v35 < *((_QWORD *)&xmmword_1801E9430 + 1)
          || v35 >= *((_QWORD *)&xmmword_1801E9430 + 1) + (unsigned __int64)(unsigned int)qword_1801E9440 )
        {
          RtlpxLookupFunctionTable(v35, &v61);
        }
        else
        {
          v61 = xmmword_1801E9430;
        }
        if ( *((_QWORD *)&v61 + 1) != v35 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_38:
  if ( BYTE12(v70) )
  {
    v32 = v63 - 128;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpCachedPathLock);
    if ( (*(_QWORD *)(v32 + 80))-- != 1LL )
      v32 = 0LL;
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v32 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v32);
  }
  if ( v31 < 0 )
    *v6 = 0LL;
  return (unsigned int)v31;
}
