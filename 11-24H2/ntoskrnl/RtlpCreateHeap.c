/*
 * XREFs of RtlpCreateHeap @ 0x1404D0784
 * Callers:
 *     RtlCreateHeap @ 0x140783180 (RtlCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     ExDeleteResourceLite @ 0x1402E55A0 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     RtlpCreateHeapEncoding @ 0x1405E8C68 (RtlpCreateHeapEncoding.c)
 *     RtlpInitializeHeapSegment @ 0x1405EA5CC (RtlpInitializeHeapSegment.c)
 *     RtlpHeapExceptionFilter @ 0x1405EFF10 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1405F056C (RtlpHeapHandleError.c)
 *     RtlpPopulateListIndex @ 0x1405F0F44 (RtlpPopulateListIndex.c)
 *     RtlpHpFixedHeapCreate @ 0x140602C10 (RtlpHpFixedHeapCreate.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1406A7770 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1406A7810 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlGetNtGlobalFlags @ 0x140AB72F0 (RtlGetNtGlobalFlags.c)
 */

PVOID __fastcall RtlpCreateHeap(int a1, char *a2, void *a3, __int64 a4, __int64 a5, __int128 *a6)
{
  struct _ERESOURCE *v9; // r13
  unsigned int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r15
  PVOID v18; // rdi
  unsigned int v19; // ecx
  int v20; // ecx
  int v21; // edx
  int v22; // r15d
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  ULONG_PTR v29; // rdx
  ULONG_PTR v30; // rcx
  unsigned __int64 v31; // r8
  int v32; // edi
  struct _ERESOURCE *v33; // rdx
  char *v34; // r14
  char *v35; // rcx
  ULONG_PTR v36; // rax
  char *v37; // rsi
  unsigned __int64 v38; // rax
  signed __int64 v39; // rdx
  unsigned __int64 v40; // rtt
  char *v41; // rdi
  bool v42; // cf
  ULONG v43; // eax
  unsigned __int64 v44; // rdi
  int v45; // r9d
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _DWORD *v51; // rcx
  PVOID v52; // [rsp+40h] [rbp-1C8h] BYREF
  __int64 v53; // [rsp+48h] [rbp-1C0h]
  ULONG NtGlobalFlags; // [rsp+50h] [rbp-1B8h]
  ULONG_PTR v55; // [rsp+58h] [rbp-1B0h] BYREF
  int v56; // [rsp+60h] [rbp-1A8h]
  ULONG_PTR v57; // [rsp+68h] [rbp-1A0h] BYREF
  PVOID v58; // [rsp+70h] [rbp-198h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-190h] BYREF
  ULONG_PTR v60; // [rsp+80h] [rbp-188h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-180h] BYREF
  __int64 v62; // [rsp+90h] [rbp-178h]
  unsigned __int64 v63; // [rsp+98h] [rbp-170h]
  __int64 v64; // [rsp+A0h] [rbp-168h]
  __int64 v65[2]; // [rsp+B0h] [rbp-158h] BYREF
  __int128 v66; // [rsp+C0h] [rbp-148h] BYREF
  __int128 v67; // [rsp+D0h] [rbp-138h]
  __int128 v68; // [rsp+E0h] [rbp-128h]
  __int128 v69; // [rsp+F0h] [rbp-118h]
  __int128 v70; // [rsp+100h] [rbp-108h]
  __int128 v71; // [rsp+110h] [rbp-F8h]
  __int128 MemoryInformation; // [rsp+120h] [rbp-E8h] BYREF
  __int128 v73; // [rsp+130h] [rbp-D8h]
  __int128 v74; // [rsp+140h] [rbp-C8h]
  __int128 v75; // [rsp+150h] [rbp-B8h] BYREF
  __int128 v76; // [rsp+160h] [rbp-A8h]
  __int128 v77; // [rsp+170h] [rbp-98h]
  _BYTE SystemInformation[40]; // [rsp+180h] [rbp-88h] BYREF
  __int64 v79; // [rsp+1A8h] [rbp-60h]

  BaseAddress = a3;
  v53 = a5;
  v63 = (unsigned __int64)a2;
  v62 = a5;
  v58 = 0LL;
  NtGlobalFlags = RtlGetNtGlobalFlags();
  MemoryInformation = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v56 = 0;
  v57 = 0LL;
  memset_0(SystemInformation, 0, 0x40uLL);
  v52 = 0LL;
  v9 = 0LL;
  if ( (a1 & 0x100) != 0 )
  {
    if ( a2 && !v53 && (a1 & 2) == 0 )
    {
      v10 = ((a1 & 0xFFFFFFFC) << 29) | 2;
      if ( (a1 & 8) == 0 )
        v10 = (a1 & 0xFFFFFFFC) << 29;
      v11 = v10 | 0x20000000;
      if ( (a1 & 0x8000000) == 0 && (NtGlobalFlags & 0x1000) == 0 )
        v11 = v10;
      v12 = v11 | 0x2000;
      if ( (a1 & 0x20) == 0 && (NtGlobalFlags & 0x10) == 0 )
        v12 = v11;
      v13 = v12 | 0x40000000;
      if ( (a1 & 0x40000) == 0 )
        v13 = v12;
      v14 = v13 | 0x10000000;
      if ( (a1 & 0x10) == 0 )
        v14 = v13;
      v15 = v14 | 0x8000000;
      if ( (a1 & 0x200) == 0 )
        v15 = v14;
      if ( !*((_QWORD *)a6 + 9) || (v16 = *((_QWORD *)a6 + 7)) != 0 && (v17 = *((_QWORD *)a6 + 8)) != 0 && v16 <= v17 )
      {
        *(_OWORD *)v65 = RtlpHpLegacyEnvHandle;
        v18 = (PVOID)RtlpHpFixedHeapCreate(a2, v15, (__int64)v65);
LABEL_112:
        v33 = (struct _ERESOURCE *)v53;
        goto LABEL_113;
      }
    }
LABEL_111:
    v18 = 0LL;
    goto LABEL_112;
  }
  if ( (a1 & 0x200) != 0 )
    goto LABEL_111;
  if ( (a1 & 0x10000000) == 0 )
  {
    v19 = a1 & 0xFFF80C00;
    if ( RtlpHeapErrorHandlerThreshold < 2 )
    {
      if ( v19 )
        a1 &= 0x7F3FFu;
    }
    else if ( v19 )
    {
      DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
      RtlpHeapHandleError();
    }
  }
  memset_0(&v66, 0, 0x60uLL);
  if ( a6 && *(_DWORD *)a6 == 96 )
  {
    v66 = *a6;
    v67 = a6[1];
    v68 = a6[2];
    v69 = a6[3];
    v70 = a6[4];
    v71 = a6[5];
  }
  v20 = a1 | 0x20;
  if ( (NtGlobalFlags & 0x10) == 0 )
    v20 = a1;
  v21 = v20 | 0x40;
  if ( (NtGlobalFlags & 0x20) == 0 )
    v21 = v20;
  v22 = v21 | 0x80;
  if ( (NtGlobalFlags & 0x200000) == 0 )
    v22 = v21;
  v23 = *((_QWORD *)&v66 + 1);
  if ( !*((_QWORD *)&v66 + 1) )
    v23 = qword_140FC5238;
  *((_QWORD *)&v66 + 1) = v23;
  v24 = v67;
  if ( !(_QWORD)v67 )
    v24 = qword_140FC5230;
  *(_QWORD *)&v67 = v24;
  v25 = *((_QWORD *)&v67 + 1);
  if ( !*((_QWORD *)&v67 + 1) )
    v25 = qword_140FC5220;
  v63 = v25;
  *((_QWORD *)&v67 + 1) = v25;
  v26 = v68;
  if ( !(_QWORD)v68 )
    v26 = qword_140FC5228;
  v65[0] = v26;
  *(_QWORD *)&v68 = v26;
  v27 = qword_140E67A60;
  if ( !qword_140E67A60 )
  {
    qword_140E67A58 = 0x10000LL;
    if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
      goto LABEL_111;
    v27 = v79;
    qword_140E67A60 = v79;
  }
  v64 = *((_QWORD *)&v68 + 1);
  if ( !*((_QWORD *)&v68 + 1) )
  {
    v64 = v27 - qword_140E67A58 - 4096;
    *((_QWORD *)&v68 + 1) = v64;
  }
  v28 = v69;
  if ( (unsigned __int64)(v69 - 1) > 0xFEFFF )
    v28 = 1044480LL;
  *(_QWORD *)&v69 = v28;
  if ( a4 )
    v29 = (a4 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v29 = 0x2000LL;
  v57 = v29;
  if ( BaseAddress )
    v30 = ((unsigned __int64)BaseAddress + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    v30 = (v29 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v55 = v30;
  v31 = v29;
  if ( v29 > v30 )
  {
    v29 = v30;
    v57 = v30;
    v31 = v30;
  }
  if ( (v22 & 2) == 0 || a2 )
  {
    v62 = 0LL;
    v32 = v56;
  }
  else
  {
    v62 = 4096LL;
    v32 = 2;
    v56 = 2;
    if ( v30 - 4096 < v31 )
    {
      v30 = (v30 + 69631) & 0xFFFFFFFFFFFF0000uLL;
      v55 = v30;
    }
  }
  if ( !v29 || !v30 )
    goto LABEL_111;
  NtGlobalFlags = 712;
  v33 = (struct _ERESOURCE *)v53;
  if ( (v22 & 1) != 0 )
  {
    if ( v53 )
      goto LABEL_80;
  }
  else
  {
    if ( v53 )
      v22 |= 0x80000000;
    NtGlobalFlags = v53 != 0 ? 712 : 816;
    v9 = (struct _ERESOURCE *)(v53 & -(__int64)(v53 != 0));
  }
  if ( a2 )
  {
    if ( !*((_QWORD *)&v70 + 1) )
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             a2,
             MemoryBasicInformation,
             &MemoryInformation,
             0x30uLL,
             0LL) < 0 )
        goto LABEL_111;
      v34 = (char *)MemoryInformation;
      if ( (char *)MemoryInformation != a2 || (_DWORD)v74 == 0x10000 )
        goto LABEL_111;
      v35 = (char *)MemoryInformation;
      v58 = (PVOID)MemoryInformation;
      if ( (_DWORD)v74 == 4096 )
      {
        if ( (v22 & 0x40000) != 0 && (BYTE4(v74) & 0x40) == 0 )
          goto LABEL_111;
        memset_0((void *)MemoryInformation, 0, 0x1000uLL);
        if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, MemoryRegionInformation, &v75, 0x30uLL, 0LL) < 0 )
          goto LABEL_111;
        v55 = v76;
        v57 = *((_QWORD *)&v73 + 1);
        v35 = (char *)v58;
        v34 = (char *)v58 + *((_QWORD *)&v73 + 1);
      }
      else
      {
        v55 = *((_QWORD *)&v73 + 1);
        v36 = v57;
        if ( v57 > *((_QWORD *)&v73 + 1) )
        {
          v36 = *((_QWORD *)&v73 + 1);
          v57 = *((_QWORD *)&v73 + 1);
        }
        if ( v36 < 0x2000 )
          goto LABEL_111;
      }
      goto LABEL_92;
    }
    if ( *((_QWORD *)&v69 + 1) && (_QWORD)v70 && *((_QWORD *)&v69 + 1) <= (unsigned __int64)v70 && (v22 & 2) == 0 )
    {
      v58 = a2;
      v34 = &a2[*((_QWORD *)&v69 + 1)];
      v55 = v70;
      memset_0(a2, 0, 0x1000uLL);
      v35 = a2;
LABEL_92:
      v56 = v32 | 1;
      v37 = a2;
      v52 = a2;
      goto LABEL_102;
    }
  }
  else
  {
    BaseAddress = 0LL;
    RegionSize = 0LL;
    v60 = 0LL;
    if ( !*((_QWORD *)&v70 + 1) )
    {
      v38 = qword_140E28380;
      do
      {
        v39 = ((((v38 ^ (v38 >> 12)) << 25) ^ v38 ^ (v38 >> 12)) >> 27) ^ ((v38 ^ (v38 >> 12)) << 25) ^ v38 ^ (v38 >> 12);
        v40 = v38;
        v38 = _InterlockedCompareExchange64(&qword_140E28380, v39, v38);
      }
      while ( v40 != v38 );
      v60 = (unsigned __int64)((-3 * (_BYTE)v39) & 0x1F) << 16;
      RegionSize = v55 + v60;
      if ( v55 + v60 < v55 )
      {
        RegionSize = v55;
        v60 = 0LL;
      }
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
        goto LABEL_111;
      v37 = (char *)BaseAddress;
      v52 = BaseAddress;
      v55 = RegionSize;
      if ( v60 )
      {
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v60, 0x8000u);
        v37 = (char *)BaseAddress + v60;
        v52 = (char *)BaseAddress + v60;
        v55 = RegionSize - v60;
      }
      v35 = v37;
      v58 = v37;
      v34 = v37;
      v64 = *((_QWORD *)&v68 + 1);
      v65[0] = v68;
      v63 = *((_QWORD *)&v67 + 1);
LABEL_102:
      if ( v35 == v34 )
      {
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v58, 0LL, &v57, 0x1000u, 4u) < 0 )
          goto LABEL_111;
        v34 += v57;
        v37 = (char *)v52;
      }
      v41 = v37 + 712;
      v42 = (RtlGetNtGlobalFlags() & 0x800) != 0;
      v43 = NtGlobalFlags;
      if ( v42 )
      {
        v44 = (unsigned __int64)(v37 + 719) & 0xFFFFFFFFFFFFFFF8uLL;
        *((_QWORD *)v37 + 41) = v44;
        v43 += 2064;
        v41 = (char *)(v44 + 2064);
        v22 |= 0x4000000u;
        v37 = (char *)v52;
      }
      NtGlobalFlags = (v43 + 15) & 0xFFFFFFF0;
      *((_WORD *)v37 + 4) = NtGlobalFlags >> 4;
      *((_BYTE *)v52 + 10) = 1;
      *((_BYTE *)v52 + 15) = 1;
      *((_DWORD *)v52 + 38) = -285217025;
      *((_DWORD *)v52 + 28) = v22 & 0xEFFFFFFF;
      *((_DWORD *)v52 + 36) = 0;
      memset_0((char *)v52 + 568, 0, 0x80uLL);
      RtlpCreateHeapEncoding(v52);
      *((_DWORD *)v52 + 29) = v22 & 0x6001007D;
      *((_WORD *)v52 + 105) = (_WORD)v41 - (_WORD)v52;
      *((_QWORD *)v52 + 27) = 0LL;
      v46 = (char *)v52 + 336;
      *((_QWORD *)v52 + 43) = (char *)v52 + 336;
      *v46 = v46;
      v47 = (char *)v52 + 272;
      *((_QWORD *)v52 + 35) = (char *)v52 + 272;
      *v47 = v47;
      v48 = (char *)v52 + 288;
      *((_QWORD *)v52 + 37) = (char *)v52 + 288;
      *v48 = v48;
      v49 = (char *)v52 + 240;
      *((_QWORD *)v52 + 31) = (char *)v52 + 240;
      *v49 = v49;
      if ( !v9 && (v22 & 1) == 0 )
      {
        v9 = (struct _ERESOURCE *)v41;
        if ( (int)ExInitializeResourceLite2(v41, -1) < 0 )
        {
          v9 = 0LL;
          goto LABEL_111;
        }
        v41 += 104;
      }
      *((_QWORD *)v52 + 44) = v9;
      *((_DWORD *)v52 + 30) |= 0x80000000;
      if ( (unsigned __int8)RtlpInitializeHeapSegment(
                              (int)v52,
                              (int)v52,
                              NtGlobalFlags + 1104,
                              v45,
                              v56,
                              (__int64)v58,
                              v34,
                              (__int64)v58 + v55 - v62) )
      {
        if ( a2 )
          memset_0(v41, 0, 0x80uLL);
        *((_DWORD *)v41 + 2) = 128;
        *((_QWORD *)v41 + 5) = v41 + 56;
        *((_QWORD *)v41 + 4) = (char *)v52 + 336;
        *((_QWORD *)v41 + 6) = v41 + 72;
        RtlpPopulateListIndex(v52, v41);
        *((_WORD *)v52 + 104) = 0;
        *((_QWORD *)v52 + 20) = *((_QWORD *)&v66 + 1);
        *((_QWORD *)v52 + 21) = v67;
        *((_QWORD *)v52 + 22) = v63 >> 4;
        *((_QWORD *)v52 + 23) = (unsigned __int64)v65[0] >> 4;
        *((_QWORD *)v52 + 25) = v64;
        *((_DWORD *)v52 + 37) = (unsigned __int64)(v69 + 15) >> 4;
        *((_QWORD *)v52 + 45) = RtlpHeapKey ^ *((_QWORD *)&v70 + 1);
        *((_DWORD *)v52 + 174) = 4;
        *((_QWORD *)v52 + 88) = 2088960LL;
        *((_QWORD *)v52 + 32) = 31LL;
        *((_QWORD *)v52 + 33) = -16LL;
        v51 = v52;
        if ( (*((_DWORD *)v52 + 28) & 0x20) != 0 )
        {
          *((_QWORD *)v52 + 32) += 16LL;
          v51 = v52;
        }
        v51[30] &= ~0x80000000;
        v18 = v52;
        v52 = 0LL;
        v9 = 0LL;
        goto LABEL_112;
      }
      goto LABEL_111;
    }
  }
LABEL_80:
  v18 = 0LL;
LABEL_113:
  if ( v9 && v9 != v33 )
    ExDeleteResourceLite(v9);
  if ( v52 && !a2 )
  {
    v55 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v52, &v55, 0x8000u);
  }
  return v18;
}
