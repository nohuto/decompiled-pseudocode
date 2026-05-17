/*
 * XREFs of LdrpPreprocessDllName @ 0x1800161D0
 * Callers:
 *     LdrpFindLoadedDll @ 0x1800492A0 (LdrpFindLoadedDll.c)
 *     LdrpLoadDll @ 0x18004A090 (LdrpLoadDll.c)
 *     LdrpLoadForwardedDll @ 0x18004A820 (LdrpLoadForwardedDll.c)
 *     LdrLoadEnclaveModule @ 0x1800D8840 (LdrLoadEnclaveModule.c)
 *     LdrpEnclaveAddDependentModule @ 0x180134834 (LdrpEnclaveAddDependentModule.c)
 *     LdrpAddRedirectedFunction @ 0x1801621C4 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     ApiSetResolveToHost @ 0x180016CA0 (ApiSetResolveToHost.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180016E20 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     LdrpGetFullPath @ 0x180070F10 (LdrpGetFullPath.c)
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A3370 (RtlDetermineDosPathNameType_Ustr.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800CBB70 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     NtdllpReallocateStringRoutine @ 0x1801204A8 (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrpPreprocessDllName(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, int *a4)
{
  int *v4; // r12
  char v5; // si
  unsigned __int16 *v7; // r15
  int FullPath; // ebx
  int v9; // ebx
  struct _PEB *v10; // r13
  char v11; // r14
  __int64 v12; // rsi
  void *ApiSetMap; // r15
  _DWORD *SharedData; // rcx
  __int64 v15; // rcx
  __int64 v16; // r12
  _DWORD *v17; // rcx
  unsigned __int16 *v18; // rsi
  _DWORD *v19; // rcx
  __int64 v20; // rsi
  size_t v21; // rax
  unsigned __int16 v22; // dx
  unsigned __int16 v23; // bx
  unsigned int v24; // edx
  unsigned __int16 v25; // bx
  __int64 v26; // rax
  unsigned __int16 *v27; // r14
  unsigned int v28; // ecx
  const void **v29; // r15
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  size_t v33; // rsi
  unsigned int v34; // edx
  const void **v35; // r14
  unsigned __int16 v36; // si
  _WORD *v37; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rax
  int v39; // edx
  _DWORD *v40; // rcx
  __int16 v41; // cx
  unsigned __int16 *v42; // r14
  unsigned __int64 v43; // rdx
  _WORD *v44; // rax
  int v45; // eax
  unsigned int v46; // edx
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int16 *v50; // rax
  __int16 v51; // cx
  unsigned int v52; // ecx
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  _WORD *i; // rax
  int v59; // eax
  int v60; // r14d
  __int64 FullPathName_Ustr; // rbx
  unsigned int v62; // ebx
  void *v63; // rsi
  unsigned int v64; // r14d
  void *v65; // r12
  _WORD *v66; // rsi
  __int64 v67; // rcx
  unsigned int v68; // r15d
  __int64 v69; // rax
  void *Atom; // r14
  unsigned int v71; // ebx
  void *v72; // rsi
  char *v73; // rcx
  unsigned int v74; // r14d
  void *v75; // rsi
  char v76; // [rsp+50h] [rbp-19h] BYREF
  char v77; // [rsp+51h] [rbp-18h]
  __int128 v78; // [rsp+58h] [rbp-11h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-1h] BYREF
  _OWORD v80[4]; // [rsp+78h] [rbp+Fh] BYREF

  v4 = a4;
  v5 = 0;
  v7 = a1;
  FullPath = 0;
  if ( (*a4 & 0x800008) == 0 )
  {
    v76 = 0;
    v77 = 0;
    v9 = a3 + 88;
    v80[0] = 0LL;
    v10 = NtCurrentPeb();
    if ( !a3 )
      v9 = 0;
    v11 = 1;
    *(_OWORD *)Src = 0LL;
    v12 = 2147353476LL;
    ApiSetMap = v10->ApiSetMap;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v15 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v15 = 2147353476LL;
    v16 = 2147353477LL;
    if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
    {
      v73 = (unsigned int)RtlGetCurrentServiceSessionId()
          ? (char *)NtCurrentPeb()->SharedData + 555
          : (char *)2147353477;
      if ( (*v73 & 0x20) != 0 )
        LdrpLogEtwEvent(5328, 0LL, 0, 0, a1, 0LL);
    }
    FullPath = ApiSetResolveToHost((_DWORD)ApiSetMap, (_DWORD)a1, v9, (unsigned int)&v76, (__int64)Src);
    if ( FullPath >= 0 && v76 )
    {
      if ( !LOWORD(Src[0]) )
      {
        LODWORD(v18) = (_DWORD)a1;
        LdrpLogDllState(0LL, a1, 5330LL);
        goto LABEL_13;
      }
      v40 = NtCurrentPeb()->SharedData;
      if ( v40 && *v40 )
        v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v16 = (__int64)NtCurrentPeb()->SharedData + 555;
        v18 = a1;
        if ( (*(_BYTE *)v16 & 0x20) != 0 )
        {
          v41 = 5329;
LABEL_156:
          LdrpLogEtwEvent(v41, 0LL, 0, 0, v18, 0LL);
          goto LABEL_13;
        }
        goto LABEL_13;
      }
    }
    else
    {
      v17 = NtCurrentPeb()->SharedData;
      if ( v17 && *v17 )
        v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v16 = (__int64)NtCurrentPeb()->SharedData + 555;
        v18 = a1;
        if ( (*(_BYTE *)v16 & 0x20) != 0 )
        {
          v41 = 5331;
          goto LABEL_156;
        }
LABEL_13:
        if ( !v76 )
        {
          v39 = (int)v18;
          if ( FullPath < 0 )
            goto LABEL_43;
          goto LABEL_73;
        }
        if ( !LOWORD(Src[0]) )
        {
          FullPath = -1073740671;
          goto LABEL_43;
        }
        *a2 = 0;
        v19 = NtCurrentPeb()->SharedData;
        if ( v19 && *v19 )
          v20 = (__int64)NtCurrentPeb()->SharedData + 30;
        else
          v20 = 2147352624LL;
        LOWORD(v21) = 0;
        v22 = 0;
        v78 = 0LL;
        if ( v20 )
        {
          v21 = 2 * wcslen((const wchar_t *)v20);
          a3 = 65534LL;
          if ( v21 >= 0xFFFE )
            LOWORD(v21) = -4;
          v23 = v21;
          v22 = v21;
        }
        else
        {
          v23 = v78;
          a3 = 65534LL;
        }
        if ( (_WORD)v21 )
        {
          v24 = *a2 + 2 + v22;
          if ( v24 <= a2[1] )
          {
LABEL_23:
            memmove((void *)(*((_QWORD *)a2 + 1) + *a2), (const void *)v20, v23);
            v25 = *a2 + v23;
            v26 = *((_QWORD *)a2 + 1);
            *a2 = v25;
            *(_WORD *)(v26 + 2 * ((unsigned __int64)v25 >> 1)) = 0;
            goto LABEL_24;
          }
          if ( v24 <= 0xFFFE )
          {
            v68 = (v24 + 63) & 0xFFFFFFC0;
            if ( v68 > 0xFFFE )
              v68 = 65534;
            if ( *((unsigned __int16 **)a2 + 1) == a2 + 8 )
            {
              Atom = (void *)RtlpAllocateAtom(v68);
              if ( Atom )
              {
                if ( *a2 )
                  memmove(Atom, *((const void **)a2 + 1), *a2);
                *((_QWORD *)a2 + 1) = Atom;
                a2[1] = v68;
                goto LABEL_23;
              }
            }
            else
            {
              v69 = NtdllpReallocateStringRoutine(v68);
              if ( v69 )
              {
                *((_QWORD *)a2 + 1) = v69;
                a2[1] = v68;
                goto LABEL_23;
              }
            }
          }
        }
LABEL_24:
        v27 = a2 + 1;
        v28 = *a2 + 22;
        if ( v28 <= a2[1] )
        {
LABEL_25:
          v29 = (const void **)(a2 + 4);
          v30 = *((_QWORD *)a2 + 1) + *a2;
          *(_OWORD *)v30 = *(_OWORD *)L"\\SYSTEM32\\";
          *(_DWORD *)(v30 + 16) = *(_DWORD *)L"2\\";
          v31 = (unsigned __int16)(*a2 + 20);
          v32 = *((_QWORD *)a2 + 1);
          *a2 = v31;
          *(_WORD *)(v32 + 2 * (v31 >> 1)) = 0;
          goto LABEL_26;
        }
        if ( v28 > 0xFFFE )
        {
          v29 = (const void **)(a2 + 4);
        }
        else
        {
          v71 = (*a2 + 85) & 0xFFFFFFC0;
          if ( v71 > 0xFFFE )
          {
            v71 = 65534;
            v27 = a2 + 1;
          }
          v29 = (const void **)(a2 + 4);
          if ( *((unsigned __int16 **)a2 + 1) != a2 + 8 )
          {
            v72 = (void *)NtdllpReallocateStringRoutine(v71);
            if ( !v72 )
            {
              v29 = (const void **)(a2 + 4);
              v27 = a2 + 1;
              goto LABEL_26;
            }
LABEL_144:
            *v29 = v72;
            v27 = a2 + 1;
            a2[1] = v71;
            goto LABEL_25;
          }
          v72 = (void *)RtlpAllocateAtom(v71);
          if ( v72 )
          {
            if ( *a2 )
              memmove(v72, *v29, *a2);
            goto LABEL_144;
          }
        }
LABEL_26:
        v33 = LOWORD(Src[0]);
        FullPath = 0;
        v34 = *a2 + LOWORD(Src[0]) + 2;
        if ( v34 <= *v27 )
        {
          v35 = v29;
LABEL_28:
          memmove((char *)*v35 + *a2, Src[1], v33);
          v36 = *a2 + v33;
          v37 = *v35;
          *a2 = v36;
          v37[(unsigned __int64)v36 >> 1] = 0;
          ProcessParameters = v10->ProcessParameters;
          if ( ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0 )
          {
            v11 = 1;
            v39 = (int)a2;
          }
          else
          {
            v11 = 0;
            v39 = (int)a2;
          }
LABEL_73:
          if ( !v11 || LdrpIsSecureProcess )
            goto LABEL_43;
          v60 = RtlDosApplyFileIsolationRedirection_Ustr(
                  1,
                  v39,
                  (unsigned int)L"\b\n",
                  0,
                  (__int64)v80,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
          if ( v60 >= 0 )
          {
            v77 = 1;
            Src[0] = 0LL;
            v76 = 0;
            *(_QWORD *)&v78 = 0LL;
            while ( 1 )
            {
              FullPathName_Ustr = (unsigned int)RtlGetFullPathName_Ustr(
                                                  v80,
                                                  a2[1],
                                                  *((_QWORD *)a2 + 1),
                                                  Src,
                                                  &v76,
                                                  &v78);
              if ( v76
                || (unsigned int)(FullPathName_Ustr - 1) > 0xFFFD
                || (_DWORD)v78 == 5 && (DWORD1(v78) & LdrpIllegalCWDDevices) != 0 )
              {
                break;
              }
              if ( (unsigned int)FullPathName_Ustr < a2[1] )
              {
                *a2 = FullPathName_Ustr;
                break;
              }
              v66 = (_WORD *)RtlpAllocateAtom(FullPathName_Ustr);
              if ( !v66 )
                break;
              v67 = *((_QWORD *)a2 + 1);
              if ( a2 + 8 != (unsigned __int16 *)v67 )
                RtlpSysVolFree(v67);
              a2[8] = 0;
              *((_QWORD *)a2 + 1) = v66;
              *a2 = 0;
              a2[1] = FullPathName_Ustr;
              *v66 = 0;
            }
            if ( *((_QWORD *)&v80[0] + 1) )
              RtlpSysVolFree(*((__int64 *)&v80[0] + 1));
            goto LABEL_42;
          }
          v77 = 0;
          if ( v60 != -1072365560 )
LABEL_42:
            FullPath = v60;
LABEL_43:
          v7 = a1;
          if ( FullPath < 0 )
            goto LABEL_89;
          v5 = v77;
          v4 = a4;
          goto LABEL_45;
        }
        if ( v34 > 0xFFFE )
        {
          FullPath = -1073741562;
          goto LABEL_43;
        }
        v64 = (v34 + 63) & 0xFFFFFFC0;
        if ( v64 > 0xFFFE )
        {
          v64 = 65534;
          v29 = (const void **)(a2 + 4);
        }
        if ( *v29 == a2 + 8 )
        {
          v65 = (void *)RtlpAllocateAtom(v64);
          if ( !v65 )
            goto LABEL_107;
          if ( *a2 )
            memmove(v65, *v29, *a2);
        }
        else
        {
          v65 = (void *)NtdllpReallocateStringRoutine(v64);
          if ( !v65 )
          {
LABEL_107:
            FullPath = -1073741801;
            goto LABEL_43;
          }
        }
        *v29 = v65;
        a2[1] = v64;
        v35 = (const void **)(a2 + 4);
        goto LABEL_28;
      }
    }
    LODWORD(v18) = (_DWORD)a1;
    goto LABEL_13;
  }
LABEL_45:
  v42 = v7;
  if ( *a2 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrutil.c",
      2792,
      (int)"LdrpPreprocessDllName",
      2,
      "DLL %wZ was redirected to %wZ by %s\n",
      (char)v7);
    v59 = *v4 | 0x200;
    *v4 = v59;
    if ( v5 )
      *v4 = v59 | 4;
    v42 = a2;
    goto LABEL_56;
  }
  v43 = *((_QWORD *)v7 + 1);
  v44 = (_WORD *)(v43 + *v7);
  do
  {
    if ( (unsigned __int64)--v44 < v43 )
    {
      *v4 |= 0x20u;
      FullPath = 0;
      v45 = *v7;
      if ( !(_WORD)v45 )
        goto LABEL_56;
      v46 = v45 + *a2 + 2;
      if ( v46 <= a2[1] )
        goto LABEL_55;
      if ( v46 > 0xFFFE )
      {
        FullPath = -1073741562;
        goto LABEL_56;
      }
      v62 = (v46 + 63) & 0xFFFFFFC0;
      if ( v62 > 0xFFFE )
        v62 = 65534;
      if ( *((unsigned __int16 **)a2 + 1) == a2 + 8 )
      {
        v63 = (void *)RtlpAllocateAtom(v62);
        if ( !v63 )
          goto LABEL_100;
        if ( *a2 )
          memmove(v63, *((const void **)a2 + 1), *a2);
      }
      else
      {
        v63 = (void *)NtdllpReallocateStringRoutine(v62);
        if ( !v63 )
        {
LABEL_100:
          FullPath = -1073741801;
          goto LABEL_56;
        }
      }
      a2[1] = v62;
      FullPath = 0;
      *((_QWORD *)a2 + 1) = v63;
LABEL_55:
      memmove((void *)(*((_QWORD *)a2 + 1) + *a2), *((const void **)v7 + 1), *v7);
      v47 = (unsigned __int16)(*a2 + *v7);
      v48 = *((_QWORD *)a2 + 1);
      *a2 = v47;
      *(_WORD *)(v48 + 2 * (v47 >> 1)) = 0;
      goto LABEL_56;
    }
  }
  while ( *v44 != 92 && *v44 != 47 );
  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(v7, v43, a3, 65534LL) != 5 )
  {
    FullPath = LdrpGetFullPath(v7, a2);
    if ( FullPath >= 0 )
    {
      *v4 |= 0x600u;
      goto LABEL_57;
    }
LABEL_89:
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrutil.c",
      2853,
      (int)"LdrpPreprocessDllName",
      0,
      "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
      (char)v7);
    return (unsigned int)FullPath;
  }
  FullPath = LdrpAppendUnicodeStringToFilenameBuffer(a2, v7);
LABEL_56:
  if ( FullPath < 0 )
    goto LABEL_89;
LABEL_57:
  v49 = *((_QWORD *)v42 + 1);
  v50 = (__int16 *)(v49 + *v42);
  while ( 2 )
  {
    if ( (unsigned __int64)--v50 < v49 )
    {
LABEL_62:
      FullPath = 0;
      v52 = *a2 + 10;
      if ( v52 <= a2[1] )
      {
LABEL_63:
        *(_QWORD *)(*a2 + *((_QWORD *)a2 + 1)) = *(_QWORD *)L".DLL";
        v53 = (unsigned __int16)(*a2 + 8);
        v54 = *((_QWORD *)a2 + 1);
        *a2 = v53;
        *(_WORD *)(v54 + 2 * (v53 >> 1)) = 0;
        goto LABEL_67;
      }
      if ( v52 > 0xFFFE )
      {
        FullPath = -1073741562;
        goto LABEL_67;
      }
      v74 = (*a2 + 73) & 0xFFFFFFC0;
      if ( v74 > 0xFFFE )
        v74 = 65534;
      if ( *((unsigned __int16 **)a2 + 1) == a2 + 8 )
      {
        v75 = (void *)RtlpAllocateAtom(v74);
        if ( !v75 )
          goto LABEL_163;
        if ( *a2 )
          memmove(v75, *((const void **)a2 + 1), *a2);
      }
      else
      {
        v75 = (void *)NtdllpReallocateStringRoutine(v74);
        if ( !v75 )
        {
LABEL_163:
          FullPath = -1073741801;
          goto LABEL_67;
        }
      }
      *((_QWORD *)a2 + 1) = v75;
      a2[1] = v74;
      goto LABEL_63;
    }
    v51 = *v50;
    if ( *v50 != 46 )
    {
      if ( v51 == 47 || v51 == 92 )
        goto LABEL_62;
      continue;
    }
    break;
  }
  v55 = *((_QWORD *)a2 + 1);
  v56 = *a2;
  for ( i = (_WORD *)(v56 + v55 - 2); (unsigned __int64)i >= v55; *a2 = v56 )
  {
    if ( *i != 46 )
      break;
    LOWORD(v56) = v56 - 2;
    --i;
  }
  i[1] = 0;
LABEL_67:
  if ( FullPath < 0 )
    goto LABEL_89;
  return (unsigned int)FullPath;
}
