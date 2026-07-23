/*
 * XREFs of CcPinFileData @ 0x1402282C0
 * Callers:
 *     CcZeroDataInCache @ 0x14025EB44 (CcZeroDataInCache.c)
 *     CcMapData @ 0x140960C20 (CcMapData.c)
 *     CcMapDataCommon @ 0x1409781B0 (CcMapDataCommon.c)
 *     CcPinMappedData @ 0x1409AEAF0 (CcPinMappedData.c)
 *     CcPreparePinWrite @ 0x140A34720 (CcPreparePinWrite.c)
 *     CcPinRead @ 0x140ABE460 (CcPinRead.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     CcGetBcbListHead @ 0x140229390 (CcGetBcbListHead.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140229A50 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     CcMapAndRead @ 0x140236280 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     CcUnpinFileDataEx @ 0x1402766A0 (CcUnpinFileDataEx.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     SetVacb @ 0x1403571D0 (SetVacb.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExAcquireSharedStarveExclusive @ 0x1403BC840 (ExAcquireSharedStarveExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1403BC958 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     CcAllocateInitializeBcb @ 0x1403EA890 (CcAllocateInitializeBcb.c)
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     ExDisableResourceBoostLite @ 0x1403EAB30 (ExDisableResourceBoostLite.c)
 *     CcAdjustVacbLevelLockCount @ 0x1403EAB94 (CcAdjustVacbLevelLockCount.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1403EEF44 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403EEFB0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcReferenceFileOffset @ 0x1404C8C90 (CcReferenceFileOffset.c)
 *     CcDereferenceFileOffset @ 0x1404CF5BC (CcDereferenceFileOffset.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        char a4,
        char a5,
        unsigned int a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  _QWORD *v9; // rbx
  unsigned int v10; // edx
  __int64 v11; // r13
  __int64 v12; // r12
  _QWORD *v13; // rdi
  volatile signed __int32 *v14; // r14
  __int64 v15; // rdi
  __int64 CurrentIrql; // r8
  __int64 v17; // rbx
  int v18; // r15d
  int v19; // esi
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  signed __int32 v22; // ett
  __int64 v23; // r15
  __int64 v24; // rdi
  __int64 v25; // rbx
  char v26; // r12
  char *v27; // rsi
  __int16 v28; // ax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  char v31; // bl
  _QWORD *v32; // r12
  int v33; // ecx
  __int64 v34; // rax
  _QWORD *v35; // r15
  ULONG_PTR v36; // r8
  __int16 v37; // cx
  __int64 v38; // rbx
  __int16 v39; // cx
  struct _KTHREAD *v40; // rdi
  NTSTATUS v41; // r8d
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  unsigned int v44; // esi
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r15
  char v48; // al
  __int64 *v49; // r14
  __int64 v50; // rax
  __int16 v51; // r8
  __int64 v52; // rbx
  int v53; // ecx
  int v54; // r12d
  unsigned int v55; // edx
  _DWORD *v56; // r15
  unsigned int v57; // ebx
  char v58; // al
  unsigned int v59; // r12d
  _WORD *PoolWithTag; // rax
  ULONG_PTR v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r12
  char *v65; // rax
  char *v66; // rsi
  char **v67; // rdx
  struct _ERESOURCE *v68; // rcx
  __int64 v69; // rax
  signed __int64 v70; // rax
  signed __int64 v71; // rdx
  __int64 v72; // rtt
  ULONG_PTR v73; // r8
  __int16 v74; // cx
  char v75; // al
  __int64 v76; // r8
  __int64 v77; // rdi
  __int16 v78; // cx
  struct _KTHREAD *v79; // rsi
  int v80; // r9d
  NTSTATUS v81; // edx
  unsigned __int64 v82; // rbx
  unsigned __int64 v83; // rdi
  unsigned int v84; // r15d
  unsigned int v85; // eax
  int v86; // r12d
  _QWORD *v87; // r12
  __int64 v88; // rdi
  struct _KEVENT *v89; // rcx
  unsigned __int8 v90; // dl
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 v92; // dl
  struct _KTHREAD *v93; // r9
  __int64 v94; // rdi
  struct _KEVENT *v95; // rcx
  __int64 v96; // rbx
  unsigned __int8 v98; // [rsp+30h] [rbp-C8h]
  int v99; // [rsp+34h] [rbp-C4h]
  char *v100; // [rsp+38h] [rbp-C0h]
  char v101[4]; // [rsp+40h] [rbp-B8h] BYREF
  int v102; // [rsp+44h] [rbp-B4h]
  __int64 v103; // [rsp+48h] [rbp-B0h] BYREF
  int v104; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v105; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v106; // [rsp+60h] [rbp-98h] BYREF
  __int64 v107; // [rsp+68h] [rbp-90h]
  int v108; // [rsp+70h] [rbp-88h]
  int v109; // [rsp+74h] [rbp-84h]
  int v110; // [rsp+78h] [rbp-80h]
  _DWORD *v111; // [rsp+80h] [rbp-78h]
  unsigned __int64 v112; // [rsp+88h] [rbp-70h]
  NTSTATUS v113; // [rsp+90h] [rbp-68h]
  int v114; // [rsp+94h] [rbp-64h]
  NTSTATUS v115; // [rsp+98h] [rbp-60h]
  char *v116; // [rsp+A0h] [rbp-58h]
  ULONG_PTR v117; // [rsp+A8h] [rbp-50h]
  __int64 v118; // [rsp+B0h] [rbp-48h]
  int v119; // [rsp+B8h] [rbp-40h]
  int v120; // [rsp+BCh] [rbp-3Ch]
  int v121; // [rsp+100h] [rbp+8h] BYREF
  _DWORD *v122; // [rsp+108h] [rbp+10h]
  unsigned int v123; // [rsp+110h] [rbp+18h]
  char v124; // [rsp+118h] [rbp+20h]

  v124 = a4;
  v123 = a3;
  v122 = a2;
  v9 = a2;
  v10 = a6;
  v102 = 0;
  v104 = 0;
  v103 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v118 = v11;
  v12 = a3;
  if ( (signed __int64)(a3 + *v9) > *(_QWORD *)(v11 + 32) )
    KeBugCheckEx(0x34u, 0x145uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  v13 = a8;
  *a8 = 0LL;
  v121 = v10 & 4;
  if ( (v10 & 4) != 0 )
  {
    v104 = 0x40000 - (*(_DWORD *)v9 & 0x3FFFF);
    CcReferenceFileOffset(v11, *v9);
  }
  else
  {
    *v13 = CcGetVirtualAddress(v11, *v9, (unsigned int)&v103, (unsigned int)&v104, (v10 >> 6) & 1, 0);
  }
  v14 = (volatile signed __int32 *)(v11 + 288);
  v15 = KeAbPreAcquire(v11 + 288, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v107 = CurrentIrql;
  __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 1LL);
    LOBYTE(CurrentIrql) = v107;
  }
  if ( !_interlockedbittestandreset(v14, 0) )
  {
    v17 = v15;
    ++*(_DWORD *)(v11 + 304);
    v18 = 1;
    v19 = 4;
LABEL_8:
    v20 = *v14;
    do
    {
      while ( (v20 & 1) == 0 )
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange(v14, v19 + v20, v20);
        if ( v21 == v20 )
        {
          if ( v17 )
            KeAbPreWait(v17);
          KeWaitForSingleObject((PVOID)(v11 + 312), WrFastMutex, 0, 0, 0LL);
          _m_prefetchw((const void *)v14);
          v19 = 2;
          v18 = 3;
          if ( v17 )
            v17 = KeAbPreAcquire(v11 + 288, v17, 0LL);
          goto LABEL_8;
        }
      }
      v22 = v20;
      v20 = _InterlockedCompareExchange(v14, v18 ^ v20, v20);
    }
    while ( v22 != v20 );
    LOBYTE(CurrentIrql) = v107;
    v9 = v122;
  }
  if ( v15 )
    *(_BYTE *)(v15 + 10) = 1;
  *(_QWORD *)(v11 + 296) = KeGetCurrentThread();
  *(_DWORD *)(v11 + 336) = (unsigned __int8)CurrentIrql;
  v99 = 1;
  v106 = 0LL;
  v105 = 0LL;
  v23 = *v9;
  v24 = HIDWORD(*v9);
  v25 = *v9 + v12;
  v107 = v25;
  v116 = 0LL;
  v26 = 0;
  v27 = (char *)(*(_QWORD *)CcGetBcbListHead(v11, v23 + 0x80000) - 16LL);
  v116 = v27;
  if ( (_DWORD)v24 )
  {
LABEL_59:
    while ( *(_WORD *)v27 == 765 && v23 < *((_QWORD *)v27 + 4) )
    {
      v50 = *((_QWORD *)v27 + 1);
      if ( v23 >= v50 )
      {
LABEL_29:
        v26 = 1;
        break;
      }
      if ( v25 >= v50 )
      {
        v25 = *((_QWORD *)v27 + 1);
        v107 = v25;
      }
      v27 = (char *)(*((_QWORD *)v27 + 2) - 16LL);
      v116 = v27;
    }
  }
  else if ( *(_WORD *)v27 == 765 )
  {
    if ( *((_DWORD *)v27 + 9) )
      goto LABEL_59;
    v28 = 765;
    v29 = v107;
    while ( v28 == 765 && (unsigned int)v23 < *((_DWORD *)v27 + 8) )
    {
      v30 = *((_DWORD *)v27 + 2);
      if ( (unsigned int)v23 >= v30 )
        goto LABEL_29;
      if ( v29 >= v30 )
      {
        v29 = *((_DWORD *)v27 + 2);
        LODWORD(v107) = v29;
        v25 = v107;
      }
      v27 = (char *)(*((_QWORD *)v27 + 2) - 16LL);
      v116 = v27;
      v28 = *(_WORD *)v27;
    }
  }
  v100 = v27;
  if ( v26 )
  {
    v31 = v124;
    if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
      v31 = 1;
    v124 = v31;
    v32 = v27 + 184;
    v33 = a6 & 1;
    if ( *((_QWORD *)v27 + 23) )
    {
      if ( (a6 & 1) != 0 )
      {
        ++*((_DWORD *)v27 + 16);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
        v99 = 0;
        if ( !v124 )
        {
          v68 = (struct _ERESOURCE *)(v27 + 72);
          if ( (a6 & 2) != 0 )
            ExAcquireResourceExclusiveLite(v68, 1u);
          else
            ExAcquireSharedStarveExclusive(v68, 1u);
        }
      }
      else
      {
        if ( !v124 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v27 + 72), 0) )
        {
          v27 = 0LL;
          v100 = 0LL;
          v98 = 0;
          v49 = (__int64 *)v122;
          v35 = a8;
          v48 = a6;
          goto LABEL_49;
        }
        ++*((_DWORD *)v27 + 16);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
        v99 = 0;
      }
      v49 = (__int64 *)v122;
      v35 = a8;
      *a8 = *v32 + (unsigned int)(*v122 - *((_DWORD *)v27 + 2));
      v98 = 1;
      goto LABEL_58;
    }
    v111 = v27 + 8;
    v34 = (unsigned int)(v23 - *((_DWORD *)v27 + 2));
    v35 = a8;
    *a8 -= v34;
    v106 = *((_QWORD *)v27 + 1);
    v105 = *((unsigned int *)v27 + 1);
    if ( !v33 )
    {
      if ( !v124 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v27 + 72), 0) )
      {
        v27 = 0LL;
        v100 = 0LL;
        v98 = 0;
        v49 = (__int64 *)v122;
        v48 = a6;
        goto LABEL_49;
      }
      ++*((_DWORD *)v27 + 16);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v99 = 0;
      if ( !(unsigned __int8)CcMapAndRead(*((unsigned int *)v27 + 1), 0LL, 0LL, *v35) )
      {
        v98 = 0;
        v49 = (__int64 *)v122;
        v48 = a6;
        goto LABEL_49;
      }
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
      if ( !*v32 )
      {
        *((_QWORD *)v27 + 23) = *v35;
        *((_QWORD *)v27 + 7) = v103;
        v103 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v49 = (__int64 *)v122;
      *v35 = *((_QWORD *)v27 + 23) + (unsigned int)(*v122 - *((_DWORD *)v27 + 2));
      v98 = 1;
      goto LABEL_58;
    }
    ++*((_DWORD *)v27 + 16);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
    v99 = 0;
    if ( !v31 )
    {
      v36 = (ULONG_PTR)(v27 + 72);
      if ( (a6 & 2) == 0 )
      {
        if ( (*((_WORD *)v27 + 49) & 0x41) == 1 )
          KeBugCheckEx(0x1C6u, 0xFuLL, v36, 0LL, 0LL);
        v37 = *((_WORD *)v27 + 49) & 1;
        if ( !v37 )
          goto LABEL_39;
        v90 = KeGetCurrentIrql();
        CurrentThread = KeGetCurrentThread();
        if ( v90 > 1u )
          KeBugCheckEx(0x1C6u, 0LL, v90, 1uLL, 0LL);
        if ( (CurrentThread->ApcState.InProgressFlags & 2) != 0 )
LABEL_181:
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( v90 || (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->WaitBlock[3].SpareLong )
        {
LABEL_39:
          if ( v37 )
            ExpFastResourceLegacyAcquireSharedStarveExclusive(v36);
          else
            ExpAcquireSharedStarveExclusive(v36, 1LL);
          goto LABEL_41;
        }
LABEL_185:
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      ExAcquireResourceExclusiveLite((PERESOURCE)(v27 + 72), 1u);
    }
LABEL_41:
    if ( v121 )
    {
      v49 = (__int64 *)v122;
    }
    else
    {
      v38 = *v35;
      v39 = *v35;
      v40 = KeGetCurrentThread();
      v114 = 0;
      v120 = 0;
      v41 = 0;
      v115 = 0;
      v101[0] = 1;
      v42 = ((v39 & 0xFFF) + (unsigned __int64)(unsigned int)v105 + 4095) >> 12;
      v110 = v42;
      v43 = v38 & 0xFFFFFFFFFFFFF000uLL;
      v112 = v43;
      v44 = BYTE4(v40[1].Queue) + 2 * LODWORD(v40[1].WaitListEntry.Flink);
      while ( (_DWORD)v42 )
      {
        BYTE4(v40[1].Queue) = 1;
        v45 = v42 - 1;
        if ( (unsigned int)(v42 - 1) > LODWORD(v40[1].WaitListEntry.Flink) )
        {
          if ( v45 <= 0xF )
            LODWORD(v40[1].WaitListEntry.Flink) = v45;
          else
            LODWORD(v40[1].WaitListEntry.Flink) = 15;
        }
        v114 = 0;
        v46 = (unsigned int)((_DWORD)v42 << 12);
        v47 = (unsigned int)v46;
        v41 = MmCheckCachedPageStates(v43, v46, 0LL, v101);
        v115 = v41;
        if ( v41 < 0 )
          break;
        v43 += v47;
        v112 = v43;
        LODWORD(v42) = 0;
        v110 = 0;
      }
      BYTE4(v40[1].Queue) = v44 & 1;
      LODWORD(v40[1].WaitListEntry.Flink) = v44 >> 1;
      if ( v41 < 0 )
        RtlRaiseStatus(v41);
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
      v35 = a8;
      if ( *v32 )
      {
        v27 = v100;
      }
      else
      {
        *v32 = *a8;
        v27 = v100;
        *((_QWORD *)v100 + 7) = v103;
        v103 = 0LL;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v49 = (__int64 *)v122;
      *v35 = *v32 + (unsigned int)(*v122 - *v111);
    }
    v98 = 1;
LABEL_58:
    v48 = a6;
    goto LABEL_49;
  }
  v48 = a6;
  if ( (a6 & 8) != 0 )
  {
    v27 = 0LL;
    v100 = 0LL;
    v98 = 0;
    v49 = (__int64 *)v122;
    v35 = a8;
  }
  else
  {
    v51 = *(_QWORD *)v122;
    v106 = *(_QWORD *)v122;
    v52 = v25 - v106;
    HIDWORD(v105) = HIDWORD(v52);
    v53 = v106 & 0xFFF;
    v54 = v52 + v53;
    LODWORD(v105) = v52 + v53;
    v55 = v53 + v104;
    v104 += v53;
    v56 = (_DWORD *)(v11 + 152);
    if ( (v124 || (*v56 & 4) != 0) && !a5 )
    {
      v57 = v102;
    }
    else
    {
      v57 = 2;
      v102 = 2;
      if ( (v106 & 0xFFF) == 0 )
      {
        if ( v123 >= 0x1000 )
          v57 = 3;
        v102 = v57;
      }
      if ( (v54 & 0xFFF) == 0 )
      {
        v57 |= 4u;
        v102 = v57;
      }
    }
    v58 = v124;
    if ( (*v56 & 0x200) == 0 )
      v58 = 1;
    v124 = v58;
    v59 = (v54 + 4095) & 0xFFFFF000;
    LODWORD(v105) = v59;
    *a8 -= v51 & 0xFFF;
    LODWORD(v106) = v106 & 0xFFFFF000;
    if ( v59 > v55 )
      v59 = v55;
    LODWORD(v105) = v59;
    if ( (a6 & 1) != 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0xC0uLL, 0x63426343u);
      v61 = (ULONG_PTR)PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = 765;
        v62 = v106;
        *(_QWORD *)(v61 + 8) = v106;
        *(_DWORD *)(v61 + 4) = v59;
        *(_QWORD *)(v61 + 32) = v62 + v105;
        *(_QWORD *)(v61 + 176) = v11;
        ++*(_DWORD *)(v61 + 64);
        ExInitializeResourceLite2(v61 + 72, 0xFFFFFFFFLL);
        v63 = KeAbPreAcquire(v11 + 104, 0LL, 0LL);
        v64 = v63;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 104), 0LL) )
          ExfAcquirePushLockExclusiveEx(v11 + 104, v63, v11 + 104);
        if ( v64 )
          *(_BYTE *)(v64 + 10) = 1;
        v65 = (char *)(v61 + 16);
        v66 = v27 + 16;
        v67 = (char **)*((_QWORD *)v66 + 1);
        if ( *v67 != v66 )
          __fastfail(3u);
        *(_QWORD *)v65 = v66;
        *(_QWORD *)(v61 + 24) = v67;
        *v67 = v65;
        *((_QWORD *)v66 + 1) = v65;
        if ( *(__int64 *)(v11 + 32) > 0x2000000 && (*v56 & 0x200) != 0 )
          CcAdjustVacbLevelLockCount(v11, v106, 1LL);
        _m_prefetchw((const void *)(v11 + 104));
        v70 = *(_QWORD *)(v11 + 104);
        v71 = v70 - 16;
        if ( (v70 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v71 = 0LL;
        if ( (v70 & 2) != 0
          || (v72 = *(_QWORD *)(v11 + 104),
              v72 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 104), v71, v70)) )
        {
          ExfReleasePushLock(v11 + 104, v71);
        }
        KeAbPostRelease(v11 + 104);
        if ( (*v56 & 2) != 0 )
          ExDisableResourceBoostLite((PERESOURCE)(v61 + 72));
      }
      else
      {
        v61 = 0LL;
      }
      v117 = v61;
      v27 = (char *)v61;
      v100 = (char *)v61;
      if ( !v61 )
      {
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
        RtlRaiseStatus(-1073741670);
      }
      if ( !v124 )
      {
        v73 = v61 + 72;
        if ( (a6 & 2) != 0 )
        {
          if ( !ExAcquireResourceExclusiveLite((PERESOURCE)(v61 + 72), 0) )
            KeBugCheckEx(0x34u, 0x20213uLL, v61, 0LL, 0LL);
        }
        else
        {
          if ( (*(_WORD *)(v61 + 98) & 0x41) == 1 )
            KeBugCheckEx(0x1C6u, 0xFuLL, v73, 0LL, 0LL);
          v74 = *(_WORD *)(v61 + 98) & 1;
          if ( v74 )
          {
            v92 = KeGetCurrentIrql();
            v93 = KeGetCurrentThread();
            if ( v92 > 2u )
              KeBugCheckEx(0x1C6u, 0LL, v92, 2uLL, 0LL);
            if ( v92 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
              KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
            if ( (v93->ApcState.InProgressFlags & 2) != 0 )
              goto LABEL_181;
            if ( !v92 && (v93->MiscFlags & 0x400) == 0 && !v93->WaitBlock[3].SpareLong )
              goto LABEL_185;
            v27 = (char *)v61;
            v61 = v117;
          }
          if ( v74 )
            v75 = ExpFastResourceLegacyAcquireSharedStarveExclusive(v73);
          else
            v75 = ExpAcquireSharedStarveExclusive(v73, 0LL);
          LOBYTE(v123) = v75;
          if ( !v75 )
            KeBugCheckEx(0x34u, 0x2021AuLL, v61, 0LL, 0LL);
        }
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v76 = 0LL;
      v99 = 0;
      if ( !v121 )
      {
        v77 = *a8;
        v78 = *a8;
        v79 = KeGetCurrentThread();
        v80 = 1;
        v108 = 0;
        v119 = 0;
        v81 = 0;
        v113 = 0;
        LOBYTE(v121) = 1;
        v82 = ((v78 & 0xFFF) + (unsigned __int64)(unsigned int)v105 + 4095) >> 12;
        v109 = v82;
        v83 = v77 & 0xFFFFFFFFFFFFF000uLL;
        v111 = (_DWORD *)v83;
        v84 = BYTE4(v79[1].Queue) + 2 * LODWORD(v79[1].WaitListEntry.Flink);
        while ( (_DWORD)v82 )
        {
          BYTE4(v79[1].Queue) = 1;
          v85 = v82 - 1;
          if ( (unsigned int)(v82 - 1) > LODWORD(v79[1].WaitListEntry.Flink) )
          {
            if ( v85 <= 0xF )
              LODWORD(v79[1].WaitListEntry.Flink) = v85;
            else
              LODWORD(v79[1].WaitListEntry.Flink) = 15;
          }
          v108 = 0;
          if ( (v80 & v102) != 0 )
            v76 = 1LL;
          v108 = v76;
          if ( v102 )
          {
            v86 = 1;
            if ( v80 == 2 )
              v86 = v82 - 1;
          }
          else
          {
            v86 = v82;
          }
          v112 = (unsigned int)(v86 << 12);
          v81 = MmCheckCachedPageStates(v83, v112, v76, &v121);
          v113 = v81;
          if ( v81 < 0 )
            break;
          v83 += v112;
          v111 = (_DWORD *)v83;
          LODWORD(v82) = v82 - v86;
          v109 = v82;
          v80 = 2;
          if ( (_DWORD)v82 == 1 )
            v80 = 4;
          v76 = 0LL;
        }
        BYTE4(v79[1].Queue) = v84 & 1;
        LODWORD(v79[1].WaitListEntry.Flink) = v84 >> 1;
        if ( v81 < 0 )
          RtlRaiseStatus(v81);
        ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
        v27 = v100;
        v87 = a8;
        if ( !*((_QWORD *)v100 + 23) )
        {
          *((_QWORD *)v100 + 23) = *a8;
          *((_QWORD *)v100 + 7) = v103;
          v103 = 0LL;
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
        *v87 = *((_QWORD *)v100 + 23) + (unsigned int)(*v122 - *((_DWORD *)v100 + 2));
      }
      v98 = 1;
      v49 = (__int64 *)v122;
      v35 = a8;
      v48 = a6;
    }
    else
    {
      v69 = CcAllocateInitializeBcb(v11, v27, &v106, &v105);
      v27 = (char *)v69;
      v100 = (char *)v69;
      if ( v69 )
      {
        if ( !v124 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v69 + 72), 0) )
          KeBugCheckEx(0x34u, 0x2027AuLL, (ULONG_PTR)v27, 0LL, 0LL);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
        v99 = 0;
        v35 = a8;
        if ( (unsigned __int8)CcMapAndRead(v59, v57, 0LL, *a8) )
        {
          ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
          if ( !*((_QWORD *)v27 + 23) )
          {
            *((_QWORD *)v27 + 23) = *v35;
            *((_QWORD *)v27 + 7) = v103;
            v103 = 0LL;
          }
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
          v49 = (__int64 *)v122;
          *v35 = *((_QWORD *)v27 + 23) + (unsigned int)(*v122 - *((_DWORD *)v27 + 2));
          v98 = 1;
          v48 = a6;
        }
        else
        {
          v98 = 0;
          v49 = (__int64 *)v122;
          v48 = a6;
        }
      }
      else
      {
        v98 = 0;
        v49 = (__int64 *)v122;
        v35 = a8;
        v48 = a6;
      }
    }
  }
LABEL_49:
  if ( (v48 & 6) == 6 && v27 && *((_QWORD *)v27 + 23) )
  {
    v88 = *(_QWORD *)(*((_QWORD *)v27 + 7) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v27 + 7) + 16LL)) )
    {
      v89 = *(struct _KEVENT **)(v88 + 192);
      if ( v89 )
        KeSetEvent(v89, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v88 + 552));
    }
    *((_QWORD *)v27 + 23) = 0LL;
    *((_QWORD *)v27 + 7) = 0LL;
    v27 = v100;
  }
  if ( v99 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
  if ( v103 )
  {
    v94 = *(_QWORD *)(v103 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v103 + 16)) )
    {
      v95 = *(struct _KEVENT **)(v94 + 192);
      if ( v95 )
        KeSetEvent(v95, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v94 + 552));
    }
    v27 = v100;
  }
  if ( (a6 & 4) != 0 )
  {
    v96 = *v49;
    if ( *(__int64 *)(v11 + 32) > 0x2000000 )
    {
      CcAcquireBcbLockAndVacbLock(1LL, v11);
      SetVacb(v11, v96, -2LL, 0LL);
      CcReleaseBcbLockAndVacbLock(1LL, v11);
    }
  }
  if ( v98 )
  {
    *a7 = v27;
    *a9 = *((_QWORD *)v27 + 4);
  }
  else
  {
    *v35 = 0LL;
    if ( v27 )
      CcUnpinFileDataEx(v27);
  }
  return v98;
}
