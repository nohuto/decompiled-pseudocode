/*
 * XREFs of LdrpSnapModule @ 0x180056F30
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     LdrpReportError @ 0x180005D20 (LdrpReportError.c)
 *     LdrpDoPostSnapWork @ 0x1800073C0 (LdrpDoPostSnapWork.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18000BF10 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     RtlCharToInteger @ 0x1800647F0 (RtlCharToInteger.c)
 *     RtlAddressInSectionTable @ 0x1800649C0 (RtlAddressInSectionTable.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180066194 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogDllState @ 0x180070D00 (LdrpLogDllState.c)
 *     LdrpCheckRedirection @ 0x180072128 (LdrpCheckRedirection.c)
 *     CompatCachepLookupCdb @ 0x180072A0C (CompatCachepLookupCdb.c)
 *     LdrpHandlePendingModuleReplaced @ 0x1800D916C (LdrpHandlePendingModuleReplaced.c)
 *     LdrpFreeReplacedModule @ 0x1800D91A8 (LdrpFreeReplacedModule.c)
 *     LdrpLogError @ 0x1800FB40C (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x1801185C0 (LdrpGenericExceptionFilter.c)
 *     strrchr @ 0x180126950 (strrchr.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rdi
  __int64 v3; // rdx
  char *v4; // r8
  int appended; // r12d
  unsigned int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 *v12; // r13
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rax
  bool v15; // bl
  unsigned __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // eax
  __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rax
  char **v22; // rcx
  char *v23; // rbx
  char *v24; // r9
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 *v27; // r13
  __int64 v28; // rax
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rsi
  unsigned __int16 *v31; // rbx
  unsigned __int16 *v32; // r13
  int v33; // r8d
  int v34; // r11d
  int v35; // r10d
  unsigned __int16 *v36; // rax
  signed __int64 v37; // rdx
  unsigned __int8 v38; // cl
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  unsigned __int64 *v42; // rcx
  __int64 v43; // rdi
  char *v44; // rbx
  char *v45; // r13
  __int64 v46; // r15
  __int64 v47; // r14
  char *v48; // rax
  unsigned __int16 v49; // si
  int v50; // eax
  unsigned __int64 v51; // r14
  int v52; // r12d
  bool v53; // bl
  unsigned __int64 v54; // rsi
  __int64 v55; // rdi
  int v56; // eax
  __int16 v57; // ax
  __int64 v58; // rax
  char *v59; // rsi
  int v60; // r11d
  int v61; // r10d
  int k; // eax
  int v63; // eax
  int v64; // r9d
  __int64 v65; // r8
  char *v66; // rcx
  unsigned __int64 v67; // rdx
  unsigned __int8 v68; // al
  int v69; // eax
  ULONG v70; // eax
  char *v71; // rbx
  __int64 v72; // r9
  unsigned int *v73; // r8
  unsigned int j; // r10d
  __int64 v75; // rdx
  __int64 v76; // r8
  unsigned int *v77; // rdx
  unsigned int i; // r10d
  __int64 v79; // r9
  char v80; // cl
  ULONG v81; // ebx
  int v82; // ebx
  __int128 *v84; // r13
  int v85; // eax
  char *v86; // rdx
  int v87; // ebx
  int v88; // [rsp+40h] [rbp-278h]
  char *v89; // [rsp+48h] [rbp-270h]
  __int64 v90; // [rsp+50h] [rbp-268h] BYREF
  int v91; // [rsp+58h] [rbp-260h]
  __int64 v92; // [rsp+60h] [rbp-258h]
  __int128 v93; // [rsp+68h] [rbp-250h] BYREF
  __int64 v94; // [rsp+78h] [rbp-240h]
  int v95; // [rsp+80h] [rbp-238h]
  ULONG Value; // [rsp+84h] [rbp-234h] BYREF
  int v97; // [rsp+88h] [rbp-230h]
  unsigned int v98; // [rsp+8Ch] [rbp-22Ch]
  unsigned int v99; // [rsp+90h] [rbp-228h]
  __int64 v100; // [rsp+98h] [rbp-220h]
  unsigned __int64 *v101; // [rsp+A0h] [rbp-218h]
  __int64 v102; // [rsp+A8h] [rbp-210h] BYREF
  __int128 *v103; // [rsp+B0h] [rbp-208h]
  char *v104; // [rsp+B8h] [rbp-200h]
  char *v105; // [rsp+C0h] [rbp-1F8h]
  unsigned __int64 v106; // [rsp+C8h] [rbp-1F0h] BYREF
  unsigned __int64 v107; // [rsp+D0h] [rbp-1E8h]
  __int64 v108; // [rsp+D8h] [rbp-1E0h]
  char *v109; // [rsp+E0h] [rbp-1D8h]
  __int64 *v110; // [rsp+E8h] [rbp-1D0h]
  __int64 v111; // [rsp+F0h] [rbp-1C8h]
  char *v112; // [rsp+F8h] [rbp-1C0h]
  __int64 v113; // [rsp+100h] [rbp-1B8h]
  char *v114; // [rsp+108h] [rbp-1B0h]
  char *v115; // [rsp+110h] [rbp-1A8h]
  __int64 v116; // [rsp+118h] [rbp-1A0h]
  char *v117; // [rsp+120h] [rbp-198h]
  __int64 v118; // [rsp+128h] [rbp-190h]
  const void *v119; // [rsp+130h] [rbp-188h] BYREF
  __int16 *v120; // [rsp+138h] [rbp-180h]
  __int16 v121; // [rsp+140h] [rbp-178h] BYREF
  char v122[254]; // [rsp+142h] [rbp-176h] BYREF
  _QWORD v123[8]; // [rsp+240h] [rbp-78h] BYREF

  v1 = a1;
  v108 = a1;
  v118 = a1;
  v91 = 0;
  v89 = 0LL;
  v2 = *(_QWORD *)(a1 + 56);
  v100 = v2;
  v113 = *(_QWORD *)(v2 + 48);
  v103 = (__int128 *)(v2 + 72);
  LdrpLogDllState(v113, v2 + 72, 5286LL);
  LdrpHandlePendingModuleReplaced(v1);
  memset_thunk_772440563353939046(v123, 0, 0x40uLL);
  v95 = 0;
  appended = 0;
  v88 = 0;
  v98 = 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v1 + 128);
    if ( v6 >= *(_DWORD *)(v1 + 104) )
    {
      if ( appended >= 0 )
      {
        appended = LdrpDoPostSnapWork(v1, v3, (__int64)v4);
        if ( appended >= 0 )
        {
          LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
          *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
        }
      }
      goto LABEL_164;
    }
    v7 = v6;
    v8 = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8LL * v6);
    v9 = v8;
    v92 = v8;
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 176);
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 32) & 0x80000) == 0 && *(_QWORD *)(v10 + 56) != v8 )
        {
          v9 = *(_QWORD *)(v10 + 56);
          v92 = v9;
          *(_QWORD *)(v10 + 56) = v8;
        }
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v7) != v9 )
    {
      LdrpFreeReplacedModule();
      *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v7) = v9;
    }
    v11 = *(_QWORD *)(v1 + 136);
    v3 = *(unsigned int *)(v11 + 20 * v7);
    v12 = (unsigned __int64 *)(v113 + v3);
    v13 = (unsigned __int64 *)(v113 + *(unsigned int *)(v11 + 20 * v7 + 16));
    v101 = v13;
    if ( !(_DWORD)v3 || (unsigned int)v3 > *(_DWORD *)(v2 + 64) )
      v12 = v13;
    if ( v9 )
      break;
LABEL_52:
    ++*(_DWORD *)(v1 + 128);
  }
  v14 = *(_QWORD *)(v9 + 48);
  v104 = (char *)v14;
  v15 = 1;
  v16 = v14;
  v90 = 0LL;
  v17 = 0LL;
  if ( (v14 & 3) != 0 )
  {
    v16 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
    v15 = (v14 & 1) == 0;
  }
  v18 = RtlImageNtHeaderEx(1LL, v16, 0LL, &v90);
  if ( !v90 )
    goto LABEL_19;
  v19 = *(_WORD *)(v90 + 24);
  if ( v19 == 267 )
  {
    if ( *(_DWORD *)(v90 + 116) )
    {
      v76 = *(unsigned int *)(v90 + 120);
      if ( (_DWORD)v76 )
      {
        v91 = *(_DWORD *)(v90 + 124);
        if ( v15 || (unsigned int)v76 < *(_DWORD *)(v90 + 84) )
        {
          v17 = v16 + v76;
          v18 = 0;
        }
        else
        {
          v77 = (unsigned int *)(*(unsigned __int16 *)(v90 + 20) + v90 + 24);
          for ( i = 0; i < *(unsigned __int16 *)(v90 + 6); ++i )
          {
            v79 = v77[3];
            if ( (unsigned int)v76 >= (unsigned int)v79 && (unsigned int)v76 < (unsigned int)v79 + v77[4] )
            {
              v17 = v76 + v16 + v77[5] - v79;
              break;
            }
            v77 += 10;
          }
          v18 = 0;
          if ( !v17 )
            v18 = -1073741811;
          appended = v88;
        }
      }
      else
      {
        v18 = -1073741822;
      }
      goto LABEL_19;
    }
  }
  else if ( v19 == 523 && *(_DWORD *)(v90 + 132) )
  {
    v20 = *(unsigned int *)(v90 + 136);
    if ( (_DWORD)v20 )
    {
      v91 = *(_DWORD *)(v90 + 140);
      if ( v15 || (unsigned int)v20 < *(_DWORD *)(v90 + 84) )
      {
        v17 = v16 + v20;
        v18 = 0;
      }
      else
      {
        v17 = RtlAddressInSectionTable(v90, v16, (unsigned int)v20);
        v18 = 0;
        if ( !v17 )
          v18 = -1073741811;
      }
    }
    else
    {
      v18 = -1073741822;
    }
    goto LABEL_19;
  }
  v18 = -1073741811;
LABEL_19:
  v4 = 0LL;
  if ( v18 >= 0 )
    v4 = (char *)v17;
  v105 = v4;
  if ( !v4 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrsnap.c",
      3382,
      (__int64)"LdrpSnapModule",
      0,
      "DLL \"%wZ\" does not contain an export table\n",
      v92 + 72);
    appended = -1073741701;
    goto LABEL_164;
  }
  v21 = 0LL;
  v22 = (char **)v123;
  v23 = v104;
  do
  {
    if ( !*v22 )
      break;
    if ( v104 == *v22 )
      break;
    v21 = (unsigned int)(v21 + 1);
    ++v22;
  }
  while ( (unsigned int)v21 < 8 );
  if ( (_DWORD)v21 == 8 || !v123[v21] )
  {
    if ( qword_1801EA508 && (dword_1801EA4EC & 1) == 0 )
    {
      v93 = 0LL;
      v94 = 0LL;
      if ( (unsigned __int64)v104 < *((_QWORD *)&xmmword_1801E7440 + 1)
        || (unsigned __int64)v104 >= *((_QWORD *)&xmmword_1801E7440 + 1)
                                   + (unsigned __int64)(unsigned int)qword_1801E7450 )
      {
        RtlpxLookupFunctionTable((unsigned __int64)v104, (__int64)&v93);
        v4 = v105;
      }
      else
      {
        v93 = xmmword_1801E7440;
        v94 = qword_1801E7450;
      }
      if ( *((char **)&v93 + 1) != v23 )
        goto LABEL_173;
    }
    v80 = v95;
    v123[v95] = v23;
    v95 = (v80 + 1) & 7;
  }
  v24 = &v4[v91];
  v112 = v24;
  v3 = (__int64)&v23[*((unsigned int *)v4 + 7)];
  v111 = v3;
  v25 = *((_DWORD *)v4 + 6);
  v99 = v25;
  v114 = &v23[*((unsigned int *)v4 + 8)];
  v115 = &v23[*((unsigned int *)v4 + 9)];
  v26 = *(unsigned int *)(v1 + 132);
  v27 = (__int64 *)&v12[v26];
  v101 = (unsigned __int64 *)((char *)v101 + v26 * 8);
  while ( 1 )
  {
    v110 = v27;
    v28 = *v27;
    if ( !*v27 )
    {
      *(_DWORD *)(v1 + 132) = 0;
      v2 = v100;
      goto LABEL_52;
    }
    appended = -1073741702;
    v88 = -1073741702;
    v29 = (unsigned __int64)v28 >> 63;
    v107 = (unsigned __int64)v28 >> 63;
    v30 = -4530927LL;
    v109 = 0LL;
    if ( v28 < 0 )
    {
      v98 = (unsigned __int16)v28;
      v40 = (unsigned __int16)v28 - *((_DWORD *)v4 + 4);
      goto LABEL_42;
    }
    v31 = (unsigned __int16 *)(*(_QWORD *)(v100 + 48) + (unsigned int)v28);
    v32 = v31 + 1;
    v109 = (char *)(v31 + 1);
    if ( (*(_DWORD *)(v1 + 32) & 0x2000000) == 0 )
      goto LABEL_32;
    v30 = LdrpCheckRedirection(v100, v92, v31 + 1);
    if ( v30 == -4530927LL )
      break;
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrsnap.c",
      3480,
      (__int64)"LdrpSnapModule",
      2,
      "Import '%s' of DLL '%wZ' is redirected to 0x%p",
      (_BYTE)v31 + 2);
    appended = 0;
    v88 = 0;
LABEL_46:
    v42 = v101;
    *v101 = v30;
    v27 = v110 + 1;
    v101 = v42 + 1;
    ++*(_DWORD *)(v1 + 132);
    v25 = v99;
    v23 = v104;
    v4 = v105;
    v3 = v111;
    v24 = v112;
  }
  v25 = v99;
LABEL_32:
  v33 = *v31;
  v34 = 0;
  v35 = v25 - 1;
  if ( v33 >= v25 )
    v33 = v35 / 2;
  v23 = v104;
  while ( 1 )
  {
    if ( v35 < v34 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrsnap.c",
        2286,
        (__int64)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        (char)v32);
      goto LABEL_45;
    }
    v36 = v32;
    v37 = &v104[*(unsigned int *)&v114[4 * v33]] - (char *)v32;
    while ( 1 )
    {
      v38 = *(_BYTE *)v36;
      if ( *(_BYTE *)v36 != *((_BYTE *)v36 + v37) )
        break;
      v36 = (unsigned __int16 *)((char *)v36 + 1);
      if ( !v38 )
      {
        v39 = 0;
        goto LABEL_40;
      }
    }
    v39 = v38 < *((_BYTE *)v36 + v37) ? -1 : 1;
LABEL_40:
    if ( !v39 )
      break;
    if ( v39 >= 0 )
      v34 = v33 + 1;
    else
      v35 = v33 - 1;
    v33 = (v34 + v35) / 2;
  }
  v40 = *(unsigned __int16 *)&v115[2 * v33];
  v4 = v105;
  v3 = v111;
  v24 = v112;
LABEL_42:
  if ( (unsigned int)v40 >= *((_DWORD *)v4 + 5) )
    goto LABEL_45;
  _mm_lfence();
  v41 = *(unsigned int *)(v3 + 4LL * v40);
  if ( !(_DWORD)v41 )
  {
    appended = -1073741702;
    goto LABEL_45;
  }
  v30 = (unsigned __int64)&v23[v41];
  v117 = &v23[v41];
  appended = 0;
  v88 = 0;
  if ( &v23[v41] <= v4 || v30 >= (unsigned __int64)v24 )
  {
LABEL_45:
    if ( appended >= 0 )
      goto LABEL_46;
    if ( appended == -1073741702 || appended == -1073741515 )
    {
      if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v100 + 80))
        || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v92 + 80)) )
      {
        v87 = v92;
        v84 = v103;
        LdrpLogLoadFailureEtwEvent((_DWORD)v103, v92 + 72, 1, (unsigned int)&LoadFailure, 0);
        LdrpLogLoadFailureEtwEvent((_DWORD)v84, v87 + 72, 1, (unsigned int)"\b", 1);
      }
      else
      {
        v84 = v103;
      }
      if ( (_BYTE)v29 )
      {
        v85 = -1073741512;
        appended = -1073741512;
        v86 = (char *)v98;
      }
      else
      {
        appended = -1073741511;
        v85 = -1073741511;
        v86 = v109;
      }
      LdrpReportError(v84, v86, v85);
      v82 = 1;
      goto LABEL_165;
    }
LABEL_164:
    v82 = 1;
LABEL_165:
    if ( *(_QWORD *)(v1 + 192) )
    {
      NtUnmapViewOfSection(-1LL);
      *(_QWORD *)(v1 + 192) = 0LL;
    }
    if ( appended < 0 )
      v82 = 0;
    if ( !v82 )
      LdrpLogError((unsigned int)appended, 25LL, 0LL, v1);
    return (unsigned int)appended;
  }
  v43 = v92;
  v44 = &v23[v41];
  v93 = 0LL;
  v45 = 0LL;
  Value = 0;
  v97 = 0;
  v46 = 0LL;
  v90 = 0LL;
  v47 = *(_QWORD *)(v100 + 176);
  v116 = v47;
  appended = 0;
  v106 = 0LL;
  while ( 1 )
  {
    v48 = strrchr(v44, 46);
    if ( v48 )
    {
      if ( (unsigned __int64)(v48 - v44) > 0xFFFF )
      {
        v44 = (char *)*((_QWORD *)&v93 + 1);
        v49 = v93;
      }
      else
      {
        *((_QWORD *)&v93 + 1) = v44;
        v49 = (_WORD)v48 - (_WORD)v44;
        LOWORD(v93) = (_WORD)v48 - (_WORD)v44;
        WORD1(v93) = (_WORD)v48 - (_WORD)v44;
        if ( v48[1] != 35 )
        {
          v45 = v48 + 1;
LABEL_60:
          v50 = 1;
          goto LABEL_61;
        }
        if ( RtlCharToInteger(v48 + 2, 0, &Value) >= 0 )
        {
          v45 = 0LL;
          goto LABEL_60;
        }
      }
    }
    else
    {
      v44 = (char *)*((_QWORD *)&v93 + 1);
      v49 = v93;
    }
    appended = -1073741701;
    v50 = 0;
LABEL_61:
    if ( !v50 )
      goto LABEL_104;
    if ( v49 == 5 && (*(_DWORD *)v44 | 0x20202020) == 0x6C64746E && ((unsigned __int8)v44[4] | 0x20) == 0x6C )
    {
      v46 = LdrpNtDllDataTableEntry;
      v90 = LdrpNtDllDataTableEntry;
    }
    else
    {
      HIDWORD(v119) = 0;
      memset_thunk_772440563353939046(v122, 0, 0xFEuLL);
      v120 = &v121;
      LODWORD(v119) = 0x1000000;
      v121 = 0;
      appended = LdrpAppendAnsiStringToFilenameBuffer(&v119, (STRING *)&v93);
      if ( appended >= 0 )
      {
        appended = LdrpLoadDependentModuleInternal(&v119, v47, v43, 1, &v90, &v106);
        v46 = v90;
      }
      if ( appended < 0 )
      {
        v46 = 0LL;
        v90 = 0LL;
        **(_DWORD **)(v47 + 40) = appended;
      }
      if ( &v121 != v120 )
        RtlpSysVolFree((__int64)v120);
      v120 = &v121;
      LODWORD(v119) = 0x1000000;
      v121 = 0;
      if ( appended < 0 || appended == 259 )
        goto LABEL_104;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v100 + 176) + 32LL) & 0x2000000) != 0 )
    {
      if ( v45 )
      {
        v44 = (char *)LdrpCheckRedirection(v100, v46, v45);
        v89 = v44;
        if ( v44 != (char *)-4530927LL )
        {
          appended = 0;
          goto LABEL_107;
        }
      }
    }
    v51 = *(_QWORD *)(v46 + 48);
    v52 = 0;
    v53 = 1;
    v54 = v51;
    v102 = 0LL;
    v55 = 0LL;
    if ( (v51 & 3) != 0 )
    {
      v54 = v51 & 0xFFFFFFFFFFFFFFFCuLL;
      v53 = (v51 & 1) == 0;
    }
    v56 = RtlImageNtHeaderEx(1LL, v54, 0LL, &v102);
    if ( v102 )
    {
      v57 = *(_WORD *)(v102 + 24);
      if ( v57 == 267 )
      {
        if ( !*(_DWORD *)(v102 + 116) )
          goto LABEL_127;
        v72 = *(unsigned int *)(v102 + 120);
        if ( (_DWORD)v72 )
        {
          v52 = *(_DWORD *)(v102 + 124);
          if ( v53 || (unsigned int)v72 < *(_DWORD *)(v102 + 84) )
          {
            v55 = v54 + v72;
            v56 = 0;
          }
          else
          {
            v73 = (unsigned int *)(*(unsigned __int16 *)(v102 + 20) + v102 + 24);
            for ( j = 0; j < *(unsigned __int16 *)(v102 + 6); ++j )
            {
              v75 = v73[3];
              if ( (unsigned int)v72 >= (unsigned int)v75 && (unsigned int)v72 < (unsigned int)v75 + v73[4] )
              {
                v55 = v72 + v54 + v73[5] - v75;
                break;
              }
              v73 += 10;
            }
            v56 = 0;
            if ( !v55 )
              v56 = -1073741811;
            v46 = v90;
          }
        }
        else
        {
          v56 = -1073741822;
        }
      }
      else
      {
        if ( v57 != 523 || !*(_DWORD *)(v102 + 132) )
        {
LABEL_127:
          v56 = -1073741811;
          goto LABEL_85;
        }
        v58 = *(unsigned int *)(v102 + 136);
        if ( (_DWORD)v58 )
        {
          v52 = *(_DWORD *)(v102 + 140);
          if ( v53 || (unsigned int)v58 < *(_DWORD *)(v102 + 84) )
          {
            v55 = v54 + v58;
            v56 = 0;
          }
          else
          {
            v55 = RtlAddressInSectionTable(v102, v54, (unsigned int)v58);
            v56 = 0;
            if ( !v55 )
              v56 = -1073741811;
          }
        }
        else
        {
          v56 = -1073741822;
        }
      }
    }
LABEL_85:
    v59 = 0LL;
    if ( v56 >= 0 )
      v59 = (char *)v55;
    if ( !v59 )
      goto LABEL_184;
    if ( v45 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrsnap.c",
        838,
        (__int64)"LdrpGetProcedureAddress",
        2,
        "Locating procedure \"%s\" by name\n",
        (char)v45);
      v60 = 0;
      v61 = *((_DWORD *)v59 + 6) - 1;
      for ( k = v61; ; k = v60 + v61 )
      {
        v63 = k / 2;
        v64 = v63;
        if ( v61 < v60 )
          break;
        v65 = v63;
        v66 = v45;
        v67 = v51 + *(unsigned int *)(v51 + *((unsigned int *)v59 + 8) + 4LL * v63) - (_QWORD)v45;
        while ( 1 )
        {
          v68 = *v66;
          if ( *v66 != v66[v67] )
            break;
          ++v66;
          if ( !v68 )
          {
            v69 = 0;
            goto LABEL_95;
          }
        }
        v69 = v68 < (unsigned __int8)v66[v67] ? -1 : 1;
LABEL_95:
        if ( !v69 )
        {
          v70 = *(unsigned __int16 *)(v51 + *((unsigned int *)v59 + 9) + 2 * v65);
          goto LABEL_97;
        }
        if ( v69 >= 0 )
          v60 = v64 + 1;
        else
          v61 = v64 - 1;
      }
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrsnap.c",
        2286,
        (__int64)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        (char)v45);
LABEL_184:
      appended = -1073741702;
      goto LABEL_104;
    }
    v81 = Value;
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrsnap.c",
      856,
      (__int64)"LdrpGetProcedureAddress",
      2,
      "Loading procedure 0x%lx by ordinal\n",
      Value);
    if ( !v81 )
    {
      appended = -1073741811;
      goto LABEL_104;
    }
    v70 = v81 - *((_DWORD *)v59 + 4);
LABEL_97:
    if ( v70 >= *((_DWORD *)v59 + 5) )
      break;
    v44 = (char *)(v51 + *(unsigned int *)(v51 + *((unsigned int *)v59 + 7) + 4LL * (int)v70));
    v89 = v44;
    if ( v44 < v59 || v44 >= &v59[v52] )
    {
      appended = 0;
      v71 = *(char **)(v46 + 48);
      if ( qword_1801EA508 && (dword_1801EA4EC & 1) == 0 )
      {
        v93 = 0LL;
        v94 = 0LL;
        if ( (unsigned __int64)v71 < *((_QWORD *)&xmmword_1801E7440 + 1)
          || (unsigned __int64)v71 >= *((_QWORD *)&xmmword_1801E7440 + 1)
                                    + (unsigned __int64)(unsigned int)qword_1801E7450 )
        {
          RtlpxLookupFunctionTable((unsigned __int64)v71, (__int64)&v93);
        }
        else
        {
          v93 = xmmword_1801E7440;
          v94 = qword_1801E7450;
        }
        if ( *((char **)&v93 + 1) != v71 )
LABEL_173:
          __fastfail(0x18u);
      }
LABEL_104:
      v44 = v89;
      goto LABEL_105;
    }
    if ( ++v97 == 32 )
    {
      appended = -1073741701;
      goto LABEL_105;
    }
    v43 = v46;
    v47 = v116;
    appended = 0;
  }
  v44 = v89;
  if ( v45 )
    appended = -1073741511;
  else
    appended = -1073741512;
LABEL_105:
  if ( v106 )
    RtlFreeHeap(LdrpHeap, 0, v106);
LABEL_107:
  v88 = appended;
  if ( appended != 259 )
  {
    LOBYTE(v29) = v107;
    v1 = v108;
    if ( appended < 0 )
      v30 = (unsigned __int64)v117;
    else
      v30 = (unsigned __int64)v44;
    goto LABEL_45;
  }
  return 0LL;
}
