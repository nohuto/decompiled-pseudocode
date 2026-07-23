/*
 * XREFs of LdrpSnapModule @ 0x18006CB10
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     LdrpReportError @ 0x180032720 (LdrpReportError.c)
 *     LdrpDoPostSnapWork @ 0x180033DC0 (LdrpDoPostSnapWork.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180038910 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlpxLookupFunctionTable @ 0x1800430E0 (RtlpxLookupFunctionTable.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     RtlCharToInteger @ 0x18007A3D0 (RtlCharToInteger.c)
 *     RtlAddressInSectionTable @ 0x18007A5A0 (RtlAddressInSectionTable.c)
 *     LdrpLogDllState @ 0x18008D5E0 (LdrpLogDllState.c)
 *     LdrpCheckRedirection @ 0x18008EA08 (LdrpCheckRedirection.c)
 *     CompatCachepLookupCdb @ 0x18008F2EC (CompatCachepLookupCdb.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x1800AE370 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpHandlePendingModuleReplaced @ 0x1800D44DC (LdrpHandlePendingModuleReplaced.c)
 *     LdrpFreeReplacedModule @ 0x1800D4518 (LdrpFreeReplacedModule.c)
 *     LdrpLogError @ 0x1800F633C (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x180113530 (LdrpGenericExceptionFilter.c)
 *     strrchr @ 0x180124B80 (strrchr.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
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
  char *v21; // r8
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
  __int64 v45; // rdi
  char *v46; // rbx
  const char *v47; // r13
  PIMAGE_NT_HEADERS v48; // r15
  __int64 v49; // r14
  char *v50; // rax
  unsigned __int16 v51; // si
  int v52; // eax
  unsigned __int64 ImageBase; // r14
  unsigned int Size; // r12d
  bool v55; // bl
  char *v56; // rsi
  char *v57; // rdi
  NTSTATUS v58; // eax
  unsigned __int16 v59; // ax
  __int64 v60; // rax
  char *v61; // rsi
  int v62; // r11d
  int v63; // r10d
  int k; // eax
  int v65; // eax
  int v66; // r9d
  __int64 v67; // r8
  const char *v68; // rcx
  signed __int64 v69; // rdx
  unsigned __int8 v70; // al
  int v71; // eax
  ULONG v72; // eax
  void *v73; // rbx
  __int64 v74; // r9
  unsigned int *v75; // r8
  unsigned int j; // r10d
  __int64 v77; // rdx
  __int64 SizeOfHeapCommit_low; // r8
  unsigned int *v79; // rdx
  unsigned int i; // r10d
  __int64 v81; // r9
  char v82; // cl
  ULONG v83; // ebx
  int v84; // ebx
  void *v85; // rdx
  __int64 v87; // rax
  __int128 *v88; // r13
  int v89; // eax
  char *v90; // rdx
  __int64 v91; // rbx
  int v92; // [rsp+20h] [rbp-298h]
  int v93; // [rsp+20h] [rbp-298h]
  int v94; // [rsp+40h] [rbp-278h]
  char *v95; // [rsp+48h] [rbp-270h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp-268h] BYREF
  unsigned int SizeOfHeapCommit_high; // [rsp+58h] [rbp-260h]
  __int64 v98; // [rsp+60h] [rbp-258h]
  __int128 v99; // [rsp+68h] [rbp-250h] BYREF
  __int64 v100; // [rsp+78h] [rbp-240h]
  int v101; // [rsp+80h] [rbp-238h]
  ULONG Value; // [rsp+84h] [rbp-234h] BYREF
  int v103; // [rsp+88h] [rbp-230h]
  unsigned int v104; // [rsp+8Ch] [rbp-22Ch]
  unsigned int v105; // [rsp+90h] [rbp-228h]
  __int64 v106; // [rsp+98h] [rbp-220h]
  unsigned __int64 *v107; // [rsp+A0h] [rbp-218h]
  PIMAGE_NT_HEADERS NtHeaders; // [rsp+A8h] [rbp-210h] BYREF
  __int128 *v109; // [rsp+B0h] [rbp-208h]
  PVOID v110; // [rsp+B8h] [rbp-200h]
  char *v111; // [rsp+C0h] [rbp-1F8h]
  PVOID BaseAddress; // [rsp+C8h] [rbp-1F0h] BYREF
  unsigned __int64 v113; // [rsp+D0h] [rbp-1E8h]
  __int64 v114; // [rsp+D8h] [rbp-1E0h]
  char *v115; // [rsp+E0h] [rbp-1D8h]
  __int64 *v116; // [rsp+E8h] [rbp-1D0h]
  char *v117; // [rsp+F0h] [rbp-1C8h]
  char *v118; // [rsp+F8h] [rbp-1C0h]
  __int64 v119; // [rsp+100h] [rbp-1B8h]
  char *v120; // [rsp+108h] [rbp-1B0h]
  char *v121; // [rsp+110h] [rbp-1A8h]
  __int64 v122; // [rsp+118h] [rbp-1A0h]
  char *v123; // [rsp+120h] [rbp-198h]
  __int64 v124; // [rsp+128h] [rbp-190h]
  _UNICODE_STRING OriginalName; // [rsp+130h] [rbp-188h] BYREF
  __int16 v126; // [rsp+140h] [rbp-178h] BYREF
  char v127[254]; // [rsp+142h] [rbp-176h] BYREF
  _QWORD v128[8]; // [rsp+240h] [rbp-78h] BYREF

  v1 = a1;
  v114 = a1;
  v124 = a1;
  SizeOfHeapCommit_high = 0;
  v95 = 0LL;
  v2 = *(_QWORD *)(a1 + 56);
  v106 = v2;
  v119 = *(_QWORD *)(v2 + 48);
  v109 = (__int128 *)(v2 + 72);
  LdrpLogDllState(v119, v2 + 72, 5286LL);
  LdrpHandlePendingModuleReplaced(v1);
  memset_thunk_772440563353939046(v128, 0, 0x40uLL);
  v101 = 0;
  appended = 0;
  v94 = 0;
  v104 = 0;
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
    v98 = (__int64)v6;
    if ( v6 )
    {
      v8 = v6[22];
      if ( v8 )
      {
        if ( (*(_DWORD *)(v8 + 32) & 0x80000) == 0 && *(_QWORD **)(v8 + 56) != v6 )
        {
          v7 = *(_QWORD **)(v8 + 56);
          v98 = (__int64)v7;
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
    v12 = (unsigned __int64 *)(v119 + v11);
    v13 = (unsigned __int64 *)(v119 + *(unsigned int *)(v10 + 20 * v5 + 16));
    v107 = v13;
    if ( !(_DWORD)v11 || (unsigned int)v11 > *(_DWORD *)(v2 + 64) )
      v12 = v13;
    if ( v7 )
      break;
LABEL_52:
    ++*(_DWORD *)(v1 + 128);
  }
  v14 = v7[6];
  v110 = (PVOID)v14;
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
          v79 = (unsigned int *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
          for ( i = 0; i < OutHeaders->FileHeader.NumberOfSections; ++i )
          {
            v81 = v79[3];
            if ( (unsigned int)SizeOfHeapCommit_low >= (unsigned int)v81
              && (unsigned int)SizeOfHeapCommit_low < (unsigned int)v81 + v79[4] )
            {
              v17 = &v16[v79[5] - v81 + SizeOfHeapCommit_low];
              break;
            }
            v79 += 10;
          }
          v18 = 0;
          if ( !v17 )
            v18 = -1073741811;
          appended = v94;
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
  v111 = v21;
  if ( !v21 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      3382,
      (__int64)"LdrpSnapModule",
      0,
      "DLL \"%wZ\" does not contain an export table\n",
      v98 + 72);
    appended = -1073741701;
    goto LABEL_164;
  }
  v22 = 0LL;
  v23 = (PVOID *)v128;
  v24 = (char *)v110;
  do
  {
    if ( !*v23 )
      break;
    if ( v110 == *v23 )
      break;
    v22 = (unsigned int)(v22 + 1);
    ++v23;
  }
  while ( (unsigned int)v22 < 8 );
  if ( (_DWORD)v22 == 8 || !v128[v22] )
  {
    if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
    {
      v99 = 0LL;
      v100 = 0LL;
      if ( (unsigned __int64)v110 < *((_QWORD *)&xmmword_1801E6440 + 1)
        || (unsigned __int64)v110 >= *((_QWORD *)&xmmword_1801E6440 + 1)
                                   + (unsigned __int64)(unsigned int)qword_1801E6450 )
      {
        RtlpxLookupFunctionTable(v110, (char **)&v99);
        v21 = v111;
      }
      else
      {
        v99 = xmmword_1801E6440;
        v100 = qword_1801E6450;
      }
      if ( *((char **)&v99 + 1) != v24 )
        goto LABEL_173;
    }
    v82 = v101;
    v128[v101] = v24;
    v101 = (v82 + 1) & 7;
  }
  v25 = &v21[SizeOfHeapCommit_high];
  v118 = v25;
  v26 = &v24[*((unsigned int *)v21 + 7)];
  v117 = v26;
  v27 = *((_DWORD *)v21 + 6);
  v105 = v27;
  v120 = &v24[*((unsigned int *)v21 + 8)];
  v121 = &v24[*((unsigned int *)v21 + 9)];
  v28 = *(unsigned int *)(v1 + 132);
  v29 = (__int64 *)&v12[v28];
  v107 = (unsigned __int64 *)((char *)v107 + v28 * 8);
  while ( 1 )
  {
    v116 = v29;
    v30 = *v29;
    if ( !*v29 )
    {
      *(_DWORD *)(v1 + 132) = 0;
      v2 = v106;
      goto LABEL_52;
    }
    appended = -1073741702;
    v94 = -1073741702;
    v31 = (unsigned __int64)v30 >> 63;
    v113 = (unsigned __int64)v30 >> 63;
    v32 = -4530927LL;
    v115 = 0LL;
    if ( v30 < 0 )
    {
      v104 = (unsigned __int16)v30;
      v42 = (unsigned __int16)v30 - *((_DWORD *)v21 + 4);
      goto LABEL_42;
    }
    v33 = (unsigned __int16 *)(*(_QWORD *)(v106 + 48) + (unsigned int)v30);
    v34 = (const char *)(v33 + 1);
    v115 = (char *)(v33 + 1);
    if ( (*(_DWORD *)(v1 + 32) & 0x2000000) == 0 )
      goto LABEL_32;
    v87 = LdrpCheckRedirection(v106, v98, v33 + 1);
    v32 = v87;
    if ( v87 == -4530927 )
      break;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      3480,
      (__int64)"LdrpSnapModule",
      2,
      "Import '%s' of DLL '%wZ' is redirected to 0x%p",
      v33 + 1,
      v109,
      v87);
    appended = 0;
    v94 = 0;
LABEL_46:
    v44 = v107;
    *v107 = v32;
    v29 = v116 + 1;
    v107 = v44 + 1;
    ++*(_DWORD *)(v1 + 132);
    v27 = v105;
    v24 = (char *)v110;
    v21 = v111;
    v26 = v117;
    v25 = v118;
  }
  v27 = v105;
LABEL_32:
  v35 = *v33;
  v36 = 0;
  v37 = v27 - 1;
  if ( v35 >= v27 )
    v35 = v37 / 2;
  v24 = (char *)v110;
  while ( 1 )
  {
    if ( v37 < v36 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrsnap.c",
        2286,
        (__int64)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        v34,
        v110);
      goto LABEL_45;
    }
    v38 = v34;
    v39 = (char *)((_BYTE *)v110 + *(unsigned int *)&v120[4 * v35] - v34);
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
  v42 = *(unsigned __int16 *)&v121[2 * v35];
  v21 = v111;
  v26 = v117;
  v25 = v118;
LABEL_42:
  if ( (unsigned int)v42 >= *((_DWORD *)v21 + 5) )
    goto LABEL_45;
  _mm_lfence();
  v43 = *(unsigned int *)&v26[4 * v42];
  if ( !(_DWORD)v43 )
  {
    appended = -1073741702;
    goto LABEL_45;
  }
  v32 = (unsigned __int64)&v24[v43];
  v123 = &v24[v43];
  appended = 0;
  v94 = 0;
  if ( &v24[v43] <= v21 || v32 >= (unsigned __int64)v25 )
  {
LABEL_45:
    if ( appended >= 0 )
      goto LABEL_46;
    if ( appended == -1073741702 || appended == -1073741515 )
    {
      if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v106 + 80))
        || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v98 + 80)) )
      {
        v91 = v98;
        LOBYTE(v92) = 0;
        v88 = v109;
        LdrpLogLoadFailureEtwEvent(v109, v98 + 72, 1LL, &LoadFailure, v92);
        LOBYTE(v93) = 1;
        LdrpLogLoadFailureEtwEvent(v88, v91 + 72, 1LL, "\b", v93);
      }
      else
      {
        v88 = v109;
      }
      if ( (_BYTE)v31 )
      {
        v89 = -1073741512;
        appended = -1073741512;
        v90 = (char *)v104;
      }
      else
      {
        appended = -1073741511;
        v89 = -1073741511;
        v90 = v115;
      }
      LdrpReportError(v88, v90, v89);
      v84 = 1;
      goto LABEL_165;
    }
LABEL_164:
    v84 = 1;
LABEL_165:
    v85 = *(void **)(v1 + 192);
    if ( v85 )
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v85);
      *(_QWORD *)(v1 + 192) = 0LL;
    }
    if ( appended < 0 )
      v84 = 0;
    if ( !v84 )
      LdrpLogError((unsigned int)appended, 25LL, 0LL, v1);
    return (unsigned int)appended;
  }
  v45 = v98;
  v46 = &v24[v43];
  v99 = 0LL;
  v47 = 0LL;
  Value = 0;
  v103 = 0;
  v48 = 0LL;
  OutHeaders = 0LL;
  v49 = *(_QWORD *)(v106 + 176);
  v122 = v49;
  appended = 0;
  BaseAddress = 0LL;
  while ( 1 )
  {
    v50 = strrchr(v46, 46);
    if ( v50 )
    {
      if ( (unsigned __int64)(v50 - v46) > 0xFFFF )
      {
        v46 = (char *)*((_QWORD *)&v99 + 1);
        v51 = v99;
      }
      else
      {
        *((_QWORD *)&v99 + 1) = v46;
        v51 = (_WORD)v50 - (_WORD)v46;
        LOWORD(v99) = (_WORD)v50 - (_WORD)v46;
        WORD1(v99) = (_WORD)v50 - (_WORD)v46;
        if ( v50[1] != 35 )
        {
          v47 = v50 + 1;
LABEL_60:
          v52 = 1;
          goto LABEL_61;
        }
        if ( RtlCharToInteger(v50 + 2, 0, &Value) >= 0 )
        {
          v47 = 0LL;
          goto LABEL_60;
        }
      }
    }
    else
    {
      v46 = (char *)*((_QWORD *)&v99 + 1);
      v51 = v99;
    }
    appended = -1073741701;
    v52 = 0;
LABEL_61:
    if ( !v52 )
      goto LABEL_104;
    if ( v51 == 5 && (*(_DWORD *)v46 | 0x20202020) == 0x6C64746E && ((unsigned __int8)v46[4] | 0x20) == 0x6C )
    {
      v48 = (PIMAGE_NT_HEADERS)LdrpNtDllDataTableEntry;
      OutHeaders = (PIMAGE_NT_HEADERS)LdrpNtDllDataTableEntry;
    }
    else
    {
      *(_DWORD *)(&OriginalName.MaximumLength + 1) = 0;
      memset_thunk_772440563353939046(v127, 0, 0xFEuLL);
      OriginalName.Buffer = (wchar_t *)&v126;
      *(_DWORD *)&OriginalName.Length = 0x1000000;
      v126 = 0;
      appended = LdrpAppendAnsiStringToFilenameBuffer(&OriginalName.Length, (const ANSI_STRING *)&v99);
      if ( appended >= 0 )
      {
        appended = LdrpLoadDependentModuleInternal(&OriginalName, v49, v45, 1, (__int64 *)&OutHeaders, &BaseAddress);
        v48 = OutHeaders;
      }
      if ( appended < 0 )
      {
        v48 = 0LL;
        OutHeaders = 0LL;
        **(_DWORD **)(v49 + 40) = appended;
      }
      if ( &v126 != (__int16 *)OriginalName.Buffer )
        RtlpSysVolFree(OriginalName.Buffer);
      OriginalName.Buffer = (wchar_t *)&v126;
      *(_DWORD *)&OriginalName.Length = 0x1000000;
      v126 = 0;
      if ( appended < 0 || appended == 259 )
        goto LABEL_104;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v106 + 176) + 32LL) & 0x2000000) != 0 )
    {
      if ( v47 )
      {
        v46 = (char *)LdrpCheckRedirection(v106, v48, v47);
        v95 = v46;
        if ( v46 != (char *)-4530927LL )
        {
          appended = 0;
          goto LABEL_107;
        }
      }
    }
    ImageBase = v48->OptionalHeader.ImageBase;
    Size = 0;
    v55 = 1;
    v56 = (char *)ImageBase;
    NtHeaders = 0LL;
    v57 = 0LL;
    if ( (ImageBase & 3) != 0 )
    {
      v56 = (char *)(ImageBase & 0xFFFFFFFFFFFFFFFCuLL);
      v55 = (ImageBase & 1) == 0;
    }
    v58 = RtlImageNtHeaderEx(1u, v56, 0LL, &NtHeaders);
    if ( NtHeaders )
    {
      v59 = NtHeaders->OptionalHeader.Magic;
      if ( v59 == 267 )
      {
        if ( !HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapReserve) )
          goto LABEL_127;
        v74 = LODWORD(NtHeaders->OptionalHeader.SizeOfHeapCommit);
        if ( (_DWORD)v74 )
        {
          Size = HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapCommit);
          if ( v55 || (unsigned int)v74 < NtHeaders->OptionalHeader.SizeOfHeaders )
          {
            v57 = &v56[v74];
            v58 = 0;
          }
          else
          {
            v75 = (unsigned int *)((char *)&NtHeaders->OptionalHeader.Magic + NtHeaders->FileHeader.SizeOfOptionalHeader);
            for ( j = 0; j < NtHeaders->FileHeader.NumberOfSections; ++j )
            {
              v77 = v75[3];
              if ( (unsigned int)v74 >= (unsigned int)v77 && (unsigned int)v74 < (unsigned int)v77 + v75[4] )
              {
                v57 = &v56[v75[5] - v77 + v74];
                break;
              }
              v75 += 10;
            }
            v58 = 0;
            if ( !v57 )
              v58 = -1073741811;
            v48 = OutHeaders;
          }
        }
        else
        {
          v58 = -1073741822;
        }
      }
      else
      {
        if ( v59 != 523 || !NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
        {
LABEL_127:
          v58 = -1073741811;
          goto LABEL_85;
        }
        v60 = NtHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
        if ( (_DWORD)v60 )
        {
          Size = NtHeaders->OptionalHeader.DataDirectory[0].Size;
          if ( v55 || (unsigned int)v60 < NtHeaders->OptionalHeader.SizeOfHeaders )
          {
            v57 = &v56[v60];
            v58 = 0;
          }
          else
          {
            v57 = (char *)RtlAddressInSectionTable(NtHeaders, v56, v60);
            v58 = 0;
            if ( !v57 )
              v58 = -1073741811;
          }
        }
        else
        {
          v58 = -1073741822;
        }
      }
    }
LABEL_85:
    v61 = 0LL;
    if ( v58 >= 0 )
      v61 = v57;
    if ( !v61 )
      goto LABEL_184;
    if ( v47 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrsnap.c",
        838,
        (__int64)"LdrpGetProcedureAddress",
        2,
        "Locating procedure \"%s\" by name\n",
        v47);
      v62 = 0;
      v63 = *((_DWORD *)v61 + 6) - 1;
      for ( k = v63; ; k = v62 + v63 )
      {
        v65 = k / 2;
        v66 = v65;
        if ( v63 < v62 )
          break;
        v67 = v65;
        v68 = v47;
        v69 = ImageBase + *(unsigned int *)(ImageBase + *((unsigned int *)v61 + 8) + 4LL * v65) - (_QWORD)v47;
        while ( 1 )
        {
          v70 = *v68;
          if ( *v68 != v68[v69] )
            break;
          ++v68;
          if ( !v70 )
          {
            v71 = 0;
            goto LABEL_95;
          }
        }
        v71 = v70 < (unsigned int)v68[v69] ? -1 : 1;
LABEL_95:
        if ( !v71 )
        {
          v72 = *(unsigned __int16 *)(ImageBase + *((unsigned int *)v61 + 9) + 2 * v67);
          goto LABEL_97;
        }
        if ( v71 >= 0 )
          v62 = v66 + 1;
        else
          v63 = v66 - 1;
      }
      LdrpLogInternal(
        "minkernel\\ldr\\ldrsnap.c",
        2286,
        (__int64)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        v47,
        (const void *)ImageBase);
LABEL_184:
      appended = -1073741702;
      goto LABEL_104;
    }
    v83 = Value;
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      856,
      (__int64)"LdrpGetProcedureAddress",
      2,
      "Loading procedure 0x%lx by ordinal\n",
      Value);
    if ( !v83 )
    {
      appended = -1073741811;
      goto LABEL_104;
    }
    v72 = v83 - *((_DWORD *)v61 + 4);
LABEL_97:
    if ( v72 >= *((_DWORD *)v61 + 5) )
      break;
    v46 = (char *)(ImageBase + *(unsigned int *)(ImageBase + *((unsigned int *)v61 + 7) + 4LL * (int)v72));
    v95 = v46;
    if ( v46 < v61 || v46 >= &v61[Size] )
    {
      appended = 0;
      v73 = (void *)v48->OptionalHeader.ImageBase;
      if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        v99 = 0LL;
        v100 = 0LL;
        if ( (unsigned __int64)v73 < *((_QWORD *)&xmmword_1801E6440 + 1)
          || (unsigned __int64)v73 >= *((_QWORD *)&xmmword_1801E6440 + 1)
                                    + (unsigned __int64)(unsigned int)qword_1801E6450 )
        {
          RtlpxLookupFunctionTable(v73, (char **)&v99);
        }
        else
        {
          v99 = xmmword_1801E6440;
          v100 = qword_1801E6450;
        }
        if ( *((void **)&v99 + 1) != v73 )
LABEL_173:
          __fastfail(0x18u);
      }
LABEL_104:
      v46 = v95;
      goto LABEL_105;
    }
    if ( ++v103 == 32 )
    {
      appended = -1073741701;
      goto LABEL_105;
    }
    v45 = (__int64)v48;
    v49 = v122;
    appended = 0;
  }
  v46 = v95;
  if ( v47 )
    appended = -1073741511;
  else
    appended = -1073741512;
LABEL_105:
  if ( BaseAddress )
    RtlFreeHeap(LdrpHeap, 0, BaseAddress);
LABEL_107:
  v94 = appended;
  if ( appended != 259 )
  {
    LOBYTE(v31) = v113;
    v1 = v114;
    if ( appended < 0 )
      v32 = (unsigned __int64)v123;
    else
      v32 = (unsigned __int64)v46;
    goto LABEL_45;
  }
  return 0LL;
}
