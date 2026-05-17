/*
 * XREFs of LdrpSearchPath @ 0x1800754F0
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x1800036C0 (LdrpFindLoadedDllInternal.c)
 *     LdrpFindLoadedDll @ 0x18000A400 (LdrpFindLoadedDll.c)
 *     LdrpMapDllSearchPath @ 0x180074F30 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     EtwEventWriteNoRegistration @ 0x180066310 (EtwEventWriteNoRegistration.c)
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 *     RtlAppendUnicodeStringToString @ 0x180075AB0 (RtlAppendUnicodeStringToString.c)
 *     LdrpResolveDllName @ 0x180075B50 (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x1800760E0 (LdrpAllocateUnicodeString.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18007616C (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpComputeLazyDllPath @ 0x180083D90 (LdrpComputeLazyDllPath.c)
 *     RtlCopyUnicodeString @ 0x1800DC080 (RtlCopyUnicodeString.c)
 *     LdrpSaveLocationsSearched @ 0x180110310 (LdrpSaveLocationsSearched.c)
 *     RtlpLookupSafeCurDirList @ 0x1801146A8 (RtlpLookupSafeCurDirList.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
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
  int UnicodeString; // edi
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
  __int128 *v34; // rdx
  __int64 *v35; // rax
  __int64 *v36; // r14
  __int64 *i; // rsi
  __int64 Heap; // rax
  __int64 v39; // rsi
  unsigned __int16 v40; // cx
  char v42[16]; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int16 *v43; // [rsp+50h] [rbp-A8h]
  _WORD *v44; // [rsp+58h] [rbp-A0h]
  unsigned __int16 *v45; // [rsp+60h] [rbp-98h]
  __int64 v46; // [rsp+68h] [rbp-90h]
  bool *v47; // [rsp+70h] [rbp-88h]
  __int64 v48; // [rsp+78h] [rbp-80h]
  __int64 v49; // [rsp+80h] [rbp-78h] BYREF
  int v50; // [rsp+88h] [rbp-70h]
  int v51; // [rsp+8Ch] [rbp-6Ch]
  __int64 v52; // [rsp+90h] [rbp-68h]
  int v53; // [rsp+98h] [rbp-60h]
  int v54; // [rsp+9Ch] [rbp-5Ch]
  __int64 v55; // [rsp+A0h] [rbp-58h]
  int v56; // [rsp+A8h] [rbp-50h]
  int v57; // [rsp+ACh] [rbp-4Ch]

  v44 = a5;
  v46 = a6;
  v12 = a1;
  v47 = a8;
  v48 = a9;
  v43 = a1;
  *(_OWORD *)v42 = 0LL;
  v45 = 0LL;
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrfind.c", 1212, (__int64)"LdrpSearchPath", 3, "DLL name: %wZ\n", (char)a1);
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrfind.c", 1213, (__int64)"LdrpSearchPath", 5, "%wZ\n", (char)v12);
  if ( !*a2 )
  {
    UnicodeString = LdrpComputeLazyDllPath(a2);
    if ( UnicodeString < 0 )
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
  UnicodeString = LdrpAllocateUnicodeString(v42, *v12 + 2 + v13);
  if ( UnicodeString < 0 )
    goto LABEL_47;
  v20 = *(_WORD **)&v42[8];
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
          *(_WORD *)v42 = (_WORD)v24 - (_WORD)v20;
          RtlAppendUnicodeStringToString(v42, v12);
          v27 = LdrpResolveDllName((char)v42, 0);
          UnicodeString = v27;
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
                  if ( (unsigned __int16)(*a7 >> 1) > v40
                    && !(unsigned int)RtlCompareUnicodeStrings(
                                        *((unsigned __int16 **)a7 + 1),
                                        v40,
                                        (_BYTE *)i[3],
                                        v40,
                                        1) )
                  {
                    goto LABEL_38;
                  }
                }
              }
              Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, *a7 + 18LL);
              v45 = (unsigned __int16 *)Heap;
              v39 = Heap;
              if ( Heap )
              {
                *(_WORD *)Heap = 0;
                *(_WORD *)(Heap + 2) = *a7;
                *(_QWORD *)(Heap + 8) = Heap + 16;
                RtlCopyUnicodeString(Heap, a7);
                *(_WORD *)(*(_QWORD *)(v39 + 8) + 2 * ((unsigned __int64)*a7 >> 1)) = 0;
              }
              v12 = v43;
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
          *v44 = 0;
        }
      }
    }
    if ( v21 != a2[2] || a3 )
      break;
    v21 = *a2;
    v22 = *a2;
  }
  UnicodeString = -1073741515;
LABEL_38:
  v28 = v45;
  if ( v45 )
  {
    if ( UnicodeString < 0
      || (unsigned int)RtlCompareUnicodeStrings(
                         *((unsigned __int16 **)a7 + 1),
                         (unsigned __int64)*a7 >> 1,
                         *((_BYTE **)v45 + 1),
                         (unsigned __int64)*v45 >> 1,
                         1) )
    {
      v49 = *(_QWORD *)(LdrpImageEntry + 80);
      v31 = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
      v51 = 0;
      v50 = v31;
      v52 = *((_QWORD *)v28 + 1);
      v32 = *v28 + 2;
      v54 = 0;
      v53 = v32;
      if ( UnicodeString >= 0 )
      {
        v55 = *((_QWORD *)a7 + 1);
        v33 = *a7;
        v57 = 0;
        v56 = v33 + 2;
      }
      v34 = (__int128 *)"\v";
      if ( UnicodeString < 0 )
        v34 = (__int128 *)&CurDirDllLoadFailureError;
      EtwEventWriteNoRegistration((__int64)&UserLoaderGuid, v34, (UnicodeString >> 31) + 3, (__int64)&v49);
    }
    RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v28);
  }
  if ( *(_QWORD *)&v42[8] )
  {
    RtlpSysVolFree(*(__int64 *)&v42[8]);
    *(_QWORD *)&v42[8] = 0LL;
  }
  *(_DWORD *)v42 = 0;
  if ( UnicodeString >= 0 )
  {
    if ( a4 )
    {
      *a4 = v21;
      a4[1] = v22;
    }
    if ( v47 )
      *v47 = v21 == a2[2];
  }
  v29 = v48;
  if ( v48 && (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
    LdrpSaveLocationsSearched(a2, v22, v29);
LABEL_47:
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrfind.c",
    1533,
    (__int64)"LdrpSearchPath",
    4,
    "Status: 0x%08lx\n",
    UnicodeString);
  LdrpLogInternal((__int64)"minkernel\\ldr\\ldrfind.c", 1534, (__int64)"LdrpSearchPath", 6, "%x\n", UnicodeString);
  return (unsigned int)UnicodeString;
}
