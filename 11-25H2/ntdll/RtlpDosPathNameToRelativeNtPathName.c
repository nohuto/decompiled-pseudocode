/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0
 * Callers:
 *     RtlGetImageFileMachines @ 0x180015120 (RtlGetImageFileMachines.c)
 *     LdrpGetNtPathFromDosPath @ 0x180070DF0 (LdrpGetNtPathFromDosPath.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A1A30 (RtlpCreateNewDirectoryReference.c)
 *     LdrpMapResourceFile @ 0x1800A2100 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A2500 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A2650 (RtlDosSearchPath_Ustr.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800AA648 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpIsReparsePoint @ 0x1800D02AC (LdrpIsReparsePoint.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x1800D98B0 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800DB3A0 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800DD270 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800DF400 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800E2898 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800E34EC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800E6800 (RtlDosPathNameToNtPathName_U.c)
 *     RtlpMUIEnumerateFolder @ 0x18010DBCC (RtlpMUIEnumerateFolder.c)
 *     LdrAddDllDirectory @ 0x18010EA40 (LdrAddDllDirectory.c)
 *     LdrpCheckAppDirType @ 0x18011B140 (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A1730 (RtlpReferenceCurrentDirectory.c)
 *     RtlPrefixUnicodeString @ 0x1800B3990 (RtlPrefixUnicodeString.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName(
        int a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        _QWORD *a5,
        _QWORD *a6,
        __int64 a7)
{
  unsigned int v7; // eax
  unsigned int v8; // ebx
  _QWORD *v9; // rsi
  unsigned __int16 *v11; // rdi
  _WORD *v13; // rcx
  _BYTE *Heap; // r15
  unsigned int v15; // r13d
  unsigned int FullPathName_Ustr; // esi
  int v17; // edx
  _WORD *v18; // r14
  __int16 v19; // ax
  __int16 v20; // ax
  int v21; // ecx
  __m128i v22; // xmm1
  __int16 v23; // ax
  const wchar_t *v24; // r9
  unsigned int v25; // r13d
  __int64 v26; // rax
  int v27; // ebp
  const void *v28; // rdx
  size_t v29; // r8
  size_t v30; // r13
  unsigned __int16 v31; // bp
  unsigned int v32; // eax
  __int64 v33; // r8
  char *v34; // rdx
  unsigned __int16 v35; // bp
  unsigned __int64 v36; // r14
  void *v37; // r13
  unsigned __int16 v38; // bp
  unsigned int v39; // eax
  const wchar_t *v40; // r14
  _QWORD *v41; // rcx
  bool v42; // zf
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rbp
  _WORD *v46; // rcx
  __int16 v47; // si
  __int16 v49; // dx
  unsigned int v50; // r15d
  __int64 v51; // rax
  unsigned __int16 v52; // ax
  unsigned __int16 v53; // dx
  unsigned __int64 v54; // rdx
  int v55; // ecx
  unsigned int v56; // eax
  unsigned __int16 v57; // bp
  unsigned __int64 v58; // rcx
  const void *v59; // rdx
  unsigned __int64 v60; // r14
  unsigned __int16 v61; // bp
  unsigned int v62; // eax
  __int16 v63; // ax
  __int16 v64; // ax
  __int16 v65; // ax
  __int16 v66; // ax
  __int16 v67; // ax
  __int16 v68; // ax
  unsigned __int64 v69; // rdx
  _WORD *v70; // rcx
  _WORD *v71; // rax
  char v72[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v73; // [rsp+34h] [rbp-2A4h]
  __int64 v74; // [rsp+38h] [rbp-2A0h]
  const wchar_t *v75; // [rsp+40h] [rbp-298h]
  _QWORD *v76; // [rsp+48h] [rbp-290h]
  __int64 v77; // [rsp+50h] [rbp-288h]
  __int64 v78; // [rsp+58h] [rbp-280h] BYREF
  __m128i v79; // [rsp+60h] [rbp-278h] BYREF
  void *v80; // [rsp+70h] [rbp-268h]
  _QWORD *v81; // [rsp+78h] [rbp-260h]
  _BYTE v82[528]; // [rsp+80h] [rbp-258h] BYREF

  v7 = *a2;
  v8 = 0;
  v9 = a6;
  v11 = a3;
  v73 = a1;
  v81 = a5;
  v76 = a6;
  v78 = 0LL;
  v72[0] = 0;
  v79 = 0LL;
  if ( v7 <= 8 )
    goto LABEL_4;
  v13 = (_WORD *)*((_QWORD *)a2 + 1);
  if ( *v13 != 92 || (v49 = v13[1], v49 != 92) && v49 != 63 || v13[2] != 63 || v13[3] != 92 )
  {
    LOBYTE(a1) = v73;
LABEL_4:
    if ( a6 )
      *a6 = 0LL;
    Heap = v82;
    v15 = 520;
    if ( (a1 & 1) != 0 )
    {
      v22 = *(__m128i *)a2;
      v18 = (_WORD *)*((_QWORD *)a2 + 1);
      v17 = 2;
      v79 = v22;
      v74 = 4LL;
      LOWORD(FullPathName_Ustr) = _mm_cvtsi128_si32(v22);
      if ( (unsigned __int16)FullPathName_Ustr >= 2u && (*v18 == 92 || *v18 == 47) )
      {
        if ( (unsigned __int16)FullPathName_Ustr >= 4u && ((v66 = v18[1], v66 == 92) || v66 == 47) )
        {
          if ( (unsigned __int16)FullPathName_Ustr >= 6u && ((v67 = v18[2], v67 == 46) || v67 == 63) )
          {
            if ( (unsigned __int16)FullPathName_Ustr >= 8u && ((v68 = v18[3], v68 == 92) || v68 == 47) )
            {
              v21 = 6;
            }
            else
            {
              v21 = 1;
              if ( (_WORD)FullPathName_Ustr == 6 )
                v21 = 7;
            }
          }
          else
          {
            v21 = 1;
          }
        }
        else
        {
          v21 = 4;
        }
      }
      else if ( (unsigned __int16)FullPathName_Ustr >= 4u && *v18 && v18[1] == 58 )
      {
        if ( (unsigned __int16)FullPathName_Ustr >= 6u && ((v23 = v18[2], v23 == 92) || v23 == 47) )
          v21 = 2;
        else
          v21 = 3;
      }
      else
      {
        v21 = 5;
      }
      LODWORD(v78) = v21;
      goto LABEL_29;
    }
    while ( 1 )
    {
      FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, v15, Heap, v9, v72, &v78);
      if ( !FullPathName_Ustr || v72[0] )
      {
        v8 = -1073741773;
        goto LABEL_57;
      }
      if ( FullPathName_Ustr <= v15 )
        break;
      if ( (v73 & 4) == 0 && ((v73 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
        goto LABEL_90;
      Heap = (_BYTE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
      if ( !Heap )
        return 3221225495LL;
      v15 = FullPathName_Ustr;
      v9 = v76;
    }
    v17 = 2;
    v79.m128i_i16[0] = FullPathName_Ustr;
    v79.m128i_i16[1] = v15;
    v79.m128i_i64[1] = (__int64)Heap;
    v18 = Heap;
    v74 = 4LL;
    if ( (unsigned __int16)FullPathName_Ustr < 2u )
      goto LABEL_92;
    v19 = *(_WORD *)Heap;
    if ( *(_WORD *)Heap == 92 || v19 == 47 )
    {
      if ( (unsigned __int16)FullPathName_Ustr >= 4u && ((v63 = *((_WORD *)Heap + 1), v63 == 92) || v63 == 47) )
      {
        if ( (unsigned __int16)FullPathName_Ustr >= 6u && ((v64 = *((_WORD *)Heap + 2), v64 == 46) || v64 == 63) )
        {
          if ( (unsigned __int16)FullPathName_Ustr >= 8u && ((v65 = *((_WORD *)Heap + 3), v65 == 92) || v65 == 47) )
          {
            v21 = 6;
          }
          else
          {
            v21 = 1;
            if ( (_WORD)FullPathName_Ustr == 6 )
              v21 = 7;
          }
        }
        else
        {
          v21 = 1;
        }
      }
      else
      {
        v21 = 4;
      }
      goto LABEL_29;
    }
    if ( (unsigned __int16)FullPathName_Ustr >= 4u && v19 && *((_WORD *)Heap + 1) == 58 )
    {
      if ( (unsigned __int16)FullPathName_Ustr >= 6u && ((v20 = *((_WORD *)Heap + 2), v20 == 92) || v20 == 47) )
        v21 = 2;
      else
        v21 = 3;
    }
    else
    {
LABEL_92:
      v21 = 5;
    }
LABEL_29:
    if ( v21 == 5 )
      goto LABEL_30;
    if ( v21 == 1 )
    {
      v24 = (const wchar_t *)&RtlpDosDevicesUncPrefix;
      LOWORD(v77) = 4;
      v17 = 14;
LABEL_32:
      v25 = v17 + (unsigned __int16)FullPathName_Ustr;
      v75 = v24;
      if ( v25 > 0xFFFE )
      {
LABEL_90:
        v8 = -1073741562;
        goto LABEL_57;
      }
      if ( v11 )
      {
        if ( v25 <= v11[1] )
        {
LABEL_37:
          v27 = *v24;
          if ( (_WORD)v27 )
          {
            if ( (unsigned int)*v11 + v27 <= v11[1] )
            {
              v28 = (const void *)*((_QWORD *)v24 + 1);
              v29 = *v24;
              v30 = v29;
              v80 = (void *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1));
              memmove(v80, v28, v29);
              v31 = *v11 + v27;
              v32 = v11[1];
              *v11 = v31;
              if ( (unsigned int)v31 + 1 < v32 )
                *((_WORD *)v80 + (v30 >> 1)) = 0;
            }
          }
          v33 = v74;
          v34 = (char *)&v18[(unsigned __int64)v74 / 2];
          v35 = FullPathName_Ustr - v77;
          if ( (_WORD)FullPathName_Ustr != (_WORD)v77 )
          {
            if ( *v11 + (unsigned int)v35 > v11[1] )
            {
              v33 = v74;
            }
            else
            {
              v36 = v35;
              v37 = (void *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1));
              memmove(v37, v34, v35);
              v38 = *v11 + v35;
              v39 = v11[1];
              v33 = v74;
              *v11 = v38;
              if ( (unsigned int)v38 + 1 < v39 )
                *((_WORD *)v37 + (v36 >> 1)) = 0;
            }
          }
          if ( v81 )
            *v81 = v11;
          v40 = v75;
          *(_WORD *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1)) = 0;
          v41 = v76;
          if ( v76 )
          {
            v34 = (char *)*v76;
            if ( *v76 )
              *v76 = &v34[*((_QWORD *)v11 + 1) + *v40 - v33 - (_QWORD)Heap];
          }
          if ( a7 )
          {
            v42 = (_DWORD)v78 == 5;
            *(_DWORD *)a7 = 0;
            *(_QWORD *)(a7 + 8) = 0LL;
            *(_QWORD *)(a7 + 16) = 0LL;
            *(_QWORD *)(a7 + 24) = 0LL;
            if ( v42 )
            {
              LOBYTE(v41) = 1;
              v43 = RtlpReferenceCurrentDirectory(v41, v34);
              v45 = v43;
              if ( v43 )
              {
                LOBYTE(v44) = 1;
                if ( !(unsigned __int8)RtlPrefixUnicodeString(v43 + 24, &v79, v44) )
                  goto LABEL_127;
                v46 = (_WORD *)(*(unsigned __int16 *)(v45 + 24) + *v40 + *((_QWORD *)v11 + 1) - v74);
                *(_QWORD *)(a7 + 8) = v46;
                v47 = FullPathName_Ustr - *(_WORD *)(v45 + 24);
                *(_WORD *)a7 = v47;
                if ( *v46 == 92 )
                {
                  v47 -= 2;
                  *(_WORD *)a7 = v47;
                  *(_QWORD *)(a7 + 8) = v46 + 1;
                }
                v42 = (v73 & 2) == 0;
                *(_WORD *)(a7 + 2) = v47;
                if ( v42 )
                {
LABEL_127:
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v45, 0xFFFFFFFF) == 1 )
                  {
                    NtClose(*(HANDLE *)(v45 + 8));
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v45);
                  }
                }
                else
                {
                  *(_QWORD *)(a7 + 24) = v45;
                  *(_QWORD *)(a7 + 16) = *(_QWORD *)(v45 + 8);
                }
              }
              else
              {
                RtlLeaveCriticalSection(&FastPebLock);
              }
            }
          }
          goto LABEL_57;
        }
        if ( !a4 )
        {
          v8 = -1073741562;
          goto LABEL_57;
        }
      }
      else if ( !a4 )
      {
        v8 = -1073741811;
        goto LABEL_57;
      }
      v26 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
      *((_QWORD *)a4 + 1) = v26;
      if ( v26 )
      {
        v18 = (_WORD *)v79.m128i_i64[1];
        v11 = a4;
        LOWORD(FullPathName_Ustr) = v79.m128i_i16[0];
        v24 = v75;
        *a4 = 0;
        a4[1] = v25;
        goto LABEL_37;
      }
      v8 = -1073741801;
LABEL_57:
      if ( Heap != v82 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
      return v8;
    }
    if ( v21 != 6 )
    {
LABEL_30:
      LOWORD(v77) = 0;
      v17 = 10;
      v74 = 0LL;
    }
    else
    {
      v77 = 8LL;
      v74 = 8LL;
    }
    v24 = L"\b\n";
    goto LABEL_32;
  }
  v50 = v7 + 2;
  if ( v7 + 2 > 0xFFFE )
    return (unsigned int)-1073741562;
  if ( !a3 )
  {
    if ( !a4 )
      return (unsigned int)-1073741811;
    goto LABEL_68;
  }
  if ( v50 <= a3[1] )
  {
    v52 = *a3;
    goto LABEL_70;
  }
  if ( !a4 )
    return (unsigned int)-1073741562;
LABEL_68:
  v51 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
  *((_QWORD *)a4 + 1) = v51;
  if ( v51 )
  {
    *a4 = 0;
    v11 = a4;
    a4[1] = v50;
    v52 = 0;
LABEL_70:
    v53 = v52;
    if ( (unsigned int)v52 + 8 <= v11[1] )
    {
      v54 = *((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)v52 >> 1);
      *(_QWORD *)v54 = *(_QWORD *)L"\\??\\";
      v55 = (unsigned __int16)(*v11 + 8);
      v56 = v11[1];
      *v11 = v55;
      if ( v55 + 1 < v56 )
        *(_WORD *)(v54 + 8) = 0;
      v53 = *v11;
    }
    v57 = *(_DWORD *)a2 - 8;
    if ( (unsigned __int16)*(_DWORD *)a2 != 8 && v57 + (unsigned int)v53 <= v11[1] )
    {
      v58 = v53;
      v59 = (const void *)(*((_QWORD *)a2 + 1) + 8LL);
      v60 = v57;
      v76 = (_QWORD *)(*((_QWORD *)v11 + 1) + 2 * (v58 >> 1));
      memmove(v76, v59, v57);
      v61 = *v11 + v57;
      v62 = v11[1];
      *v11 = v61;
      if ( (unsigned int)v61 + 1 < v62 )
        *((_WORD *)v76 + (v60 >> 1)) = 0;
    }
    if ( a5 )
      *a5 = v11;
    *(_WORD *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1)) = 0;
    if ( a6 )
    {
      v69 = *((_QWORD *)v11 + 1);
      v70 = (_WORD *)(v69 + 2 * ((unsigned __int64)*v11 >> 1));
      while ( 1 )
      {
        v71 = v70--;
        if ( (unsigned __int64)v70 < v69 )
          break;
        if ( *v70 == 92 )
        {
          if ( v71 && *v71 )
          {
            *a6 = v71;
            goto LABEL_81;
          }
          break;
        }
      }
      *a6 = 0LL;
    }
LABEL_81:
    if ( a7 )
    {
      *(_DWORD *)a7 = 0;
      *(_QWORD *)(a7 + 8) = 0LL;
      *(_QWORD *)(a7 + 16) = 0LL;
      *(_QWORD *)(a7 + 24) = 0LL;
    }
    return v8;
  }
  return (unsigned int)-1073741801;
}
