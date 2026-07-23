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
  _QWORD *v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 *v12; // r13
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rax
  bool v15; // bl
  char *v16; // rdi
  char *v17; // rsi
  NTSTATUS v18; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  _DWORD *v21; // r8
  __int64 v22; // rax
  PVOID *v23; // rcx
  char *v24; // rbx
  char *v25; // r9
  char *v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // rax
  __int64 *v29; // r13
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rsi
  unsigned __int16 *v33; // rbx
  const char *v34; // r13
  int v35; // r8d
  int v36; // r11d
  int v37; // r10d
  const char *v38; // rax
  char *v39; // rdx
  unsigned __int8 v40; // cl
  int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  unsigned __int64 *v44; // rcx
  unsigned __int64 v45; // rbx
  const char *v46; // r13
  PIMAGE_NT_HEADERS v47; // r15
  __int64 v48; // r14
  char *v49; // rax
  __int16 v50; // si
  int v51; // eax
  unsigned __int64 ImageBase; // r14
  unsigned int Size; // r12d
  bool v54; // bl
  char *v55; // rsi
  char *v56; // rdi
  NTSTATUS v57; // eax
  unsigned __int16 v58; // ax
  __int64 v59; // rax
  char *v60; // rsi
  int v61; // r11d
  int v62; // r10d
  int k; // eax
  int v64; // eax
  int v65; // r9d
  __int64 v66; // r8
  const char *v67; // rcx
  signed __int64 v68; // rdx
  unsigned __int8 v69; // al
  int v70; // eax
  ULONG v71; // eax
  void *v72; // rbx
  __int64 v73; // r9
  unsigned int *v74; // r8
  unsigned int j; // r10d
  __int64 v76; // rdx
  __int64 SizeOfHeapCommit_low; // r8
  unsigned int *v78; // rdx
  unsigned int i; // r10d
  __int64 v80; // r9
  char v81; // cl
  ULONG v82; // ebx
  int v83; // ebx
  void *v84; // rdx
  __int64 v86; // rax
  __int128 *v87; // r13
  int v88; // eax
  char *v89; // rdx
  _QWORD *v90; // rbx
  int v91; // [rsp+20h] [rbp-298h]
  int v92; // [rsp+20h] [rbp-298h]
  int v93; // [rsp+40h] [rbp-278h]
  unsigned __int64 v94; // [rsp+48h] [rbp-270h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp-268h] BYREF
  unsigned int SizeOfHeapCommit_high; // [rsp+58h] [rbp-260h]
  _QWORD *v97; // [rsp+60h] [rbp-258h]
  __int128 v98; // [rsp+68h] [rbp-250h] BYREF
  __int64 v99; // [rsp+78h] [rbp-240h]
  int v100; // [rsp+80h] [rbp-238h]
  ULONG Value; // [rsp+84h] [rbp-234h] BYREF
  int v102; // [rsp+88h] [rbp-230h]
  unsigned int v103; // [rsp+8Ch] [rbp-22Ch]
  unsigned int v104; // [rsp+90h] [rbp-228h]
  __int64 v105; // [rsp+98h] [rbp-220h]
  unsigned __int64 *v106; // [rsp+A0h] [rbp-218h]
  PIMAGE_NT_HEADERS NtHeaders; // [rsp+A8h] [rbp-210h] BYREF
  __int128 *v108; // [rsp+B0h] [rbp-208h]
  PVOID v109; // [rsp+B8h] [rbp-200h]
  _DWORD *v110; // [rsp+C0h] [rbp-1F8h]
  PVOID BaseAddress; // [rsp+C8h] [rbp-1F0h] BYREF
  unsigned __int64 v112; // [rsp+D0h] [rbp-1E8h]
  __int64 v113; // [rsp+D8h] [rbp-1E0h]
  char *v114; // [rsp+E0h] [rbp-1D8h]
  __int64 *v115; // [rsp+E8h] [rbp-1D0h]
  char *v116; // [rsp+F0h] [rbp-1C8h]
  char *v117; // [rsp+F8h] [rbp-1C0h]
  __int64 v118; // [rsp+100h] [rbp-1B8h]
  char *v119; // [rsp+108h] [rbp-1B0h]
  char *v120; // [rsp+110h] [rbp-1A8h]
  __int64 v121; // [rsp+118h] [rbp-1A0h]
  char *v122; // [rsp+120h] [rbp-198h]
  __int64 v123; // [rsp+128h] [rbp-190h]
  _UNICODE_STRING OriginalName; // [rsp+130h] [rbp-188h] BYREF
  __int16 v125; // [rsp+140h] [rbp-178h] BYREF
  char v126[254]; // [rsp+142h] [rbp-176h] BYREF
  _QWORD v127[8]; // [rsp+240h] [rbp-78h] BYREF

  v1 = a1;
  v113 = a1;
  v123 = a1;
  SizeOfHeapCommit_high = 0;
  v94 = 0LL;
  v2 = *(_QWORD *)(a1 + 56);
  v105 = v2;
  v118 = *(_QWORD *)(v2 + 48);
  v108 = (__int128 *)(v2 + 72);
  LdrpLogDllState(v118, v2 + 72, 5286LL);
  LdrpHandlePendingModuleReplaced(v1);
  memset_thunk_772440563353939046(v127, 0, 0x40uLL);
  v100 = 0;
  appended = 0;
  v93 = 0;
  v103 = 0;
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
    v6 = *(_QWORD **)(*(_QWORD *)(v1 + 88) + 8LL * v4);
    v7 = v6;
    v97 = v6;
    if ( v6 )
    {
      v8 = v6[22];
      if ( v8 )
      {
        if ( (*(_DWORD *)(v8 + 32) & 0x80000) == 0 && *(_QWORD **)(v8 + 56) != v6 )
        {
          v7 = *(_QWORD **)(v8 + 56);
          v97 = v7;
          *(_QWORD *)(v8 + 56) = v6;
        }
      }
    }
    v9 = *(_QWORD **)(*(_QWORD *)(v1 + 88) + 8 * v5);
    if ( v9 != v7 )
    {
      LdrpFreeReplacedModule(v9);
      *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v5) = v7;
    }
    v10 = *(_QWORD *)(v1 + 136);
    v11 = *(unsigned int *)(v10 + 20 * v5);
    v12 = (unsigned __int64 *)(v118 + v11);
    v13 = (unsigned __int64 *)(v118 + *(unsigned int *)(v10 + 20 * v5 + 16));
    v106 = v13;
    if ( !(_DWORD)v11 || (unsigned int)v11 > *(_DWORD *)(v2 + 64) )
      v12 = v13;
    if ( v7 )
      break;
LABEL_52:
    ++*(_DWORD *)(v1 + 128);
  }
  v14 = v7[6];
  v109 = (PVOID)v14;
  v15 = 1;
  v16 = (char *)v14;
  OutHeaders = 0LL;
  v17 = 0LL;
  if ( (v14 & 3) != 0 )
  {
    v16 = (char *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
    v15 = (v14 & 1) == 0;
  }
  v18 = RtlImageNtHeaderEx(1u, v16, 0LL, &OutHeaders);
  if ( !OutHeaders )
    goto LABEL_19;
  Magic = OutHeaders->OptionalHeader.Magic;
  if ( Magic == 267 )
  {
    if ( HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapReserve) )
    {
      SizeOfHeapCommit_low = LODWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
      if ( (_DWORD)SizeOfHeapCommit_low )
      {
        SizeOfHeapCommit_high = HIDWORD(OutHeaders->OptionalHeader.SizeOfHeapCommit);
        if ( v15 || (unsigned int)SizeOfHeapCommit_low < OutHeaders->OptionalHeader.SizeOfHeaders )
        {
          v17 = &v16[SizeOfHeapCommit_low];
          v18 = 0;
        }
        else
        {
          v78 = (unsigned int *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
          for ( i = 0; i < OutHeaders->FileHeader.NumberOfSections; ++i )
          {
            v80 = v78[3];
            if ( (unsigned int)SizeOfHeapCommit_low >= (unsigned int)v80
              && (unsigned int)SizeOfHeapCommit_low < (unsigned int)v80 + v78[4] )
            {
              v17 = &v16[v78[5] - v80 + SizeOfHeapCommit_low];
              break;
            }
            v78 += 10;
          }
          v18 = 0;
          if ( !v17 )
            v18 = -1073741811;
          appended = v93;
        }
      }
      else
      {
        v18 = -1073741822;
      }
      goto LABEL_19;
    }
  }
  else if ( Magic == 523 && OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
  {
    VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
    if ( (_DWORD)VirtualAddress )
    {
      SizeOfHeapCommit_high = OutHeaders->OptionalHeader.DataDirectory[0].Size;
      if ( v15 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
      {
        v17 = &v16[VirtualAddress];
        v18 = 0;
      }
      else
      {
        v17 = (char *)RtlAddressInSectionTable(OutHeaders, v16, VirtualAddress);
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
  v21 = 0LL;
  if ( v18 >= 0 )
    v21 = v17;
  v110 = v21;
  if ( !v21 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      3382LL,
      "LdrpSnapModule",
      0LL,
      "DLL \"%wZ\" does not contain an export table\n",
      v97 + 9);
    appended = -1073741701;
    goto LABEL_164;
  }
  v22 = 0LL;
  v23 = (PVOID *)v127;
  v24 = (char *)v109;
  do
  {
    if ( !*v23 )
      break;
    if ( v109 == *v23 )
      break;
    v22 = (unsigned int)(v22 + 1);
    ++v23;
  }
  while ( (unsigned int)v22 < 8 );
  if ( (_DWORD)v22 == 8 || !v127[v22] )
  {
    if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
    {
      v98 = 0LL;
      v99 = 0LL;
      if ( (unsigned __int64)v109 < *((_QWORD *)&xmmword_1801E9430 + 1)
        || (unsigned __int64)v109 >= *((_QWORD *)&xmmword_1801E9430 + 1)
                                   + (unsigned __int64)(unsigned int)qword_1801E9440 )
      {
        RtlpxLookupFunctionTable(v109);
        v21 = v110;
      }
      else
      {
        v98 = xmmword_1801E9430;
        v99 = qword_1801E9440;
      }
      if ( *((char **)&v98 + 1) != v24 )
        goto LABEL_173;
    }
    v81 = v100;
    v127[v100] = v24;
    v100 = (v81 + 1) & 7;
  }
  v25 = (char *)v21 + SizeOfHeapCommit_high;
  v117 = v25;
  v26 = &v24[v21[7]];
  v116 = v26;
  v27 = v21[6];
  v104 = v27;
  v119 = &v24[v21[8]];
  v120 = &v24[v21[9]];
  v28 = *(unsigned int *)(v1 + 132);
  v29 = (__int64 *)&v12[v28];
  v106 = (unsigned __int64 *)((char *)v106 + v28 * 8);
  while ( 1 )
  {
    v115 = v29;
    v30 = *v29;
    if ( !*v29 )
    {
      *(_DWORD *)(v1 + 132) = 0;
      v2 = v105;
      goto LABEL_52;
    }
    appended = -1073741702;
    v93 = -1073741702;
    v31 = (unsigned __int64)v30 >> 63;
    v112 = (unsigned __int64)v30 >> 63;
    v32 = -4530927LL;
    v114 = 0LL;
    if ( v30 < 0 )
    {
      v103 = (unsigned __int16)v30;
      v42 = (unsigned __int16)v30 - v21[4];
      goto LABEL_42;
    }
    v33 = (unsigned __int16 *)(*(_QWORD *)(v105 + 48) + (unsigned int)v30);
    v34 = (const char *)(v33 + 1);
    v114 = (char *)(v33 + 1);
    if ( (*(_DWORD *)(v1 + 32) & 0x2000000) == 0 )
      goto LABEL_32;
    v86 = LdrpCheckRedirection(v105, v97, v33 + 1);
    v32 = v86;
    if ( v86 == -4530927 )
      break;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      3480LL,
      "LdrpSnapModule",
      2LL,
      "Import '%s' of DLL '%wZ' is redirected to 0x%p",
      v33 + 1,
      v108,
      v86);
    appended = 0;
    v93 = 0;
LABEL_46:
    v44 = v106;
    *v106 = v32;
    v29 = v115 + 1;
    v106 = v44 + 1;
    ++*(_DWORD *)(v1 + 132);
    v27 = v104;
    v24 = (char *)v109;
    v21 = v110;
    v26 = v116;
    v25 = v117;
  }
  v27 = v104;
LABEL_32:
  v35 = *v33;
  v36 = 0;
  v37 = v27 - 1;
  if ( v35 >= v27 )
    v35 = v37 / 2;
  v24 = (char *)v109;
  while ( 1 )
  {
    if ( v37 < v36 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrsnap.c",
        2286LL,
        "LdrpNameToOrdinal",
        1LL,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        v34,
        v109);
      goto LABEL_45;
    }
    v38 = v34;
    v39 = (char *)((_BYTE *)v109 + *(unsigned int *)&v119[4 * v35] - v34);
    while ( 1 )
    {
      v40 = *v38;
      if ( *v38 != v39[(_QWORD)v38] )
        break;
      ++v38;
      if ( !v40 )
      {
        v41 = 0;
        goto LABEL_40;
      }
    }
    v41 = v40 < (unsigned int)v39[(_QWORD)v38] ? -1 : 1;
LABEL_40:
    if ( !v41 )
      break;
    if ( v41 >= 0 )
      v36 = v35 + 1;
    else
      v37 = v35 - 1;
    v35 = (v36 + v37) / 2;
  }
  v42 = *(unsigned __int16 *)&v120[2 * v35];
  v21 = v110;
  v26 = v116;
  v25 = v117;
LABEL_42:
  if ( (unsigned int)v42 >= v21[5] )
    goto LABEL_45;
  _mm_lfence();
  v43 = *(unsigned int *)&v26[4 * v42];
  if ( !(_DWORD)v43 )
  {
    appended = -1073741702;
    goto LABEL_45;
  }
  v32 = (unsigned __int64)&v24[v43];
  v122 = &v24[v43];
  appended = 0;
  v93 = 0;
  if ( &v24[v43] <= (char *)v21 || v32 >= (unsigned __int64)v25 )
  {
LABEL_45:
    if ( appended >= 0 )
      goto LABEL_46;
    if ( appended == -1073741702 || appended == -1073741515 )
    {
      if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v105 + 80))
        || (unsigned int)CompatCachepLookupCdb((wchar_t *)v97[10]) )
      {
        v90 = v97;
        LOBYTE(v91) = 0;
        v87 = v108;
        LdrpLogLoadFailureEtwEvent(v108, v97 + 9, 1LL, &LoadFailure, v91);
        LOBYTE(v92) = 1;
        LdrpLogLoadFailureEtwEvent(v87, v90 + 9, 1LL, &LoadFailureOperational, v92);
      }
      else
      {
        v87 = v108;
      }
      if ( (_BYTE)v31 )
      {
        v88 = -1073741512;
        appended = -1073741512;
        v89 = (char *)v103;
      }
      else
      {
        appended = -1073741511;
        v88 = -1073741511;
        v89 = v114;
      }
      LdrpReportError(v87, v89, v88);
      v83 = 1;
      goto LABEL_165;
    }
LABEL_164:
    v83 = 1;
LABEL_165:
    v84 = *(void **)(v1 + 192);
    if ( v84 )
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v84);
      *(_QWORD *)(v1 + 192) = 0LL;
    }
    if ( appended < 0 )
      v83 = 0;
    if ( !v83 )
      LdrpLogError((unsigned int)appended, 25LL, 0LL, v1);
    return (unsigned int)appended;
  }
  v45 = (unsigned __int64)&v24[v43];
  v98 = 0LL;
  v46 = 0LL;
  Value = 0;
  v102 = 0;
  v47 = 0LL;
  OutHeaders = 0LL;
  v48 = *(_QWORD *)(v105 + 176);
  v121 = v48;
  appended = 0;
  BaseAddress = 0LL;
  while ( 1 )
  {
    v49 = strrchr((const char *)v45, 46);
    if ( v49 )
    {
      if ( (unsigned __int64)&v49[-v45] > 0xFFFF )
      {
        v45 = *((_QWORD *)&v98 + 1);
        v50 = v98;
      }
      else
      {
        *((_QWORD *)&v98 + 1) = v45;
        v50 = (_WORD)v49 - v45;
        LOWORD(v98) = (_WORD)v49 - v45;
        WORD1(v98) = (_WORD)v49 - v45;
        if ( v49[1] != 35 )
        {
          v46 = v49 + 1;
LABEL_60:
          v51 = 1;
          goto LABEL_61;
        }
        if ( RtlCharToInteger(v49 + 2, 0, &Value) >= 0 )
        {
          v46 = 0LL;
          goto LABEL_60;
        }
      }
    }
    else
    {
      v45 = *((_QWORD *)&v98 + 1);
      v50 = v98;
    }
    appended = -1073741701;
    v51 = 0;
LABEL_61:
    if ( !v51 )
      goto LABEL_104;
    if ( v50 == 5 && (*(_DWORD *)v45 | 0x20202020) == 0x6C64746E && (*(_BYTE *)(v45 + 4) | 0x20) == 0x6C )
    {
      v47 = (PIMAGE_NT_HEADERS)LdrpNtDllDataTableEntry;
      OutHeaders = (PIMAGE_NT_HEADERS)LdrpNtDllDataTableEntry;
    }
    else
    {
      *(_DWORD *)(&OriginalName.MaximumLength + 1) = 0;
      memset_thunk_772440563353939046(v126, 0, 0xFEuLL);
      OriginalName.Buffer = (wchar_t *)&v125;
      *(_DWORD *)&OriginalName.Length = 0x1000000;
      v125 = 0;
      appended = LdrpAppendAnsiStringToFilenameBuffer(&OriginalName, &v98);
      if ( appended >= 0 )
      {
        appended = LdrpLoadDependentModuleInternal(&OriginalName, (__int64)&OutHeaders, (__int64)&BaseAddress);
        v47 = OutHeaders;
      }
      if ( appended < 0 )
      {
        v47 = 0LL;
        OutHeaders = 0LL;
        **(_DWORD **)(v48 + 40) = appended;
      }
      if ( &v125 != (__int16 *)OriginalName.Buffer )
        RtlpSysVolFree();
      OriginalName.Buffer = (wchar_t *)&v125;
      *(_DWORD *)&OriginalName.Length = 0x1000000;
      v125 = 0;
      if ( appended < 0 || appended == 259 )
        goto LABEL_104;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v105 + 176) + 32LL) & 0x2000000) != 0 )
    {
      if ( v46 )
      {
        v45 = LdrpCheckRedirection(v105, v47, v46);
        v94 = v45;
        if ( v45 != -4530927LL )
        {
          appended = 0;
          goto LABEL_107;
        }
      }
    }
    ImageBase = v47->OptionalHeader.ImageBase;
    Size = 0;
    v54 = 1;
    v55 = (char *)ImageBase;
    NtHeaders = 0LL;
    v56 = 0LL;
    if ( (ImageBase & 3) != 0 )
    {
      v55 = (char *)(ImageBase & 0xFFFFFFFFFFFFFFFCuLL);
      v54 = (ImageBase & 1) == 0;
    }
    v57 = RtlImageNtHeaderEx(1u, v55, 0LL, &NtHeaders);
    if ( NtHeaders )
    {
      v58 = NtHeaders->OptionalHeader.Magic;
      if ( v58 == 267 )
      {
        if ( !HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapReserve) )
          goto LABEL_127;
        v73 = LODWORD(NtHeaders->OptionalHeader.SizeOfHeapCommit);
        if ( (_DWORD)v73 )
        {
          Size = HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapCommit);
          if ( v54 || (unsigned int)v73 < NtHeaders->OptionalHeader.SizeOfHeaders )
          {
            v56 = &v55[v73];
            v57 = 0;
          }
          else
          {
            v74 = (unsigned int *)((char *)&NtHeaders->OptionalHeader.Magic + NtHeaders->FileHeader.SizeOfOptionalHeader);
            for ( j = 0; j < NtHeaders->FileHeader.NumberOfSections; ++j )
            {
              v76 = v74[3];
              if ( (unsigned int)v73 >= (unsigned int)v76 && (unsigned int)v73 < (unsigned int)v76 + v74[4] )
              {
                v56 = &v55[v74[5] - v76 + v73];
                break;
              }
              v74 += 10;
            }
            v57 = 0;
            if ( !v56 )
              v57 = -1073741811;
            v47 = OutHeaders;
          }
        }
        else
        {
          v57 = -1073741822;
        }
      }
      else
      {
        if ( v58 != 523 || !NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
        {
LABEL_127:
          v57 = -1073741811;
          goto LABEL_85;
        }
        v59 = NtHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
        if ( (_DWORD)v59 )
        {
          Size = NtHeaders->OptionalHeader.DataDirectory[0].Size;
          if ( v54 || (unsigned int)v59 < NtHeaders->OptionalHeader.SizeOfHeaders )
          {
            v56 = &v55[v59];
            v57 = 0;
          }
          else
          {
            v56 = (char *)RtlAddressInSectionTable(NtHeaders, v55, v59);
            v57 = 0;
            if ( !v56 )
              v57 = -1073741811;
          }
        }
        else
        {
          v57 = -1073741822;
        }
      }
    }
LABEL_85:
    v60 = 0LL;
    if ( v57 >= 0 )
      v60 = v56;
    if ( !v60 )
      goto LABEL_184;
    if ( v46 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrsnap.c",
        838LL,
        "LdrpGetProcedureAddress",
        2LL,
        "Locating procedure \"%s\" by name\n",
        v46);
      v61 = 0;
      v62 = *((_DWORD *)v60 + 6) - 1;
      for ( k = v62; ; k = v61 + v62 )
      {
        v64 = k / 2;
        v65 = v64;
        if ( v62 < v61 )
          break;
        v66 = v64;
        v67 = v46;
        v68 = ImageBase + *(unsigned int *)(ImageBase + *((unsigned int *)v60 + 8) + 4LL * v64) - (_QWORD)v46;
        while ( 1 )
        {
          v69 = *v67;
          if ( *v67 != v67[v68] )
            break;
          ++v67;
          if ( !v69 )
          {
            v70 = 0;
            goto LABEL_95;
          }
        }
        v70 = v69 < (unsigned int)v67[v68] ? -1 : 1;
LABEL_95:
        if ( !v70 )
        {
          v71 = *(unsigned __int16 *)(ImageBase + *((unsigned int *)v60 + 9) + 2 * v66);
          goto LABEL_97;
        }
        if ( v70 >= 0 )
          v61 = v65 + 1;
        else
          v62 = v65 - 1;
      }
      LdrpLogInternal(
        "minkernel\\ldr\\ldrsnap.c",
        2286LL,
        "LdrpNameToOrdinal",
        1LL,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        v46,
        (const void *)ImageBase);
LABEL_184:
      appended = -1073741702;
      goto LABEL_104;
    }
    v82 = Value;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      856LL,
      "LdrpGetProcedureAddress",
      2LL,
      "Loading procedure 0x%lx by ordinal\n",
      Value);
    if ( !v82 )
    {
      appended = -1073741811;
      goto LABEL_104;
    }
    v71 = v82 - *((_DWORD *)v60 + 4);
LABEL_97:
    if ( v71 >= *((_DWORD *)v60 + 5) )
      break;
    v45 = ImageBase + *(unsigned int *)(ImageBase + *((unsigned int *)v60 + 7) + 4LL * (int)v71);
    v94 = v45;
    if ( v45 < (unsigned __int64)v60 || v45 >= (unsigned __int64)&v60[Size] )
    {
      appended = 0;
      v72 = (void *)v47->OptionalHeader.ImageBase;
      if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        v98 = 0LL;
        v99 = 0LL;
        if ( (unsigned __int64)v72 < *((_QWORD *)&xmmword_1801E9430 + 1)
          || (unsigned __int64)v72 >= *((_QWORD *)&xmmword_1801E9430 + 1)
                                    + (unsigned __int64)(unsigned int)qword_1801E9440 )
        {
          RtlpxLookupFunctionTable(v72);
        }
        else
        {
          v98 = xmmword_1801E9430;
          v99 = qword_1801E9440;
        }
        if ( *((void **)&v98 + 1) != v72 )
LABEL_173:
          __fastfail(0x18u);
      }
LABEL_104:
      v45 = v94;
      goto LABEL_105;
    }
    if ( ++v102 == 32 )
    {
      appended = -1073741701;
      goto LABEL_105;
    }
    v48 = v121;
    appended = 0;
  }
  v45 = v94;
  if ( v46 )
    appended = -1073741511;
  else
    appended = -1073741512;
LABEL_105:
  if ( BaseAddress )
    RtlFreeHeap(LdrpHeap, 0, BaseAddress);
LABEL_107:
  v93 = appended;
  if ( appended != 259 )
  {
    LOBYTE(v31) = v112;
    v1 = v113;
    if ( appended < 0 )
      v32 = (unsigned __int64)v122;
    else
      v32 = v45;
    goto LABEL_45;
  }
  return 0LL;
}
