/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x14088A6C0
 * Callers:
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1403DF480 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringValidateWorker @ 0x1403DF568 (RtlUnicodeStringValidateWorker.c)
 *     RtlUnicodeStringCat @ 0x1403E2DD0 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpComputeComponentHashes @ 0x1408476D0 (CmpComputeComponentHashes.c)
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
 *     CmpUnlockHashEntryByKcb @ 0x140848730 (CmpUnlockHashEntryByKcb.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14086B298 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFindNameInListWithStatus @ 0x14086B314 (CmpFindNameInListWithStatus.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 *     CmpValidateComponents @ 0x1408711C0 (CmpValidateComponents.c)
 *     CmpUnlockKcbStack @ 0x1408713D0 (CmpUnlockKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1408715A0 (CmpLockKcbStackShared.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpGetValueData @ 0x14087A220 (CmpGetValueData.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14087DD88 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpGetKcbAtLayerHeight @ 0x140889590 (CmpGetKcbAtLayerHeight.c)
 *     CmpGetComponentNameAtIndex @ 0x1408895D0 (CmpGetComponentNameAtIndex.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14089F140 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpIsKeyStackDeleted @ 0x140973050 (CmpIsKeyStackDeleted.c)
 *     CmpConstructAndCacheName @ 0x1409F6834 (CmpConstructAndCacheName.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
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
  unsigned int v11; // r13d
  char v12; // r12
  __int64 v13; // rcx
  char v14; // r14
  __int64 v15; // rcx
  ULONG_PTR v16; // rax
  char v17; // cl
  unsigned __int64 v18; // rdi
  signed __int64 v19; // rcx
  __int16 i; // bx
  ULONG_PTR v21; // rcx
  unsigned int v22; // ebx
  unsigned int v23; // r14d
  unsigned int v24; // esi
  unsigned int j; // ecx
  unsigned __int16 *v26; // rax
  size_t v27; // rdx
  ULONG v28; // r8d
  size_t v29; // rdx
  ULONG v30; // r8d
  unsigned __int16 v31; // r10
  wchar_t *Buffer; // r11
  __int16 v33; // r10
  __int64 v34; // r11
  char *v35; // rdx
  unsigned __int64 v36; // rax
  signed __int64 v37; // r8
  __int64 v38; // r11
  __int64 v39; // r13
  unsigned __int16 *v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r11
  unsigned __int16 v44; // r9
  _WORD *v45; // rcx
  unsigned __int64 v46; // rdx
  __int16 v47; // r10
  unsigned __int64 v48; // r8
  char *v49; // r9
  UNICODE_STRING *v50; // rbx
  void *v51; // rcx
  ULONG_PTR v52; // rdi
  ULONG_PTR *v53; // rax
  int v54; // ebx
  ULONG_PTR v55; // rsi
  __int64 v56; // r15
  wchar_t *v57; // rdi
  _SLIST_ENTRY *v58; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *L; // rcx
  __int16 v62; // si
  unsigned int v63; // edi
  __int64 KcbAtLayerHeight; // rax
  __int64 v65; // rbx
  __int64 v66; // r8
  ULONG_PTR v67; // rcx
  ULONG_PTR *v68; // rdi
  ULONG_PTR v69; // rdx
  __int64 CellFlat; // rax
  int NameInListWithStatus; // eax
  __int64 v72; // rcx
  __int64 CellPaged; // rax
  bool v74; // zf
  unsigned int v75; // r8d
  unsigned int v76; // ebx
  __int64 v77; // r15
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v79; // r8d
  UNICODE_STRING v80; // xmm6
  unsigned __int16 v81; // bx
  wchar_t *v82; // rcx
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 Length; // ax
  wchar_t *v85; // r13
  wchar_t *v86; // rsi
  wchar_t *v87; // r14
  __int16 v88; // bx
  __int16 k; // di
  WCHAR v90; // cx
  __int16 v91; // r12
  unsigned int v92; // ebx
  ULONG_PTR v93; // r14
  int v94; // ebx
  __int64 v95; // rdi
  ULONG_PTR v96; // rcx
  ULONG_PTR v97; // rdx
  __int64 v98; // rax
  int v99; // ebx
  __int64 v100; // rcx
  unsigned int v101; // ebx
  __int64 v102; // rax
  wchar_t *v103; // r13
  WCHAR *v104; // rax
  __int16 v105; // r12
  __int16 m; // bx
  WCHAR v107; // di
  WCHAR v108; // si
  unsigned int v109; // edi
  unsigned int v110; // ebx
  __int64 v111; // r12
  const UNICODE_STRING *v112; // rax
  unsigned __int64 v113; // rcx
  UNICODE_STRING *v114; // rbx
  void *v115; // rcx
  __int64 v116; // rdi
  __int64 v117; // rcx
  char v118; // [rsp+40h] [rbp-C0h]
  _BYTE v119[15]; // [rsp+41h] [rbp-BFh] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v122; // [rsp+70h] [rbp-90h]
  __int64 v123; // [rsp+78h] [rbp-88h]
  __int16 v124[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v125[3]; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v126; // [rsp+90h] [rbp-70h] BYREF
  __int64 v127; // [rsp+98h] [rbp-68h]
  unsigned int v128[4]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING SourceString; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v130; // [rsp+C0h] [rbp-40h]
  PVOID P; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v132; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v133; // [rsp+D8h] [rbp-28h]
  __int64 v134; // [rsp+E0h] [rbp-20h]
  __int64 v135; // [rsp+E8h] [rbp-18h]
  __int64 v136; // [rsp+F8h] [rbp-8h]
  ULONG_PTR *v137; // [rsp+100h] [rbp+0h]
  __int64 *v138; // [rsp+108h] [rbp+8h]
  __int64 v139; // [rsp+110h] [rbp+10h]
  __int128 v140; // [rsp+118h] [rbp+18h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+128h] [rbp+28h]
  _BYTE v142[160]; // [rsp+140h] [rbp+40h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+1E0h] [rbp+E0h]

  v139 = a7;
  v136 = a8;
  v137 = a9;
  v11 = a4;
  v133 = a2;
  v134 = a1;
  v138 = a10;
  v130 = a4;
  v122 = a3;
  DestinationString = 0LL;
  *(_QWORD *)&v125[1] = 0LL;
  SourceString = 0LL;
  *(_QWORD *)v128 = 0LL;
  v132 = 0LL;
  v124[0] = 0;
  LOWORD(v125[0]) = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v118 = 1;
  BugCheckParameter2[0] = 0LL;
  v12 = 0;
  *(_WORD *)v119 = 0;
  HvpGetCellContextInitialize(&v125[1]);
  v123 = 0LL;
  *(_DWORD *)&v119[3] = -1;
  *(_QWORD *)&v119[7] = 0LL;
  HvpGetCellContextInitialize(v128);
  P = 0LL;
  v126 = 0;
  HvpGetCellContextInitialize(&v132);
  memset_0(v142, 0, 0xA8uLL);
  v140 = 0LL;
  WORD1(v140) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( a5 || *(_WORD *)(a1 + 2) )
  {
    v13 = *(__int16 *)(a1 + 2);
    v14 = 0;
    if ( (int)v13 >= 2 )
    {
      _mm_lfence();
      v127 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v13 - 16);
      goto LABEL_80;
    }
  }
  else
  {
    LOWORD(v13) = *(_WORD *)(a1 + 2);
    v14 = 1;
  }
  _mm_lfence();
  v15 = *(_QWORD *)(a1 + 8LL * (__int16)v13 + 8);
  v127 = v15;
  if ( v14 && (*(_DWORD *)(v15 + 8) & 8) != 0 )
  {
    v16 = *(_QWORD *)(v15 + 104);
    v17 = 0;
    BugCheckParameter2[0] = v16;
    v18 = *(_QWORD *)(v16 + 296);
    if ( (v18 & 1) != 0 )
    {
      v17 = 1;
      v18 &= ~1uLL;
    }
    if ( v18 && !v17 )
    {
      v19 = _InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2[0]);
      if ( !v19 )
        KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2[0], 0LL, 0LL);
      if ( v19 == 1 )
        KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
      for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
      {
        if ( i >= 2 )
          v21 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
        else
          v21 = *(_QWORD *)(a1 + 8LL * i + 8);
        CmpUnlockKcb(v21);
      }
      v118 = 0;
      CmpLockKcbShared(BugCheckParameter2[0]);
      v22 = v122;
      v12 = 1;
      v23 = *(unsigned __int16 *)v18;
      v24 = v11;
      for ( j = v122; j < v11; ++j )
      {
        if ( j >= 8 )
          v26 = (unsigned __int16 *)(*(_QWORD *)(v133 + 160) + 16 * (j - 8 + 6LL));
        else
          v26 = (unsigned __int16 *)(v133 + 16 * (j + 2LL));
        v23 += *v26 + 2;
      }
      if ( v23 <= 0xFFFF )
      {
        DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( DestinationString.Buffer )
        {
          v12 = 0;
          DestinationString.MaximumLength = v23;
          DestinationString.Length = 0;
          if ( RtlUnicodeStringValidateWorker(&DestinationString, v27, v28) >= 0 )
          {
            if ( RtlUnicodeStringValidateWorker((PCUNICODE_STRING)v18, v29, v30) >= 0 )
            {
              v35 = *(char **)(v18 + 8);
              v36 = (unsigned __int64)*(unsigned __int16 *)v18 >> 1;
              if ( v34 )
              {
                v37 = (char *)DestinationString.Buffer - v35;
                v38 = v34 - v36;
                do
                {
                  if ( !v36 )
                    break;
                  --v36;
                  *(_WORD *)&v35[v37] = *(_WORD *)v35;
                  ++v33;
                  v35 += 2;
                }
                while ( v38 + v36 );
              }
            }
            Buffer = DestinationString.Buffer;
            v31 = 2 * v33;
            DestinationString.Length = v31;
            v24 = v11;
          }
          if ( v22 < v24 )
          {
            v39 = v127;
            do
            {
              if ( v22 >= 8 )
                v40 = (unsigned __int16 *)(*(_QWORD *)(v133 + 160) + 16 * (v22 - 8 + 6LL));
              else
                v40 = (unsigned __int16 *)(v133 + 16 * (v22 + 2LL));
              v41 = v31;
              v31 += 2;
              DestinationString.Length = v31;
              Buffer[v41 >> 1] = 92;
              if ( (v31 & 1) == 0 && (v23 & 1) == 0 && (_WORD)v23 != 0xFFFF && v31 <= (unsigned __int16)v23 )
              {
                v42 = *v40;
                v43 = (unsigned __int64)v31 >> 1;
                if ( (v42 & 1) == 0 )
                {
                  v44 = v40[1];
                  if ( (v44 & 1) == 0
                    && v44 != 0xFFFF
                    && (unsigned __int16)v42 <= v44
                    && (*((_QWORD *)v40 + 1) || !(_WORD)v42 && !v44) )
                  {
                    v45 = (_WORD *)*((_QWORD *)v40 + 1);
                    v46 = v42 >> 1;
                    v47 = 0;
                    v48 = ((unsigned __int64)(unsigned __int16)v23 >> 1) - v43;
                    if ( v48 )
                    {
                      v49 = (char *)DestinationString.Buffer + 2 * v43 - (_QWORD)v45;
                      do
                      {
                        if ( !v46 )
                          break;
                        --v46;
                        *(_WORD *)((char *)v45 + (_QWORD)v49) = *v45;
                        ++v47;
                        ++v45;
                        --v48;
                      }
                      while ( v48 );
                    }
                    v31 = 2 * (v43 + v47);
                    DestinationString.Length = v31;
                  }
                }
                Buffer = DestinationString.Buffer;
              }
              ++v22;
            }
            while ( v22 < v24 );
            v127 = v39;
          }
          v50 = (UNICODE_STRING *)v136;
          v51 = *(void **)(v136 + 8);
          if ( v51 )
            ExFreePoolWithTag(v51, 0);
          *v50 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          v52 = BugCheckParameter2[0];
          CmpUnlockKcb(BugCheckParameter2[0]);
          v53 = v137;
          *v138 = v127;
          *v53 = v52;
          BugCheckParameter2[0] = 0LL;
          v54 = 0;
          v55 = 0LL;
          v56 = 0LL;
          goto LABEL_55;
        }
        v54 = -1073741670;
        goto LABEL_65;
      }
      v54 = -1073741772;
      goto LABEL_76;
    }
  }
LABEL_80:
  if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess((PRKAPC_STATE)(a6 + 168));
    *(_DWORD *)(a6 + 160) |= 1u;
  }
  v62 = *(_WORD *)(a1 + 2);
  v135 = 0LL;
LABEL_83:
  v63 = *(_DWORD *)&v119[3];
  while ( v62 >= 0 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v134, v62);
    v65 = KcbAtLayerHeight;
    if ( !v66
      && (*(_DWORD *)(KcbAtLayerHeight + 40) != -1
       || (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 32) + 4112LL) & 0x2000) == 0) )
    {
      v135 = KcbAtLayerHeight;
    }
    if ( *(_WORD *)(KcbAtLayerHeight + 66) && *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
      goto LABEL_206;
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) == -1 )
    {
      --v62;
    }
    else
    {
      if ( !CmEqualTrans(*(_QWORD *)(KcbAtLayerHeight + 288), a5) )
      {
        v67 = *(_QWORD *)(v65 + 32);
        v68 = (ULONG_PTR *)(v65 + 32);
        v69 = *(unsigned int *)(v65 + 40);
        if ( (*(_BYTE *)(v67 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v67, v69, &v125[1]);
        else
          CellFlat = HvpGetCellPaged(v67, v69, &v125[1]);
        NameInListWithStatus = CmpFindNameInListWithStatus(
                                 *v68,
                                 (unsigned int *)(CellFlat + 36),
                                 &CmSymbolicLinkValueName.Length,
                                 0,
                                 0LL,
                                 &v119[3]);
        v72 = *v68;
        v54 = NameInListWithStatus;
        if ( (*(_BYTE *)(*v68 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v72, &v125[1]);
        else
          HvpReleaseCellPaged(v72, &v125[1]);
LABEL_97:
        if ( v54 >= 0 )
        {
          v55 = *v68;
          v63 = *(_DWORD *)&v119[3];
          *(_QWORD *)&v119[7] = v55;
          goto LABEL_99;
        }
        if ( v54 == -1073741772 )
        {
          --v62;
          goto LABEL_83;
        }
LABEL_76:
        v55 = *(_QWORD *)&v119[7];
        v56 = *(_QWORD *)&v119[7];
        goto LABEL_55;
      }
      if ( *(_DWORD *)(v65 + 280) )
      {
        v68 = (ULONG_PTR *)(v65 + 32);
        v54 = CmpFindNameInListWithStatus(
                *(_QWORD *)(v65 + 32),
                (unsigned int *)(v65 + 280),
                &CmSymbolicLinkValueName.Length,
                0,
                0LL,
                &v119[3]);
        goto LABEL_97;
      }
      v63 = -1;
      *(_DWORD *)&v119[3] = -1;
      --v62;
    }
  }
  v55 = *(_QWORD *)&v119[7];
LABEL_99:
  if ( v63 == -1 )
  {
LABEL_206:
    v55 = *(_QWORD *)&v119[7];
    v54 = -1073741772;
    v56 = v123;
    goto LABEL_55;
  }
  if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v55, v63, v128);
  else
    CellPaged = HvpGetCellPaged(v55, v63, v128);
  v74 = (*(_BYTE *)(CellPaged + 16) & 2) == 0;
  v56 = CellPaged;
  v123 = CellPaged;
  if ( !v74 )
  {
    v54 = -1073741772;
    goto LABEL_55;
  }
  if ( *(_DWORD *)(CellPaged + 12) != 6 )
  {
    v54 = -1073741772;
    goto LABEL_55;
  }
  if ( !CmpGetValueData(v55, v63, CellPaged, &v126, (__int64)&P, (__int64)&v119[1], &v132) )
  {
    v54 = -1073741670;
    goto LABEL_55;
  }
  if ( v126 > 0xFFFF )
  {
    v54 = -1073741772;
    goto LABEL_181;
  }
  if ( (v126 & 1) != 0 )
  {
    v54 = -1073741772;
    goto LABEL_181;
  }
  v75 = v122;
  SourceString.Buffer = (wchar_t *)P;
  SourceString.Length = v126;
  SourceString.MaximumLength = v126;
  v76 = (unsigned __int16)v126;
  if ( v122 < v11 )
  {
    v77 = v133;
    do
    {
      ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(v77, v75);
      v75 = v79 + 1;
      v76 += *ComponentNameAtIndex + 2;
    }
    while ( v75 < v11 );
  }
  if ( v76 > 0xFFFF )
  {
    v56 = v123;
    v54 = -1073741772;
    goto LABEL_55;
  }
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  v57 = DestinationString.Buffer;
  if ( !DestinationString.Buffer )
  {
    v56 = v123;
    v54 = -1073741670;
    goto LABEL_57;
  }
  DestinationString.Length = 0;
  DestinationString.MaximumLength = v76;
  RtlUnicodeStringCopy(&DestinationString, &SourceString);
  if ( v119[1] )
  {
    ExFreePoolWithTag(P, 0);
  }
  else if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
  {
    HvpReleaseCellFlat(v55, &v132);
  }
  else
  {
    HvpReleaseCellPaged(v55, (unsigned int *)&v132);
  }
  v74 = (*(_BYTE *)(v55 + 140) & 1) == 0;
  P = 0LL;
  if ( v74 )
    HvpReleaseCellPaged(v55, v128);
  else
    HvpReleaseCellFlat(v55, v128);
  v123 = 0LL;
  CmpUnlockKcbStack(v134);
  v80 = DestinationString;
  v118 = 0;
  if ( !v14 )
  {
    v85 = DestinationString.Buffer;
    goto LABEL_170;
  }
  v81 = 0;
  SourceString = DestinationString;
  if ( DestinationString.Length )
  {
    v82 = SourceString.Buffer;
    MaximumLength = SourceString.MaximumLength;
    Length = SourceString.Length;
    while ( *v82 == 92 )
    {
      ++v82;
      Length -= 2;
      MaximumLength -= 2;
      SourceString.Buffer = v82;
      v81 += 2;
      SourceString.Length = Length;
      SourceString.MaximumLength = MaximumLength;
      if ( !Length )
        goto LABEL_131;
    }
    if ( Length )
    {
      while ( *v82 != 92 )
      {
        ++v82;
        Length -= 2;
        MaximumLength -= 2;
        SourceString.Buffer = v82;
        v81 += 2;
        SourceString.Length = Length;
        SourceString.MaximumLength = MaximumLength;
        if ( !Length )
          goto LABEL_131;
      }
      do
      {
        if ( *v82 != 92 )
          break;
        ++v82;
        MaximumLength -= 2;
        Length -= 2;
      }
      while ( Length );
      SourceString.Length = Length;
      SourceString.Buffer = v82;
      SourceString.MaximumLength = MaximumLength;
    }
  }
LABEL_131:
  v85 = DestinationString.Buffer;
  v86 = DestinationString.Buffer;
  v87 = CmRegistryRootName.Buffer;
  v88 = v81 >> 1;
  for ( k = CmRegistryRootName.Length >> 1; ; --k )
  {
    if ( !v88 || !k )
    {
      if ( v88 == k && (int)CmpComputeComponentHashes((__m128i *)&SourceString, v124, (__int64)v142) >= 0 )
      {
        v92 = v124[0];
        if ( (int)CmpValidateComponents(v124[0], (__int64)v142) >= 0
          && (int)CmpPerformCompleteKcbCacheLookup(
                    *((volatile signed __int64 **)CmpRegistryRootObject + 1),
                    0,
                    v92,
                    (__int64)v142,
                    0LL,
                    BugCheckParameter2,
                    v119,
                    v125) >= 0 )
        {
          if ( LOWORD(v125[0]) != (_WORD)v92 )
          {
            CmpDereferenceKeyControlBlock(BugCheckParameter2[0]);
            v55 = *(_QWORD *)&v119[7];
            v12 = 0;
            v93 = 0LL;
            BugCheckParameter2[0] = 0LL;
            goto LABEL_171;
          }
          v93 = BugCheckParameter2[0];
          if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)&v140, BugCheckParameter2[0]) >= 0 )
          {
            CmpLockKcbStackShared((__int64)&v140);
            v94 = CmpConstructAndCacheName(v93, 0LL);
            CmpUnlockKcbStack((__int64)&v140);
            if ( v94 >= 0 )
            {
              if ( v119[0] )
              {
                CmpUnlockHashEntryByKcb(v93);
                v119[0] = 0;
              }
              CmpLockKcbStackTopExclusiveRestShared(v134);
              v118 = 1;
              if ( !(unsigned __int8)CmpIsKeyStackDeleted(v134, 0LL) )
              {
                v95 = v127;
                v96 = *(_QWORD *)(v127 + 32);
                v97 = *(unsigned int *)(v127 + 40);
                v98 = (*(_BYTE *)(v96 + 140) & 1) != 0
                    ? HvpGetCellFlat(v96, v97, &v125[1])
                    : HvpGetCellPaged(v96, v97, &v125[1]);
                v99 = CmpFindNameInListWithStatus(
                        *(_QWORD *)(v95 + 32),
                        (unsigned int *)(v98 + 36),
                        &CmSymbolicLinkValueName.Length,
                        0,
                        0LL,
                        &v119[3]);
                v100 = *(_QWORD *)(v95 + 32);
                if ( (*(_BYTE *)(v100 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(v100, &v125[1]);
                else
                  HvpReleaseCellPaged(v100, &v125[1]);
                if ( v99 >= 0 )
                {
                  v101 = *(_DWORD *)&v119[3];
                  *(_QWORD *)&v119[7] = *(_QWORD *)(v95 + 32);
                  v55 = *(_QWORD *)&v119[7];
                  if ( (*(_BYTE *)(*(_QWORD *)&v119[7] + 140LL) & 1) != 0 )
                    v102 = HvpGetCellFlat(*(ULONG_PTR *)&v119[7], *(unsigned int *)&v119[3], v128);
                  else
                    v102 = HvpGetCellPaged(*(ULONG_PTR *)&v119[7], *(unsigned int *)&v119[3], v128);
                  v74 = *(_DWORD *)(v102 + 12) == 6;
                  v123 = v102;
                  if ( !v74
                    || !CmpGetValueData(v55, v101, v102, &v126, (__int64)&P, (__int64)&v119[1], &v132)
                    || v126 > 0xFFFF
                    || (v126 & 1) != 0 )
                  {
                    goto LABEL_195;
                  }
                  v103 = DestinationString.Buffer;
                  v104 = (WCHAR *)P;
                  v105 = DestinationString.Length >> 1;
                  for ( m = (unsigned __int16)v126 >> 1; v105 && m; --m )
                  {
                    v107 = *v103++;
                    v108 = *v104++;
                    *(_QWORD *)&v125[1] = v104;
                    if ( v107 != v108 )
                    {
                      if ( v107 >= 0x61u )
                      {
                        if ( v107 > 0x7Au )
                          v107 = RtlUpcaseUnicodeChar(v107);
                        else
                          v107 -= 32;
                      }
                      if ( v108 >= 0x61u )
                      {
                        if ( v108 <= 0x7Au )
                          v108 -= 32;
                        else
                          v108 = RtlUpcaseUnicodeChar(v108);
                      }
                      if ( v107 != v108 )
                        goto LABEL_193;
                      v104 = *(WCHAR **)&v125[1];
                    }
                    --v105;
                  }
                  if ( v105 == m )
                  {
                    v116 = v127;
                    CmpCleanUpKcbCachedSymlink(v127, v139);
                    *(_QWORD *)(v116 + 104) = v93;
                    CmpReferenceKeyControlBlockUnsafe(v93);
                    v117 = v134;
                    *(_WORD *)(v116 + 8) |= 8u;
                    CmpUnlockKcbStack(v117);
                    v118 = 0;
                  }
LABEL_193:
                  v85 = DestinationString.Buffer;
                }
              }
            }
          }
          v55 = *(_QWORD *)&v119[7];
LABEL_195:
          v12 = 0;
          goto LABEL_171;
        }
      }
      v55 = *(_QWORD *)&v119[7];
      v12 = 0;
LABEL_170:
      v93 = BugCheckParameter2[0];
      goto LABEL_171;
    }
    v90 = *v86++;
    v91 = *v87++;
    if ( v90 != v91 )
    {
      if ( v90 >= 0x61u )
      {
        if ( v90 > 0x7Au )
          v90 = RtlUpcaseUnicodeChar(v90);
        else
          v90 -= 32;
      }
      if ( v90 != v91 )
        break;
    }
    --v88;
  }
  v93 = BugCheckParameter2[0];
  v12 = 0;
  v55 = *(_QWORD *)&v119[7];
LABEL_171:
  v109 = v130;
  v110 = v122;
  if ( v122 < (unsigned int)v130 )
  {
    v111 = v133;
    while ( 1 )
    {
      v112 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(v111, v110);
      v113 = (unsigned __int64)DestinationString.Length >> 1;
      DestinationString.Length += 2;
      v85[v113] = 92;
      RtlUnicodeStringCat(&DestinationString, v112);
      if ( ++v110 >= v109 )
        break;
      v85 = DestinationString.Buffer;
    }
    v80 = DestinationString;
    v12 = 0;
    v93 = BugCheckParameter2[0];
  }
  v114 = (UNICODE_STRING *)v136;
  v115 = *(void **)(v136 + 8);
  if ( v115 )
  {
    ExFreePoolWithTag(v115, 0);
    v114->Buffer = 0LL;
  }
  if ( v119[0] )
    CmpUnlockHashEntryByKcb(v93);
  BugCheckParameter2[0] = 0LL;
  *v137 = v93;
  *v114 = v80;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v54 = 0;
  *v138 = v135;
LABEL_181:
  v56 = v123;
LABEL_55:
  v57 = DestinationString.Buffer;
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_57:
  if ( P )
  {
    if ( v119[1] )
    {
      ExFreePoolWithTag(P, 0);
    }
    else if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(v55, &v132);
    }
    else
    {
      HvpReleaseCellPaged(v55, (unsigned int *)&v132);
    }
  }
  if ( v56 )
  {
    if ( (*(_BYTE *)(v55 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v55, v128);
    else
      HvpReleaseCellPaged(v55, v128);
  }
  if ( v57 )
    ExFreePoolWithTag(v57, 0);
  if ( v118 )
    CmpUnlockKcbStack(v134);
LABEL_65:
  if ( BugCheckParameter2[0] )
  {
    if ( v12 )
      CmpUnlockKcb(BugCheckParameter2[0]);
    CmpDereferenceKeyControlBlock(BugCheckParameter2[0]);
  }
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  v58 = ListEntry;
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
      RtlpInterlockedPushEntrySList(&L->ListHead, v58);
    }
    else
    {
      ++L->FreeMisses;
      if ( (void (__stdcall *)(PVOID))L->FreeEx == ExFreePool )
        ExFreePool(v58);
      else
        guard_dispatch_icall_no_overrides(v58);
    }
  }
  return (unsigned int)v54;
}
