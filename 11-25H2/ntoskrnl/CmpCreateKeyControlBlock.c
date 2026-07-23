/*
 * XREFs of CmpCreateKeyControlBlock @ 0x140875390
 * Callers:
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmpCreateRegistryRoot @ 0x140C35AB8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAllocateFromLookasideListEx @ 0x1403DCD60 (ExAllocateFromLookasideListEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x140429CE0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408489A0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpReferenceKeyControlBlock @ 0x140849E30 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x140874380 (CmpLockKcbExclusive.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1408749B0 (CmpDereferenceNameControlBlockWithLock.c)
 *     EtwpTraceRegistry @ 0x140874AF0 (EtwpTraceRegistry.c)
 *     CmpGetNameControlBlock @ 0x140874CD0 (CmpGetNameControlBlock.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpConstructName @ 0x14087A050 (CmpConstructName.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14099C700 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpFreeKeyControlBlock @ 0x1409D6F70 (CmpFreeKeyControlBlock.c)
 *     CmpTryToLockKcbExclusive @ 0x1409E2C50 (CmpTryToLockKcbExclusive.c)
 *     CmpAllocateLayerInfoForKcb @ 0x140A01C2C (CmpAllocateLayerInfoForKcb.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmLockHiveSecurityShared @ 0x140BA9A5C (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140BA9AB8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpCreateKeyControlBlock(
        __int64 a1,
        unsigned int a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        char a5,
        unsigned __int16 *a6,
        unsigned int a7,
        unsigned int a8,
        ULONG_PTR *a9)
{
  unsigned __int16 *v10; // rsi
  unsigned int v11; // r14d
  unsigned int v12; // ebx
  ULONG_PTR v13; // r12
  __int64 i; // rdx
  ULONG_PTR v15; // r15
  __int64 v16; // rcx
  __int16 *v17; // r13
  unsigned __int16 v18; // di
  WCHAR *v19; // r12
  __int16 v20; // si
  __int16 j; // di
  WCHAR v22; // cx
  __int16 v23; // r15
  int v24; // edx
  ULONG_PTR v25; // rax
  ULONG_PTR *v26; // r8
  __int64 v27; // rax
  int v28; // ecx
  int v29; // edx
  PVOID v30; // rax
  ULONG_PTR v31; // rdi
  unsigned int v32; // eax
  __int64 v33; // r13
  _DWORD *NameControlBlock; // rax
  ULONG_PTR v35; // rdx
  ULONG_PTR v36; // rcx
  __int64 CellFlat; // rax
  __int64 v38; // rcx
  __int64 v39; // rsi
  signed __int64 *v40; // rbx
  __int64 *v41; // rsi
  ULONG_PTR v42; // rcx
  __int64 CellPaged; // rax
  ULONG_PTR v44; // rcx
  __int64 v45; // rbx
  int v46; // ecx
  int v47; // ecx
  __int64 *v48; // rax
  int v49; // esi
  __int64 v50; // rbx
  ULONG_PTR v51; // rbx
  __int64 v52; // rcx
  signed __int64 v53; // r15
  bool v54; // zf
  int v55; // ecx
  int v56; // edx
  unsigned int v57; // eax
  ULONG_PTR v58; // rsi
  unsigned __int64 v59; // rdx
  void (__fastcall *v60)(unsigned __int8, __int64, int, int, __int64, __int64); // rbx
  __int64 v61; // rcx
  void *v62; // rsi
  int LayerInfoForKcb; // eax
  _WORD *v65; // rcx
  void *v66; // rcx
  _QWORD *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rdx
  WCHAR *v71; // rax
  __int16 v72; // di
  __int16 k; // si
  __int16 v74; // dx
  WCHAR v75; // cx
  WCHAR v76; // ax
  __int64 v77; // [rsp+40h] [rbp-99h] BYREF
  unsigned int v78; // [rsp+48h] [rbp-91h] BYREF
  __int16 v79; // [rsp+4Ch] [rbp-8Dh]
  unsigned __int16 *v80; // [rsp+50h] [rbp-89h]
  __int64 v81; // [rsp+58h] [rbp-81h]
  ULONG_PTR v82; // [rsp+60h] [rbp-79h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-71h]
  __int64 v84; // [rsp+70h] [rbp-69h]
  ULONG_PTR *v85; // [rsp+78h] [rbp-61h]
  ULONG_PTR v86; // [rsp+80h] [rbp-59h]
  _OWORD v87[2]; // [rsp+88h] [rbp-51h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-31h] BYREF

  v10 = a6;
  v11 = 0;
  v12 = a8;
  v13 = a3;
  v84 = a1;
  v80 = a6;
  v85 = a9;
  v77 = 0LL;
  v86 = a4;
  v82 = a3;
  v78 = a2;
  HvpGetCellContextInitialize(&v77);
  if ( (*(_DWORD *)(a1 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 4168) != KeGetCurrentThread() )
    return (unsigned int)-1073741772;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1648)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (v12 ^ (v12 >> 9))) ^ ((unsigned __int64)(101027 * (v12 ^ (v12 >> 9))) >> 9)))
                      + 16); ; i = *(_QWORD *)(i + 8) )
  {
    v81 = i;
    if ( !i )
      break;
    if ( *(_DWORD *)i == v12 )
    {
      v15 = i - 16;
      BugCheckParameter2 = i - 16;
      if ( *(_QWORD *)(i - 16 + 72) == v13 )
      {
        v16 = *(_QWORD *)(v15 + 80);
        v17 = (__int16 *)(v16 + 26);
        if ( (*(_DWORD *)v16 & 1) != 0 )
        {
          v18 = *v10;
          v19 = (WCHAR *)*((_QWORD *)v10 + 1);
          v20 = *(_WORD *)(v16 + 24);
          for ( j = v18 >> 1; j && v20; --j )
          {
            v22 = *v19++;
            v23 = *(unsigned __int8 *)v17;
            v17 = (__int16 *)((char *)v17 + 1);
            if ( v22 != v23 )
            {
              if ( v22 >= 0x61u )
              {
                if ( v22 > 0x7Au )
                  v22 = RtlUpcaseUnicodeChar(v22);
                else
                  v22 -= 32;
              }
              if ( v22 != v23 )
              {
                v13 = v82;
                goto LABEL_82;
              }
            }
            --v20;
          }
          v13 = v82;
          if ( j != v20 )
            goto LABEL_82;
          v15 = BugCheckParameter2;
        }
        else
        {
          v71 = (WCHAR *)*((_QWORD *)v80 + 1);
          v72 = *v80 >> 1;
          for ( k = *(_WORD *)(v16 + 24) >> 1; v72 && k; --k )
          {
            v74 = *v17++;
            v75 = *v71++;
            BugCheckParameter2 = (ULONG_PTR)v71;
            v79 = v74;
            if ( v75 != v74 )
            {
              if ( v75 >= 0x61u )
              {
                if ( v75 > 0x7Au )
                {
                  v76 = RtlUpcaseUnicodeChar(v75);
                  v74 = v79;
                  v75 = v76;
                }
                else
                {
                  v75 -= 32;
                }
              }
              if ( v75 != v74 )
                goto LABEL_82;
              v71 = (WCHAR *)BugCheckParameter2;
            }
            --v72;
          }
          if ( v72 != k )
          {
LABEL_82:
            v10 = v80;
            i = v81;
            continue;
          }
        }
        if ( v15 )
        {
          CmpReferenceKeyControlBlockLockNotHeld((volatile signed __int64 *)v15);
          *v85 = v15;
          return v11;
        }
        v10 = v80;
        break;
      }
    }
  }
  v24 = 0;
  v25 = v13;
  if ( v13 )
  {
    do
    {
      while ( 1 )
      {
        v26 = (ULONG_PTR *)(v25 + 72);
        if ( (*(_DWORD *)(v25 + 184) & 0x40000) == 0 || !*v26 )
          break;
        v25 = *v26;
      }
      v27 = *(_QWORD *)(v25 + 80);
      v28 = *(unsigned __int16 *)(v27 + 24);
      if ( (*(_DWORD *)v27 & 1) != 0 )
        v29 = v24 + 2 * v28;
      else
        v29 = v28 + v24;
      v25 = *v26;
      v24 = v29 + 2;
    }
    while ( *v26 );
  }
  if ( (unsigned int)*v10 + v24 + 2 > 0xFFFF )
    return (unsigned int)-1073741811;
  _InterlockedIncrement64(&CmPerfCounters);
  v30 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside);
  v31 = (ULONG_PTR)v30;
  if ( !v30 )
    return (unsigned int)-1073741670;
  _InterlockedIncrement64(qword_140FD9460);
  memset_0(v30, 0, 0x138uLL);
  v32 = v78;
  v33 = v84;
  *(_QWORD *)(v31 + 128) = v31 + 120;
  *(_QWORD *)(v31 + 120) = v31 + 120;
  *(_QWORD *)(v31 + 136) = 0LL;
  *(_QWORD *)(v31 + 144) = 0LL;
  *(_QWORD *)(v31 + 152) = 0LL;
  *(_QWORD *)(v31 + 160) = 0LL;
  *(_DWORD *)(v31 + 40) = v32;
  *(_QWORD *)v31 = 1LL;
  *(_QWORD *)(v31 + 32) = v33;
  *(_DWORD *)(v31 + 16) = v12;
  *(_QWORD *)(v31 + 48) = 0LL;
  *(_QWORD *)(v31 + 216) = v31 + 208;
  *(_QWORD *)(v31 + 208) = v31 + 208;
  *(_QWORD *)(v31 + 232) = v31 + 224;
  *(_QWORD *)(v31 + 224) = v31 + 224;
  *(_QWORD *)(v31 + 240) = 0LL;
  *(_DWORD *)(v31 + 248) = 0;
  *(_QWORD *)(v31 + 256) = 0LL;
  *(_DWORD *)(v31 + 264) = 0;
  *(_QWORD *)(v31 + 272) = 0LL;
  *(_DWORD *)(v31 + 280) = 0;
  *(_DWORD *)(v31 + 284) = -1;
  *(_QWORD *)(v31 + 288) = 0LL;
  NameControlBlock = CmpGetNameControlBlock(v10, &a7);
  *(_QWORD *)(v31 + 80) = NameControlBlock;
  if ( NameControlBlock )
  {
    v35 = *(unsigned int *)(v31 + 40);
    if ( (_DWORD)v35 == -1 )
    {
      if ( ((*(_BYTE *)(v13 + 65) - 1) & 0xFD) == 0 )
        *(_BYTE *)(v31 + 65) = 1;
      v51 = v31;
      if ( (a5 & 1) != 0 )
        *(_WORD *)(v31 + 186) |= 4u;
    }
    else
    {
      v36 = *(_QWORD *)(v31 + 32);
      if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v36, v35);
      else
        CellFlat = HvpGetCellPaged(v36);
      v38 = *(_QWORD *)(v31 + 32);
      v39 = CellFlat;
      if ( (*(_DWORD *)(v38 + 160) & 0x8001) == 0
        && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
      {
        if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v38, &v77);
        else
          HvpReleaseCellPaged(v38, &v77);
        v40 = (signed __int64 *)(*(_QWORD *)(v31 + 32) + 72LL);
        v41 = KeAbPreAcquire((__int64)v40, 0LL);
        if ( _InterlockedCompareExchange64(v40, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v40, 0, v41, (unsigned __int64)v40);
        if ( v41 )
          *((_BYTE *)v41 + 10) = 1;
        v42 = *(_QWORD *)(v31 + 32);
        if ( (*(_BYTE *)(v42 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(v42, *(unsigned int *)(v31 + 40));
        else
          CellPaged = HvpGetCellPaged(v42);
        v44 = *(_QWORD *)(v31 + 32);
        v39 = CellPaged;
        if ( (*(_DWORD *)(v44 + 160) & 0x8001) == 0
          && (*(_BYTE *)(CellPaged + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
          && (int)HvpMarkCellDirty(v44, *(unsigned int *)(v31 + 40), 0) >= 0 )
        {
          *(_BYTE *)(v39 + 12) |= CmpAccessBitForPhase;
        }
        v45 = *(_QWORD *)(v31 + 32);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v45 + 72));
        KeAbPostRelease(v45 + 72);
      }
      *(_BYTE *)(v31 + 65) = *(_BYTE *)(v39 + 13) & 3;
      v46 = *(_DWORD *)(v39 + 40);
      *(_DWORD *)(v31 + 96) = *(_DWORD *)(v39 + 36);
      *(_DWORD *)(v31 + 100) = v46;
      *(_WORD *)(v31 + 186) = *(_WORD *)(v39 + 2);
      *(_DWORD *)(v31 + 112) = *(_DWORD *)(v39 + 20) + *(_DWORD *)(v39 + 24);
      *(_QWORD *)(v31 + 168) = *(_QWORD *)(v39 + 4);
      *(_WORD *)(v31 + 176) = *(_WORD *)(v39 + 52);
      *(_WORD *)(v31 + 178) = *(_WORD *)(v39 + 60);
      *(_DWORD *)(v31 + 180) = *(_DWORD *)(v39 + 64);
      v47 = *(_DWORD *)(v31 + 184) ^ ((unsigned __int8)*(_DWORD *)(v31 + 184) ^ (unsigned __int8)*(_WORD *)(v39 + 54)) & 0xF;
      *(_DWORD *)(v31 + 184) = v47;
      *(_DWORD *)(v31 + 184) = v47 ^ ((unsigned __int8)v47 ^ (unsigned __int8)*(_WORD *)(v39 + 54)) & 0xF0;
      *(_BYTE *)(v31 + 185) = *(_BYTE *)(v39 + 55);
      v48 = KeAbPreAcquire(v31 + 48, 0LL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 48), 0LL) )
      {
        if ( v48 )
          KeAbPostReleaseEx(v31 + 48, (ULONG_PTR)v48);
      }
      else
      {
        if ( v48 )
          *((_BYTE *)v48 + 10) = 1;
        *(_QWORD *)(v31 + 56) = KeGetCurrentThread();
      }
      v49 = *(_DWORD *)(v39 + 44);
      v78 = 0;
      if ( v49 == -1 )
      {
        *(_QWORD *)(v31 + 88) = 0LL;
      }
      else
      {
        v50 = *(_QWORD *)(v31 + 32);
        CmLockHiveSecurityShared(v50);
        if ( !CmpFindSecurityCellCacheIndex(v50, v49, &v78) )
        {
          *(_QWORD *)(v31 + 88) = 0LL;
          CmUnlockHiveSecurity(v50);
          CmpUnlockKcb(v31);
          v11 = -1073741670;
          if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v33, &v77);
          else
            HvpReleaseCellPaged(v33, &v77);
          v51 = v31;
          goto LABEL_94;
        }
        *(_QWORD *)(v31 + 88) = *(_QWORD *)(*(_QWORD *)(v50 + 1888) + 16LL * v78 + 8);
        CmUnlockHiveSecurity(v50);
      }
      v51 = v31;
      CmpUnlockKcb(v31);
      v52 = *(_QWORD *)(v31 + 32);
      if ( (*(_BYTE *)(v52 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v52, &v77);
      else
        HvpReleaseCellPaged(v52, &v77);
    }
    if ( v13 )
    {
      v53 = _InterlockedIncrement64((volatile signed __int64 *)v13);
      if ( !v53 )
        KeBugCheckEx(0x51u, 0x24uLL, v13, 0LL, 0LL);
      if ( v53 == 1 )
        KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
      v54 = (*(_DWORD *)(v31 + 184) & 0x40000) == 0;
      v55 = *(_DWORD *)(v31 + 8);
      *(_QWORD *)(v31 + 72) = v13;
      v56 = *(_DWORD *)(v13 + 8);
      if ( v54 )
        v57 = v55 ^ (v55 ^ (v56 + 0x200000)) & 0x7FE00000;
      else
        v57 = v55 ^ (v56 ^ v55) & 0x7FE00000;
    }
    else
    {
      v57 = *(_DWORD *)(v31 + 8) & 0x801FFFFF | 0x200000;
    }
    v58 = v86;
    *(_DWORD *)(v31 + 8) = v57;
    if ( !v58 )
      goto LABEL_70;
    CmpLockKcbExclusive(v58);
    CmpTryToLockKcbExclusive(v31);
    if ( *(__int16 *)(v58 + 66) >= 127 )
    {
      CmpUnlockKcb(v31);
      CmpUnlockKcb(v58);
      v11 = -1073741811;
    }
    else
    {
      LayerInfoForKcb = CmpAllocateLayerInfoForKcb(v58);
      if ( LayerInfoForKcb >= 0 )
      {
        LayerInfoForKcb = CmpAllocateLayerInfoForKcb(v31);
        if ( LayerInfoForKcb >= 0 )
        {
          CmpReferenceKeyControlBlock(v58);
          v67 = *(_QWORD **)(v31 + 192);
          *(_WORD *)(v31 + 66) = *(_WORD *)(v58 + 66) + 1;
          v68 = *(_QWORD *)(v58 + 192);
          v67[3] = v68;
          v69 = v68 + 32;
          v70 = *(_QWORD **)(v69 + 8);
          if ( *v70 != v69 )
            __fastfail(3u);
          *v67 = v69;
          v67[1] = v70;
          *v70 = v67;
          *(_QWORD *)(v69 + 8) = v67;
          CmpUnlockKcb(v31);
          CmpUnlockKcb(v58);
LABEL_70:
          v59 = *(_QWORD *)(*(_QWORD *)(v31 + 32) + 1648LL)
              + 24
              * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v31 + 32) + 1656LL) - 1) & ((unsigned int)(101027
                                                                                                 * (*(_DWORD *)(v31 + 16) ^ (*(_DWORD *)(v31 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v31 + 16) ^ (*(_DWORD *)(v31 + 16) >> 9))) >> 9)));
          *(_QWORD *)(v31 + 24) = *(_QWORD *)(v59 + 16);
          *(_QWORD *)(v59 + 16) = v31 + 16;
          if ( *(_BYTE *)(v33 + 2944) == 1 )
            *(_WORD *)(v31 + 8) |= 0x20u;
          v60 = (void (__fastcall *)(unsigned __int8, __int64, int, int, __int64, __int64))CmpTraceRoutine;
          if ( CmpTraceRoutine )
          {
            memset(v87, 0, sizeof(v87));
            memset(&ApcState, 0, sizeof(ApcState));
            CmpAttachToRegistryProcess(&ApcState);
            v62 = (void *)CmpConstructName(v31);
            if ( v62 )
            {
              LOBYTE(v61) = 22;
              if ( v60 == EtwpTraceRegistry )
                EtwpTraceRegistry(0x16u, (__int64)v87, 0, 0, v31, (__int64)v62);
              else
                guard_dispatch_icall_no_overrides(v61);
              CmpFreeTransientPoolWithTag(v62, 0x624E4D43u);
            }
            CmpDetachFromRegistryProcess(&ApcState);
          }
          *v85 = v31;
          return v11;
        }
      }
      v11 = LayerInfoForKcb;
      CmpUnlockKcb(v31);
      CmpUnlockKcb(v58);
    }
  }
  else
  {
    v11 = -1073741670;
    v51 = v31;
  }
LABEL_94:
  v65 = *(_WORD **)(v51 + 80);
  if ( v65 )
    CmpDereferenceNameControlBlockWithLock(v65);
  if ( *(_QWORD *)(v51 + 72) )
    CmpDereferenceKeyControlBlockUnsafe(v13);
  v66 = *(void **)(v51 + 192);
  if ( v66 )
    ExFreePoolWithTag(v66, 0);
  *(_DWORD *)(v51 + 8) |= 0x80000u;
  CmpFreeKeyControlBlock(v51);
  return v11;
}
