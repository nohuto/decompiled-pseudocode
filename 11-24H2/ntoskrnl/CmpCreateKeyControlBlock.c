/*
 * XREFs of CmpCreateKeyControlBlock @ 0x140875AF0
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpCreateRegistryRoot @ 0x140C48EC4 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExAllocateFromLookasideListEx @ 0x1403C9D30 (ExAllocateFromLookasideListEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x140415340 (CmpFindSecurityCellCacheIndex.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408406B0 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpReferenceKeyControlBlock @ 0x140841D90 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140875130 (CmpDereferenceNameControlBlockWithLock.c)
 *     EtwpTraceRegistry @ 0x140875270 (EtwpTraceRegistry.c)
 *     CmpGetNameControlBlock @ 0x140875450 (CmpGetNameControlBlock.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140987400 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpFreeKeyControlBlock @ 0x1409C69A0 (CmpFreeKeyControlBlock.c)
 *     CmpTryToLockKcbExclusive @ 0x1409DB8E0 (CmpTryToLockKcbExclusive.c)
 *     CmpAllocateLayerInfoForKcb @ 0x1409FD420 (CmpAllocateLayerInfoForKcb.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmLockHiveSecurityShared @ 0x140BBB96C (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140BBB9C8 (CmUnlockHiveSecurity.c)
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
  unsigned int v10; // ebx
  ULONG_PTR v11; // r15
  unsigned __int16 *v12; // r9
  __int64 i; // r14
  ULONG_PTR v14; // r13
  __int64 v15; // rcx
  __int16 v16; // di
  __int16 *v17; // r12
  unsigned __int16 v18; // si
  WCHAR *v19; // r15
  __int16 v20; // ax
  WCHAR v21; // cx
  unsigned int v22; // esi
  ULONG_PTR v23; // rax
  int v24; // edx
  ULONG_PTR *v25; // r8
  __int64 v26; // rax
  int v27; // ecx
  int v28; // edx
  PVOID v29; // rax
  ULONG_PTR v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // r13
  unsigned __int16 *v33; // rcx
  _DWORD *NameControlBlock; // rax
  ULONG_PTR v35; // rdx
  ULONG_PTR v36; // rcx
  __int64 CellFlat; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  signed __int64 *v40; // rbx
  char *v41; // r15
  ULONG_PTR v42; // rcx
  __int64 CellPaged; // rax
  ULONG_PTR v44; // rcx
  __int64 v45; // r15
  ULONG_PTR v46; // rbx
  int v47; // ecx
  int v48; // ecx
  _QWORD *v49; // rax
  int v50; // r12d
  __int64 v51; // rbx
  __int64 v52; // rcx
  signed __int64 v53; // r14
  void (__fastcall *v54)(unsigned __int8, __int64, int, int, __int64, __int64); // rbx
  __int64 v55; // rcx
  void *v56; // r14
  bool v58; // zf
  int v59; // ecx
  int v60; // edx
  unsigned int v61; // eax
  ULONG_PTR v62; // r14
  unsigned __int64 v63; // rdx
  int LayerInfoForKcb; // eax
  _WORD *v65; // rcx
  void *v66; // rcx
  _QWORD *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rdx
  WCHAR *v71; // rax
  __int16 v72; // dx
  WCHAR v73; // cx
  WCHAR v74; // ax
  __int16 v75; // [rsp+40h] [rbp-99h]
  __int16 v76; // [rsp+40h] [rbp-99h]
  __int64 v77; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v78; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int16 *v79; // [rsp+58h] [rbp-81h]
  ULONG_PTR v80; // [rsp+60h] [rbp-79h]
  __int64 v81; // [rsp+68h] [rbp-71h]
  ULONG_PTR *v82; // [rsp+70h] [rbp-69h]
  WCHAR *v83; // [rsp+78h] [rbp-61h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-59h]
  _OWORD v85[2]; // [rsp+88h] [rbp-51h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-31h] BYREF

  v10 = a8;
  v11 = a3;
  v81 = a1;
  BugCheckParameter2 = a4;
  v79 = a6;
  v80 = a3;
  v78 = a2;
  v82 = a9;
  v77 = 0LL;
  HvpGetCellContextInitialize(&v77);
  if ( (*(_DWORD *)(a1 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 4168) != KeGetCurrentThread() )
    return (unsigned int)-1073741772;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1648)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (v10 ^ (v10 >> 9))) ^ ((unsigned __int64)(101027 * (v10 ^ (v10 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == v10 )
    {
      v14 = i - 16;
      if ( *(_QWORD *)(i + 56) == v11 )
      {
        v15 = *(_QWORD *)(v14 + 80);
        v16 = *v12 >> 1;
        v17 = (__int16 *)(v15 + 26);
        v18 = *(_WORD *)(v15 + 24);
        if ( (*(_DWORD *)v15 & 1) != 0 )
        {
          v19 = (WCHAR *)*((_QWORD *)v12 + 1);
          while ( 1 )
          {
            if ( !v16 || !v18 )
            {
              v11 = v80;
              goto LABEL_18;
            }
            v20 = *(unsigned __int8 *)v17;
            v17 = (__int16 *)((char *)v17 + 1);
            v21 = *v19++;
            v75 = v20;
            if ( v21 != v20 )
            {
              if ( v21 >= 0x61u )
              {
                if ( v21 > 0x7Au )
                {
                  v21 = RtlUpcaseUnicodeChar(v21);
                  v20 = v75;
                }
                else
                {
                  v21 -= 32;
                }
              }
              if ( v21 != v20 )
                break;
            }
            --v16;
            --v18;
          }
          v11 = v80;
        }
        else
        {
          v71 = (WCHAR *)*((_QWORD *)v12 + 1);
          for ( v18 >>= 1; v16 && v18; --v18 )
          {
            v72 = *v17++;
            v73 = *v71++;
            v83 = v71;
            v76 = v72;
            if ( v73 != v72 )
            {
              if ( v73 >= 0x61u )
              {
                if ( v73 > 0x7Au )
                {
                  v74 = RtlUpcaseUnicodeChar(v73);
                  v72 = v76;
                  v73 = v74;
                }
                else
                {
                  v73 -= 32;
                }
              }
              if ( v73 != v72 )
                goto LABEL_49;
              v71 = v83;
            }
            --v16;
          }
LABEL_18:
          if ( v16 == v18 )
          {
            if ( i != 16 )
            {
              CmpReferenceKeyControlBlockLockNotHeld((volatile signed __int64 *)(i - 16));
              v22 = 0;
              *v82 = v14;
              return v22;
            }
            v12 = v79;
            break;
          }
        }
LABEL_49:
        v12 = v79;
      }
    }
  }
  v22 = 0;
  v23 = v11;
  v24 = 0;
  if ( v11 )
  {
    do
    {
      while ( 1 )
      {
        v25 = (ULONG_PTR *)(v23 + 72);
        if ( (*(_DWORD *)(v23 + 184) & 0x40000) == 0 || !*v25 )
          break;
        v23 = *v25;
      }
      v26 = *(_QWORD *)(v23 + 80);
      v27 = *(unsigned __int16 *)(v26 + 24);
      if ( (*(_DWORD *)v26 & 1) != 0 )
        v28 = v24 + 2 * v27;
      else
        v28 = v27 + v24;
      v23 = *v25;
      v24 = v28 + 2;
    }
    while ( *v25 );
  }
  if ( (unsigned int)*v12 + v24 + 2 > 0xFFFF )
    return (unsigned int)-1073741811;
  _InterlockedIncrement64(&CmPerfCounters);
  v29 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside);
  v30 = (ULONG_PTR)v29;
  if ( !v29 )
    return (unsigned int)-1073741670;
  _InterlockedIncrement64(qword_140FDA440);
  memset_0(v29, 0, 0x138uLL);
  v31 = v78;
  v32 = v81;
  *(_QWORD *)(v30 + 128) = v30 + 120;
  *(_QWORD *)(v30 + 120) = v30 + 120;
  v33 = v79;
  *(_QWORD *)(v30 + 136) = 0LL;
  *(_QWORD *)(v30 + 144) = 0LL;
  *(_QWORD *)(v30 + 152) = 0LL;
  *(_QWORD *)(v30 + 160) = 0LL;
  *(_DWORD *)(v30 + 40) = v31;
  *(_QWORD *)v30 = 1LL;
  *(_QWORD *)(v30 + 32) = v32;
  *(_DWORD *)(v30 + 16) = v10;
  *(_QWORD *)(v30 + 48) = 0LL;
  *(_QWORD *)(v30 + 216) = v30 + 208;
  *(_QWORD *)(v30 + 208) = v30 + 208;
  *(_QWORD *)(v30 + 232) = v30 + 224;
  *(_QWORD *)(v30 + 224) = v30 + 224;
  *(_QWORD *)(v30 + 240) = 0LL;
  *(_DWORD *)(v30 + 248) = 0;
  *(_QWORD *)(v30 + 256) = 0LL;
  *(_DWORD *)(v30 + 264) = 0;
  *(_QWORD *)(v30 + 272) = 0LL;
  *(_DWORD *)(v30 + 280) = 0;
  *(_DWORD *)(v30 + 284) = -1;
  *(_QWORD *)(v30 + 288) = 0LL;
  NameControlBlock = CmpGetNameControlBlock(v33, &a7);
  *(_QWORD *)(v30 + 80) = NameControlBlock;
  if ( NameControlBlock )
  {
    v35 = *(unsigned int *)(v30 + 40);
    if ( (_DWORD)v35 == -1 )
    {
      if ( ((*(_BYTE *)(v11 + 65) - 1) & 0xFD) == 0 )
        *(_BYTE *)(v30 + 65) = 1;
      v46 = v30;
      if ( (a5 & 1) != 0 )
        *(_WORD *)(v30 + 186) |= 4u;
    }
    else
    {
      v36 = *(_QWORD *)(v30 + 32);
      if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v36, v35);
      else
        CellFlat = HvpGetCellPaged(v36);
      v38 = *(_QWORD *)(v30 + 32);
      v39 = CellFlat;
      if ( (*(_DWORD *)(v38 + 160) & 0x8001) == 0
        && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
      {
        if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v38, &v77);
        else
          HvpReleaseCellPaged(v38, &v77);
        v40 = (signed __int64 *)(*(_QWORD *)(v30 + 32) + 72LL);
        v41 = (char *)KeAbPreAcquire((__int64)v40, 0LL);
        if ( _InterlockedCompareExchange64(v40, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v40, 0, v41, (__int64)v40);
        if ( v41 )
          v41[10] = 1;
        v42 = *(_QWORD *)(v30 + 32);
        if ( (*(_BYTE *)(v42 + 140) & 1) != 0 )
          CellPaged = HvpGetCellFlat(v42, *(unsigned int *)(v30 + 40));
        else
          CellPaged = HvpGetCellPaged(v42);
        v44 = *(_QWORD *)(v30 + 32);
        v39 = CellPaged;
        if ( (*(_DWORD *)(v44 + 160) & 0x8001) == 0
          && (*(_BYTE *)(CellPaged + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
          && (int)HvpMarkCellDirty(v44, *(unsigned int *)(v30 + 40), 0) >= 0 )
        {
          *(_BYTE *)(v39 + 12) |= CmpAccessBitForPhase;
        }
        v45 = *(_QWORD *)(v30 + 32);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v45 + 72));
        KeAbPostRelease(v45 + 72);
        v11 = v80;
      }
      *(_BYTE *)(v30 + 65) = *(_BYTE *)(v39 + 13) & 3;
      v47 = *(_DWORD *)(v39 + 40);
      *(_DWORD *)(v30 + 96) = *(_DWORD *)(v39 + 36);
      *(_DWORD *)(v30 + 100) = v47;
      *(_WORD *)(v30 + 186) = *(_WORD *)(v39 + 2);
      *(_DWORD *)(v30 + 112) = *(_DWORD *)(v39 + 20) + *(_DWORD *)(v39 + 24);
      *(_QWORD *)(v30 + 168) = *(_QWORD *)(v39 + 4);
      *(_WORD *)(v30 + 176) = *(_WORD *)(v39 + 52);
      *(_WORD *)(v30 + 178) = *(_WORD *)(v39 + 60);
      *(_DWORD *)(v30 + 180) = *(_DWORD *)(v39 + 64);
      v48 = *(_DWORD *)(v30 + 184) ^ ((unsigned __int8)*(_DWORD *)(v30 + 184) ^ (unsigned __int8)*(_WORD *)(v39 + 54)) & 0xF;
      *(_DWORD *)(v30 + 184) = v48;
      *(_DWORD *)(v30 + 184) = v48 ^ ((unsigned __int8)v48 ^ (unsigned __int8)*(_WORD *)(v39 + 54)) & 0xF0;
      *(_BYTE *)(v30 + 185) = *(_BYTE *)(v39 + 55);
      v49 = KeAbPreAcquire(v30 + 48, 0LL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 48), 0LL) )
      {
        if ( v49 )
          KeAbPostReleaseEx(v30 + 48, (ULONG_PTR)v49);
      }
      else
      {
        if ( v49 )
          *((_BYTE *)v49 + 10) = 1;
        *(_QWORD *)(v30 + 56) = KeGetCurrentThread();
      }
      v50 = *(_DWORD *)(v39 + 44);
      v78 = 0;
      if ( v50 == -1 )
      {
        *(_QWORD *)(v30 + 88) = 0LL;
      }
      else
      {
        v51 = *(_QWORD *)(v30 + 32);
        CmLockHiveSecurityShared(v51);
        if ( !CmpFindSecurityCellCacheIndex(v51, v50, &v78) )
        {
          *(_QWORD *)(v30 + 88) = 0LL;
          CmUnlockHiveSecurity(v51);
          CmpUnlockKcb(v30);
          v22 = -1073741670;
          if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v32, &v77);
          else
            HvpReleaseCellPaged(v32, &v77);
          v46 = v30;
          goto LABEL_94;
        }
        *(_QWORD *)(v30 + 88) = *(_QWORD *)(*(_QWORD *)(v51 + 1888) + 16LL * v78 + 8);
        CmUnlockHiveSecurity(v51);
      }
      v46 = v30;
      CmpUnlockKcb(v30);
      v52 = *(_QWORD *)(v30 + 32);
      if ( (*(_BYTE *)(v52 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v52, &v77);
      else
        HvpReleaseCellPaged(v52, &v77);
    }
    if ( v11 )
    {
      v53 = _InterlockedIncrement64((volatile signed __int64 *)v11);
      if ( !v53 )
        KeBugCheckEx(0x51u, 0x24uLL, v11, 0LL, 0LL);
      if ( v53 == 1 )
        KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
      v58 = (*(_DWORD *)(v30 + 184) & 0x40000) == 0;
      v59 = *(_DWORD *)(v30 + 8);
      *(_QWORD *)(v30 + 72) = v11;
      v60 = *(_DWORD *)(v11 + 8);
      if ( v58 )
        v61 = v59 ^ (v59 ^ (v60 + 0x200000)) & 0x7FE00000;
      else
        v61 = v59 ^ (v60 ^ v59) & 0x7FE00000;
    }
    else
    {
      v61 = *(_DWORD *)(v30 + 8) & 0x801FFFFF | 0x200000;
    }
    v62 = BugCheckParameter2;
    *(_DWORD *)(v30 + 8) = v61;
    if ( !v62 )
      goto LABEL_86;
    CmpLockKcbExclusive(v62);
    CmpTryToLockKcbExclusive(v30);
    if ( *(__int16 *)(v62 + 66) >= 127 )
    {
      CmpUnlockKcb(v30);
      CmpUnlockKcb(v62);
      v22 = -1073741811;
    }
    else
    {
      LayerInfoForKcb = CmpAllocateLayerInfoForKcb(v62);
      if ( LayerInfoForKcb >= 0 )
      {
        LayerInfoForKcb = CmpAllocateLayerInfoForKcb(v30);
        if ( LayerInfoForKcb >= 0 )
        {
          CmpReferenceKeyControlBlock(v62);
          v67 = *(_QWORD **)(v30 + 192);
          *(_WORD *)(v30 + 66) = *(_WORD *)(v62 + 66) + 1;
          v68 = *(_QWORD *)(v62 + 192);
          v67[3] = v68;
          v69 = v68 + 32;
          v70 = *(_QWORD **)(v69 + 8);
          if ( *v70 != v69 )
            __fastfail(3u);
          *v67 = v69;
          v67[1] = v70;
          *v70 = v67;
          *(_QWORD *)(v69 + 8) = v67;
          CmpUnlockKcb(v30);
          CmpUnlockKcb(v62);
LABEL_86:
          v63 = *(_QWORD *)(*(_QWORD *)(v30 + 32) + 1648LL)
              + 24
              * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v30 + 32) + 1656LL) - 1) & ((unsigned int)(101027
                                                                                                 * (*(_DWORD *)(v30 + 16) ^ (*(_DWORD *)(v30 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v30 + 16) ^ (*(_DWORD *)(v30 + 16) >> 9))) >> 9)));
          *(_QWORD *)(v30 + 24) = *(_QWORD *)(v63 + 16);
          *(_QWORD *)(v63 + 16) = v30 + 16;
          if ( *(_BYTE *)(v32 + 2944) == 1 )
            *(_WORD *)(v30 + 8) |= 0x20u;
          v54 = (void (__fastcall *)(unsigned __int8, __int64, int, int, __int64, __int64))CmpTraceRoutine;
          if ( CmpTraceRoutine )
          {
            memset(v85, 0, sizeof(v85));
            memset(&ApcState, 0, sizeof(ApcState));
            CmpAttachToRegistryProcess(&ApcState);
            v56 = (void *)CmpConstructName(v30);
            if ( v56 )
            {
              LOBYTE(v55) = 22;
              if ( v54 == EtwpTraceRegistry )
                EtwpTraceRegistry(0x16u, (__int64)v85, 0, 0, v30, (__int64)v56);
              else
                guard_dispatch_icall_no_overrides(v55, v85);
              CmpFreeTransientPoolWithTag(v56, 0x624E4D43u);
            }
            CmpDetachFromRegistryProcess(&ApcState);
          }
          *v82 = v30;
          return v22;
        }
      }
      v22 = LayerInfoForKcb;
      CmpUnlockKcb(v30);
      CmpUnlockKcb(v62);
    }
  }
  else
  {
    v22 = -1073741670;
    v46 = v30;
  }
LABEL_94:
  v65 = *(_WORD **)(v46 + 80);
  if ( v65 )
    CmpDereferenceNameControlBlockWithLock(v65);
  if ( *(_QWORD *)(v46 + 72) )
    CmpDereferenceKeyControlBlockUnsafe(v11);
  v66 = *(void **)(v46 + 192);
  if ( v66 )
    ExFreePoolWithTag(v66, 0);
  *(_DWORD *)(v46 + 8) |= 0x80000u;
  CmpFreeKeyControlBlock(v46);
  return v22;
}
