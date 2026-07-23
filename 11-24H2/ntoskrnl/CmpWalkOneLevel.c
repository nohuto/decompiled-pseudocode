/*
 * XREFs of CmpWalkOneLevel @ 0x140876890
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407DBB34 (CmpDoBuildVirtualStack.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmpTransUowIsEqual @ 0x1406F90AC (CmpTransUowIsEqual.c)
 *     CmpFindSubKeyInRoot @ 0x14083EC40 (CmpFindSubKeyInRoot.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408406B0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpUnlockHashEntry @ 0x140840970 (CmpUnlockHashEntry.c)
 *     CmpDeleteHive @ 0x140840A1C (CmpDeleteHive.c)
 *     CmpRecordParseFailure @ 0x140841F00 (CmpRecordParseFailure.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408777E0 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 *     CmpFindKcbInHashEntryByName @ 0x140940C90 (CmpFindKcbInHashEntryByName.c)
 *     CmpLockHashEntryShared @ 0x140970DC0 (CmpLockHashEntryShared.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmListGetNextElement @ 0x140BBB940 (CmListGetNextElement.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpWalkOneLevel(
        __int64 a1,
        __int64 a2,
        volatile signed __int64 **a3,
        __int64 a4,
        bool *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        ULONG_PTR a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int64 v11; // r12
  __int64 v12; // r15
  __int16 v13; // bx
  unsigned int v14; // edx
  ULONG_PTR v15; // r13
  __int16 v16; // bx
  __int64 v17; // r14
  ULONG_PTR v18; // r14
  unsigned __int64 *v19; // rsi
  char *v20; // rax
  char *v21; // r13
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int16 v24; // si
  __int16 v25; // cx
  ULONG_PTR v26; // r13
  __int16 j; // bx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  volatile signed __int64 *v31; // r14
  __int16 v32; // bx
  ULONG_PTR v33; // r13
  ULONG_PTR v34; // rdx
  ULONG_PTR v35; // rcx
  __int64 CellFlat; // rax
  __int64 v37; // rcx
  __int64 v38; // r14
  signed __int64 *v39; // rbx
  char *v40; // r14
  ULONG_PTR v41; // rcx
  __int64 CellPaged; // rax
  ULONG_PTR v43; // rcx
  ULONG_PTR v44; // rdx
  __int64 v45; // rbx
  int v46; // r12d
  __int64 v47; // rax
  bool v48; // zf
  __int16 m; // bx
  ULONG_PTR v50; // rcx
  __int16 v51; // dx
  __int64 v52; // r14
  __int64 v53; // rsi
  __int64 v54; // rsi
  __int64 *v55; // rbx
  signed __int64 v56; // rax
  signed __int64 v57; // rdx
  __int64 v58; // rtt
  unsigned int v60; // edx
  __int64 v61; // rax
  __int64 v62; // r9
  __int64 NextElement; // rax
  __int64 v64; // rcx
  bool IsEqual; // al
  int v66; // edx
  __int64 v67; // rsi
  volatile signed __int64 *KcbInHashEntryByName; // rax
  __int64 v69; // rcx
  ULONG_PTR v70; // r13
  __int64 v71; // rax
  _WORD *v72; // rax
  _WORD *v73; // r15
  unsigned __int16 *v74; // r12
  int v75; // eax
  unsigned __int16 v76; // r14
  int v77; // ebx
  int v78; // ecx
  ULONG_PTR v79; // rdx
  __int64 v80; // rax
  unsigned __int8 *v81; // r10
  WCHAR *v82; // r8
  unsigned __int16 v83; // ax
  unsigned __int16 k; // dx
  WCHAR v85; // r12
  unsigned int v86; // r13d
  LONG v87; // r12d
  int v88; // ebx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rax
  int KeyControlBlock; // eax
  __int64 v93; // r14
  __int64 *v94; // rbx
  signed __int64 v95; // rax
  signed __int64 v96; // rdx
  __int64 v97; // rtt
  __int64 i; // rdx
  __int64 v99; // r8
  __int64 v100; // rax
  __int16 v101; // [rsp+50h] [rbp-91h]
  int SubKeyInLeafWithStatus; // [rsp+54h] [rbp-8Dh]
  unsigned __int16 v103; // [rsp+54h] [rbp-8Dh]
  __int16 v104; // [rsp+58h] [rbp-89h]
  __int16 v105; // [rsp+5Ah] [rbp-87h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-81h]
  int v107; // [rsp+68h] [rbp-79h]
  ULONG_PTR v108; // [rsp+6Ch] [rbp-75h] BYREF
  int v109; // [rsp+74h] [rbp-6Dh]
  unsigned __int16 v110; // [rsp+78h] [rbp-69h]
  __int64 v111; // [rsp+80h] [rbp-61h] BYREF
  _DWORD v112[2]; // [rsp+88h] [rbp-59h] BYREF
  int v113; // [rsp+90h] [rbp-51h]
  __int64 v114; // [rsp+98h] [rbp-49h]
  unsigned __int8 *v115; // [rsp+A0h] [rbp-41h]
  __int64 v116; // [rsp+A8h] [rbp-39h] BYREF
  volatile signed __int64 *v117; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v118; // [rsp+B8h] [rbp-29h] BYREF
  ULONG_PTR v119; // [rsp+C0h] [rbp-21h]
  ULONG_PTR v120; // [rsp+C8h] [rbp-19h]
  WCHAR *v121; // [rsp+D0h] [rbp-11h]

  v11 = a1;
  v12 = a2;
  v111 = 0LL;
  v117 = 0LL;
  HvpGetCellContextInitialize(&v111);
  v13 = *(_WORD *)(v11 + 66);
  v15 = v14;
  v101 = -1;
  while ( 1 )
  {
    --v13;
    BugCheckParameter2 = v15;
    if ( v13 < 0 )
      break;
    if ( v13 >= 2 )
      v67 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v13 - 16);
    else
      v67 = *(_QWORD *)(v12 + 8LL * v13 + 8);
    CmpLockHashEntryShared(*(_QWORD *)(v67 + 32), (unsigned int)a8);
    KcbInHashEntryByName = (volatile signed __int64 *)CmpFindKcbInHashEntryByName(
                                                        *(_QWORD *)(v67 + 32),
                                                        (unsigned int)a8,
                                                        v67,
                                                        a6);
    BugCheckParameter2 = (ULONG_PTR)KcbInHashEntryByName;
    v15 = (ULONG_PTR)KcbInHashEntryByName;
    if ( KcbInHashEntryByName )
    {
      CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
      CmpUnlockHashEntry(*(PVOID *)(v67 + 32), a8);
      goto LABEL_112;
    }
    CmpUnlockHashEntry(*(PVOID *)(v67 + 32), a8);
  }
  if ( !v15 )
  {
    v16 = 0;
    BugCheckParameter2 = 0LL;
    *(_WORD *)(a4 + 2) = -1;
    goto LABEL_5;
  }
LABEL_112:
  *(_WORD *)(a4 + 2) = *(_WORD *)(v15 + 66);
  v69 = *(__int16 *)(v15 + 66);
  if ( (_WORD)v69 )
  {
    for ( i = *(_QWORD *)(v15 + 192); i; LOWORD(v69) = v69 - 1 )
    {
      v99 = *(_QWORD *)(i + 16);
      if ( (__int16)v69 >= 2 )
        *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * (__int16)v69 - 16) = v99;
      else
        *(_QWORD *)(a4 + 8LL * (__int16)v69 + 8) = v99;
      i = *(_QWORD *)(i + 24);
    }
  }
  else
  {
    *(_QWORD *)(a4 + 8 * v69 + 8) = v15;
  }
  v16 = *(_WORD *)(v15 + 66) + 1;
LABEL_5:
  v105 = v16;
  if ( v16 > *(__int16 *)(v11 + 66) )
  {
    v24 = -1;
  }
  else
  {
    do
    {
      if ( v16 >= 2 )
        v17 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL * v16 - 16);
      else
        v17 = *(_QWORD *)(a2 + 8LL * v16 + 8);
      v18 = *(_QWORD *)(v17 + 32);
      v19 = (unsigned __int64 *)(*(_QWORD *)(v18 + 1648)
                               + 24
                               * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v18 + 1656) - 1)));
      v20 = (char *)KeAbPreAcquire((__int64)v19, 0LL);
      v21 = v20;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0LL) )
        ExfAcquirePushLockExclusiveEx(v19, v20, (__int64)v19);
      if ( v21 )
        v21[10] = 1;
      v19[1] = (unsigned __int64)KeGetCurrentThread();
      _m_prefetchw((const void *)(v18 + 4232));
      v22 = *(_DWORD *)(v18 + 4232);
      do
      {
        if ( !v22 )
          KeBugCheckEx(0x51u, 0x17uLL, v18, 0xCuLL, (unsigned int)a8);
        v23 = v22;
        v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 4232), v22 + 1, v22);
      }
      while ( v23 != v22 );
      v24 = v16;
      v101 = v16++;
    }
    while ( v16 <= *(__int16 *)(a1 + 66) );
    v12 = a2;
    v11 = a1;
  }
  v25 = *(_WORD *)(v12 + 2);
  v26 = 0LL;
  for ( j = 0; j <= v25; ++j )
  {
    if ( j >= 2 )
      v28 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * j - 16);
    else
      v28 = *(_QWORD *)(v12 + 8LL * j + 8);
    CmpLockKcbShared(v28);
    v25 = *(_WORD *)(v12 + 2);
  }
  v118 = 0LL;
  while ( 1 )
  {
    if ( v25 < 0 )
      goto LABEL_60;
    v29 = v25 >= 2 ? *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v25 - 16) : *(_QWORD *)(v12 + 8LL * v25 + 8);
    if ( *(_WORD *)(v29 + 66) && *(_BYTE *)(v29 + 65) == 1 )
      goto LABEL_60;
    if ( *(_DWORD *)(v29 + 40) != -1 )
      break;
    --v25;
  }
  if ( a9 )
  {
    v62 = *(_QWORD *)(v12 + 8);
    do
    {
      NextElement = CmListGetNextElement(v62 + 208, &v118, 32LL);
      if ( !NextElement )
        goto LABEL_29;
    }
    while ( *(_DWORD *)(NextElement + 68) != 2 );
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56)) )
    {
LABEL_60:
      v46 = -1073741772;
      SubKeyInLeafWithStatus = -1073741772;
      if ( a11 )
      {
        v47 = *(unsigned __int8 *)(a11 + 426);
        v26 = BugCheckParameter2;
        if ( (unsigned __int8)v47 < 4u )
        {
          *(_DWORD *)(a11 + 8 * v47 + 428) = -1073741772;
          *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 426))++ + 432) = 328192;
        }
        goto LABEL_67;
      }
LABEL_104:
      v26 = BugCheckParameter2;
      goto LABEL_67;
    }
  }
LABEL_29:
  v30 = *(_QWORD *)(v11 + 240);
  if ( v30 )
  {
    if ( !a9
      || a9 != v30
      && ((v64 = *(_QWORD *)(a9 + 56)) == 0 || (v100 = *(_QWORD *)(v30 + 56)) == 0
        ? (IsEqual = CmpTransUowIsEqual((const void *)(a9 + 88), (const void *)(v30 + 88)))
        : (IsEqual = v64 == v100),
          !IsEqual) )
    {
      v46 = -1073741772;
      v66 = 328448;
      SubKeyInLeafWithStatus = -1073741772;
LABEL_103:
      CmpRecordParseFailure(a11, v66, -1073741772);
      goto LABEL_104;
    }
  }
  if ( (*(_DWORD *)(v11 + 184) & 0x20000) != 0 )
  {
    v46 = -1073741772;
    v66 = 328704;
    SubKeyInLeafWithStatus = -1073741772;
    goto LABEL_103;
  }
  if ( (*(_DWORD *)(a11 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess((PRKAPC_STATE)(a11 + 168));
    *(_DWORD *)(a11 + 160) |= 1u;
  }
  v31 = (volatile signed __int64 *)BugCheckParameter2;
  if ( BugCheckParameter2 )
    v32 = *(_WORD *)(BugCheckParameter2 + 66) + 1;
  else
    v32 = 0;
  while ( 1 )
  {
    v104 = v32;
    if ( v32 > *(__int16 *)(v11 + 66) )
      break;
    if ( v32 >= 2 )
      v33 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v32 - 16);
    else
      v33 = *(_QWORD *)(v12 + 8LL * v32 + 8);
    v34 = *(unsigned int *)(v33 + 40);
    v120 = v33;
    if ( (_DWORD)v34 == -1 )
    {
      v60 = -1;
      goto LABEL_88;
    }
    v35 = *(_QWORD *)(v33 + 32);
    if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v35, v34);
    else
      CellFlat = HvpGetCellPaged(v35);
    v37 = *(_QWORD *)(v33 + 32);
    v38 = CellFlat;
    v114 = CellFlat;
    if ( (*(_DWORD *)(v37 + 160) & 0x8001) == 0
      && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
    {
      if ( (*(_BYTE *)(v37 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v37, &v111);
      else
        HvpReleaseCellPaged(v37, &v111);
      v39 = (signed __int64 *)(*(_QWORD *)(v33 + 32) + 72LL);
      v40 = (char *)KeAbPreAcquire((__int64)v39, 0LL);
      if ( _InterlockedCompareExchange64(v39, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v39, 0, v40, (__int64)v39);
      if ( v40 )
        v40[10] = 1;
      v41 = *(_QWORD *)(v33 + 32);
      if ( (*(_BYTE *)(v41 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v41, *(unsigned int *)(v33 + 40));
      else
        CellPaged = HvpGetCellPaged(v41);
      v43 = *(_QWORD *)(v33 + 32);
      v38 = CellPaged;
      v44 = *(unsigned int *)(v33 + 40);
      v114 = CellPaged;
      if ( (*(_DWORD *)(v43 + 160) & 0x8001) == 0
        && (*(_BYTE *)(CellPaged + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
        && (int)HvpMarkCellDirty(v43, v44, 0) >= 0 )
      {
        *(_BYTE *)(v38 + 12) |= CmpAccessBitForPhase;
      }
      v45 = *(_QWORD *)(v33 + 32);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v45 + 72));
      KeAbPostRelease(v45 + 72);
    }
    v70 = *(_QWORD *)(v33 + 32);
    v46 = -1073741772;
    v119 = v70;
    SubKeyInLeafWithStatus = -1073741772;
    v109 = 0;
    v108 = 0xFFFFFFFF00000000uLL;
    LODWORD(v116) = 0;
    v107 = -1;
    v71 = 0LL;
LABEL_121:
    while ( 2 )
    {
      v113 = v71;
      if ( (unsigned int)v71 >= *(_DWORD *)(v70 + 216) )
        goto LABEL_187;
      if ( !*(_DWORD *)(v38 + 4 * v71 + 20) )
        goto LABEL_138;
      if ( (*(_BYTE *)(v70 + 140) & 1) != 0 )
        v72 = (_WORD *)HvpGetCellFlat(v70, *(unsigned int *)(v38 + 4 * v71 + 28));
      else
        v72 = (_WORD *)HvpGetCellPaged(v70);
      v73 = v72;
      if ( !v72 )
        goto LABEL_186;
      if ( *v72 == 26994 )
      {
        if ( (int)CmpFindSubKeyInRoot(v70, (__int64)v72, a6, 0LL, &v108) < 0 )
        {
LABEL_208:
          v46 = -1073741670;
          SubKeyInLeafWithStatus = -1073741670;
          goto LABEL_209;
        }
        if ( (*(_BYTE *)(v70 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v70, (char *)&v108 + 4);
        else
          HvpReleaseCellPaged(v70, (char *)&v108 + 4);
        if ( (_DWORD)v108 == -1 )
        {
LABEL_138:
          v71 = (unsigned int)(v113 + 1);
          continue;
        }
        if ( (*(_BYTE *)(v70 + 140) & 1) != 0 )
          v91 = HvpGetCellFlat(v70, (unsigned int)v108);
        else
          v91 = HvpGetCellPaged(v70);
        v73 = (_WORD *)v91;
        if ( !v91 )
        {
LABEL_186:
          v46 = -1073741670;
          SubKeyInLeafWithStatus = -1073741670;
LABEL_187:
          v88 = -1;
          goto LABEL_172;
        }
      }
      break;
    }
    if ( *v73 == 26732 )
    {
      v74 = a6;
      v75 = CmpHashUnicodeComponent(a6);
      LODWORD(v108) = -1;
      v76 = 0;
      v77 = v75;
      while ( 1 )
      {
        if ( v76 >= v73[1] )
        {
          v46 = -1073741772;
          SubKeyInLeafWithStatus = -1073741772;
          goto LABEL_136;
        }
        if ( v77 == *(_DWORD *)&v73[4 * v76 + 4] )
        {
          v48 = (*(_BYTE *)(v70 + 140) & 1) == 0;
          v79 = *(unsigned int *)&v73[4 * v76 + 2];
          v112[0] = -1;
          v112[1] = 0;
          if ( v48 )
            v80 = HvpGetCellPaged(v70);
          else
            v80 = HvpGetCellFlat(v70, v79);
          if ( !v80 )
            goto LABEL_208;
          v81 = (unsigned __int8 *)(v80 + 76);
          if ( (*(_BYTE *)(v80 + 2) & 0x20) != 0 )
          {
            v82 = (WCHAR *)*((_QWORD *)v74 + 1);
            v83 = *(_WORD *)(v80 + 72);
            for ( k = *v74 >> 1; ; --k )
            {
              v103 = v83;
              v110 = k;
              if ( !k || !v83 )
                break;
              v85 = *v82++;
              v86 = *v81++;
              v121 = v82;
              v115 = v81;
              if ( v85 != (_WORD)v86 )
              {
                if ( v85 >= 0x61u )
                {
                  if ( v85 > 0x7Au )
                    v85 = RtlUpcaseUnicodeChar(v85);
                  else
                    v85 -= 32;
                }
                if ( v86 >= 0x61 )
                {
                  if ( v86 > 0x7A )
                    LOWORD(v86) = RtlUpcaseUnicodeChar(v86);
                  else
                    LOWORD(v86) = v86 - 32;
                }
                v87 = v85 - (unsigned __int16)v86;
                if ( v87 )
                  goto LABEL_158;
                k = v110;
                v83 = v103;
                v82 = v121;
                v81 = v115;
              }
              --v83;
            }
            v87 = k - v83;
LABEL_158:
            v70 = v119;
          }
          else
          {
            v87 = RtlCompareUnicodeStrings(
                    *((PCWCH *)v74 + 1),
                    (unsigned __int64)*v74 >> 1,
                    (PCWCH)(v80 + 76),
                    (unsigned __int64)*(unsigned __int16 *)(v80 + 72) >> 1,
                    1u);
          }
          if ( (*(_BYTE *)(v70 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v70, v112);
          else
            HvpReleaseCellPaged(v70, v112);
          if ( !v87 )
          {
            v46 = 0;
            SubKeyInLeafWithStatus = 0;
            v78 = *(_DWORD *)&v73[4 * v76 + 2];
            LODWORD(v108) = v78;
LABEL_135:
            if ( v78 != -1 )
            {
              v107 = v78;
              v46 = 0;
              SubKeyInLeafWithStatus = 0;
              v88 = v78;
              goto LABEL_170;
            }
LABEL_136:
            if ( (*(_BYTE *)(v70 + 140) & 1) == 0 )
            {
              HvpReleaseCellPaged(v70, (char *)&v108 + 4);
              v38 = v114;
              goto LABEL_138;
            }
            HvpReleaseCellFlat(v70, (char *)&v108 + 4);
            v38 = v114;
            v71 = (unsigned int)(v113 + 1);
            goto LABEL_121;
          }
          v74 = a6;
        }
        ++v76;
      }
    }
    SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(v70, (__int64)&v108, (__int64)&v116);
    v46 = SubKeyInLeafWithStatus;
    if ( (int)(SubKeyInLeafWithStatus + 0x80000000) < 0 || SubKeyInLeafWithStatus == -1073741772 )
    {
      v78 = v108;
      goto LABEL_135;
    }
LABEL_209:
    v88 = -1;
LABEL_170:
    if ( (*(_BYTE *)(v70 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v70, (char *)&v108 + 4);
    else
      HvpReleaseCellPaged(v70, (char *)&v108 + 4);
LABEL_172:
    v33 = v120;
    v89 = *(_QWORD *)(v120 + 32);
    if ( (*(_BYTE *)(v89 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v89, &v111);
    else
      HvpReleaseCellPaged(v89, &v111);
    if ( v46 == -1073741772 )
    {
      v60 = -1;
    }
    else
    {
      if ( v46 < 0 )
      {
        v12 = a2;
        v26 = BugCheckParameter2;
        v24 = v101;
        v90 = *(unsigned __int8 *)(a11 + 426);
        if ( (unsigned __int8)v90 < 4u )
        {
          *(_DWORD *)(a11 + 8 * v90 + 428) = v46;
          *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 426))++ + 432) = 328960;
        }
        goto LABEL_67;
      }
      v60 = v107;
      if ( v88 != -1 )
      {
        v12 = a2;
        v32 = v104;
        v31 = (volatile signed __int64 *)BugCheckParameter2;
        goto LABEL_192;
      }
    }
    v11 = a1;
    v31 = (volatile signed __int64 *)BugCheckParameter2;
    v32 = v104;
    v12 = a2;
LABEL_88:
    if ( !*(_WORD *)(v11 + 66) && !a10 )
    {
      v46 = -1073741772;
      v26 = BugCheckParameter2;
      v24 = v101;
      SubKeyInLeafWithStatus = -1073741772;
      v61 = *(unsigned __int8 *)(a11 + 426);
      if ( (unsigned __int8)v61 < 4u )
      {
        *(_DWORD *)(a11 + 8 * v61 + 428) = -1073741772;
        *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 426))++ + 432) = 329216;
      }
      goto LABEL_67;
    }
LABEL_192:
    KeyControlBlock = CmpCreateKeyControlBlock(
                        *(_QWORD *)(v33 + 32),
                        v60,
                        v33,
                        (ULONG_PTR)v31,
                        0,
                        a6,
                        a7,
                        a8,
                        (ULONG_PTR *)&v117);
    SubKeyInLeafWithStatus = KeyControlBlock;
    v46 = KeyControlBlock;
    if ( KeyControlBlock < 0 )
    {
      CmpRecordParseFailure(a11, 329472, KeyControlBlock);
      v24 = v101;
      v26 = BugCheckParameter2;
      goto LABEL_67;
    }
    if ( v31 && _InterlockedExchangeAdd64(v31, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
    v31 = v117;
    v117 = 0LL;
    BugCheckParameter2 = (ULONG_PTR)v31;
    ++*(_WORD *)(a4 + 2);
    if ( v32 >= 2 )
      *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * v32 - 16) = v31;
    else
      *(_QWORD *)(a4 + 8LL * v32 + 8) = v31;
    v11 = a1;
    if ( v32 == *(_WORD *)(a1 + 66) )
    {
      v26 = 0LL;
    }
    else
    {
      v93 = *(_QWORD *)(v33 + 32);
      v26 = 0LL;
      v94 = (__int64 *)(*(_QWORD *)(v93 + 1648)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(v93 + 1656) - 1) & ((101027
                                                                       * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9))));
      v94[1] = 0LL;
      _m_prefetchw(v94);
      v95 = *v94;
      v96 = *v94 - 16;
      if ( (*v94 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v96 = 0LL;
      if ( (v95 & 2) != 0 || (v97 = *v94, v97 != _InterlockedCompareExchange64(v94, v96, v95)) )
        ExfReleasePushLock(v94);
      KeAbPostRelease((ULONG_PTR)v94);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v93 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v93);
      ++v105;
      v32 = v104;
      v31 = (volatile signed __int64 *)BugCheckParameter2;
    }
    ++v32;
  }
  v24 = v101;
  v48 = a10 == 0;
  if ( a10 )
  {
    v24 = --v101;
    v48 = a10 == 0;
  }
  BugCheckParameter2 = 0LL;
  v46 = 0;
  SubKeyInLeafWithStatus = 0;
  *a5 = !v48;
  *a3 = v31;
LABEL_67:
  for ( m = 0; m <= *(__int16 *)(v12 + 2); ++m )
  {
    if ( m >= 2 )
      v50 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * m - 16);
    else
      v50 = *(_QWORD *)(v12 + 8LL * m + 8);
    CmpUnlockKcb(v50);
  }
  v51 = v105;
  if ( v105 <= v24 )
  {
    v52 = 8LL * v105 - 16;
    do
    {
      if ( v51 >= 2 )
        v53 = *(_QWORD *)(v52 + *(_QWORD *)(v12 + 24));
      else
        v53 = *(_QWORD *)(v12 + v52 + 24);
      v54 = *(_QWORD *)(v53 + 32);
      v55 = (__int64 *)(*(_QWORD *)(v54 + 1648)
                      + 24
                      * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v54 + 1656) - 1)));
      v55[1] = 0LL;
      _m_prefetchw(v55);
      v56 = *v55;
      v57 = *v55 - 16;
      if ( (*v55 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v57 = 0LL;
      if ( (v56 & 2) != 0 || (v58 = *v55, v58 != _InterlockedCompareExchange64(v55, v57, v56)) )
        ExfReleasePushLock(v55);
      KeAbPostRelease((ULONG_PTR)v55);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v54 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v54);
      v52 += 8LL;
      v51 = v105 + 1;
      v105 = v51;
    }
    while ( v51 <= v101 );
    v46 = SubKeyInLeafWithStatus;
    v26 = BugCheckParameter2;
  }
  if ( v26 )
    CmpDereferenceKeyControlBlock(v26);
  return (unsigned int)v46;
}
