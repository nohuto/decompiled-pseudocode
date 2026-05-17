/*
 * XREFs of LdrpSnapModule @ 0x180012B70
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     LdrpProcessWork @ 0x18006FC70 (LdrpProcessWork.c)
 * Callees:
 *     LdrpReportError @ 0x180008910 (LdrpReportError.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlCharToInteger @ 0x180020480 (RtlCharToInteger.c)
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
 *     LdrpDoPostSnapWork @ 0x180020D90 (LdrpDoPostSnapWork.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18004ADB0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     CompatCachepLookupCdb @ 0x1800712A4 (CompatCachepLookupCdb.c)
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     LdrpCheckRedirection @ 0x180072D28 (LdrpCheckRedirection.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x1800D1E14 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpHandlePendingModuleReplaced @ 0x1800D910C (LdrpHandlePendingModuleReplaced.c)
 *     LdrpFreeReplacedModule @ 0x1800D9148 (LdrpFreeReplacedModule.c)
 *     LdrpLogError @ 0x1800FD63C (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x18011B640 (LdrpGenericExceptionFilter.c)
 *     strrchr @ 0x180128430 (strrchr.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rdi
  int appended; // r12d
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 *v11; // r13
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rax
  bool v14; // bl
  unsigned __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  __int16 v18; // ax
  __int64 v19; // rax
  _DWORD *v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rbx
  char *v24; // r9
  unsigned __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 *v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rsi
  unsigned __int16 *v32; // rbx
  unsigned __int16 *v33; // r13
  int v34; // r8d
  int v35; // r11d
  int v36; // r10d
  unsigned __int16 *v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int8 v39; // cl
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  unsigned __int64 *v43; // rcx
  unsigned __int64 v44; // rbx
  char *v45; // r13
  __int64 v46; // r15
  __int64 v47; // r14
  char *v48; // rax
  __int16 v49; // si
  int v50; // eax
  unsigned __int64 v51; // r14
  unsigned int v52; // r12d
  bool v53; // bl
  unsigned __int64 v54; // rsi
  __int64 v55; // rdi
  int v56; // eax
  __int16 v57; // ax
  __int64 v58; // rax
  _DWORD *v59; // rsi
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
  unsigned __int64 v71; // rbx
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
  unsigned __int64 v89; // [rsp+48h] [rbp-270h]
  __int64 v90; // [rsp+50h] [rbp-268h] BYREF
  unsigned int v91; // [rsp+58h] [rbp-260h]
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
  unsigned __int64 v104; // [rsp+B8h] [rbp-200h]
  _DWORD *v105; // [rsp+C0h] [rbp-1F8h]
  __int64 v106; // [rsp+C8h] [rbp-1F0h] BYREF
  unsigned __int64 v107; // [rsp+D0h] [rbp-1E8h]
  __int64 v108; // [rsp+D8h] [rbp-1E0h]
  char *v109; // [rsp+E0h] [rbp-1D8h]
  __int64 *v110; // [rsp+E8h] [rbp-1D0h]
  unsigned __int64 v111; // [rsp+F0h] [rbp-1C8h]
  char *v112; // [rsp+F8h] [rbp-1C0h]
  __int64 v113; // [rsp+100h] [rbp-1B8h]
  unsigned __int64 v114; // [rsp+108h] [rbp-1B0h]
  unsigned __int64 v115; // [rsp+110h] [rbp-1A8h]
  __int64 v116; // [rsp+118h] [rbp-1A0h]
  unsigned __int64 v117; // [rsp+120h] [rbp-198h]
  __int64 v118; // [rsp+128h] [rbp-190h]
  _DWORD v119[2]; // [rsp+130h] [rbp-188h] BYREF
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
    v4 = *(_DWORD *)(v1 + 128);
    if ( v4 >= *(_DWORD *)(v1 + 104) )
    {
      if ( appended >= 0 )
      {
        appended = LdrpDoPostSnapWork(v1);
        if ( appended >= 0 )
        {
          LdrpLogDllState(*(_QWORD *)(v2 + 48), v2 + 72, 5287LL);
          *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
        }
      }
      goto LABEL_164;
    }
    v5 = v4;
    v6 = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8LL * v4);
    v7 = v6;
    v92 = v6;
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 176);
      if ( v8 )
      {
        if ( (*(_DWORD *)(v8 + 32) & 0x80000) == 0 && *(_QWORD *)(v8 + 56) != v6 )
        {
          v7 = *(_QWORD *)(v8 + 56);
          v92 = v7;
          *(_QWORD *)(v8 + 56) = v6;
        }
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v5) != v7 )
    {
      LdrpFreeReplacedModule();
      *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v5) = v7;
    }
    v9 = *(_QWORD *)(v1 + 136);
    v10 = *(unsigned int *)(v9 + 20 * v5);
    v11 = (unsigned __int64 *)(v113 + v10);
    v12 = (unsigned __int64 *)(v113 + *(unsigned int *)(v9 + 20 * v5 + 16));
    v101 = v12;
    if ( !(_DWORD)v10 || (unsigned int)v10 > *(_DWORD *)(v2 + 64) )
      v11 = v12;
    if ( v7 )
      break;
LABEL_52:
    ++*(_DWORD *)(v1 + 128);
  }
  v13 = *(_QWORD *)(v7 + 48);
  v104 = v13;
  v14 = 1;
  v15 = v13;
  v90 = 0LL;
  v16 = 0LL;
  if ( (v13 & 3) != 0 )
  {
    v15 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    v14 = (v13 & 1) == 0;
  }
  v17 = RtlImageNtHeaderEx(1LL, v15, 0LL, &v90);
  if ( !v90 )
    goto LABEL_19;
  v18 = *(_WORD *)(v90 + 24);
  if ( v18 == 267 )
  {
    if ( *(_DWORD *)(v90 + 116) )
    {
      v76 = *(unsigned int *)(v90 + 120);
      if ( (_DWORD)v76 )
      {
        v91 = *(_DWORD *)(v90 + 124);
        if ( v14 || (unsigned int)v76 < *(_DWORD *)(v90 + 84) )
        {
          v16 = v15 + v76;
          v17 = 0;
        }
        else
        {
          v77 = (unsigned int *)(*(unsigned __int16 *)(v90 + 20) + v90 + 24);
          for ( i = 0; i < *(unsigned __int16 *)(v90 + 6); ++i )
          {
            v79 = v77[3];
            if ( (unsigned int)v76 >= (unsigned int)v79 && (unsigned int)v76 < (unsigned int)v79 + v77[4] )
            {
              v16 = v76 + v15 + v77[5] - v79;
              break;
            }
            v77 += 10;
          }
          v17 = 0;
          if ( !v16 )
            v17 = -1073741811;
          appended = v88;
        }
      }
      else
      {
        v17 = -1073741822;
      }
      goto LABEL_19;
    }
  }
  else if ( v18 == 523 && *(_DWORD *)(v90 + 132) )
  {
    v19 = *(unsigned int *)(v90 + 136);
    if ( (_DWORD)v19 )
    {
      v91 = *(_DWORD *)(v90 + 140);
      if ( v14 || (unsigned int)v19 < *(_DWORD *)(v90 + 84) )
      {
        v16 = v15 + v19;
        v17 = 0;
      }
      else
      {
        v16 = RtlAddressInSectionTable(v90, v15, (unsigned int)v19);
        v17 = 0;
        if ( !v16 )
          v17 = -1073741811;
      }
    }
    else
    {
      v17 = -1073741822;
    }
    goto LABEL_19;
  }
  v17 = -1073741811;
LABEL_19:
  v20 = 0LL;
  if ( v17 >= 0 )
    v20 = (_DWORD *)v16;
  v105 = v20;
  if ( !v20 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      3382,
      (int)"LdrpSnapModule",
      0,
      "DLL \"%wZ\" does not contain an export table\n",
      v92 + 72);
    appended = -1073741701;
    goto LABEL_164;
  }
  v21 = 0LL;
  v22 = v123;
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
    if ( qword_1801EC4F8 && (dword_1801EC4DC & 1) == 0 )
    {
      v93 = 0LL;
      v94 = 0LL;
      if ( v104 < *((_QWORD *)&xmmword_1801E9430 + 1)
        || v104 >= *((_QWORD *)&xmmword_1801E9430 + 1) + (unsigned __int64)(unsigned int)qword_1801E9440 )
      {
        RtlpxLookupFunctionTable(v104, &v93);
        v20 = v105;
      }
      else
      {
        v93 = xmmword_1801E9430;
        v94 = qword_1801E9440;
      }
      if ( *((_QWORD *)&v93 + 1) != v23 )
        goto LABEL_173;
    }
    v80 = v95;
    v123[v95] = v23;
    v95 = (v80 + 1) & 7;
  }
  v24 = (char *)v20 + v91;
  v112 = v24;
  v25 = v23 + (unsigned int)v20[7];
  v111 = v25;
  v26 = v20[6];
  v99 = v26;
  v114 = v23 + (unsigned int)v20[8];
  v115 = v23 + (unsigned int)v20[9];
  v27 = *(unsigned int *)(v1 + 132);
  v28 = (__int64 *)&v11[v27];
  v101 = (unsigned __int64 *)((char *)v101 + v27 * 8);
  while ( 1 )
  {
    v110 = v28;
    v29 = *v28;
    if ( !*v28 )
    {
      *(_DWORD *)(v1 + 132) = 0;
      v2 = v100;
      goto LABEL_52;
    }
    appended = -1073741702;
    v88 = -1073741702;
    v30 = (unsigned __int64)v29 >> 63;
    v107 = (unsigned __int64)v29 >> 63;
    v31 = -4530927LL;
    v109 = 0LL;
    if ( v29 < 0 )
    {
      v98 = (unsigned __int16)v29;
      v41 = (unsigned __int16)v29 - v20[4];
      goto LABEL_42;
    }
    v32 = (unsigned __int16 *)(*(_QWORD *)(v100 + 48) + (unsigned int)v29);
    v33 = v32 + 1;
    v109 = (char *)(v32 + 1);
    if ( (*(_DWORD *)(v1 + 32) & 0x2000000) == 0 )
      goto LABEL_32;
    v31 = LdrpCheckRedirection(v100, v92, v32 + 1);
    if ( v31 == -4530927LL )
      break;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      3480,
      (int)"LdrpSnapModule",
      2,
      "Import '%s' of DLL '%wZ' is redirected to 0x%p",
      (_BYTE)v32 + 2);
    appended = 0;
    v88 = 0;
LABEL_46:
    v43 = v101;
    *v101 = v31;
    v28 = v110 + 1;
    v101 = v43 + 1;
    ++*(_DWORD *)(v1 + 132);
    v26 = v99;
    v23 = v104;
    v20 = v105;
    v25 = v111;
    v24 = v112;
  }
  v26 = v99;
LABEL_32:
  v34 = *v32;
  v35 = 0;
  v36 = v26 - 1;
  if ( v34 >= v26 )
    v34 = v36 / 2;
  v23 = v104;
  while ( 1 )
  {
    if ( v36 < v35 )
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrsnap.c",
        2286,
        (int)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        (char)v33);
      goto LABEL_45;
    }
    v37 = v33;
    v38 = v104 + *(unsigned int *)(v114 + 4LL * v34) - (_QWORD)v33;
    while ( 1 )
    {
      v39 = *(_BYTE *)v37;
      if ( *(_BYTE *)v37 != *((_BYTE *)v37 + v38) )
        break;
      v37 = (unsigned __int16 *)((char *)v37 + 1);
      if ( !v39 )
      {
        v40 = 0;
        goto LABEL_40;
      }
    }
    v40 = v39 < *((_BYTE *)v37 + v38) ? -1 : 1;
LABEL_40:
    if ( !v40 )
      break;
    if ( v40 >= 0 )
      v35 = v34 + 1;
    else
      v36 = v34 - 1;
    v34 = (v35 + v36) / 2;
  }
  v41 = *(unsigned __int16 *)(v115 + 2LL * v34);
  v20 = v105;
  v25 = v111;
  v24 = v112;
LABEL_42:
  if ( (unsigned int)v41 >= v20[5] )
    goto LABEL_45;
  _mm_lfence();
  v42 = *(unsigned int *)(v25 + 4LL * v41);
  if ( !(_DWORD)v42 )
  {
    appended = -1073741702;
    goto LABEL_45;
  }
  v31 = v23 + v42;
  v117 = v23 + v42;
  appended = 0;
  v88 = 0;
  if ( v23 + v42 <= (unsigned __int64)v20 || v31 >= (unsigned __int64)v24 )
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
        LdrpLogLoadFailureEtwEvent((_DWORD)v84, v87 + 72, 1, (unsigned int)&LoadFailureOperational, 1);
      }
      else
      {
        v84 = v103;
      }
      if ( (_BYTE)v30 )
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
  v44 = v23 + v42;
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
    v48 = strrchr((const char *)v44, 46);
    if ( v48 )
    {
      if ( (unsigned __int64)&v48[-v44] > 0xFFFF )
      {
        v44 = *((_QWORD *)&v93 + 1);
        v49 = v93;
      }
      else
      {
        *((_QWORD *)&v93 + 1) = v44;
        v49 = (_WORD)v48 - v44;
        LOWORD(v93) = (_WORD)v48 - v44;
        WORD1(v93) = (_WORD)v48 - v44;
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
      v44 = *((_QWORD *)&v93 + 1);
      v49 = v93;
    }
    appended = -1073741701;
    v50 = 0;
LABEL_61:
    if ( !v50 )
      goto LABEL_104;
    if ( v49 == 5 && (*(_DWORD *)v44 | 0x20202020) == 0x6C64746E && (*(_BYTE *)(v44 + 4) | 0x20) == 0x6C )
    {
      v46 = LdrpNtDllDataTableEntry;
      v90 = LdrpNtDllDataTableEntry;
    }
    else
    {
      v119[1] = 0;
      memset_thunk_772440563353939046(v122, 0, 0xFEuLL);
      v120 = &v121;
      v119[0] = 0x1000000;
      v121 = 0;
      appended = LdrpAppendAnsiStringToFilenameBuffer(v119, &v93);
      if ( appended >= 0 )
      {
        appended = LdrpLoadDependentModuleInternal((char)v119, (__int64)&v90, (__int64)&v106);
        v46 = v90;
      }
      if ( appended < 0 )
      {
        v46 = 0LL;
        v90 = 0LL;
        **(_DWORD **)(v47 + 40) = appended;
      }
      if ( &v121 != v120 )
        RtlpSysVolFree();
      v120 = &v121;
      v119[0] = 0x1000000;
      v121 = 0;
      if ( appended < 0 || appended == 259 )
        goto LABEL_104;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v100 + 176) + 32LL) & 0x2000000) != 0 )
    {
      if ( v45 )
      {
        v44 = LdrpCheckRedirection(v100, v46, v45);
        v89 = v44;
        if ( v44 != -4530927LL )
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
      v59 = (_DWORD *)v55;
    if ( !v59 )
      goto LABEL_184;
    if ( v45 )
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrsnap.c",
        838,
        (int)"LdrpGetProcedureAddress",
        2,
        "Locating procedure \"%s\" by name\n",
        (char)v45);
      v60 = 0;
      v61 = v59[6] - 1;
      for ( k = v61; ; k = v60 + v61 )
      {
        v63 = k / 2;
        v64 = v63;
        if ( v61 < v60 )
          break;
        v65 = v63;
        v66 = v45;
        v67 = v51 + *(unsigned int *)(v51 + (unsigned int)v59[8] + 4LL * v63) - (_QWORD)v45;
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
          v70 = *(unsigned __int16 *)(v51 + (unsigned int)v59[9] + 2 * v65);
          goto LABEL_97;
        }
        if ( v69 >= 0 )
          v60 = v64 + 1;
        else
          v61 = v64 - 1;
      }
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrsnap.c",
        2286,
        (int)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        (char)v45);
LABEL_184:
      appended = -1073741702;
      goto LABEL_104;
    }
    v81 = Value;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      856,
      (int)"LdrpGetProcedureAddress",
      2,
      "Loading procedure 0x%lx by ordinal\n",
      Value);
    if ( !v81 )
    {
      appended = -1073741811;
      goto LABEL_104;
    }
    v70 = v81 - v59[4];
LABEL_97:
    if ( v70 >= v59[5] )
      break;
    v44 = v51 + *(unsigned int *)(v51 + (unsigned int)v59[7] + 4LL * (int)v70);
    v89 = v44;
    if ( v44 < (unsigned __int64)v59 || v44 >= (unsigned __int64)v59 + v52 )
    {
      appended = 0;
      v71 = *(_QWORD *)(v46 + 48);
      if ( qword_1801EC4F8 && (dword_1801EC4DC & 1) == 0 )
      {
        v93 = 0LL;
        v94 = 0LL;
        if ( v71 < *((_QWORD *)&xmmword_1801E9430 + 1)
          || v71 >= *((_QWORD *)&xmmword_1801E9430 + 1) + (unsigned __int64)(unsigned int)qword_1801E9440 )
        {
          RtlpxLookupFunctionTable(v71, &v93);
        }
        else
        {
          v93 = xmmword_1801E9430;
          v94 = qword_1801E9440;
        }
        if ( *((_QWORD *)&v93 + 1) != v71 )
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
    RtlFreeHeap(LdrpHeap, 0LL, v106);
LABEL_107:
  v88 = appended;
  if ( appended != 259 )
  {
    LOBYTE(v30) = v107;
    v1 = v108;
    if ( appended < 0 )
      v31 = v117;
    else
      v31 = v44;
    goto LABEL_45;
  }
  return 0LL;
}
