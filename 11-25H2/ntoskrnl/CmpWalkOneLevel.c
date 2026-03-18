/*
 * XREFs of CmpWalkOneLevel @ 0x140876200
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline @ 0x1404F0ABC (Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CmpTransUowIsEqual @ 0x1406EF5FC (CmpTransUowIsEqual.c)
 *     CmpFindSubKeyInRoot @ 0x140846440 (CmpFindSubKeyInRoot.c)
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
 *     CmpUnlockHashEntry @ 0x140848820 (CmpUnlockHashEntry.c)
 *     CmpDeleteHive @ 0x1408488CC (CmpDeleteHive.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408489A0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpRecordParseFailure @ 0x140849FA0 (CmpRecordParseFailure.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     RtlCompareUnicodeStrings @ 0x1408694A0 (RtlCompareUnicodeStrings.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     CmpCreateKeyControlBlock @ 0x140875390 (CmpCreateKeyControlBlock.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140877170 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpFindKcbInHashEntryByName @ 0x1409783B0 (CmpFindKcbInHashEntryByName.c)
 *     CmpLockHashEntryShared @ 0x14098ACC0 (CmpLockHashEntryShared.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmListGetNextElement @ 0x140BA9A30 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpWalkOneLevel(
        __int64 a1,
        __int64 a2,
        ULONG_PTR *a3,
        __int64 a4,
        bool *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        ULONG_PTR a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  __int64 v12; // r12
  __int16 v14; // di
  unsigned int v15; // edx
  ULONG_PTR v16; // r13
  __int16 v17; // di
  __int64 v18; // rsi
  __int64 v19; // r14
  ULONG_PTR v20; // r14
  unsigned __int64 *v21; // rsi
  __int64 *v22; // rax
  __int64 *v23; // r13
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  __int16 v26; // cx
  __int16 j; // di
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  int v31; // r14d
  __int16 v32; // r15
  ULONG_PTR v33; // r15
  ULONG_PTR v34; // rdx
  ULONG_PTR v35; // rcx
  __int64 CellFlat; // rax
  __int64 v37; // rcx
  signed __int64 *v38; // rsi
  __int64 *v39; // r14
  ULONG_PTR v40; // rcx
  __int64 CellPaged; // rax
  ULONG_PTR v42; // rcx
  __int64 v43; // rsi
  ULONG_PTR v44; // rdx
  __int64 v45; // rsi
  ULONG_PTR v46; // r13
  int v47; // r15d
  __int64 v48; // rax
  _WORD *v49; // rax
  _WORD *v50; // r12
  unsigned __int16 *v51; // r15
  WCHAR *v52; // rsi
  unsigned __int64 v53; // r15
  WCHAR v54; // ax
  unsigned __int16 k; // si
  int v56; // ecx
  __int64 v57; // r15
  WCHAR v58; // ax
  ULONG_PTR v59; // rdx
  __int64 v60; // rax
  const WCHAR *v61; // r8
  WCHAR *v62; // rdx
  unsigned __int16 v63; // ax
  unsigned __int16 m; // r13
  WCHAR v65; // r15
  unsigned int v66; // r12d
  LONG v67; // r15d
  int v68; // esi
  ULONG_PTR v69; // r14
  __int64 v70; // rcx
  ULONG_PTR v71; // r13
  __int64 v72; // rax
  unsigned int v73; // edx
  __int64 v74; // rax
  __int16 n; // di
  ULONG_PTR v76; // rcx
  __int16 v77; // dx
  __int64 v78; // r14
  __int64 v79; // rsi
  __int64 v80; // rsi
  __int64 *v81; // rbx
  signed __int64 v82; // rax
  signed __int64 v83; // rdx
  __int64 v84; // rtt
  __int64 v86; // rax
  __int64 v87; // rax
  bool v88; // zf
  int v89; // eax
  __int64 v90; // r14
  __int64 *v91; // rsi
  signed __int64 v92; // rax
  signed __int64 v93; // rdx
  __int64 v94; // rtt
  __int64 v95; // r9
  __int64 NextElement; // rax
  __int64 v97; // rcx
  bool IsEqual; // al
  int v99; // edx
  __int64 v100; // rsi
  volatile signed __int64 *KcbInHashEntryByName; // rax
  __int64 v102; // rcx
  __int64 i; // rdx
  __int64 v104; // r8
  __int64 v105; // rax
  int SubKeyInLeafWithStatus; // [rsp+50h] [rbp-A1h]
  unsigned __int16 v107; // [rsp+50h] [rbp-A1h]
  __int16 v108; // [rsp+54h] [rbp-9Dh]
  __int16 v109; // [rsp+56h] [rbp-9Bh]
  int v110; // [rsp+58h] [rbp-99h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-91h]
  __int16 v112; // [rsp+68h] [rbp-89h]
  ULONG_PTR v113; // [rsp+6Ch] [rbp-85h] BYREF
  int v114; // [rsp+74h] [rbp-7Dh]
  __int64 v115; // [rsp+78h] [rbp-79h] BYREF
  _DWORD v116[2]; // [rsp+80h] [rbp-71h] BYREF
  ULONG_PTR v117; // [rsp+88h] [rbp-69h]
  int v118; // [rsp+90h] [rbp-61h]
  _WORD *v119; // [rsp+98h] [rbp-59h]
  __int64 v120; // [rsp+A0h] [rbp-51h]
  const WCHAR *v121; // [rsp+A8h] [rbp-49h]
  __int64 v122; // [rsp+B0h] [rbp-41h] BYREF
  ULONG_PTR v123; // [rsp+B8h] [rbp-39h] BYREF
  __int128 v124; // [rsp+C0h] [rbp-31h]
  __int64 v125; // [rsp+D0h] [rbp-21h] BYREF
  ULONG_PTR v126; // [rsp+D8h] [rbp-19h]
  WCHAR *v127; // [rsp+E0h] [rbp-11h]

  v12 = a2;
  v115 = 0LL;
  v123 = 0LL;
  HvpGetCellContextInitialize(&v115);
  v14 = *(_WORD *)(a1 + 66);
  v16 = v15;
  v109 = -1;
  while ( 1 )
  {
    --v14;
    BugCheckParameter2 = v16;
    if ( v14 < 0 )
      break;
    if ( v14 >= 2 )
      v100 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v14 - 16);
    else
      v100 = *(_QWORD *)(v12 + 8LL * v14 + 8);
    CmpLockHashEntryShared(*(_QWORD *)(v100 + 32), (unsigned int)a8);
    KcbInHashEntryByName = (volatile signed __int64 *)CmpFindKcbInHashEntryByName(
                                                        *(_QWORD *)(v100 + 32),
                                                        (unsigned int)a8,
                                                        v100,
                                                        a6);
    BugCheckParameter2 = (ULONG_PTR)KcbInHashEntryByName;
    v16 = (ULONG_PTR)KcbInHashEntryByName;
    if ( KcbInHashEntryByName )
    {
      CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
      CmpUnlockHashEntry(*(PVOID *)(v100 + 32), a8);
      goto LABEL_215;
    }
    CmpUnlockHashEntry(*(PVOID *)(v100 + 32), a8);
  }
  if ( !v16 )
  {
    *(_WORD *)(a4 + 2) = -1;
    v17 = 0;
    BugCheckParameter2 = 0LL;
    goto LABEL_5;
  }
LABEL_215:
  *(_WORD *)(a4 + 2) = *(_WORD *)(v16 + 66);
  v102 = *(__int16 *)(v16 + 66);
  if ( (_WORD)v102 )
  {
    for ( i = *(_QWORD *)(v16 + 192); i; LOWORD(v102) = v102 - 1 )
    {
      v104 = *(_QWORD *)(i + 16);
      if ( (__int16)v102 >= 2 )
        *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * (__int16)v102 - 16) = v104;
      else
        *(_QWORD *)(a4 + 8LL * (__int16)v102 + 8) = v104;
      i = *(_QWORD *)(i + 24);
    }
  }
  else
  {
    *(_QWORD *)(a4 + 8 * v102 + 8) = v16;
  }
  v17 = *(_WORD *)(v16 + 66) + 1;
LABEL_5:
  v18 = a1;
  v108 = v17;
  if ( v17 <= *(__int16 *)(a1 + 66) )
  {
    do
    {
      if ( v17 >= 2 )
        v19 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v17 - 16);
      else
        v19 = *(_QWORD *)(v12 + 8LL * v17 + 8);
      v20 = *(_QWORD *)(v19 + 32);
      v21 = (unsigned __int64 *)(*(_QWORD *)(v20 + 1648)
                               + 24
                               * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v20 + 1656) - 1)));
      v22 = KeAbPreAcquire((__int64)v21, 0LL);
      v23 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
        ExfAcquirePushLockExclusiveEx(v21, v22, (__int64)v21);
      if ( v23 )
        *((_BYTE *)v23 + 10) = 1;
      v21[1] = (unsigned __int64)KeGetCurrentThread();
      _m_prefetchw((const void *)(v20 + 4232));
      v24 = *(_DWORD *)(v20 + 4232);
      do
      {
        if ( !v24 )
          KeBugCheckEx(0x51u, 0x17uLL, v20, 0xCuLL, (unsigned int)a8);
        v25 = v24;
        v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 4232), v24 + 1, v24);
      }
      while ( v25 != v24 );
      v18 = a1;
      v109 = v17++;
    }
    while ( v17 <= *(__int16 *)(a1 + 66) );
    v16 = BugCheckParameter2;
  }
  v26 = *(_WORD *)(v12 + 2);
  for ( j = 0; j <= v26; ++j )
  {
    if ( j >= 2 )
      v28 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * j - 16);
    else
      v28 = *(_QWORD *)(v12 + 8LL * j + 8);
    CmpLockKcbShared(v28);
    v26 = *(_WORD *)(v12 + 2);
  }
  v125 = 0LL;
  while ( 1 )
  {
    if ( v26 < 0 )
      goto LABEL_166;
    v29 = v26 >= 2 ? *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v26 - 16) : *(_QWORD *)(v12 + 8LL * v26 + 8);
    if ( *(_WORD *)(v29 + 66) && *(_BYTE *)(v29 + 65) == 1 )
      goto LABEL_166;
    if ( *(_DWORD *)(v29 + 40) != -1 )
      break;
    --v26;
  }
  if ( !a9 )
    goto LABEL_29;
  v95 = *(_QWORD *)(v12 + 8);
  do
  {
    NextElement = CmListGetNextElement(v95 + 208, &v125, 32LL);
    if ( !NextElement )
      goto LABEL_29;
  }
  while ( *(_DWORD *)(NextElement + 68) != 2 );
  if ( !CmEqualTrans(*(_QWORD *)(NextElement + 56), a9) )
  {
LABEL_29:
    v30 = *(_QWORD *)(v18 + 240);
    if ( v30 )
    {
      if ( !a9
        || a9 != v30
        && ((v97 = *(_QWORD *)(a9 + 56)) == 0 || (v105 = *(_QWORD *)(v30 + 56)) == 0
          ? (IsEqual = CmpTransUowIsEqual((const void *)(a9 + 88), (const void *)(v30 + 88)))
          : (IsEqual = v97 == v105),
            !IsEqual) )
      {
        v47 = -1073741772;
        v99 = 328448;
        SubKeyInLeafWithStatus = -1073741772;
LABEL_205:
        CmpRecordParseFailure(a11, v99, -1073741772);
        goto LABEL_206;
      }
    }
    if ( (*(_DWORD *)(v18 + 184) & 0x20000) != 0 )
    {
      v47 = -1073741772;
      v99 = 328704;
      SubKeyInLeafWithStatus = -1073741772;
      goto LABEL_205;
    }
    if ( (*(_DWORD *)(a11 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess((PRKAPC_STATE)(a11 + 168));
      *(_DWORD *)(a11 + 160) |= 1u;
    }
    if ( v16 )
    {
      v32 = *(_WORD *)(v16 + 66) + 1;
      v112 = v32;
      v31 = 0;
    }
    else
    {
      v31 = 0;
      v32 = 0;
      v112 = 0;
    }
LABEL_35:
    if ( v32 > *(__int16 *)(v18 + 66) )
    {
      v88 = a10 == 0;
      if ( a10 )
      {
        --v109;
        v88 = a10 == 0;
      }
      BugCheckParameter2 = 0LL;
      v47 = 0;
      SubKeyInLeafWithStatus = 0;
      *a5 = !v88;
      *a3 = v16;
      v71 = 0LL;
      goto LABEL_137;
    }
    if ( v32 >= 2 )
      v33 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v32 - 16);
    else
      v33 = *(_QWORD *)(v12 + 8LL * v32 + 8);
    v34 = *(unsigned int *)(v33 + 40);
    v117 = v33;
    if ( (_DWORD)v34 == -1 )
    {
      v73 = -1;
      goto LABEL_133;
    }
    v35 = *(_QWORD *)(v33 + 32);
    if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v35, v34);
    else
      CellFlat = HvpGetCellPaged(v35);
    v37 = *(_QWORD *)(v33 + 32);
    v120 = CellFlat;
    if ( (*(_DWORD *)(v37 + 160) & 0x8001) == 0
      && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
    {
      if ( (*(_BYTE *)(v37 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v37, &v115);
      else
        HvpReleaseCellPaged(v37, &v115);
      v38 = (signed __int64 *)(*(_QWORD *)(v33 + 32) + 72LL);
      v39 = KeAbPreAcquire((__int64)v38, 0LL);
      if ( _InterlockedCompareExchange64(v38, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v38, 0, v39, (unsigned __int64)v38);
      if ( v39 )
        *((_BYTE *)v39 + 10) = 1;
      v40 = *(_QWORD *)(v33 + 32);
      if ( (*(_BYTE *)(v40 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v40, *(unsigned int *)(v33 + 40));
      else
        CellPaged = HvpGetCellPaged(v40);
      v42 = *(_QWORD *)(v33 + 32);
      v43 = CellPaged;
      v44 = *(unsigned int *)(v33 + 40);
      v120 = CellPaged;
      if ( (*(_DWORD *)(v42 + 160) & 0x8001) == 0
        && (*(_BYTE *)(CellPaged + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
        && (int)HvpMarkCellDirty(v42, v44, 0) >= 0 )
      {
        *(_BYTE *)(v43 + 12) |= CmpAccessBitForPhase;
      }
      v45 = *(_QWORD *)(v33 + 32);
      v31 = 0;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v45 + 72));
      KeAbPostRelease(v45 + 72);
    }
    v46 = *(_QWORD *)(v33 + 32);
    v47 = -1073741772;
    v126 = v46;
    SubKeyInLeafWithStatus = -1073741772;
    v114 = 0;
    v113 = 0xFFFFFFFF00000000uLL;
    LODWORD(v122) = 0;
    v110 = -1;
    v48 = 0LL;
    while ( 1 )
    {
      v118 = v48;
      if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 216) )
        goto LABEL_165;
      if ( !*(_DWORD *)(v120 + 4 * v48 + 20) )
        goto LABEL_82;
      if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
        v49 = (_WORD *)HvpGetCellFlat(v46, *(unsigned int *)(v120 + 4 * v48 + 28));
      else
        v49 = (_WORD *)HvpGetCellPaged(v46);
      v119 = v49;
      v50 = v49;
      if ( !v49 )
      {
LABEL_164:
        v47 = -1073741670;
        SubKeyInLeafWithStatus = -1073741670;
LABEL_165:
        v68 = -1;
        goto LABEL_122;
      }
      if ( *v49 == 26994 )
      {
        if ( (int)CmpFindSubKeyInRoot(v46, (__int64)v49, a6, 0LL, &v113) < 0 )
        {
LABEL_207:
          v47 = -1073741670;
          SubKeyInLeafWithStatus = -1073741670;
LABEL_208:
          v68 = -1;
LABEL_120:
          if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v46, (char *)&v113 + 4);
          else
            HvpReleaseCellPaged(v46, (char *)&v113 + 4);
LABEL_122:
          v69 = v117;
          v70 = *(_QWORD *)(v117 + 32);
          if ( (*(_BYTE *)(v70 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v70, &v115);
          else
            HvpReleaseCellPaged(v70, &v115);
          if ( v47 == -1073741772 )
          {
            v73 = -1;
          }
          else
          {
            if ( v47 < 0 )
            {
              v12 = a2;
              v71 = BugCheckParameter2;
              v72 = *(unsigned __int8 *)(a11 + 426);
              if ( (unsigned __int8)v72 < 4u )
              {
                *(_DWORD *)(a11 + 8 * v72 + 428) = v47;
                *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 426))++ + 432) = 328960;
              }
              goto LABEL_137;
            }
            v73 = v110;
            if ( v68 != -1 )
            {
              v12 = a2;
              v33 = v69;
              v16 = BugCheckParameter2;
              v18 = a1;
              goto LABEL_178;
            }
          }
          v18 = a1;
          v33 = v69;
          v16 = BugCheckParameter2;
          v12 = a2;
LABEL_133:
          if ( !*(_WORD *)(v18 + 66) && !a10 )
          {
            v47 = -1073741772;
            v71 = BugCheckParameter2;
            SubKeyInLeafWithStatus = -1073741772;
            v74 = *(unsigned __int8 *)(a11 + 426);
            if ( (unsigned __int8)v74 < 4u )
            {
              *(_DWORD *)(a11 + 8 * v74 + 428) = -1073741772;
              *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 426))++ + 432) = 329216;
            }
            goto LABEL_137;
          }
LABEL_178:
          v31 = 0;
          v89 = CmpCreateKeyControlBlock(*(_QWORD *)(v33 + 32), v73, v33, v16, 0, a6, a7, a8, &v123);
          SubKeyInLeafWithStatus = v89;
          v47 = v89;
          if ( v89 < 0 )
          {
            CmpRecordParseFailure(a11, 329472, v89);
            v71 = BugCheckParameter2;
            goto LABEL_137;
          }
          if ( v16 && _InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
          v16 = v123;
          BugCheckParameter2 = v123;
          v123 = 0LL;
          ++*(_WORD *)(a4 + 2);
          if ( v112 >= 2 )
            *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * v112 - 16) = v16;
          else
            *(_QWORD *)(a4 + 8LL * v112 + 8) = v16;
          if ( v112 != *(_WORD *)(v18 + 66) )
          {
            v90 = *(_QWORD *)(v117 + 32);
            v91 = (__int64 *)(*(_QWORD *)(v90 + 1648)
                            + 24
                            * ((unsigned int)(*(_DWORD *)(v90 + 1656) - 1) & ((101027
                                                                             * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9))));
            v91[1] = 0LL;
            _m_prefetchw(v91);
            v92 = *v91;
            v93 = *v91 - 16;
            if ( (*v91 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v93 = 0LL;
            if ( (v92 & 2) != 0 || (v94 = *v91, v94 != _InterlockedCompareExchange64(v91, v93, v92)) )
              ExfReleasePushLock(v91);
            KeAbPostRelease((ULONG_PTR)v91);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v90 + 4232), 0xFFFFFFFF) == 1 )
              CmpDeleteHive((_QWORD *)v90);
            ++v108;
            v18 = a1;
            v31 = 0;
          }
          v32 = ++v112;
          goto LABEL_35;
        }
        if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v46, (char *)&v113 + 4);
        else
          HvpReleaseCellPaged(v46, (char *)&v113 + 4);
        if ( (_DWORD)v113 != -1 )
        {
          if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
            v86 = HvpGetCellFlat(v46, (unsigned int)v113);
          else
            v86 = HvpGetCellPaged(v46);
          v119 = (_WORD *)v86;
          v50 = (_WORD *)v86;
          if ( !v86 )
            goto LABEL_164;
          goto LABEL_63;
        }
LABEL_82:
        v48 = (unsigned int)(v118 + 1);
      }
      else
      {
LABEL_63:
        if ( *v50 == 26732 )
        {
          v51 = a6;
          v124 = *(_OWORD *)a6;
          if ( (unsigned int)Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( (unsigned __int16)v124 >= 2u )
            {
              v52 = (WCHAR *)*((_QWORD *)&v124 + 1);
              v53 = (unsigned __int64)(unsigned __int16)v124 >> 1;
              do
              {
                v54 = *v52;
                if ( *v52 >= 0x61u )
                {
                  if ( v54 > 0x7Au )
                    v54 = RtlUpcaseUnicodeChar(v54);
                  else
                    v54 -= 32;
                }
                ++v52;
                v31 = v54 + 37 * v31;
                --v53;
              }
              while ( v53 );
              goto LABEL_71;
            }
          }
          else if ( (_WORD)v124 )
          {
            v52 = (WCHAR *)*((_QWORD *)&v124 + 1);
            v57 = (unsigned __int16)(((unsigned __int16)(v124 - 1) >> 1) + 1);
            do
            {
              v58 = *v52;
              if ( *v52 >= 0x61u )
              {
                if ( v58 > 0x7Au )
                  v58 = RtlUpcaseUnicodeChar(v58);
                else
                  v58 -= 32;
              }
              ++v52;
              v31 = v58 + 37 * v31;
              --v57;
            }
            while ( v57 );
LABEL_71:
            v51 = a6;
            *((_QWORD *)&v124 + 1) = v52;
          }
          LODWORD(v113) = -1;
          for ( k = 0; ; ++k )
          {
            if ( k >= v50[1] )
            {
              v47 = -1073741772;
              SubKeyInLeafWithStatus = -1073741772;
              goto LABEL_80;
            }
            if ( v31 == *(_DWORD *)&v50[4 * k + 4] )
            {
              v88 = (*(_BYTE *)(v46 + 140) & 1) == 0;
              v59 = *(unsigned int *)&v50[4 * k + 2];
              v116[0] = -1;
              v116[1] = 0;
              if ( v88 )
                v60 = HvpGetCellPaged(v46);
              else
                v60 = HvpGetCellFlat(v46, v59);
              if ( !v60 )
                goto LABEL_207;
              v61 = (const WCHAR *)(v60 + 76);
              if ( (*(_BYTE *)(v60 + 2) & 0x20) != 0 )
              {
                v62 = (WCHAR *)*((_QWORD *)v51 + 1);
                v63 = *(_WORD *)(v60 + 72);
                for ( m = *v51 >> 1; ; --m )
                {
                  v107 = v63;
                  if ( !m || !v63 )
                    break;
                  v65 = *v62++;
                  v66 = *(unsigned __int8 *)v61;
                  v61 = (const WCHAR *)((char *)v61 + 1);
                  v127 = v62;
                  v121 = v61;
                  if ( v65 != (_WORD)v66 )
                  {
                    if ( v65 >= 0x61u )
                    {
                      if ( v65 > 0x7Au )
                        v65 = RtlUpcaseUnicodeChar(v65);
                      else
                        v65 -= 32;
                    }
                    if ( v66 >= 0x61 )
                    {
                      if ( v66 > 0x7A )
                        LOWORD(v66) = RtlUpcaseUnicodeChar(v66);
                      else
                        LOWORD(v66) = v66 - 32;
                    }
                    v67 = v65 - (unsigned __int16)v66;
                    if ( v67 )
                      goto LABEL_109;
                    v63 = v107;
                    v62 = v127;
                    v61 = v121;
                  }
                  --v63;
                }
                v67 = m - v63;
LABEL_109:
                v50 = v119;
                v46 = v126;
              }
              else
              {
                v67 = RtlCompareUnicodeStrings(
                        *((PCWCH *)v51 + 1),
                        (unsigned __int64)*v51 >> 1,
                        v61,
                        (unsigned __int64)*(unsigned __int16 *)(v60 + 72) >> 1,
                        1u);
              }
              if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v46, v116);
              else
                HvpReleaseCellPaged(v46, v116);
              if ( !v67 )
                break;
            }
            v51 = a6;
          }
          v47 = 0;
          SubKeyInLeafWithStatus = 0;
          v56 = *(_DWORD *)&v50[4 * k + 2];
          LODWORD(v113) = v56;
          goto LABEL_79;
        }
        SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(v46, (__int64)&v113, (__int64)&v122);
        v47 = SubKeyInLeafWithStatus;
        if ( (int)(SubKeyInLeafWithStatus + 0x80000000) >= 0 && SubKeyInLeafWithStatus != -1073741772 )
          goto LABEL_208;
        v56 = v113;
LABEL_79:
        if ( v56 != -1 )
        {
          v68 = v56;
          v110 = v56;
          v47 = 0;
          SubKeyInLeafWithStatus = 0;
          goto LABEL_120;
        }
LABEL_80:
        if ( (*(_BYTE *)(v46 + 140) & 1) == 0 )
        {
          HvpReleaseCellPaged(v46, (char *)&v113 + 4);
          v31 = 0;
          goto LABEL_82;
        }
        HvpReleaseCellFlat(v46, (char *)&v113 + 4);
        v31 = 0;
        v48 = (unsigned int)(v118 + 1);
      }
    }
  }
LABEL_166:
  v47 = -1073741772;
  SubKeyInLeafWithStatus = -1073741772;
  if ( !a11 )
  {
LABEL_206:
    v71 = BugCheckParameter2;
    goto LABEL_137;
  }
  v87 = *(unsigned __int8 *)(a11 + 426);
  v71 = BugCheckParameter2;
  if ( (unsigned __int8)v87 < 4u )
  {
    *(_DWORD *)(a11 + 8 * v87 + 428) = -1073741772;
    *(_DWORD *)(a11 + 8LL * (unsigned __int8)(*(_BYTE *)(a11 + 426))++ + 432) = 328192;
  }
LABEL_137:
  for ( n = 0; n <= *(__int16 *)(v12 + 2); ++n )
  {
    if ( n >= 2 )
      v76 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * n - 16);
    else
      v76 = *(_QWORD *)(v12 + 8LL * n + 8);
    CmpUnlockKcb(v76);
  }
  v77 = v108;
  if ( v108 <= v109 )
  {
    v78 = 8LL * v108 - 16;
    do
    {
      if ( v77 >= 2 )
        v79 = *(_QWORD *)(v78 + *(_QWORD *)(v12 + 24));
      else
        v79 = *(_QWORD *)(v78 + v12 + 24);
      v80 = *(_QWORD *)(v79 + 32);
      v81 = (__int64 *)(*(_QWORD *)(v80 + 1648)
                      + 24
                      * (((101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)a8 ^ ((unsigned int)a8 >> 9))) >> 9)) & (unsigned int)(*(_DWORD *)(v80 + 1656) - 1)));
      v81[1] = 0LL;
      _m_prefetchw(v81);
      v82 = *v81;
      v83 = *v81 - 16;
      if ( (*v81 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v83 = 0LL;
      if ( (v82 & 2) != 0 || (v84 = *v81, v84 != _InterlockedCompareExchange64(v81, v83, v82)) )
        ExfReleasePushLock(v81);
      KeAbPostRelease((ULONG_PTR)v81);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v80 + 4232), 0xFFFFFFFF) == 1 )
        CmpDeleteHive((_QWORD *)v80);
      v78 += 8LL;
      v77 = v108 + 1;
      v108 = v77;
    }
    while ( v77 <= v109 );
    v47 = SubKeyInLeafWithStatus;
    v71 = BugCheckParameter2;
  }
  if ( v71 )
    CmpDereferenceKeyControlBlock(v71);
  return (unsigned int)v47;
}
