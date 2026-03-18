/*
 * XREFs of MiCreatePagingFileMap @ 0x140942908
 * Callers:
 *     MmCreateSectionEx @ 0x140940C6C (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x140940F58 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x140941160 (MiCreateSection.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026047C (MiUpdateSystemProtoPtesTree.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiInitializeDemandCoalesceContext @ 0x14036EEE0 (MiInitializeDemandCoalesceContext.c)
 *     MiThreadIdealNode @ 0x14036F010 (MiThreadIdealNode.c)
 *     MiUpdateControlAreaCommitCount @ 0x14036F1FC (MiUpdateControlAreaCommitCount.c)
 *     MiFreeLargeZeroPages @ 0x1403A67F0 (MiFreeLargeZeroPages.c)
 *     MiAllocateLargeZeroPages @ 0x1403A7BB8 (MiAllocateLargeZeroPages.c)
 *     MiInitializeLargePfnList @ 0x140428B20 (MiInitializeLargePfnList.c)
 *     Mi4KStartForSubsection @ 0x140463BDC (Mi4KStartForSubsection.c)
 *     MiUpdateLargePageSectionPfns @ 0x140673088 (MiUpdateLargePageSectionPfns.c)
 *     MiDeleteSectionAwe @ 0x140681F58 (MiDeleteSectionAwe.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiLogSectionCreate @ 0x1407EC15C (MiLogSectionCreate.c)
 *     MmObtainChargesToLockPagedPool @ 0x1407ED700 (MmObtainChargesToLockPagedPool.c)
 *     MiAllocateAweInfo @ 0x1407F81B8 (MiAllocateAweInfo.c)
 *     MiValidateUserPhysicalExternalFlags @ 0x1407F9B28 (MiValidateUserPhysicalExternalFlags.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     MiInitializePrototypePtes @ 0x140946874 (MiInitializePrototypePtes.c)
 *     MmReturnChargesToLockPagedPool @ 0x140ABABD0 (MmReturnChargesToLockPagedPool.c)
 *     MmLockPreChargedPagedPool @ 0x140ABD5D0 (MmLockPreChargedPagedPool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePagingFileMap(__int64 a1)
{
  int v2; // ebx
  char v3; // di
  unsigned __int64 v4; // r12
  int v5; // edx
  unsigned __int64 v6; // r12
  ULONG **v7; // r13
  ULONG *v8; // r13
  __int64 v9; // rax
  _QWORD *Pool; // rsi
  __int64 v11; // rax
  _QWORD *v12; // r15
  __int16 v13; // cx
  unsigned __int64 v14; // rdi
  __int16 v15; // dx
  int v16; // ecx
  int v17; // eax
  __int16 v18; // ax
  unsigned __int64 v19; // rax
  __int64 v20; // r10
  __int64 v21; // r8
  _QWORD *i; // r9
  _QWORD *v23; // rax
  bool v24; // zf
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdi
  __int64 v28; // r10
  int v29; // r11d
  __int64 v30; // rax
  void *v31; // rdi
  __int64 v32; // r8
  __int16 v33; // ax
  _DWORD *v34; // rbx
  void *v35; // rdi
  int v36; // eax
  __int64 v37; // r12
  unsigned __int64 v38; // rdi
  int v39; // eax
  int v40; // eax
  int v41; // edi
  char v42; // dl
  unsigned __int64 v43; // r14
  unsigned int v44; // ebx
  PVOID *v45; // rdi
  __int64 j; // rax
  int *v47; // rsi
  int *v48; // rdi
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  char v51; // cl
  char v52; // r8
  __int64 v53; // rdi
  __int64 v54; // rdx
  _QWORD **v55; // rcx
  _QWORD *v56; // r8
  _QWORD *v57; // rax
  __int64 v58; // rdi
  char v59; // [rsp+38h] [rbp-D0h]
  char v60; // [rsp+39h] [rbp-CFh]
  unsigned __int64 v61; // [rsp+40h] [rbp-C8h]
  __int64 v62; // [rsp+48h] [rbp-C0h]
  ULONG_PTR v63; // [rsp+48h] [rbp-C0h]
  __int64 v64; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v65; // [rsp+50h] [rbp-B8h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-B0h]
  struct _KTHREAD *v67; // [rsp+58h] [rbp-B0h]
  int v68; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v69; // [rsp+68h] [rbp-A0h]
  __int64 v70; // [rsp+70h] [rbp-98h]
  _QWORD *v71; // [rsp+78h] [rbp-90h]
  __int64 v72; // [rsp+78h] [rbp-90h]
  unsigned __int64 v73; // [rsp+80h] [rbp-88h]
  __int64 v74; // [rsp+88h] [rbp-80h]
  unsigned __int64 v75; // [rsp+90h] [rbp-78h]
  __int64 v76; // [rsp+98h] [rbp-70h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-68h]
  _QWORD v78[2]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v79; // [rsp+B8h] [rbp-50h]
  __int64 v80; // [rsp+C0h] [rbp-48h]
  int v81; // [rsp+C8h] [rbp-40h]
  int v82; // [rsp+CCh] [rbp-3Ch]
  __int64 v83; // [rsp+D0h] [rbp-38h]
  __int128 v84; // [rsp+D8h] [rbp-30h]
  _OWORD *v85; // [rsp+E8h] [rbp-20h]
  __int64 v86; // [rsp+F0h] [rbp-18h]
  _QWORD *v87; // [rsp+F8h] [rbp-10h]
  _OWORD v88[3]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v89; // [rsp+138h] [rbp+30h]
  int v90; // [rsp+140h] [rbp+38h]
  _QWORD v91[2]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v92[10]; // [rsp+158h] [rbp+50h]

  memset_0(v91, 0, 0x60uLL);
  v2 = *(_DWORD *)(a1 + 16);
  v78[0] = 0LL;
  v84 = 0LL;
  v86 = 0LL;
  v89 = 0LL;
  v90 = 0;
  v68 = v2;
  memset(v88, 0, sizeof(v88));
  if ( (v2 & 0x1000000) != 0 )
    return 3221225504LL;
  MiInitializeLargePfnList(v91);
  v3 = *(_BYTE *)(a1 + 192);
  v60 = v3;
  if ( v3 )
  {
    if ( (int)MiValidateUserPhysicalExternalFlags(v2) < 0 )
      return 3221225485LL;
    if ( (*(_DWORD *)(a1 + 28) & 7) != 4 )
      return 3221225541LL;
    if ( (*(_DWORD *)(a1 + 32) & 7) != 4 )
      return 3221225485LL;
  }
  else
  {
    if ( v2 >= 0 )
    {
      if ( (v2 & 0x20000) == 0 )
        goto LABEL_5;
      return 3221225716LL;
    }
    if ( (v2 & 0x8000000) == 0 )
      return 3221225716LL;
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, *(_BYTE *)(a1 + 72)) )
    return 3221225569LL;
LABEL_5:
  v4 = *(_QWORD *)(a1 + 152);
  if ( v3 )
  {
    if ( v4 )
      return 3221225714LL;
    v6 = 1LL;
    v5 = v2 & 0x8000000;
  }
  else
  {
    if ( !v4 )
      return 3221225714LL;
    v5 = v2 & 0x8000000;
    if ( v4 > (-(__int64)((v2 & 0x8000000) != 0) & 0xFFFFF001000uLL) - 4096 )
      return 3221225536LL;
    v6 = (v4 + 4095) >> 12;
  }
  v76 = 0LL;
  v70 = 0LL;
  v7 = *(ULONG ***)(a1 + 176);
  v59 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( v7 )
  {
    v8 = *v7;
    if ( v8 != &MiSystemPartition && (v8[1] & 0x80u) != 0 )
      return 3221225659LL;
  }
  else
  {
    v8 = &MiSystemPartition;
  }
  if ( !v5 )
    goto LABEL_16;
  if ( (v2 & 0x80000) != 0 && (v6 & 0xF) != 0 || v2 < 0 && (v6 & 0x1FF) != 0 )
    return 3221225714LL;
  if ( !(unsigned int)MiChargeCommit((__int64)v8, v6, 0) )
    return 3221225773LL;
  if ( v2 < 0 )
  {
    if ( !(unsigned int)MiChargeResident(v8, v6, 0LL) )
      goto LABEL_103;
    v39 = *(_DWORD *)(a1 + 172);
    v59 = 1;
    v40 = v39 ? v39 - 1 : MiThreadIdealNode(0LL, 0LL);
    v83 = -1LL;
    v81 = v40;
    v82 = *(_DWORD *)(a1 + 32);
    v78[1] = v8;
    v79 = v6;
    v87 = v91;
    v47 = (int *)(qword_140E2DAD0 + 4LL * v40 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v80 = 512LL;
    v48 = &v47[(unsigned __int16)KeNumberNodes];
    MiInitializeDemandCoalesceContext(v88, 512LL, v6 >> 9, 0);
    v85 = v88;
    MiAllocateLargeZeroPages((unsigned int *)v78);
    v49 = v86;
    v50 = v79;
    if ( v86 != v79 )
    {
      do
      {
        if ( ++v47 == v48 )
          break;
        v81 = *v47;
        MiAllocateLargeZeroPages((unsigned int *)v78);
        v49 = v86;
        v50 = v79;
      }
      while ( v86 != v79 );
      if ( v49 != v50 )
        goto LABEL_103;
    }
    v70 = v92[0];
  }
LABEL_16:
  v64 = 0LL;
  if ( (v2 & 0x88000000) == 0x8000000 )
  {
    v73 = v6;
    v9 = 1LL;
LABEL_18:
    v61 = v9;
    goto LABEL_19;
  }
  v38 = (unsigned __int64)(((v2 >> 31) & 0x100000u) + 0x100000) >> 3;
  v9 = v6 / v38;
  v73 = v38;
  v61 = v6 / v38;
  if ( v6 % v38 )
  {
    ++v9;
    goto LABEL_18;
  }
LABEL_19:
  Pool = (_QWORD *)MiAllocatePool(0x40uLL, 88 * v9 + 128, 1631808845);
  if ( !Pool )
    goto LABEL_74;
  v11 = MiAllocatePool(0x100uLL, 0x50uLL, 1734693709);
  v12 = (_QWORD *)v11;
  if ( !v11 )
  {
LABEL_100:
    v43 = 0LL;
    if ( v61 )
    {
      v44 = v2 & 0x88000000;
      v45 = (PVOID *)(Pool + 17);
      do
      {
        if ( !*v45 )
          break;
        if ( v44 == -2013265920 )
          MmReturnChargesToLockPagedPool(*v45, 8LL * *((unsigned int *)v45 + 9));
        ExFreePoolWithTag(*v45, 0);
        v45 += 11;
        ++v43;
      }
      while ( v43 < v61 );
      v2 = v68;
    }
    if ( v76 )
      MiDeleteSectionAwe((__int64)Pool);
    ExFreePoolWithTag(Pool, 0);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
LABEL_74:
    if ( (v2 & 0x8000000) == 0 )
      return 3221225626LL;
LABEL_103:
    MiFreeLargeZeroPages((__int64)v8, (__int64)v91, 0);
    if ( v59 )
      MiReturnResident((__int64)v8, v6);
    MiReturnCommit((__int64)v8, v6, 0);
    return 3221225626LL;
  }
  *(_QWORD *)(v11 + 72) = 0LL;
  v13 = *((_WORD *)Pool + 30);
  v14 = v61;
  v15 = (*(_WORD *)v8 ^ v13) & 0x3FF;
  *((_DWORD *)Pool + 24) = v61;
  *Pool = v11;
  *((_WORD *)Pool + 30) = v13 ^ v15;
  Pool[2] = Pool + 1;
  Pool[1] = Pool + 1;
  Pool[14] = 1LL;
  Pool[3] = 1LL;
  Pool[6] = 1LL;
  if ( (v2 & 0x200000) != 0 )
    *((_DWORD *)Pool + 14) |= 0x40u;
  if ( (v2 & 0x4000000) != 0 )
    *((_DWORD *)Pool + 14) |= 0x1000u;
  if ( (v2 & 0x8000000) != 0 )
    *((_DWORD *)Pool + 14) |= 0x2000u;
  if ( (v2 & 0x80000) != 0 )
    *((_DWORD *)Pool + 14) |= 0x80000000;
  v16 = *(_DWORD *)(a1 + 172);
  v17 = *((_DWORD *)Pool + 14);
  Pool[13] = 0LL;
  *((_DWORD *)Pool + 14) = v17 ^ (v17 ^ (v16 << 20)) & 0x7F00000;
  memset_0(v12, 0, 0x48uLL);
  if ( (v2 & 0x10000000) != 0 )
  {
    v33 = 0x2000;
  }
  else
  {
    if ( (v2 & 0x40000000) == 0 )
      goto LABEL_31;
    v33 = 4096;
  }
  *((_WORD *)v12 + 6) |= v33;
LABEL_31:
  *((_BYTE *)v12 + 14) ^= (*(_BYTE *)(a1 + 32) ^ *((_BYTE *)v12 + 14)) & 0x1F;
  *((_DWORD *)v12 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v12[3] = v6 << 12;
  v18 = *((_WORD *)v12 + 6);
  *v12 = Pool;
  *((_DWORD *)v12 + 2) = v6;
  *((_WORD *)v12 + 6) = v18 ^ (v18 ^ WORD2(v6)) & 0x3FF;
  if ( !v60 )
    goto LABEL_32;
  v41 = *(_DWORD *)(a1 + 16);
  if ( (v41 & 0x20000) != 0 )
  {
    v42 = 4;
  }
  else if ( v41 >= 0 )
  {
    v42 = (v41 & 0x80000) != 0;
  }
  else
  {
    v42 = 2;
  }
  v51 = v42 | 0x40;
  if ( (v41 & 0x10000) == 0 )
    v51 = v42;
  if ( (v41 & 0x10000000) != 0 )
  {
    v51 |= 0x20u;
  }
  else if ( (v41 & 0x40000000) != 0 )
  {
    v51 |= 0x10u;
  }
  v52 = v51 | 8;
  if ( (*(_DWORD *)(a1 + 196) & 1) == 0 )
    v52 = v51;
  if ( (int)MiAllocateAweInfo((__int64)Pool, 0, v52, *(_BYTE *)(a1 + 72), &v76) < 0 )
    goto LABEL_100;
  v14 = v61;
LABEL_32:
  v19 = 0LL;
  v69 = v6;
  v20 = 0LL;
  v21 = (__int64)(Pool + 16);
  for ( i = Pool + 16; ; i[2] = v21 )
  {
    v75 = v19;
    v62 = v21;
    v74 = v20;
    if ( v19 >= v14 )
      break;
    v26 = *(_QWORD *)(v21 + 80) & 0xFFFFFFFFFFFFFFF9uLL;
    *(_QWORD *)v21 = Pool;
    v72 = v21;
    *(_QWORD *)(v21 + 80) = v26 | 1;
    v27 = v69;
    *(_DWORD *)(v21 + 32) = (2 * *(unsigned __int16 *)(a1 + 32)) ^ (*(_DWORD *)(v21 + 32) ^ (2
                                                                                           * *(unsigned __int16 *)(a1 + 32))) & 0xFFFFFFC1;
    if ( v69 > v73 )
      v27 = v73;
    *(_DWORD *)(v21 + 44) = v27;
    Mi4KStartForSubsection(v21, v20);
    v69 -= v27;
    v77 = 8 * v27;
    if ( v29 )
    {
      v30 = MiAllocatePool(0x112uLL, 8 * v27, 1951624525);
      v64 = v30;
      v31 = (void *)v30;
      if ( !v30 )
        goto LABEL_100;
      if ( v2 < 0 && !MmObtainChargesToLockPagedPool(v30, v77) )
      {
        ExFreePoolWithTag(v31, 0);
        goto LABEL_100;
      }
      v32 = v62;
      i = (_QWORD *)v72;
      v28 = v74;
      *(_QWORD *)(v62 + 8) = v31;
    }
    else
    {
      v32 = v62;
    }
    v14 = v61;
    v20 = *(unsigned int *)(v32 + 44) + v28;
    v21 = v32 + 88;
    v19 = v75 + 1;
  }
  i[2] = 0LL;
  v12[8] = v64;
  if ( (v2 & 0x8000000) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v23 = KeAbPreAcquire((__int64)(v12 + 5), 0LL);
    v71 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 10, 0LL) )
    {
      ExfAcquirePushLockExclusiveEx(v12 + 5, (__int64)v23, (__int64)(v12 + 5));
      v23 = v71;
    }
    if ( v23 )
      *((_BYTE *)v23 + 10) = 1;
    MiUpdateControlAreaCommitCount((__int64)Pool, v6);
    if ( (_InterlockedExchangeAdd64(v12 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12 + 5);
    KeAbPostRelease((ULONG_PTR)(v12 + 5));
    v24 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v24 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery((__int64)CurrentThread, 1LL);
    if ( v2 < 0 )
    {
      v65 = 0LL;
      *((_WORD *)v12 + 6) |= 0x400u;
      *((_DWORD *)Pool + 23) |= 0x10000u;
      if ( v61 )
      {
        v34 = Pool + 22;
        do
        {
          v35 = (void *)*((_QWORD *)v34 - 5);
          v63 = (ULONG_PTR)v35;
          MmLockPreChargedPagedPool(v35, 8LL * (unsigned int)*(v34 - 1));
          v36 = *v34 & 0x3FFFFFFF | 0x40000000;
          *v34 = v36;
          if ( v70 )
          {
            --v70;
            *v34 = v36 & 0x3FFFFFFF | 0x80000000;
          }
          memset(v35, 0, 8LL * (unsigned int)*(v34 - 1));
          MiUpdateSystemProtoPtesTree((__int64)(v34 + 2), 1);
          v37 = 0LL;
          v67 = 0LL;
          if ( *(v34 - 1) )
          {
            do
            {
              for ( j = 0LL; ; j = (unsigned int)(j + 1) )
              {
                v53 = (unsigned int)j;
                if ( (unsigned int)j >= 4 )
                  break;
                v54 = 3 * j;
                v55 = (_QWORD **)&v91[3 * j];
                v56 = *v55;
                if ( *v55 != v55 )
                {
                  v37 = v91[3 * j];
                  if ( (_QWORD **)v56[1] != v55 || (v57 = (_QWORD *)*v56, *(_QWORD **)(*v56 + 8LL) != v56) )
                    __fastfail(3u);
                  *v55 = v57;
                  v57[1] = v55;
                  --v92[v54];
                  break;
                }
              }
              v58 = MiPageSizes[v53];
              MiUpdateLargePageSectionPfns(v37, v63, *(_DWORD *)(a1 + 32));
              v67 = (struct _KTHREAD *)((char *)v67 + v58);
              v63 += 8 * v58;
            }
            while ( v67 != (struct _KTHREAD *)(unsigned int)*(v34 - 1) );
          }
          v34 += 22;
          ++v65;
        }
        while ( v65 < v61 );
      }
    }
    else
    {
      MiInitializePrototypePtes(Pool[17]);
      MiUpdateSystemProtoPtesTree((__int64)(Pool + 23), 1);
    }
  }
  *(_QWORD *)(a1 + 64) = Pool;
  if ( _InterlockedIncrement64((volatile signed __int64 *)v8 + 218) <= 1 )
    __fastfail(0xEu);
  *(_DWORD *)a1 |= 4u;
  *(_QWORD *)(a1 + 128) = _InterlockedCompareExchange64(v12 + 3, -1LL, -1LL);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 )
    MiLogSectionCreate(Pool, 1);
  return 0LL;
}
