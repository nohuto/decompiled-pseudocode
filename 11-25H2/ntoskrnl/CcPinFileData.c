/*
 * XREFs of CcPinFileData @ 0x1402D7150
 * Callers:
 *     CcZeroDataInCache @ 0x1402D5AD0 (CcZeroDataInCache.c)
 *     CcMapData @ 0x14097E650 (CcMapData.c)
 *     CcMapDataCommon @ 0x14099B790 (CcMapDataCommon.c)
 *     CcPinMappedData @ 0x1409CD7E0 (CcPinMappedData.c)
 *     CcPreparePinWrite @ 0x140A3AB70 (CcPreparePinWrite.c)
 *     CcPinRead @ 0x140ABFA20 (CcPinRead.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     CcMapAndRead @ 0x14025AE80 (CcMapAndRead.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     CcAdjustVacbLevelLockCount @ 0x1402D6674 (CcAdjustVacbLevelLockCount.c)
 *     ExDisableResourceBoostLite @ 0x1402D6770 (ExDisableResourceBoostLite.c)
 *     CcAllocateInitializeBcb @ 0x1402D67D4 (CcAllocateInitializeBcb.c)
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     ExAcquireSharedStarveExclusive @ 0x1402D7030 (ExAcquireSharedStarveExclusive.c)
 *     CcGetBcbListHead @ 0x1402D8210 (CcGetBcbListHead.c)
 *     CcGetVirtualAddress @ 0x1402D8300 (CcGetVirtualAddress.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402D8890 (ExpAcquireSharedStarveExclusive.c)
 *     CcUnpinFileDataEx @ 0x1402D8ED0 (CcUnpinFileDataEx.c)
 *     SetVacb @ 0x1403B4790 (SetVacb.c)
 *     CcFreeUnusedVacbLevels @ 0x1403B4F6C (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x1403B62E0 (CcAllocateVacbLevels.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1403B6E14 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403B6E80 (CcReleaseBcbLockAndVacbLock.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x140489FF8 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     CcDereferenceFileOffset @ 0x1404D6A7C (CcDereferenceFileOffset.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcPinFileData(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        char a4,
        char a5,
        unsigned int a6,
        _QWORD *a7,
        __int64 *a8,
        _QWORD *a9)
{
  _QWORD *v9; // rsi
  unsigned int v10; // edx
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 *v13; // rbx
  int v14; // r15d
  volatile signed __int32 *v15; // r14
  __int64 *v16; // rdi
  __int64 CurrentIrql; // r8
  __int64 *v18; // rbx
  int v19; // esi
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  __int64 v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rbx
  char v25; // r12
  char *v26; // rsi
  __int16 v27; // ax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  char v30; // bl
  __int64 *v31; // r12
  int v32; // ecx
  __int64 v33; // rax
  __int64 *v34; // r15
  ULONG_PTR v35; // r8
  __int16 v36; // cx
  __int64 v37; // rbx
  __int16 v38; // cx
  struct _KTHREAD *CurrentThread; // rdi
  NTSTATUS v40; // r8d
  unsigned __int64 v41; // rdx
  __int64 v42; // rbx
  unsigned int v43; // esi
  unsigned int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r15
  __int64 *v47; // rdi
  char v48; // r14
  __int64 v49; // rbx
  struct _KEVENT *v50; // rcx
  __int64 v51; // rax
  __int16 v52; // r8
  __int64 v53; // rbx
  int v54; // ecx
  int v55; // r12d
  unsigned int v56; // edx
  _DWORD *v57; // r15
  int v58; // ebx
  char v59; // al
  unsigned int v60; // r12d
  _WORD *PoolWithTag; // rax
  ULONG_PTR v62; // rbx
  __int64 v63; // rax
  __int64 *v64; // rax
  __int64 *v65; // r12
  char *v66; // rax
  char *v67; // rsi
  char **v68; // rdx
  struct _ERESOURCE *v69; // rcx
  _QWORD *v70; // rax
  signed __int64 v71; // rax
  signed __int64 v72; // rdx
  __int64 v73; // rtt
  struct _FAST_MUTEX *v74; // rcx
  ULONG_PTR v75; // r8
  __int16 v76; // cx
  char v77; // al
  unsigned int v78; // r8d
  __int64 v79; // rdi
  __int16 v80; // cx
  struct _KTHREAD *v81; // rsi
  int v82; // r9d
  NTSTATUS v83; // edx
  unsigned __int64 v84; // rbx
  unsigned __int64 v85; // rdi
  unsigned int v86; // r15d
  unsigned int v87; // eax
  int v88; // r12d
  __int64 *v89; // r12
  unsigned __int8 v90; // dl
  struct _KTHREAD *v91; // r10
  unsigned __int8 v92; // dl
  struct _KTHREAD *v93; // r9
  __int64 v94; // rbx
  struct _KEVENT *v95; // rcx
  __int64 v96; // rbx
  signed __int32 v98; // ett
  __int64 v99; // rbx
  __int64 v100; // rdx
  unsigned __int8 v101; // [rsp+30h] [rbp-E8h]
  int v102; // [rsp+34h] [rbp-E4h]
  char *v103; // [rsp+38h] [rbp-E0h]
  char v104[4]; // [rsp+40h] [rbp-D8h] BYREF
  int v105; // [rsp+44h] [rbp-D4h]
  __int64 v106; // [rsp+48h] [rbp-D0h] BYREF
  int v107; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v108; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v109; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v110; // [rsp+68h] [rbp-B0h]
  unsigned int v111; // [rsp+70h] [rbp-A8h]
  int v112; // [rsp+74h] [rbp-A4h]
  int v113; // [rsp+78h] [rbp-A0h]
  _DWORD *v114; // [rsp+80h] [rbp-98h]
  __int64 v115; // [rsp+88h] [rbp-90h]
  NTSTATUS v116; // [rsp+90h] [rbp-88h]
  int v117; // [rsp+94h] [rbp-84h]
  NTSTATUS v118; // [rsp+98h] [rbp-80h]
  char *v119; // [rsp+A0h] [rbp-78h]
  ULONG_PTR v120; // [rsp+A8h] [rbp-70h]
  __int64 v121; // [rsp+B0h] [rbp-68h]
  _QWORD v122[4]; // [rsp+B8h] [rbp-60h] BYREF
  int v123; // [rsp+D8h] [rbp-40h]
  int v124; // [rsp+DCh] [rbp-3Ch]
  int v125; // [rsp+120h] [rbp+8h] BYREF
  _DWORD *v126; // [rsp+128h] [rbp+10h]
  unsigned int v127; // [rsp+130h] [rbp+18h]
  char v128; // [rsp+138h] [rbp+20h]

  v128 = a4;
  v127 = a3;
  v126 = a2;
  v9 = a2;
  v10 = a6;
  v105 = 0;
  v107 = 0;
  v106 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v121 = v11;
  v12 = a3;
  if ( (signed __int64)(a3 + *v9) > *(_QWORD *)(v11 + 32) )
    KeBugCheckEx(0x34u, 0x145uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  *a7 = 0LL;
  v13 = a8;
  *a8 = 0LL;
  v125 = v10 & 4;
  if ( (v10 & 4) == 0 )
  {
    *v13 = CcGetVirtualAddress(v11, *v9, (unsigned int)&v106, (unsigned int)&v107, (v10 >> 6) & 1, 0);
LABEL_4:
    v14 = 1;
    goto LABEL_5;
  }
  v107 = 0x40000 - (*(_DWORD *)v9 & 0x3FFFF);
  v99 = *v9;
  if ( *(__int64 *)(v11 + 32) <= 0x2000000 )
    goto LABEL_4;
  v122[3] = 0LL;
  v122[1] = v122;
  v122[0] = v122;
  v122[2] = 0LL;
  v100 = *(_DWORD *)(v11 + 152) >> 9;
  LOBYTE(v100) = (*(_DWORD *)(v11 + 152) & 0x200) != 0;
  if ( !(unsigned __int8)CcAllocateVacbLevels((unsigned int)(CcMaxVacbLevelsSeen - 1), v100, v122) )
    RtlRaiseStatus(-1073741670);
  v14 = 1;
  CcAcquireBcbLockAndVacbLock(1LL, v11);
  SetVacb(v11, v99, -1LL, v122);
  CcReleaseBcbLockAndVacbLock(1LL, v11);
  CcFreeUnusedVacbLevels(v122);
LABEL_5:
  v15 = (volatile signed __int32 *)(v11 + 288);
  v16 = KeAbPreAcquire(v11 + 288, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v110 = CurrentIrql;
  __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql);
    LOBYTE(CurrentIrql) = v110;
  }
  if ( !_interlockedbittestandreset(v15, 0) )
  {
    v18 = v16;
    ++*(_DWORD *)(v11 + 304);
    v19 = 4;
LABEL_9:
    v20 = *v15;
    do
    {
      while ( (v20 & 1) == 0 )
      {
        v98 = v20;
        v20 = _InterlockedCompareExchange(v15, v19 + v20, v20);
        if ( v98 == v20 )
        {
          if ( v18 )
            KeAbPreWait(v18);
          KeWaitForSingleObject((PVOID)(v11 + 312), WrFastMutex, 0, 0, 0LL);
          _m_prefetchw((const void *)v15);
          v19 = 2;
          v14 = 3;
          if ( v18 )
            v18 = KeAbPreAcquire(v11 + 288, (__int64)v18);
          goto LABEL_9;
        }
      }
      v21 = v20;
      v20 = _InterlockedCompareExchange(v15, v14 ^ v20, v20);
    }
    while ( v21 != v20 );
    LOBYTE(CurrentIrql) = v110;
    v9 = v126;
  }
  if ( v16 )
    *((_BYTE *)v16 + 10) = 1;
  *(_QWORD *)(v11 + 296) = KeGetCurrentThread();
  *(_DWORD *)(v11 + 336) = (unsigned __int8)CurrentIrql;
  v102 = 1;
  v109 = 0LL;
  v108 = 0LL;
  v22 = *v9;
  v23 = HIDWORD(*v9);
  v24 = *v9 + v12;
  v110 = v24;
  v119 = 0LL;
  v25 = 0;
  v26 = (char *)(*(_QWORD *)CcGetBcbListHead(v11, v22 + 0x80000) - 16LL);
  v119 = v26;
  if ( (_DWORD)v23 )
  {
LABEL_59:
    while ( *(_WORD *)v26 == 765 && v22 < *((_QWORD *)v26 + 4) )
    {
      v51 = *((_QWORD *)v26 + 1);
      if ( v22 >= v51 )
      {
LABEL_25:
        v25 = 1;
        break;
      }
      if ( v24 >= v51 )
      {
        v24 = *((_QWORD *)v26 + 1);
        v110 = v24;
      }
      v26 = (char *)(*((_QWORD *)v26 + 2) - 16LL);
      v119 = v26;
    }
  }
  else if ( *(_WORD *)v26 == 765 )
  {
    if ( *((_DWORD *)v26 + 9) )
      goto LABEL_59;
    v27 = 765;
    v28 = v110;
    while ( v27 == 765 && (unsigned int)v22 < *((_DWORD *)v26 + 8) )
    {
      v29 = *((_DWORD *)v26 + 2);
      if ( (unsigned int)v22 >= v29 )
        goto LABEL_25;
      if ( v28 >= v29 )
      {
        v28 = *((_DWORD *)v26 + 2);
        LODWORD(v110) = v28;
        v24 = v110;
      }
      v26 = (char *)(*((_QWORD *)v26 + 2) - 16LL);
      v119 = v26;
      v27 = *(_WORD *)v26;
    }
  }
  v103 = v26;
  if ( v25 )
  {
    v30 = v128;
    if ( (*(_DWORD *)(v11 + 152) & 0x200) == 0 )
      v30 = 1;
    v128 = v30;
    v31 = (__int64 *)(v26 + 184);
    v32 = a6 & 1;
    if ( !*((_QWORD *)v26 + 23) )
    {
      v114 = v26 + 8;
      v33 = (unsigned int)(v22 - *((_DWORD *)v26 + 2));
      v34 = a8;
      *a8 -= v33;
      v109 = *((_QWORD *)v26 + 1);
      v108 = *((unsigned int *)v26 + 1);
      if ( v32 )
      {
        ++*((_DWORD *)v26 + 16);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
        v102 = 0;
        if ( v30 )
          goto LABEL_37;
        v35 = (ULONG_PTR)(v26 + 72);
        if ( (a6 & 2) != 0 )
        {
          ExAcquireResourceExclusiveLite((PERESOURCE)(v26 + 72), 1u);
          goto LABEL_37;
        }
        if ( (*((_WORD *)v26 + 49) & 0x41) == 1 )
          KeBugCheckEx(0x1C6u, 0xFuLL, v35, 0LL, 0LL);
        v36 = *((_WORD *)v26 + 49) & 1;
        if ( !v36 )
        {
LABEL_35:
          if ( v36 )
            ExpFastResourceLegacyAcquireSharedStarveExclusive(v35);
          else
            ExpAcquireSharedStarveExclusive(v35);
LABEL_37:
          if ( v125 )
          {
            v47 = (__int64 *)v126;
          }
          else
          {
            v37 = *v34;
            v38 = *v34;
            CurrentThread = KeGetCurrentThread();
            v117 = 0;
            v124 = 0;
            v40 = 0;
            v118 = 0;
            v104[0] = 1;
            v41 = ((v38 & 0xFFF) + (unsigned __int64)(unsigned int)v108 + 4095) >> 12;
            v113 = v41;
            v42 = v37 & 0xFFFFFFFFFFFFF000uLL;
            v115 = v42;
            v43 = BYTE4(CurrentThread[1].Queue) + 2 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
            while ( (_DWORD)v41 )
            {
              BYTE4(CurrentThread[1].Queue) = 1;
              v44 = v41 - 1;
              if ( (unsigned int)(v41 - 1) > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
              {
                if ( v44 <= 0xF )
                  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v44;
                else
                  LODWORD(CurrentThread[1].WaitListEntry.Flink) = 15;
              }
              v117 = 0;
              v45 = (unsigned int)((_DWORD)v41 << 12);
              v46 = (unsigned int)v45;
              v40 = MmCheckCachedPageStates(v42, v45, 0, v104);
              v118 = v40;
              if ( v40 < 0 )
                break;
              v42 += v46;
              v115 = v42;
              LODWORD(v41) = 0;
              v113 = 0;
            }
            BYTE4(CurrentThread[1].Queue) = v43 & 1;
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = v43 >> 1;
            if ( v40 < 0 )
              RtlRaiseStatus(v40);
            ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
            v34 = a8;
            if ( *v31 )
            {
              v26 = v103;
            }
            else
            {
              *v31 = *a8;
              v26 = v103;
              *((_QWORD *)v103 + 7) = v106;
              v106 = 0LL;
            }
            KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
            v47 = (__int64 *)v126;
            *v34 = *v31 + (unsigned int)(*v126 - *v114);
          }
          goto LABEL_57;
        }
        v90 = KeGetCurrentIrql();
        v91 = KeGetCurrentThread();
        if ( v90 > 1u )
          KeBugCheckEx(0x1C6u, 0LL, v90, 1uLL, 0LL);
        if ( (v91->ApcState.InProgressFlags & 2) != 0 )
LABEL_176:
          KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
        if ( v90 || (v91->MiscFlags & 0x400) != 0 || v91->WaitBlock[3].SpareLong )
          goto LABEL_35;
LABEL_180:
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
      }
      if ( !v128 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v26 + 72), 0) )
      {
        v26 = 0LL;
        v103 = 0LL;
        v101 = 0;
        v47 = (__int64 *)v126;
        goto LABEL_45;
      }
      ++*((_DWORD *)v26 + 16);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v102 = 0;
      if ( !(unsigned __int8)CcMapAndRead(*((_DWORD *)v26 + 1), 0, 0, *v34) )
      {
        v101 = 0;
        v47 = (__int64 *)v126;
        goto LABEL_45;
      }
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
      if ( !*v31 )
      {
        *((_QWORD *)v26 + 23) = *v34;
        *((_QWORD *)v26 + 7) = v106;
        v106 = 0LL;
      }
      v74 = (struct _FAST_MUTEX *)(v11 + 288);
      goto LABEL_108;
    }
    if ( (a6 & 1) != 0 )
    {
      ++*((_DWORD *)v26 + 16);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v102 = 0;
      if ( !v128 )
      {
        v69 = (struct _ERESOURCE *)(v26 + 72);
        if ( (a6 & 2) != 0 )
          ExAcquireResourceExclusiveLite(v69, 1u);
        else
          ExAcquireSharedStarveExclusive(v69, 1u);
      }
      goto LABEL_86;
    }
    if ( v128 || ExAcquireSharedStarveExclusive((PERESOURCE)(v26 + 72), 0) )
    {
      ++*((_DWORD *)v26 + 16);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
      v102 = 0;
LABEL_86:
      v47 = (__int64 *)v126;
      v34 = a8;
      *a8 = *v31 + (unsigned int)(*v126 - *((_DWORD *)v26 + 2));
LABEL_57:
      v101 = 1;
      goto LABEL_45;
    }
    goto LABEL_44;
  }
  if ( (a6 & 8) != 0 )
  {
LABEL_44:
    v26 = 0LL;
    v103 = 0LL;
    v101 = 0;
    v47 = (__int64 *)v126;
    v34 = a8;
    goto LABEL_45;
  }
  v52 = *(_QWORD *)v126;
  v109 = *(_QWORD *)v126;
  v53 = v24 - v109;
  HIDWORD(v108) = HIDWORD(v53);
  v54 = v109 & 0xFFF;
  v55 = v53 + v54;
  LODWORD(v108) = v53 + v54;
  v56 = v54 + v107;
  v107 += v54;
  v57 = (_DWORD *)(v11 + 152);
  if ( (v128 || (*v57 & 4) != 0) && !a5 )
  {
    v58 = v105;
  }
  else
  {
    v58 = 2;
    v105 = 2;
    if ( (v109 & 0xFFF) == 0 )
    {
      if ( v127 >= 0x1000 )
        v58 = 3;
      v105 = v58;
    }
    if ( (v55 & 0xFFF) == 0 )
    {
      v58 |= 4u;
      v105 = v58;
    }
  }
  v59 = v128;
  if ( (*v57 & 0x200) == 0 )
    v59 = 1;
  v128 = v59;
  v60 = (v55 + 4095) & 0xFFFFF000;
  LODWORD(v108) = v60;
  *a8 -= v52 & 0xFFF;
  LODWORD(v109) = v109 & 0xFFFFF000;
  if ( v60 > v56 )
    v60 = v56;
  LODWORD(v108) = v60;
  if ( (a6 & 1) == 0 )
  {
    v70 = CcAllocateInitializeBcb(v11, (__int64)v26, &v109, &v108);
    v26 = (char *)v70;
    v103 = (char *)v70;
    if ( !v70 )
    {
      v101 = 0;
      v47 = (__int64 *)v126;
      v34 = a8;
      goto LABEL_45;
    }
    if ( !v128 && !ExAcquireSharedStarveExclusive((PERESOURCE)(v70 + 9), 0) )
      KeBugCheckEx(0x34u, 0x2027AuLL, (ULONG_PTR)v26, 0LL, 0LL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
    v102 = 0;
    v34 = a8;
    if ( !(unsigned __int8)CcMapAndRead(v60, v58, 0, *a8) )
    {
      v101 = 0;
      v47 = (__int64 *)v126;
      goto LABEL_45;
    }
    ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
    if ( !*((_QWORD *)v26 + 23) )
    {
      *((_QWORD *)v26 + 23) = *v34;
      *((_QWORD *)v26 + 7) = v106;
      v106 = 0LL;
    }
    v74 = (struct _FAST_MUTEX *)(v11 + 288);
LABEL_108:
    KeReleaseGuardedMutex(v74);
    v47 = (__int64 *)v126;
    *v34 = *((_QWORD *)v26 + 23) + (unsigned int)(*v126 - *((_DWORD *)v26 + 2));
    goto LABEL_57;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0xC0uLL, 0x63426343u);
  v62 = (ULONG_PTR)PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 765;
    v63 = v109;
    *(_QWORD *)(v62 + 8) = v109;
    *(_DWORD *)(v62 + 4) = v60;
    *(_QWORD *)(v62 + 32) = v63 + v108;
    *(_QWORD *)(v62 + 176) = v11;
    ++*(_DWORD *)(v62 + 64);
    ExInitializeResourceLite2((_QWORD *)(v62 + 72), -1);
    v64 = KeAbPreAcquire(v11 + 104, 0LL);
    v65 = v64;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 104), v64, v11 + 104);
    if ( v65 )
      *((_BYTE *)v65 + 10) = 1;
    v66 = (char *)(v62 + 16);
    v67 = v26 + 16;
    v68 = (char **)*((_QWORD *)v67 + 1);
    if ( *v68 != v67 )
      __fastfail(3u);
    *(_QWORD *)v66 = v67;
    *(_QWORD *)(v62 + 24) = v68;
    *v68 = v66;
    *((_QWORD *)v67 + 1) = v66;
    if ( *(__int64 *)(v11 + 32) > 0x2000000 && (*v57 & 0x200) != 0 )
      CcAdjustVacbLevelLockCount(v11, v109, 1);
    _m_prefetchw((const void *)(v11 + 104));
    v71 = *(_QWORD *)(v11 + 104);
    v72 = v71 - 16;
    if ( (v71 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v72 = 0LL;
    if ( (v71 & 2) != 0
      || (v73 = *(_QWORD *)(v11 + 104),
          v73 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 104), v72, v71)) )
    {
      ExfReleasePushLock((_QWORD *)(v11 + 104));
    }
    KeAbPostRelease(v11 + 104);
    if ( (*v57 & 2) != 0 )
      ExDisableResourceBoostLite((PERESOURCE)(v62 + 72));
  }
  else
  {
    v62 = 0LL;
  }
  v120 = v62;
  v26 = (char *)v62;
  v103 = (char *)v62;
  if ( !v62 )
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
    RtlRaiseStatus(-1073741670);
  }
  if ( !v128 )
  {
    v75 = v62 + 72;
    if ( (a6 & 2) != 0 )
    {
      if ( !ExAcquireResourceExclusiveLite((PERESOURCE)(v62 + 72), 0) )
        KeBugCheckEx(0x34u, 0x20213uLL, v62, 0LL, 0LL);
    }
    else
    {
      if ( (*(_WORD *)(v62 + 98) & 0x41) == 1 )
        KeBugCheckEx(0x1C6u, 0xFuLL, v75, 0LL, 0LL);
      v76 = *(_WORD *)(v62 + 98) & 1;
      if ( v76 )
      {
        v92 = KeGetCurrentIrql();
        v93 = KeGetCurrentThread();
        if ( v92 > 2u )
          KeBugCheckEx(0x1C6u, 0LL, v92, 2uLL, 0LL);
        if ( v92 >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
          KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
        if ( (v93->ApcState.InProgressFlags & 2) != 0 )
          goto LABEL_176;
        if ( !v92 && (v93->MiscFlags & 0x400) == 0 && !v93->WaitBlock[3].SpareLong )
          goto LABEL_180;
        v26 = (char *)v62;
        v62 = v120;
      }
      if ( v76 )
        v77 = ExpFastResourceLegacyAcquireSharedStarveExclusive(v75);
      else
        v77 = ExpAcquireSharedStarveExclusive(v75);
      LOBYTE(v127) = v77;
      if ( !v77 )
        KeBugCheckEx(0x34u, 0x2021AuLL, v62, 0LL, 0LL);
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
  v78 = 0;
  v102 = 0;
  if ( !v125 )
  {
    v79 = *a8;
    v80 = *a8;
    v81 = KeGetCurrentThread();
    v82 = 1;
    v111 = 0;
    v123 = 0;
    v83 = 0;
    v116 = 0;
    LOBYTE(v125) = 1;
    v84 = ((v80 & 0xFFF) + (unsigned __int64)(unsigned int)v108 + 4095) >> 12;
    v112 = v84;
    v85 = v79 & 0xFFFFFFFFFFFFF000uLL;
    v114 = (_DWORD *)v85;
    v86 = BYTE4(v81[1].Queue) + 2 * LODWORD(v81[1].WaitListEntry.Flink);
    while ( (_DWORD)v84 )
    {
      BYTE4(v81[1].Queue) = 1;
      v87 = v84 - 1;
      if ( (unsigned int)(v84 - 1) > LODWORD(v81[1].WaitListEntry.Flink) )
      {
        if ( v87 <= 0xF )
          LODWORD(v81[1].WaitListEntry.Flink) = v87;
        else
          LODWORD(v81[1].WaitListEntry.Flink) = 15;
      }
      v111 = 0;
      if ( (v82 & v105) != 0 )
        v78 = 1;
      v111 = v78;
      if ( v105 )
      {
        v88 = 1;
        if ( v82 == 2 )
          v88 = v84 - 1;
      }
      else
      {
        v88 = v84;
      }
      v115 = (unsigned int)(v88 << 12);
      v83 = MmCheckCachedPageStates(v85, v115, v78, (char *)&v125);
      v116 = v83;
      if ( v83 < 0 )
        break;
      v85 += v115;
      v114 = (_DWORD *)v85;
      LODWORD(v84) = v84 - v88;
      v112 = v84;
      v82 = 2;
      if ( (_DWORD)v84 == 1 )
        v82 = 4;
      v78 = 0;
    }
    BYTE4(v81[1].Queue) = v86 & 1;
    LODWORD(v81[1].WaitListEntry.Flink) = v86 >> 1;
    if ( v83 < 0 )
      RtlRaiseStatus(v83);
    ExAcquireFastMutex((PKGUARDED_MUTEX)(v11 + 288));
    v26 = v103;
    v89 = a8;
    if ( !*((_QWORD *)v103 + 23) )
    {
      *((_QWORD *)v103 + 23) = *a8;
      *((_QWORD *)v103 + 7) = v106;
      v106 = 0LL;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
    *v89 = *((_QWORD *)v103 + 23) + (unsigned int)(*v126 - *((_DWORD *)v103 + 2));
  }
  v101 = 1;
  v47 = (__int64 *)v126;
  v34 = a8;
LABEL_45:
  v48 = a6;
  if ( (a6 & 6) == 6 && v26 && *((_QWORD *)v26 + 23) )
  {
    v49 = *(_QWORD *)(*((_QWORD *)v26 + 7) + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v26 + 7) + 16LL)) )
    {
      v50 = *(struct _KEVENT **)(v49 + 192);
      if ( v50 )
        KeSetEvent(v50, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v49 + 552));
    }
    *((_QWORD *)v26 + 23) = 0LL;
    *((_QWORD *)v26 + 7) = 0LL;
    v26 = v103;
  }
  if ( v102 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 288));
  if ( v106 )
  {
    v94 = *(_QWORD *)(v106 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v106 + 16)) )
    {
      v95 = *(struct _KEVENT **)(v94 + 192);
      if ( v95 )
        KeSetEvent(v95, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v94 + 552));
    }
    v26 = v103;
  }
  if ( (v48 & 4) != 0 )
  {
    v96 = *v47;
    if ( *(__int64 *)(v11 + 32) > 0x2000000 )
    {
      CcAcquireBcbLockAndVacbLock(1LL, v11);
      SetVacb(v11, v96, -2LL, 0LL);
      CcReleaseBcbLockAndVacbLock(1LL, v11);
    }
  }
  if ( v101 )
  {
    *a7 = v26;
    *a9 = *((_QWORD *)v26 + 4);
  }
  else
  {
    *v34 = 0LL;
    if ( v26 )
      CcUnpinFileDataEx(v26);
  }
  return v101;
}
