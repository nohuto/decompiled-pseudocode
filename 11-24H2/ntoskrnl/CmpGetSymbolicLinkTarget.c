/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x1408768A0
 * Callers:
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1403E4550 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringValidateWorker @ 0x1403E4638 (RtlUnicodeStringValidateWorker.c)
 *     RtlUnicodeStringCat @ 0x1403EA5B0 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlUpcaseUnicodeChar @ 0x1408441F0 (RtlUpcaseUnicodeChar.c)
 *     CmpUnlockHashEntryByKcb @ 0x140844460 (CmpUnlockHashEntryByKcb.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140844830 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086C494 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFindNameInListWithStatus @ 0x14086C510 (CmpFindNameInListWithStatus.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086DD20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpComputeComponentHashes @ 0x14086DE60 (CmpComputeComponentHashes.c)
 *     CmpUnlockKcbStack @ 0x14086E6E0 (CmpUnlockKcbStack.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpGetValueData @ 0x1408765B0 (CmpGetValueData.c)
 *     CmEqualTrans @ 0x140879280 (CmEqualTrans.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087B450 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14087C900 (CmpCleanUpKcbCachedSymlink.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpLockKcbStackShared @ 0x140917710 (CmpLockKcbStackShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x140918910 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyStackDeleted @ 0x140988420 (CmpIsKeyStackDeleted.c)
 *     CmpValidateComponents @ 0x14098CB50 (CmpValidateComponents.c)
 *     CmpGetComponentNameAtIndex @ 0x1409A6A00 (CmpGetComponentNameAtIndex.c)
 *     CmpConstructAndCacheName @ 0x1409F671C (CmpConstructAndCacheName.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
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
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // cl
  unsigned __int64 v20; // rdi
  signed __int64 v21; // rcx
  __int64 v22; // r14
  __int16 i; // bx
  ULONG_PTR v24; // rcx
  unsigned int v25; // r12d
  unsigned int v26; // r14d
  unsigned int j; // ecx
  unsigned __int16 *v28; // rax
  size_t v29; // rdx
  ULONG v30; // r8d
  wchar_t *Buffer; // rbx
  size_t v32; // rdx
  ULONG v33; // r8d
  unsigned __int16 v34; // r10
  __int16 v35; // r10
  __int64 v36; // r11
  char *v37; // rdx
  unsigned __int64 v38; // rax
  signed __int64 v39; // r8
  __int64 v40; // r11
  unsigned int v41; // r11d
  __int64 v42; // r15
  unsigned __int16 *v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rbx
  unsigned __int16 v47; // ax
  _WORD *v48; // rcx
  __int16 v49; // r10
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // r8
  char *v52; // r9
  UNICODE_STRING *v53; // rbx
  void *v54; // rcx
  ULONG_PTR v55; // rbx
  ULONG_PTR *v56; // rax
  int v57; // edi
  char v58; // r14
  __int64 v59; // rsi
  wchar_t *v60; // rbx
  ULONG_PTR v61; // r12
  struct _SLIST_ENTRY *v62; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *L; // rcx
  __int16 v66; // si
  unsigned int k; // edi
  __int64 KcbAtLayerHeight; // rax
  __int64 v69; // rbx
  __int64 v70; // r8
  ULONG_PTR v71; // rdx
  ULONG_PTR v72; // rcx
  ULONG_PTR *v73; // rbx
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rcx
  __int64 CellFlat; // rax
  bool v78; // zf
  unsigned int v79; // r8d
  unsigned int v80; // edi
  __int64 v81; // rsi
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v83; // r8d
  unsigned __int16 v84; // bx
  UNICODE_STRING v85; // xmm6
  wchar_t *v86; // rcx
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 Length; // ax
  wchar_t *v89; // r13
  wchar_t *v90; // r14
  wchar_t *v91; // r15
  __int16 v92; // bx
  __int16 m; // di
  WCHAR v94; // cx
  __int16 v95; // r12
  unsigned int v96; // ebx
  ULONG_PTR v97; // r15
  int v98; // ebx
  __int64 v99; // rdi
  ULONG_PTR v100; // rcx
  ULONG_PTR v101; // rdx
  __int64 CellPaged; // rax
  int NameInListWithStatus; // ebx
  __int64 v104; // rcx
  ULONG_PTR v105; // r12
  unsigned int v106; // ebx
  __int64 v107; // rax
  wchar_t *v108; // r13
  WCHAR *v109; // rax
  __int16 v110; // r12
  __int16 n; // bx
  WCHAR v112; // di
  WCHAR v113; // r14
  unsigned int v114; // edi
  unsigned int v115; // ebx
  const UNICODE_STRING *v116; // rax
  unsigned __int64 v117; // rcx
  UNICODE_STRING *v118; // rbx
  void *v119; // rcx
  __int64 v120; // rdi
  __int64 v121; // rcx
  unsigned int *v122; // rdx
  ULONG_PTR v123; // rcx
  char v124; // [rsp+40h] [rbp-C0h]
  _BYTE BugCheckParameter2[15]; // [rsp+41h] [rbp-BFh] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v127; // [rsp+60h] [rbp-A0h]
  __int64 v128; // [rsp+68h] [rbp-98h]
  __int16 v129[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v130[3]; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v131; // [rsp+80h] [rbp-80h] BYREF
  __int64 v132; // [rsp+88h] [rbp-78h]
  unsigned int v133[4]; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING SourceString; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v135; // [rsp+B0h] [rbp-50h]
  __int16 v136; // [rsp+B8h] [rbp-48h]
  PVOID P; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v138; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v139; // [rsp+D0h] [rbp-30h]
  ULONG_PTR v140; // [rsp+D8h] [rbp-28h]
  __int64 v141; // [rsp+E0h] [rbp-20h]
  __int64 v142; // [rsp+F0h] [rbp-10h]
  ULONG_PTR *v143; // [rsp+F8h] [rbp-8h]
  __int64 *v144; // [rsp+100h] [rbp+0h]
  __int64 v145; // [rsp+108h] [rbp+8h]
  __int128 v146; // [rsp+110h] [rbp+10h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+120h] [rbp+20h]
  _BYTE v148[160]; // [rsp+130h] [rbp+30h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+1D0h] [rbp+D0h]

  v10 = 0;
  v11 = a1;
  v145 = a7;
  v142 = a8;
  v143 = a9;
  v12 = a4;
  v13 = a3;
  v139 = a2;
  v135 = a1;
  v144 = a10;
  v136 = a4;
  v127 = a3;
  DestinationString = 0LL;
  *(_QWORD *)&v130[1] = 0LL;
  SourceString = 0LL;
  *(_QWORD *)v133 = 0LL;
  v138 = 0LL;
  v129[0] = 0;
  LOWORD(v130[0]) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  *(_QWORD *)&BugCheckParameter2[7] = 0LL;
  v14 = 0;
  *(_WORD *)BugCheckParameter2 = 0;
  HvpGetCellContextInitialize(&v130[1]);
  v128 = 0LL;
  *(_DWORD *)&BugCheckParameter2[3] = -1;
  v140 = 0LL;
  HvpGetCellContextInitialize(v133);
  P = 0LL;
  v131 = 0;
  HvpGetCellContextInitialize(&v138);
  memset_0(v148, 0, 0xA8uLL);
  v146 = 0LL;
  WORD1(v146) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( !a5 && !*(_WORD *)(v11 + 2) )
  {
    LOWORD(v16) = *(_WORD *)(v11 + 2);
    v10 = 1;
LABEL_5:
    _mm_lfence();
    v17 = *(_QWORD *)(v11 + 8LL * (__int16)v16 + 8);
    v132 = v17;
    if ( v10 && (*(_DWORD *)(v17 + 8) & 8) != 0 )
    {
      v18 = *(_QWORD *)(v17 + 104);
      v19 = 0;
      *(_QWORD *)&BugCheckParameter2[7] = v18;
      v20 = *(_QWORD *)(v18 + 296);
      if ( (v20 & 1) != 0 )
      {
        v19 = 1;
        v20 &= ~1uLL;
      }
      if ( v20 && !v19 )
      {
        v21 = _InterlockedIncrement64(*(volatile signed __int64 **)&BugCheckParameter2[7]);
        if ( !v21 )
          KeBugCheckEx(0x51u, 0x24uLL, *(ULONG_PTR *)&BugCheckParameter2[7], 0LL, 0LL);
        if ( v21 == 1 )
          KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
        v22 = v135;
        for ( i = 0; i <= *(__int16 *)(v22 + 2); ++i )
        {
          if ( i >= 2 )
            v24 = *(_QWORD *)(*(_QWORD *)(v22 + 24) + 8LL * i - 16);
          else
            v24 = *(_QWORD *)(v22 + 8LL * i + 8);
          CmpUnlockKcb(v24);
        }
        CmpLockKcbShared(*(_QWORD *)&BugCheckParameter2[7]);
        v25 = *(unsigned __int16 *)v20;
        v14 = 1;
        v26 = v12;
        for ( j = v13; j < v12; ++j )
        {
          if ( j >= 8 )
            v28 = (unsigned __int16 *)(*(_QWORD *)(v139 + 160) + 16 * (j - 8 + 6LL));
          else
            v28 = (unsigned __int16 *)(v139 + 16 * (j + 2LL));
          v25 += *v28 + 2;
        }
        if ( v25 > 0xFFFF )
        {
          v58 = 0;
          v57 = -1073741772;
          goto LABEL_55;
        }
        DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
        Buffer = DestinationString.Buffer;
        if ( DestinationString.Buffer )
        {
          DestinationString.MaximumLength = v25;
          DestinationString.Length = 0;
          if ( RtlUnicodeStringValidateWorker(&DestinationString, v29, v30) >= 0 )
          {
            if ( RtlUnicodeStringValidateWorker((PCUNICODE_STRING)v20, v32, v33) >= 0 )
            {
              v37 = *(char **)(v20 + 8);
              v38 = (unsigned __int64)*(unsigned __int16 *)v20 >> 1;
              if ( v36 )
              {
                v39 = (char *)Buffer - v37;
                v40 = v36 - v38;
                do
                {
                  if ( !v38 )
                    break;
                  --v38;
                  *(_WORD *)&v37[v39] = *(_WORD *)v37;
                  ++v35;
                  v37 += 2;
                }
                while ( v40 + v38 );
              }
            }
            v34 = 2 * v35;
            v26 = v12;
            DestinationString.Length = v34;
          }
          v41 = v127;
          if ( v127 < v26 )
          {
            v42 = v132;
            do
            {
              if ( v41 >= 8 )
                v43 = (unsigned __int16 *)(*(_QWORD *)(v139 + 160) + 16 * (v41 - 8 + 6LL));
              else
                v43 = (unsigned __int16 *)(v139 + 16 * (v41 + 2LL));
              v44 = v34;
              v34 += 2;
              DestinationString.Length = v34;
              Buffer[v44 >> 1] = 92;
              if ( (v34 & 1) == 0 && (v25 & 1) == 0 && (_WORD)v25 != 0xFFFF && v34 <= (unsigned __int16)v25 )
              {
                v45 = *v43;
                v46 = (unsigned __int64)v34 >> 1;
                if ( (v45 & 1) == 0 )
                {
                  v47 = v43[1];
                  if ( (v47 & 1) == 0
                    && v47 != 0xFFFF
                    && (unsigned __int16)v45 <= v47
                    && (*((_QWORD *)v43 + 1) || !(_WORD)v45 && !v47) )
                  {
                    v48 = (_WORD *)*((_QWORD *)v43 + 1);
                    v49 = 0;
                    v50 = v45 >> 1;
                    v51 = ((unsigned __int64)(unsigned __int16)v25 >> 1) - v46;
                    if ( v51 )
                    {
                      v52 = (char *)DestinationString.Buffer + 2 * v46 - (_QWORD)v48;
                      do
                      {
                        if ( !v50 )
                          break;
                        --v50;
                        *(_WORD *)((char *)v48 + (_QWORD)v52) = *v48;
                        ++v49;
                        ++v48;
                        --v51;
                      }
                      while ( v51 );
                    }
                    v34 = 2 * (v46 + v49);
                    DestinationString.Length = v34;
                  }
                }
                Buffer = DestinationString.Buffer;
              }
              ++v41;
            }
            while ( v41 < v26 );
            v132 = v42;
          }
          v53 = (UNICODE_STRING *)v142;
          v54 = *(void **)(v142 + 8);
          if ( v54 )
            ExFreePoolWithTag(v54, 0);
          *v53 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          v55 = *(_QWORD *)&BugCheckParameter2[7];
          CmpUnlockKcb(*(ULONG_PTR *)&BugCheckParameter2[7]);
          v14 = 0;
          v56 = v143;
          v57 = 0;
          v58 = 0;
          *(_QWORD *)&BugCheckParameter2[7] = 0LL;
          *v144 = v132;
          *v56 = v55;
          goto LABEL_55;
        }
        v57 = -1073741670;
        goto LABEL_67;
      }
      v11 = v135;
    }
    goto LABEL_81;
  }
  v16 = *(__int16 *)(v11 + 2);
  if ( v16 < 2 )
    goto LABEL_5;
  _mm_lfence();
  v132 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL * *(__int16 *)(v11 + 2) - 16);
LABEL_81:
  if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess((PRKAPC_STATE)(a6 + 168));
    *(_DWORD *)(a6 + 160) |= 1u;
  }
  v66 = *(_WORD *)(v11 + 2);
  v141 = 0LL;
  while ( 2 )
  {
    for ( k = *(_DWORD *)&BugCheckParameter2[3]; ; k = -1 )
    {
      while ( 1 )
      {
        if ( v66 < 0 )
        {
          v61 = v140;
LABEL_100:
          if ( k == -1 )
          {
LABEL_206:
            v57 = -1073741772;
            goto LABEL_207;
          }
          if ( (*(_BYTE *)(v61 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(v61, k, v133);
          else
            CellFlat = HvpGetCellPaged(v61, k, v133);
          v78 = (*(_BYTE *)(CellFlat + 16) & 2) == 0;
          v59 = CellFlat;
          v128 = CellFlat;
          if ( !v78 )
          {
            v57 = -1073741772;
            v58 = 1;
            goto LABEL_56;
          }
          if ( *(_DWORD *)(CellFlat + 12) != 6 )
          {
            v57 = -1073741772;
            v58 = 1;
            goto LABEL_56;
          }
          if ( !CmpGetValueData(v61, k, CellFlat, &v131, (__int64)&P, (__int64)&BugCheckParameter2[1], &v138) )
          {
            v57 = -1073741670;
            v58 = 1;
            goto LABEL_56;
          }
          if ( v131 > 0xFFFF )
          {
            v57 = -1073741772;
            v58 = 1;
            goto LABEL_55;
          }
          if ( (v131 & 1) != 0 )
          {
            v57 = -1073741772;
            v58 = 1;
            goto LABEL_55;
          }
          v79 = v127;
          SourceString.Buffer = (wchar_t *)P;
          SourceString.Length = v131;
          SourceString.MaximumLength = v131;
          v80 = (unsigned __int16)v131;
          if ( v127 < v12 )
          {
            v81 = v139;
            do
            {
              ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(v81, v79);
              v79 = v83 + 1;
              v80 += *ComponentNameAtIndex + 2;
            }
            while ( v79 < v12 );
          }
          if ( v80 > 0xFFFF )
          {
            v57 = -1073741772;
            v58 = 1;
            goto LABEL_55;
          }
          DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
          v60 = DestinationString.Buffer;
          if ( !DestinationString.Buffer )
          {
            v59 = v128;
            v57 = -1073741670;
            v58 = 1;
            goto LABEL_59;
          }
          v84 = 0;
          DestinationString.Length = 0;
          DestinationString.MaximumLength = v80;
          RtlUnicodeStringCopy(&DestinationString, &SourceString);
          if ( BugCheckParameter2[1] )
          {
            ExFreePoolWithTag(P, 0);
          }
          else if ( (*(_BYTE *)(v61 + 140) & 1) != 0 )
          {
            HvpReleaseCellFlat(v61, &v138);
          }
          else
          {
            HvpReleaseCellPaged(v61, (unsigned int *)&v138);
          }
          v78 = (*(_BYTE *)(v61 + 140) & 1) == 0;
          P = 0LL;
          if ( v78 )
            HvpReleaseCellPaged(v61, v133);
          else
            HvpReleaseCellFlat(v61, v133);
          v128 = 0LL;
          CmpUnlockKcbStack(v135);
          v85 = DestinationString;
          v124 = 0;
          if ( v10 )
          {
            SourceString = DestinationString;
            if ( DestinationString.Length )
            {
              v86 = SourceString.Buffer;
              MaximumLength = SourceString.MaximumLength;
              Length = SourceString.Length;
              while ( *v86 == 92 )
              {
                ++v86;
                Length -= 2;
                MaximumLength -= 2;
                SourceString.Buffer = v86;
                v84 += 2;
                SourceString.Length = Length;
                SourceString.MaximumLength = MaximumLength;
                if ( !Length )
                  goto LABEL_132;
              }
              if ( Length )
              {
                while ( *v86 != 92 )
                {
                  ++v86;
                  Length -= 2;
                  MaximumLength -= 2;
                  SourceString.Buffer = v86;
                  v84 += 2;
                  SourceString.Length = Length;
                  SourceString.MaximumLength = MaximumLength;
                  if ( !Length )
                    goto LABEL_132;
                }
                do
                {
                  if ( *v86 != 92 )
                    break;
                  ++v86;
                  MaximumLength -= 2;
                  Length -= 2;
                }
                while ( Length );
                SourceString.Length = Length;
                SourceString.Buffer = v86;
                SourceString.MaximumLength = MaximumLength;
              }
            }
LABEL_132:
            v89 = DestinationString.Buffer;
            v90 = DestinationString.Buffer;
            v91 = CmRegistryRootName.Buffer;
            v92 = v84 >> 1;
            for ( m = CmRegistryRootName.Length >> 1; v92 && m; --m )
            {
              v94 = *v90++;
              v95 = *v91++;
              if ( v94 != v95 )
              {
                if ( v94 >= 0x61u )
                {
                  if ( v94 > 0x7Au )
                    v94 = RtlUpcaseUnicodeChar(v94);
                  else
                    v94 -= 32;
                }
                if ( v94 != v95 )
                {
                  v97 = *(_QWORD *)&BugCheckParameter2[7];
                  v58 = 0;
                  goto LABEL_173;
                }
              }
              --v92;
            }
            if ( v92 == m && (int)CmpComputeComponentHashes((__m128i *)&SourceString, v129, (__int64)v148) >= 0 )
            {
              v96 = v129[0];
              if ( (int)CmpValidateComponents((unsigned int)v129[0], v148) >= 0
                && (int)CmpPerformCompleteKcbCacheLookup(
                          *((volatile signed __int64 **)CmpRegistryRootObject + 1),
                          0,
                          v96,
                          (__int64)v148,
                          0LL,
                          (ULONG_PTR *)&BugCheckParameter2[7],
                          BugCheckParameter2,
                          v130) >= 0 )
              {
                if ( LOWORD(v130[0]) == (_WORD)v96 )
                {
                  v97 = *(_QWORD *)&BugCheckParameter2[7];
                  if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)&v146, *(__int64 *)&BugCheckParameter2[7]) >= 0 )
                  {
                    CmpLockKcbStackShared(&v146);
                    v98 = CmpConstructAndCacheName(v97, 0LL);
                    CmpUnlockKcbStack((__int64)&v146);
                    if ( v98 >= 0 )
                    {
                      if ( BugCheckParameter2[0] )
                      {
                        CmpUnlockHashEntryByKcb(v97);
                        BugCheckParameter2[0] = 0;
                      }
                      CmpLockKcbStackTopExclusiveRestShared(v135);
                      v124 = 1;
                      if ( (unsigned __int8)CmpIsKeyStackDeleted(v135, 0LL) )
                      {
                        v58 = 1;
LABEL_173:
                        v114 = v136;
                        v115 = v127;
                        if ( v127 < (unsigned int)v136 )
                        {
                          while ( 1 )
                          {
                            v116 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v139, v115);
                            v117 = (unsigned __int64)DestinationString.Length >> 1;
                            DestinationString.Length += 2;
                            v89[v117] = 92;
                            RtlUnicodeStringCat(&DestinationString, v116);
                            if ( ++v115 >= v114 )
                              break;
                            v89 = DestinationString.Buffer;
                          }
                          v85 = DestinationString;
                          v97 = *(_QWORD *)&BugCheckParameter2[7];
                        }
                        v118 = (UNICODE_STRING *)v142;
                        v119 = *(void **)(v142 + 8);
                        if ( v119 )
                        {
                          ExFreePoolWithTag(v119, 0);
                          v118->Buffer = 0LL;
                        }
                        if ( BugCheckParameter2[0] )
                          CmpUnlockHashEntryByKcb(v97);
                        *(_QWORD *)&BugCheckParameter2[7] = 0LL;
                        *v143 = v97;
                        *v118 = v85;
                        RtlInitUnicodeString(&DestinationString, 0LL);
                        v57 = 0;
                        v14 = 0;
                        *v144 = v141;
                        goto LABEL_55;
                      }
                      v99 = v132;
                      v100 = *(_QWORD *)(v132 + 32);
                      v101 = *(unsigned int *)(v132 + 40);
                      if ( (*(_BYTE *)(v100 + 140) & 1) != 0 )
                        CellPaged = HvpGetCellFlat(v100, v101, &v130[1]);
                      else
                        CellPaged = HvpGetCellPaged(v100, v101, &v130[1]);
                      NameInListWithStatus = CmpFindNameInListWithStatus(
                                               *(_QWORD *)(v99 + 32),
                                               (unsigned int *)(CellPaged + 36),
                                               &CmSymbolicLinkValueName.Length,
                                               0,
                                               0LL,
                                               &BugCheckParameter2[3]);
                      v104 = *(_QWORD *)(v99 + 32);
                      if ( (*(_BYTE *)(v104 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v104, &v130[1]);
                      else
                        HvpReleaseCellPaged(v104, &v130[1]);
                      if ( NameInListWithStatus >= 0 )
                      {
                        v106 = *(_DWORD *)&BugCheckParameter2[3];
                        v140 = *(_QWORD *)(v99 + 32);
                        v105 = v140;
                        if ( (*(_BYTE *)(v140 + 140) & 1) != 0 )
                          v107 = HvpGetCellFlat(v140, *(unsigned int *)&BugCheckParameter2[3], v133);
                        else
                          v107 = HvpGetCellPaged(v140, *(unsigned int *)&BugCheckParameter2[3], v133);
                        v78 = *(_DWORD *)(v107 + 12) == 6;
                        v128 = v107;
                        if ( v78
                          && CmpGetValueData(
                               v105,
                               v106,
                               v107,
                               &v131,
                               (__int64)&P,
                               (__int64)&BugCheckParameter2[1],
                               &v138)
                          && v131 <= 0xFFFF
                          && (v131 & 1) == 0 )
                        {
                          v108 = DestinationString.Buffer;
                          v109 = (WCHAR *)P;
                          v110 = DestinationString.Length >> 1;
                          for ( n = (unsigned __int16)v131 >> 1; v110 && n; --n )
                          {
                            v112 = *v108++;
                            v113 = *v109++;
                            *(_QWORD *)&v130[1] = v109;
                            if ( v112 != v113 )
                            {
                              if ( v112 >= 0x61u )
                              {
                                if ( v112 > 0x7Au )
                                  v112 = RtlUpcaseUnicodeChar(v112);
                                else
                                  v112 -= 32;
                              }
                              if ( v113 >= 0x61u )
                              {
                                if ( v113 <= 0x7Au )
                                  v113 -= 32;
                                else
                                  v113 = RtlUpcaseUnicodeChar(v113);
                              }
                              if ( v112 != v113 )
                                goto LABEL_191;
                              v109 = *(WCHAR **)&v130[1];
                            }
                            --v110;
                          }
                          if ( v110 != n )
                          {
LABEL_191:
                            v89 = DestinationString.Buffer;
                            goto LABEL_192;
                          }
                          v120 = v132;
                          CmpCleanUpKcbCachedSymlink(v132, v145);
                          *(_QWORD *)(v120 + 104) = v97;
                          CmpReferenceKeyControlBlockUnsafe(v97);
                          v121 = v135;
                          *(_WORD *)(v120 + 8) |= 8u;
                          CmpUnlockKcbStack(v121);
                          v89 = DestinationString.Buffer;
                          v58 = 0;
                        }
                        else
                        {
LABEL_192:
                          v58 = 1;
                        }
                        goto LABEL_173;
                      }
LABEL_172:
                      v58 = v124;
                      goto LABEL_173;
                    }
                  }
                }
                else
                {
                  CmpDereferenceKeyControlBlock(*(ULONG_PTR *)&BugCheckParameter2[7]);
                  v97 = 0LL;
                  *(_QWORD *)&BugCheckParameter2[7] = 0LL;
                }
                v58 = 0;
                goto LABEL_173;
              }
            }
          }
          else
          {
            v89 = DestinationString.Buffer;
          }
          v97 = *(_QWORD *)&BugCheckParameter2[7];
          goto LABEL_172;
        }
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v135);
        v69 = KcbAtLayerHeight;
        if ( !v70
          && (*(_DWORD *)(KcbAtLayerHeight + 40) != -1
           || (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 32) + 4112LL) & 0x2000) == 0) )
        {
          v141 = KcbAtLayerHeight;
        }
        if ( *(_WORD *)(KcbAtLayerHeight + 66) && *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
          goto LABEL_206;
        if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
          break;
        --v66;
      }
      if ( !(unsigned __int8)CmEqualTrans(*(_QWORD *)(KcbAtLayerHeight + 288)) )
        break;
      v122 = (unsigned int *)(v69 + 280);
      if ( *(_DWORD *)(v69 + 280) )
      {
        v123 = *(_QWORD *)(v69 + 32);
        v73 = (ULONG_PTR *)(v69 + 32);
        v57 = CmpFindNameInListWithStatus(v123, v122, &CmSymbolicLinkValueName.Length, 0, 0LL, &BugCheckParameter2[3]);
        goto LABEL_98;
      }
      *(_DWORD *)&BugCheckParameter2[3] = -1;
      --v66;
    }
    v71 = *(unsigned int *)(v69 + 40);
    v72 = *(_QWORD *)(v69 + 32);
    v73 = (ULONG_PTR *)(v69 + 32);
    if ( (*(_BYTE *)(v72 + 140) & 1) != 0 )
      v74 = HvpGetCellFlat(v72, v71, &v130[1]);
    else
      v74 = HvpGetCellPaged(v72, v71, &v130[1]);
    v75 = CmpFindNameInListWithStatus(
            *v73,
            (unsigned int *)(v74 + 36),
            &CmSymbolicLinkValueName.Length,
            0,
            0LL,
            &BugCheckParameter2[3]);
    v76 = *v73;
    v57 = v75;
    if ( (*(_BYTE *)(*v73 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v76, &v130[1]);
    else
      HvpReleaseCellPaged(v76, &v130[1]);
LABEL_98:
    if ( v57 >= 0 )
    {
      v61 = *v73;
      k = *(_DWORD *)&BugCheckParameter2[3];
      v140 = *v73;
      goto LABEL_100;
    }
    if ( v57 == -1073741772 )
    {
      --v66;
      continue;
    }
    break;
  }
LABEL_207:
  v58 = 1;
LABEL_55:
  v59 = v128;
LABEL_56:
  v60 = DestinationString.Buffer;
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  v61 = v140;
LABEL_59:
  if ( P )
  {
    if ( BugCheckParameter2[1] )
    {
      ExFreePoolWithTag(P, 0);
    }
    else if ( (*(_BYTE *)(v61 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(v61, &v138);
    }
    else
    {
      HvpReleaseCellPaged(v61, (unsigned int *)&v138);
    }
  }
  if ( v59 )
  {
    if ( (*(_BYTE *)(v61 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v61, v133);
    else
      HvpReleaseCellPaged(v61, v133);
  }
  if ( v60 )
    ExFreePoolWithTag(v60, 0);
  if ( v58 )
    CmpUnlockKcbStack(v135);
LABEL_67:
  if ( *(_QWORD *)&BugCheckParameter2[7] )
  {
    if ( v14 )
      CmpUnlockKcb(*(ULONG_PTR *)&BugCheckParameter2[7]);
    CmpDereferenceKeyControlBlock(*(ULONG_PTR *)&BugCheckParameter2[7]);
  }
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  v62 = ListEntry;
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
      RtlpInterlockedPushEntrySList(&L->ListHead, v62);
    }
    else
    {
      ++L->FreeMisses;
      if ( (void (__stdcall *)(PVOID))L->FreeEx == ExFreePool )
        ExFreePool(v62);
      else
        guard_dispatch_icall_no_overrides(v62, v62, CurrentPrcb, v15);
    }
  }
  return (unsigned int)v57;
}
