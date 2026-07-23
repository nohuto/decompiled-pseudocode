/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x14087ABD0
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringValidateWorker @ 0x1403D21D8 (RtlUnicodeStringValidateWorker.c)
 *     RtlUnicodeStringCat @ 0x1403DA240 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpUnlockHashEntryByKcb @ 0x140840720 (CmpUnlockHashEntryByKcb.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140840AF0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408707C4 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFindNameInListWithStatus @ 0x140870840 (CmpFindNameInListWithStatus.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpComputeComponentHashes @ 0x140872190 (CmpComputeComponentHashes.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetValueData @ 0x14087A8E0 (CmpGetValueData.c)
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087F300 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1408807B0 (CmpCleanUpKcbCachedSymlink.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpLockKcbStackShared @ 0x14090B180 (CmpLockKcbStackShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x14090C380 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyStackDeleted @ 0x140970C00 (CmpIsKeyStackDeleted.c)
 *     CmpValidateComponents @ 0x140977470 (CmpValidateComponents.c)
 *     CmpGetComponentNameAtIndex @ 0x140989B40 (CmpGetComponentNameAtIndex.c)
 *     CmpConstructAndCacheName @ 0x1409EA66C (CmpConstructAndCacheName.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpGetSymbolicLinkTarget(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ULONG_PTR *a9,
        __int64 *a10)
{
  char v10; // r14
  __int64 v11; // rdi
  unsigned int v12; // r13d
  unsigned int v13; // esi
  char v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // cl
  unsigned __int64 v19; // rdi
  signed __int64 v20; // rcx
  __int64 v21; // r14
  __int16 i; // bx
  ULONG_PTR v23; // rcx
  unsigned int v24; // r12d
  unsigned int v25; // r14d
  unsigned int j; // ecx
  unsigned __int16 *v27; // rax
  size_t v28; // rdx
  ULONG v29; // r8d
  wchar_t *Buffer; // rbx
  size_t v31; // rdx
  ULONG v32; // r8d
  unsigned __int16 v33; // r10
  __int16 v34; // r10
  __int64 v35; // r11
  char *v36; // rdx
  unsigned __int64 v37; // rax
  signed __int64 v38; // r8
  __int64 v39; // r11
  unsigned int v40; // r11d
  __int64 v41; // r15
  unsigned __int16 *v42; // rcx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rbx
  unsigned __int16 v46; // ax
  _WORD *v47; // rcx
  __int16 v48; // r10
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // r8
  char *v51; // r9
  UNICODE_STRING *v52; // rbx
  void *v53; // rcx
  ULONG_PTR v54; // rbx
  ULONG_PTR *v55; // rax
  int v56; // edi
  char v57; // r14
  __int64 v58; // rsi
  wchar_t *v59; // rbx
  ULONG_PTR v60; // r12
  _SLIST_ENTRY *v61; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *L; // rcx
  __int16 v65; // si
  unsigned int k; // edi
  __int64 KcbAtLayerHeight; // rax
  __int64 v68; // rbx
  __int64 v69; // r8
  ULONG_PTR v70; // rdx
  ULONG_PTR v71; // rcx
  ULONG_PTR *v72; // rbx
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rcx
  __int64 CellFlat; // rax
  bool v77; // zf
  unsigned int v78; // r8d
  unsigned int v79; // edi
  __int64 v80; // rsi
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v82; // r8d
  unsigned __int16 v83; // bx
  UNICODE_STRING v84; // xmm6
  wchar_t *v85; // rcx
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 Length; // ax
  wchar_t *v88; // r13
  wchar_t *v89; // r14
  wchar_t *v90; // r15
  __int16 v91; // bx
  __int16 m; // di
  WCHAR v93; // cx
  __int16 v94; // r12
  unsigned int v95; // ebx
  ULONG_PTR v96; // r15
  int v97; // ebx
  __int64 v98; // rdi
  ULONG_PTR v99; // rcx
  ULONG_PTR v100; // rdx
  __int64 CellPaged; // rax
  int NameInListWithStatus; // ebx
  __int64 v103; // rcx
  ULONG_PTR v104; // r12
  unsigned int v105; // ebx
  __int64 v106; // rax
  wchar_t *v107; // r13
  WCHAR *v108; // rax
  __int16 v109; // r12
  __int16 n; // bx
  WCHAR v111; // di
  WCHAR v112; // r14
  unsigned int v113; // edi
  unsigned int v114; // ebx
  const UNICODE_STRING *v115; // rax
  unsigned __int64 v116; // rcx
  UNICODE_STRING *v117; // rbx
  void *v118; // rcx
  __int64 v119; // rdi
  __int64 v120; // rcx
  unsigned int *v121; // rdx
  ULONG_PTR v122; // rcx
  char v123; // [rsp+40h] [rbp-C0h]
  _BYTE BugCheckParameter2[15]; // [rsp+41h] [rbp-BFh] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v126; // [rsp+60h] [rbp-A0h]
  __int64 v127; // [rsp+68h] [rbp-98h]
  __int16 v128[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v129[3]; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v130; // [rsp+80h] [rbp-80h] BYREF
  __int64 v131; // [rsp+88h] [rbp-78h]
  unsigned int v132[4]; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING SourceString; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v134; // [rsp+B0h] [rbp-50h]
  __int16 v135; // [rsp+B8h] [rbp-48h]
  PVOID P; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v137; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v138; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v139; // [rsp+D8h] [rbp-28h]
  __int64 v140; // [rsp+E0h] [rbp-20h]
  __int64 v141; // [rsp+F0h] [rbp-10h]
  ULONG_PTR *v142; // [rsp+F8h] [rbp-8h]
  __int64 *v143; // [rsp+100h] [rbp+0h]
  __int64 v144; // [rsp+108h] [rbp+8h]
  __int128 v145; // [rsp+110h] [rbp+10h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+120h] [rbp+20h]
  _BYTE v147[160]; // [rsp+130h] [rbp+30h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+1D0h] [rbp+D0h]

  v10 = 0;
  v11 = a1;
  v144 = a7;
  v141 = a8;
  v142 = a9;
  v12 = a4;
  v13 = a3;
  v138 = a2;
  v134 = a1;
  v143 = a10;
  v135 = a4;
  v126 = a3;
  DestinationString = 0LL;
  *(_QWORD *)&v129[1] = 0LL;
  SourceString = 0LL;
  *(_QWORD *)v132 = 0LL;
  v137 = 0LL;
  v128[0] = 0;
  LOWORD(v129[0]) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  *(_QWORD *)&BugCheckParameter2[7] = 0LL;
  v14 = 0;
  *(_WORD *)BugCheckParameter2 = 0;
  HvpGetCellContextInitialize(&v129[1]);
  v127 = 0LL;
  *(_DWORD *)&BugCheckParameter2[3] = -1;
  v139 = 0LL;
  HvpGetCellContextInitialize(v132);
  P = 0LL;
  v130 = 0;
  HvpGetCellContextInitialize(&v137);
  memset_0(v147, 0, 0xA8uLL);
  v145 = 0LL;
  WORD1(v145) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( !a5 && !*(_WORD *)(v11 + 2) )
  {
    LOWORD(v15) = *(_WORD *)(v11 + 2);
    v10 = 1;
LABEL_5:
    _mm_lfence();
    v16 = *(_QWORD *)(v11 + 8LL * (__int16)v15 + 8);
    v131 = v16;
    if ( v10 && (*(_DWORD *)(v16 + 8) & 8) != 0 )
    {
      v17 = *(_QWORD *)(v16 + 104);
      v18 = 0;
      *(_QWORD *)&BugCheckParameter2[7] = v17;
      v19 = *(_QWORD *)(v17 + 296);
      if ( (v19 & 1) != 0 )
      {
        v18 = 1;
        v19 &= ~1uLL;
      }
      if ( v19 && !v18 )
      {
        v20 = _InterlockedIncrement64(*(volatile signed __int64 **)&BugCheckParameter2[7]);
        if ( !v20 )
          KeBugCheckEx(0x51u, 0x24uLL, *(ULONG_PTR *)&BugCheckParameter2[7], 0LL, 0LL);
        if ( v20 == 1 )
          KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
        v21 = v134;
        for ( i = 0; i <= *(__int16 *)(v21 + 2); ++i )
        {
          if ( i >= 2 )
            v23 = *(_QWORD *)(*(_QWORD *)(v21 + 24) + 8LL * i - 16);
          else
            v23 = *(_QWORD *)(v21 + 8LL * i + 8);
          CmpUnlockKcb(v23);
        }
        CmpLockKcbShared(*(_QWORD *)&BugCheckParameter2[7]);
        v24 = *(unsigned __int16 *)v19;
        v14 = 1;
        v25 = v12;
        for ( j = v13; j < v12; ++j )
        {
          if ( j >= 8 )
            v27 = (unsigned __int16 *)(*(_QWORD *)(v138 + 160) + 16 * (j - 8 + 6LL));
          else
            v27 = (unsigned __int16 *)(v138 + 16 * (j + 2LL));
          v24 += *v27 + 2;
        }
        if ( v24 > 0xFFFF )
        {
          v57 = 0;
          v56 = -1073741772;
          goto LABEL_55;
        }
        DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, v24, 0x36364D43u);
        Buffer = DestinationString.Buffer;
        if ( DestinationString.Buffer )
        {
          DestinationString.MaximumLength = v24;
          DestinationString.Length = 0;
          if ( RtlUnicodeStringValidateWorker(&DestinationString, v28, v29) >= 0 )
          {
            if ( RtlUnicodeStringValidateWorker((PCUNICODE_STRING)v19, v31, v32) >= 0 )
            {
              v36 = *(char **)(v19 + 8);
              v37 = (unsigned __int64)*(unsigned __int16 *)v19 >> 1;
              if ( v35 )
              {
                v38 = (char *)Buffer - v36;
                v39 = v35 - v37;
                do
                {
                  if ( !v37 )
                    break;
                  --v37;
                  *(_WORD *)&v36[v38] = *(_WORD *)v36;
                  ++v34;
                  v36 += 2;
                }
                while ( v39 + v37 );
              }
            }
            v33 = 2 * v34;
            v25 = v12;
            DestinationString.Length = v33;
          }
          v40 = v126;
          if ( v126 < v25 )
          {
            v41 = v131;
            do
            {
              if ( v40 >= 8 )
                v42 = (unsigned __int16 *)(*(_QWORD *)(v138 + 160) + 16 * (v40 - 8 + 6LL));
              else
                v42 = (unsigned __int16 *)(v138 + 16 * (v40 + 2LL));
              v43 = v33;
              v33 += 2;
              DestinationString.Length = v33;
              Buffer[v43 >> 1] = 92;
              if ( (v33 & 1) == 0 && (v24 & 1) == 0 && (_WORD)v24 != 0xFFFF && v33 <= (unsigned __int16)v24 )
              {
                v44 = *v42;
                v45 = (unsigned __int64)v33 >> 1;
                if ( (v44 & 1) == 0 )
                {
                  v46 = v42[1];
                  if ( (v46 & 1) == 0
                    && v46 != 0xFFFF
                    && (unsigned __int16)v44 <= v46
                    && (*((_QWORD *)v42 + 1) || !(_WORD)v44 && !v46) )
                  {
                    v47 = (_WORD *)*((_QWORD *)v42 + 1);
                    v48 = 0;
                    v49 = v44 >> 1;
                    v50 = ((unsigned __int64)(unsigned __int16)v24 >> 1) - v45;
                    if ( v50 )
                    {
                      v51 = (char *)DestinationString.Buffer + 2 * v45 - (_QWORD)v47;
                      do
                      {
                        if ( !v49 )
                          break;
                        --v49;
                        *(_WORD *)((char *)v47 + (_QWORD)v51) = *v47;
                        ++v48;
                        ++v47;
                        --v50;
                      }
                      while ( v50 );
                    }
                    v33 = 2 * (v45 + v48);
                    DestinationString.Length = v33;
                  }
                }
                Buffer = DestinationString.Buffer;
              }
              ++v40;
            }
            while ( v40 < v25 );
            v131 = v41;
          }
          v52 = (UNICODE_STRING *)v141;
          v53 = *(void **)(v141 + 8);
          if ( v53 )
            ExFreePoolWithTag(v53, 0);
          *v52 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          v54 = *(_QWORD *)&BugCheckParameter2[7];
          CmpUnlockKcb(*(ULONG_PTR *)&BugCheckParameter2[7]);
          v14 = 0;
          v55 = v142;
          v56 = 0;
          v57 = 0;
          *(_QWORD *)&BugCheckParameter2[7] = 0LL;
          *v143 = v131;
          *v55 = v54;
          goto LABEL_55;
        }
        v56 = -1073741670;
        goto LABEL_67;
      }
      v11 = v134;
    }
    goto LABEL_81;
  }
  v15 = *(__int16 *)(v11 + 2);
  if ( v15 < 2 )
    goto LABEL_5;
  _mm_lfence();
  v131 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL * *(__int16 *)(v11 + 2) - 16);
LABEL_81:
  if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess((PRKAPC_STATE)(a6 + 168));
    *(_DWORD *)(a6 + 160) |= 1u;
  }
  v65 = *(_WORD *)(v11 + 2);
  v140 = 0LL;
  while ( 2 )
  {
    for ( k = *(_DWORD *)&BugCheckParameter2[3]; ; k = -1 )
    {
      while ( 1 )
      {
        if ( v65 < 0 )
        {
          v60 = v139;
LABEL_100:
          if ( k == -1 )
          {
LABEL_206:
            v56 = -1073741772;
            goto LABEL_207;
          }
          if ( (*(_BYTE *)(v60 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v60, k, v132);
          else
            CellFlat = HvpGetCellPaged(v60, k, v132);
          v77 = (*(_BYTE *)(CellFlat + 16) & 2) == 0;
          v58 = CellFlat;
          v127 = CellFlat;
          if ( !v77 )
          {
            v56 = -1073741772;
            v57 = 1;
            goto LABEL_56;
          }
          if ( *(_DWORD *)(CellFlat + 12) != 6 )
          {
            v56 = -1073741772;
            v57 = 1;
            goto LABEL_56;
          }
          if ( !CmpGetValueData(v60, k, CellFlat, &v130, (__int64)&P, (__int64)&BugCheckParameter2[1], &v137) )
          {
            v56 = -1073741670;
            v57 = 1;
            goto LABEL_56;
          }
          if ( v130 > 0xFFFF )
          {
            v56 = -1073741772;
            v57 = 1;
            goto LABEL_55;
          }
          if ( (v130 & 1) != 0 )
          {
            v56 = -1073741772;
            v57 = 1;
            goto LABEL_55;
          }
          v78 = v126;
          SourceString.Buffer = (wchar_t *)P;
          SourceString.Length = v130;
          SourceString.MaximumLength = v130;
          v79 = (unsigned __int16)v130;
          if ( v126 < v12 )
          {
            v80 = v138;
            do
            {
              ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(v80, v78);
              v78 = v82 + 1;
              v79 += *ComponentNameAtIndex + 2;
            }
            while ( v78 < v12 );
          }
          if ( v79 > 0xFFFF )
          {
            v56 = -1073741772;
            v57 = 1;
            goto LABEL_55;
          }
          DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, v79, 0x36364D43u);
          v59 = DestinationString.Buffer;
          if ( !DestinationString.Buffer )
          {
            v58 = v127;
            v56 = -1073741670;
            v57 = 1;
            goto LABEL_59;
          }
          v83 = 0;
          DestinationString.Length = 0;
          DestinationString.MaximumLength = v79;
          RtlUnicodeStringCopy(&DestinationString, &SourceString);
          if ( BugCheckParameter2[1] )
          {
            ExFreePoolWithTag(P, 0);
          }
          else if ( (*(_BYTE *)(v60 + 140) & 1) != 0 )
          {
            HvpReleaseCellFlat(v60, &v137);
          }
          else
          {
            HvpReleaseCellPaged(v60, (unsigned int *)&v137);
          }
          v77 = (*(_BYTE *)(v60 + 140) & 1) == 0;
          P = 0LL;
          if ( v77 )
            HvpReleaseCellPaged(v60, v132);
          else
            HvpReleaseCellFlat(v60, v132);
          v127 = 0LL;
          CmpUnlockKcbStack(v134);
          v84 = DestinationString;
          v123 = 0;
          if ( v10 )
          {
            SourceString = DestinationString;
            if ( DestinationString.Length )
            {
              v85 = SourceString.Buffer;
              MaximumLength = SourceString.MaximumLength;
              Length = SourceString.Length;
              while ( *v85 == 92 )
              {
                ++v85;
                Length -= 2;
                MaximumLength -= 2;
                SourceString.Buffer = v85;
                v83 += 2;
                SourceString.Length = Length;
                SourceString.MaximumLength = MaximumLength;
                if ( !Length )
                  goto LABEL_132;
              }
              if ( Length )
              {
                while ( *v85 != 92 )
                {
                  ++v85;
                  Length -= 2;
                  MaximumLength -= 2;
                  SourceString.Buffer = v85;
                  v83 += 2;
                  SourceString.Length = Length;
                  SourceString.MaximumLength = MaximumLength;
                  if ( !Length )
                    goto LABEL_132;
                }
                do
                {
                  if ( *v85 != 92 )
                    break;
                  ++v85;
                  MaximumLength -= 2;
                  Length -= 2;
                }
                while ( Length );
                SourceString.Length = Length;
                SourceString.Buffer = v85;
                SourceString.MaximumLength = MaximumLength;
              }
            }
LABEL_132:
            v88 = DestinationString.Buffer;
            v89 = DestinationString.Buffer;
            v90 = CmRegistryRootName.Buffer;
            v91 = v83 >> 1;
            for ( m = CmRegistryRootName.Length >> 1; v91 && m; --m )
            {
              v93 = *v89++;
              v94 = *v90++;
              if ( v93 != v94 )
              {
                if ( v93 >= 0x61u )
                {
                  if ( v93 > 0x7Au )
                    v93 = RtlUpcaseUnicodeChar(v93);
                  else
                    v93 -= 32;
                }
                if ( v93 != v94 )
                {
                  v96 = *(_QWORD *)&BugCheckParameter2[7];
                  v57 = 0;
                  goto LABEL_173;
                }
              }
              --v91;
            }
            if ( v91 == m && (int)CmpComputeComponentHashes((__m128i *)&SourceString, v128, (__int64)v147) >= 0 )
            {
              v95 = v128[0];
              if ( (int)CmpValidateComponents((unsigned int)v128[0], v147) >= 0
                && (int)CmpPerformCompleteKcbCacheLookup(
                          *((volatile signed __int64 **)CmpRegistryRootObject + 1),
                          0,
                          v95,
                          (__int64)v147,
                          0LL,
                          (ULONG_PTR *)&BugCheckParameter2[7],
                          BugCheckParameter2,
                          v129) >= 0 )
              {
                if ( LOWORD(v129[0]) == (_WORD)v95 )
                {
                  v96 = *(_QWORD *)&BugCheckParameter2[7];
                  if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)&v145, *(__int64 *)&BugCheckParameter2[7]) >= 0 )
                  {
                    CmpLockKcbStackShared(&v145);
                    v97 = CmpConstructAndCacheName(v96, 0LL);
                    CmpUnlockKcbStack((__int64)&v145);
                    if ( v97 >= 0 )
                    {
                      if ( BugCheckParameter2[0] )
                      {
                        CmpUnlockHashEntryByKcb(v96);
                        BugCheckParameter2[0] = 0;
                      }
                      CmpLockKcbStackTopExclusiveRestShared(v134);
                      v123 = 1;
                      if ( (unsigned __int8)CmpIsKeyStackDeleted(v134, 0LL) )
                      {
                        v57 = 1;
LABEL_173:
                        v113 = v135;
                        v114 = v126;
                        if ( v126 < (unsigned int)v135 )
                        {
                          while ( 1 )
                          {
                            v115 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v138, v114);
                            v116 = (unsigned __int64)DestinationString.Length >> 1;
                            DestinationString.Length += 2;
                            v88[v116] = 92;
                            RtlUnicodeStringCat(&DestinationString, v115);
                            if ( ++v114 >= v113 )
                              break;
                            v88 = DestinationString.Buffer;
                          }
                          v84 = DestinationString;
                          v96 = *(_QWORD *)&BugCheckParameter2[7];
                        }
                        v117 = (UNICODE_STRING *)v141;
                        v118 = *(void **)(v141 + 8);
                        if ( v118 )
                        {
                          ExFreePoolWithTag(v118, 0);
                          v117->Buffer = 0LL;
                        }
                        if ( BugCheckParameter2[0] )
                          CmpUnlockHashEntryByKcb(v96);
                        *(_QWORD *)&BugCheckParameter2[7] = 0LL;
                        *v142 = v96;
                        *v117 = v84;
                        RtlInitUnicodeString(&DestinationString, 0LL);
                        v56 = 0;
                        v14 = 0;
                        *v143 = v140;
                        goto LABEL_55;
                      }
                      v98 = v131;
                      v99 = *(_QWORD *)(v131 + 32);
                      v100 = *(unsigned int *)(v131 + 40);
                      if ( (*(_BYTE *)(v99 + 140) & 1) != 0 )
                        CellPaged = HvpGetCellFlat(v99, v100, &v129[1]);
                      else
                        CellPaged = HvpGetCellPaged(v99, v100, &v129[1]);
                      NameInListWithStatus = CmpFindNameInListWithStatus(
                                               *(_QWORD *)(v98 + 32),
                                               (unsigned int *)(CellPaged + 36),
                                               &CmSymbolicLinkValueName.Length,
                                               0,
                                               0LL,
                                               &BugCheckParameter2[3]);
                      v103 = *(_QWORD *)(v98 + 32);
                      if ( (*(_BYTE *)(v103 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v103, &v129[1]);
                      else
                        HvpReleaseCellPaged(v103, &v129[1]);
                      if ( NameInListWithStatus >= 0 )
                      {
                        v105 = *(_DWORD *)&BugCheckParameter2[3];
                        v139 = *(_QWORD *)(v98 + 32);
                        v104 = v139;
                        if ( (*(_BYTE *)(v139 + 140) & 1) != 0 )
                          v106 = HvpGetCellFlat(v139, *(unsigned int *)&BugCheckParameter2[3], v132);
                        else
                          v106 = HvpGetCellPaged(v139, *(unsigned int *)&BugCheckParameter2[3], v132);
                        v77 = *(_DWORD *)(v106 + 12) == 6;
                        v127 = v106;
                        if ( v77
                          && CmpGetValueData(
                               v104,
                               v105,
                               v106,
                               &v130,
                               (__int64)&P,
                               (__int64)&BugCheckParameter2[1],
                               &v137)
                          && v130 <= 0xFFFF
                          && (v130 & 1) == 0 )
                        {
                          v107 = DestinationString.Buffer;
                          v108 = (WCHAR *)P;
                          v109 = DestinationString.Length >> 1;
                          for ( n = (unsigned __int16)v130 >> 1; v109 && n; --n )
                          {
                            v111 = *v107++;
                            v112 = *v108++;
                            *(_QWORD *)&v129[1] = v108;
                            if ( v111 != v112 )
                            {
                              if ( v111 >= 0x61u )
                              {
                                if ( v111 > 0x7Au )
                                  v111 = RtlUpcaseUnicodeChar(v111);
                                else
                                  v111 -= 32;
                              }
                              if ( v112 >= 0x61u )
                              {
                                if ( v112 <= 0x7Au )
                                  v112 -= 32;
                                else
                                  v112 = RtlUpcaseUnicodeChar(v112);
                              }
                              if ( v111 != v112 )
                                goto LABEL_191;
                              v108 = *(WCHAR **)&v129[1];
                            }
                            --v109;
                          }
                          if ( v109 != n )
                          {
LABEL_191:
                            v88 = DestinationString.Buffer;
                            goto LABEL_192;
                          }
                          v119 = v131;
                          CmpCleanUpKcbCachedSymlink(v131, v144);
                          *(_QWORD *)(v119 + 104) = v96;
                          CmpReferenceKeyControlBlockUnsafe(v96);
                          v120 = v134;
                          *(_WORD *)(v119 + 8) |= 8u;
                          CmpUnlockKcbStack(v120);
                          v88 = DestinationString.Buffer;
                          v57 = 0;
                        }
                        else
                        {
LABEL_192:
                          v57 = 1;
                        }
                        goto LABEL_173;
                      }
LABEL_172:
                      v57 = v123;
                      goto LABEL_173;
                    }
                  }
                }
                else
                {
                  CmpDereferenceKeyControlBlock(*(ULONG_PTR *)&BugCheckParameter2[7]);
                  v96 = 0LL;
                  *(_QWORD *)&BugCheckParameter2[7] = 0LL;
                }
                v57 = 0;
                goto LABEL_173;
              }
            }
          }
          else
          {
            v88 = DestinationString.Buffer;
          }
          v96 = *(_QWORD *)&BugCheckParameter2[7];
          goto LABEL_172;
        }
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v134);
        v68 = KcbAtLayerHeight;
        if ( !v69
          && (*(_DWORD *)(KcbAtLayerHeight + 40) != -1
           || (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 32) + 4112LL) & 0x2000) == 0) )
        {
          v140 = KcbAtLayerHeight;
        }
        if ( *(_WORD *)(KcbAtLayerHeight + 66) && *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
          goto LABEL_206;
        if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
          break;
        --v65;
      }
      if ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(KcbAtLayerHeight + 288)) )
        break;
      v121 = (unsigned int *)(v68 + 280);
      if ( *(_DWORD *)(v68 + 280) )
      {
        v122 = *(_QWORD *)(v68 + 32);
        v72 = (ULONG_PTR *)(v68 + 32);
        v56 = CmpFindNameInListWithStatus(v122, v121, &CmSymbolicLinkValueName.Length, 0, 0LL, &BugCheckParameter2[3]);
        goto LABEL_98;
      }
      *(_DWORD *)&BugCheckParameter2[3] = -1;
      --v65;
    }
    v70 = *(unsigned int *)(v68 + 40);
    v71 = *(_QWORD *)(v68 + 32);
    v72 = (ULONG_PTR *)(v68 + 32);
    if ( (*(_BYTE *)(v71 + 140) & 1) != 0 )
      v73 = HvpGetCellFlat(v71, v70, &v129[1]);
    else
      v73 = HvpGetCellPaged(v71, v70, &v129[1]);
    v74 = CmpFindNameInListWithStatus(
            *v72,
            (unsigned int *)(v73 + 36),
            &CmSymbolicLinkValueName.Length,
            0,
            0LL,
            &BugCheckParameter2[3]);
    v75 = *v72;
    v56 = v74;
    if ( (*(_BYTE *)(*v72 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v75, &v129[1]);
    else
      HvpReleaseCellPaged(v75, &v129[1]);
LABEL_98:
    if ( v56 >= 0 )
    {
      v60 = *v72;
      k = *(_DWORD *)&BugCheckParameter2[3];
      v139 = *v72;
      goto LABEL_100;
    }
    if ( v56 == -1073741772 )
    {
      --v65;
      continue;
    }
    break;
  }
LABEL_207:
  v57 = 1;
LABEL_55:
  v58 = v127;
LABEL_56:
  v59 = DestinationString.Buffer;
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  v60 = v139;
LABEL_59:
  if ( P )
  {
    if ( BugCheckParameter2[1] )
    {
      ExFreePoolWithTag(P, 0);
    }
    else if ( (*(_BYTE *)(v60 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(v60, &v137);
    }
    else
    {
      HvpReleaseCellPaged(v60, (unsigned int *)&v137);
    }
  }
  if ( v58 )
  {
    if ( (*(_BYTE *)(v60 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v60, v132);
    else
      HvpReleaseCellPaged(v60, v132);
  }
  if ( v59 )
    ExFreePoolWithTag(v59, 0);
  if ( v57 )
    CmpUnlockKcbStack(v134);
LABEL_67:
  if ( *(_QWORD *)&BugCheckParameter2[7] )
  {
    if ( v14 )
      CmpUnlockKcb(*(ULONG_PTR *)&BugCheckParameter2[7]);
    CmpDereferenceKeyControlBlock(*(ULONG_PTR *)&BugCheckParameter2[7]);
  }
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  v61 = ListEntry;
  if ( ListEntry )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    L = CurrentPrcb->PPLookasideList[8].P;
    ++L->TotalFrees;
    if ( LOWORD(L->ListHead.Alignment) < L->Depth
      || (++L->FreeMisses,
          L = CurrentPrcb->PPLookasideList[8].L,
          ++L->TotalFrees,
          LOWORD(L->ListHead.Alignment) < L->Depth) )
    {
      RtlpInterlockedPushEntrySList(&L->ListHead, v61);
    }
    else
    {
      ++L->FreeMisses;
      if ( (void (__stdcall *)(PVOID))L->FreeEx == ExFreePool )
        ExFreePool(v61);
      else
        guard_dispatch_icall_no_overrides(v61, v61);
    }
  }
  return (unsigned int)v56;
}
