/*
 * XREFs of LdrpSearchPath @ 0x180070410
 * Callers:
 *     LdrpFindLoadedDll @ 0x1800492A0 (LdrpFindLoadedDll.c)
 *     LdrpMapDllSearchPath @ 0x18006FE50 (LdrpMapDllSearchPath.c)
 *     LdrpFindLoadedDllInternal @ 0x1800CBC80 (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18006F818 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     LdrpResolveDllName @ 0x180070A70 (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x180071000 (LdrpAllocateUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpComputeLazyDllPath @ 0x1800AC120 (LdrpComputeLazyDllPath.c)
 *     EtwEventWriteNoRegistration @ 0x1800D1F90 (EtwEventWriteNoRegistration.c)
 *     RtlCopyUnicodeString @ 0x1800DB5F0 (RtlCopyUnicodeString.c)
 *     LdrpSaveLocationsSearched @ 0x180113080 (LdrpSaveLocationsSearched.c)
 *     RtlpLookupSafeCurDirList @ 0x1801175A0 (RtlpLookupSafeCurDirList.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpSearchPath(
        unsigned __int16 *a1,
        __int16 **a2,
        char a3,
        __int16 **a4,
        _WORD *a5,
        __int64 a6,
        unsigned __int16 *a7,
        bool *a8,
        __int64 a9)
{
  unsigned __int16 *v12; // r14
  unsigned int v13; // edx
  __int16 *v14; // r9
  __int16 *v15; // rcx
  __int16 v16; // ax
  int v17; // r8d
  __int16 v18; // ax
  int v19; // edi
  _WORD *v20; // rbp
  __int16 *v21; // r15
  __int16 *v22; // rbx
  __int16 v23; // ax
  _WORD *v24; // rcx
  bool v25; // si
  __int16 v26; // ax
  int v27; // eax
  unsigned __int16 *v28; // rsi
  __int64 v29; // rsi
  int v31; // eax
  int v32; // eax
  int v33; // eax
  const char *v34; // rdx
  __int64 *v35; // rax
  __int64 *v36; // r14
  __int64 *i; // rsi
  __int64 Heap; // rax
  __int64 v39; // rsi
  unsigned __int16 v40; // cx
  int Format; // [rsp+20h] [rbp-D8h]
  __int128 v43; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int16 *v44; // [rsp+50h] [rbp-A8h]
  _WORD *v45; // [rsp+58h] [rbp-A0h]
  unsigned __int16 *v46; // [rsp+60h] [rbp-98h]
  __int64 v47; // [rsp+68h] [rbp-90h]
  bool *v48; // [rsp+70h] [rbp-88h]
  __int64 v49; // [rsp+78h] [rbp-80h]
  __int64 v50; // [rsp+80h] [rbp-78h] BYREF
  int v51; // [rsp+88h] [rbp-70h]
  int v52; // [rsp+8Ch] [rbp-6Ch]
  __int64 v53; // [rsp+90h] [rbp-68h]
  int v54; // [rsp+98h] [rbp-60h]
  int v55; // [rsp+9Ch] [rbp-5Ch]
  __int64 v56; // [rsp+A0h] [rbp-58h]
  int v57; // [rsp+A8h] [rbp-50h]
  int v58; // [rsp+ACh] [rbp-4Ch]

  v45 = a5;
  v47 = a6;
  v12 = a1;
  v48 = a8;
  v49 = a9;
  v44 = a1;
  v43 = 0LL;
  v46 = 0LL;
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1212, (int)"LdrpSearchPath", 3, "DLL name: %wZ\n", (char)a1);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1213, (int)"LdrpSearchPath", 5, "%wZ\n", (char)v12);
  if ( !*a2 )
  {
    v19 = LdrpComputeLazyDllPath(a2);
    if ( v19 < 0 )
      goto LABEL_47;
  }
  v13 = 0;
  if ( a4 )
  {
    v14 = *a4;
    if ( *a4 )
    {
      v15 = a4[1];
      goto LABEL_7;
    }
  }
  v14 = a2[2];
  if ( v14 )
    goto LABEL_6;
  do
  {
    v14 = *a2;
LABEL_6:
    v15 = v14;
LABEL_7:
    if ( *v15 )
    {
      do
      {
        v16 = *v15;
        v17 = (int)v15;
        do
        {
          if ( v16 == 59 )
            break;
          v16 = v15[1];
          ++v15;
        }
        while ( v16 );
        if ( (int)v15 - v17 > v13 )
          v13 = (_DWORD)v15 - v17;
        v18 = *v15;
        if ( *v15 == 59 )
        {
          v18 = v15[1];
          ++v15;
        }
      }
      while ( v18 );
    }
  }
  while ( v14 == a2[2] && !a3 );
  v19 = LdrpAllocateUnicodeString(&v43, *v12 + 2 + v13);
  if ( v19 < 0 )
    goto LABEL_47;
  v20 = (_WORD *)*((_QWORD *)&v43 + 1);
  if ( a4 && (v21 = *a4) != 0LL )
  {
    v22 = a4[1];
  }
  else
  {
    v21 = a2[2];
    if ( !v21 )
      v21 = *a2;
    v22 = v21;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v23 = *v22;
      if ( !*v22 )
        break;
      if ( v23 == 59 )
      {
        ++v22;
      }
      else
      {
        v24 = v20;
        v25 = v22 == a2[1];
        do
        {
          ++v22;
          if ( v23 == 59 )
            break;
          *v24++ = v23;
          v23 = *v22;
        }
        while ( *v22 );
        if ( v24 != v20 )
        {
          v26 = *(v24 - 1);
          if ( v26 != 92 && v26 != 47 )
          {
            *v24 = 92;
            LOWORD(v24) = (_WORD)v24 + 2;
          }
          LOWORD(v43) = (_WORD)v24 - (_WORD)v20;
          RtlAppendUnicodeStringToString(&v43, v12);
          v27 = LdrpResolveDllName((char)&v43, 0);
          v19 = v27;
          if ( v25 )
          {
            if ( v27 >= 0 )
            {
              v35 = (__int64 *)RtlpLookupSafeCurDirList();
              v36 = v35;
              if ( v35 )
              {
                for ( i = (__int64 *)*v35; i != v36; i = (__int64 *)*i )
                {
                  v40 = *((_WORD *)i + 8) >> 1;
                  if ( (unsigned __int16)(*a7 >> 1) > v40 )
                  {
                    LOBYTE(Format) = 1;
                    if ( !(unsigned int)RtlCompareUnicodeStrings(*((_QWORD *)a7 + 1), v40, i[3], v40, Format) )
                      goto LABEL_38;
                  }
                }
              }
              Heap = RtlAllocateHeap((char *)LdrpHeap, NtdllBaseTag + 0x40000, *a7 + 18LL);
              v46 = (unsigned __int16 *)Heap;
              v39 = Heap;
              if ( Heap )
              {
                *(_WORD *)Heap = 0;
                *(_WORD *)(Heap + 2) = *a7;
                *(_QWORD *)(Heap + 8) = Heap + 16;
                RtlCopyUnicodeString(Heap, a7);
                *(_WORD *)(*(_QWORD *)(v39 + 8) + 2 * ((unsigned __int64)*a7 >> 1)) = 0;
              }
              v12 = v44;
              goto LABEL_35;
            }
          }
          else if ( v27 >= 0 )
          {
            goto LABEL_38;
          }
          if ( v27 != -1073741515 && v27 != -1073741790 && v27 != -1073741757 && v27 != -1073741715 )
            goto LABEL_38;
LABEL_35:
          *v45 = 0;
        }
      }
    }
    if ( v21 != a2[2] || a3 )
      break;
    v21 = *a2;
    v22 = *a2;
  }
  v19 = -1073741515;
LABEL_38:
  v28 = v46;
  if ( v46 )
  {
    if ( v19 < 0
      || (LOBYTE(Format) = 1,
          (unsigned int)RtlCompareUnicodeStrings(
                          *((_QWORD *)a7 + 1),
                          (unsigned __int64)*a7 >> 1,
                          *((_QWORD *)v46 + 1),
                          (unsigned __int64)*v46 >> 1,
                          Format)) )
    {
      v50 = *(_QWORD *)(LdrpImageEntry + 80);
      v31 = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
      v52 = 0;
      v51 = v31;
      v53 = *((_QWORD *)v28 + 1);
      v32 = *v28 + 2;
      v55 = 0;
      v54 = v32;
      if ( v19 >= 0 )
      {
        v56 = *((_QWORD *)a7 + 1);
        v33 = *a7;
        v58 = 0;
        v57 = v33 + 2;
      }
      v34 = "\v";
      if ( v19 < 0 )
        v34 = (const char *)&CurDirDllLoadFailureError;
      EtwEventWriteNoRegistration(&UserLoaderGuid, v34, (unsigned int)((v19 >> 31) + 3), &v50);
    }
    RtlFreeHeap(LdrpHeap, 0LL, v28);
  }
  if ( *((_QWORD *)&v43 + 1) )
  {
    RtlpSysVolFree(*((__int64 *)&v43 + 1));
    *((_QWORD *)&v43 + 1) = 0LL;
  }
  LODWORD(v43) = 0;
  if ( v19 >= 0 )
  {
    if ( a4 )
    {
      *a4 = v21;
      a4[1] = v22;
    }
    if ( v48 )
      *v48 = v21 == a2[2];
  }
  v29 = v49;
  if ( v49 && LdrpIsSecurityEtwLoggingEnabled() )
    LdrpSaveLocationsSearched(a2, v22, v29);
LABEL_47:
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1533, (int)"LdrpSearchPath", 4, "Status: 0x%08lx\n", v19);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1534, (int)"LdrpSearchPath", 6, "%x\n", v19);
  return (unsigned int)v19;
}
