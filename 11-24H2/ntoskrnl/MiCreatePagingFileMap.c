/*
 * XREFs of MiCreatePagingFileMap @ 0x14098CB78
 * Callers:
 *     MmCreateSectionEx @ 0x14098AECC (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x14098B1B8 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x14098B3C0 (MiCreateSection.c)
 * Callees:
 *     MiInitializeDemandCoalesceContext @ 0x14026AE60 (MiInitializeDemandCoalesceContext.c)
 *     MiThreadIdealNode @ 0x14026AF90 (MiThreadIdealNode.c)
 *     MiUpdateControlAreaCommitCount @ 0x14026B17C (MiUpdateControlAreaCommitCount.c)
 *     MiFreeLargeZeroPages @ 0x14026DAE0 (MiFreeLargeZeroPages.c)
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiInitializeLargePfnList @ 0x14041CC70 (MiInitializeLargePfnList.c)
 *     Mi4KStartForSubsection @ 0x14045A31C (Mi4KStartForSubsection.c)
 *     MiUpdateLargePageSectionPfns @ 0x140674258 (MiUpdateLargePageSectionPfns.c)
 *     MiDeleteSectionAwe @ 0x140683148 (MiDeleteSectionAwe.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiLogSectionCreate @ 0x1407EC72C (MiLogSectionCreate.c)
 *     MmObtainChargesToLockPagedPool @ 0x1407EDCD0 (MmObtainChargesToLockPagedPool.c)
 *     MiAllocateAweInfo @ 0x1407F8928 (MiAllocateAweInfo.c)
 *     MiValidateUserPhysicalExternalFlags @ 0x1407FA298 (MiValidateUserPhysicalExternalFlags.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     MiInitializePrototypePtes @ 0x140989EA4 (MiInitializePrototypePtes.c)
 *     MmReturnChargesToLockPagedPool @ 0x140AB5BF0 (MmReturnChargesToLockPagedPool.c)
 *     MmLockPreChargedPagedPool @ 0x140AB8640 (MmLockPreChargedPagedPool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  struct _KPRCB *v9; // r9
  __int64 v10; // rax
  _QWORD *Pool; // rsi
  __int64 v12; // rax
  _QWORD *v13; // r15
  __int16 v14; // cx
  unsigned __int64 v15; // rdi
  __int16 v16; // dx
  int v17; // ecx
  int v18; // eax
  __int16 v19; // ax
  unsigned __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // r8
  _QWORD *i; // r9
  char *v24; // rax
  bool v25; // zf
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdi
  __int64 v29; // r10
  int v30; // r11d
  __int64 v31; // rax
  __int64 v32; // r8
  struct _KPRCB *v33; // r9
  void *v34; // rdi
  __int64 v35; // r8
  __int16 v36; // ax
  _DWORD *v37; // rbx
  void *v38; // rdi
  int v39; // eax
  __int64 v40; // r12
  unsigned __int64 v41; // rdi
  int v42; // eax
  int v43; // eax
  int v44; // edi
  char v45; // dl
  unsigned __int64 v46; // r14
  unsigned int v47; // ebx
  PVOID *v48; // rdi
  __int64 j; // rax
  int *v50; // rsi
  int *v51; // rdi
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  char v54; // cl
  char v55; // r8
  __int64 v56; // rdi
  __int64 v57; // rdx
  _QWORD **v58; // rcx
  _QWORD *v59; // r8
  _QWORD *v60; // rax
  __int64 v61; // rdi
  char v62; // [rsp+38h] [rbp-D0h]
  char v63; // [rsp+39h] [rbp-CFh]
  unsigned __int64 v64; // [rsp+40h] [rbp-C8h]
  __int64 v65; // [rsp+48h] [rbp-C0h]
  ULONG_PTR v66; // [rsp+48h] [rbp-C0h]
  __int64 v67; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v68; // [rsp+50h] [rbp-B8h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-B0h]
  struct _KTHREAD *v70; // [rsp+58h] [rbp-B0h]
  int v71; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v72; // [rsp+68h] [rbp-A0h]
  __int64 v73; // [rsp+70h] [rbp-98h]
  char *v74; // [rsp+78h] [rbp-90h]
  __int64 v75; // [rsp+78h] [rbp-90h]
  unsigned __int64 v76; // [rsp+80h] [rbp-88h]
  __int64 v77; // [rsp+88h] [rbp-80h]
  unsigned __int64 v78; // [rsp+90h] [rbp-78h]
  __int64 v79; // [rsp+98h] [rbp-70h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-68h]
  _QWORD v81[2]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v82; // [rsp+B8h] [rbp-50h]
  __int64 v83; // [rsp+C0h] [rbp-48h]
  int v84; // [rsp+C8h] [rbp-40h]
  int v85; // [rsp+CCh] [rbp-3Ch]
  __int64 v86; // [rsp+D0h] [rbp-38h]
  __int128 v87; // [rsp+D8h] [rbp-30h]
  _OWORD *v88; // [rsp+E8h] [rbp-20h]
  __int64 v89; // [rsp+F0h] [rbp-18h]
  _QWORD *v90; // [rsp+F8h] [rbp-10h]
  _OWORD v91[3]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v92; // [rsp+138h] [rbp+30h]
  int v93; // [rsp+140h] [rbp+38h]
  _QWORD v94[2]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v95[10]; // [rsp+158h] [rbp+50h]

  memset_0(v94, 0, 0x60uLL);
  v2 = *(_DWORD *)(a1 + 16);
  v81[0] = 0LL;
  v87 = 0LL;
  v89 = 0LL;
  v92 = 0LL;
  v93 = 0;
  v71 = v2;
  memset(v91, 0, sizeof(v91));
  if ( (v2 & 0x1000000) != 0 )
    return 3221225504LL;
  MiInitializeLargePfnList(v94);
  v3 = *(_BYTE *)(a1 + 192);
  v63 = v3;
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
  v79 = 0LL;
  v73 = 0LL;
  v7 = *(ULONG ***)(a1 + 176);
  v62 = 0;
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
    if ( !(unsigned int)MiChargeResident(v8, v6, 0LL, v9) )
      goto LABEL_103;
    v42 = *(_DWORD *)(a1 + 172);
    v62 = 1;
    v43 = v42 ? v42 - 1 : MiThreadIdealNode(0LL, 0LL);
    v86 = -1LL;
    v84 = v43;
    v85 = *(_DWORD *)(a1 + 32);
    v81[1] = v8;
    v82 = v6;
    v90 = v94;
    v50 = (int *)(qword_140E2DC10 + 4LL * v43 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v83 = 512LL;
    v51 = &v50[(unsigned __int16)KeNumberNodes];
    MiInitializeDemandCoalesceContext(v91, 512LL, v6 >> 9, 0);
    v88 = v91;
    MiAllocateLargeZeroPages((unsigned int *)v81);
    v52 = v89;
    v53 = v82;
    if ( v89 != v82 )
    {
      do
      {
        if ( ++v50 == v51 )
          break;
        v84 = *v50;
        MiAllocateLargeZeroPages((unsigned int *)v81);
        v52 = v89;
        v53 = v82;
      }
      while ( v89 != v82 );
      if ( v52 != v53 )
        goto LABEL_103;
    }
    v73 = v95[0];
  }
LABEL_16:
  v67 = 0LL;
  if ( (v2 & 0x88000000) == 0x8000000 )
  {
    v76 = v6;
    v10 = 1LL;
LABEL_18:
    v64 = v10;
    goto LABEL_19;
  }
  v41 = (unsigned __int64)(((v2 >> 31) & 0x100000u) + 0x100000) >> 3;
  v10 = v6 / v41;
  v76 = v41;
  v64 = v6 / v41;
  if ( v6 % v41 )
  {
    ++v10;
    goto LABEL_18;
  }
LABEL_19:
  Pool = (_QWORD *)MiAllocatePool(0x40uLL, 88 * v10 + 128, 1631808845);
  if ( !Pool )
    goto LABEL_74;
  v12 = MiAllocatePool(0x100uLL, 0x50uLL, 1734693709);
  v13 = (_QWORD *)v12;
  if ( !v12 )
  {
LABEL_100:
    v46 = 0LL;
    if ( v64 )
    {
      v47 = v2 & 0x88000000;
      v48 = (PVOID *)(Pool + 17);
      do
      {
        if ( !*v48 )
          break;
        if ( v47 == -2013265920 )
          MmReturnChargesToLockPagedPool(*v48, 8LL * *((unsigned int *)v48 + 9));
        ExFreePoolWithTag(*v48, 0);
        v48 += 11;
        ++v46;
      }
      while ( v46 < v64 );
      v2 = v71;
    }
    if ( v79 )
      MiDeleteSectionAwe((__int64)Pool);
    ExFreePoolWithTag(Pool, 0);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
LABEL_74:
    if ( (v2 & 0x8000000) == 0 )
      return 3221225626LL;
LABEL_103:
    MiFreeLargeZeroPages((unsigned __int64)v8, (__int64)v94, 0);
    if ( v62 )
      MiReturnResident((__int64)v8, v6);
    MiReturnCommit((__int64)v8, v6, 0);
    return 3221225626LL;
  }
  *(_QWORD *)(v12 + 72) = 0LL;
  v14 = *((_WORD *)Pool + 30);
  v15 = v64;
  v16 = (*(_WORD *)v8 ^ v14) & 0x3FF;
  *((_DWORD *)Pool + 24) = v64;
  *Pool = v12;
  *((_WORD *)Pool + 30) = v14 ^ v16;
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
  v17 = *(_DWORD *)(a1 + 172);
  v18 = *((_DWORD *)Pool + 14);
  Pool[13] = 0LL;
  *((_DWORD *)Pool + 14) = v18 ^ (v18 ^ (v17 << 20)) & 0x7F00000;
  memset_0(v13, 0, 0x48uLL);
  if ( (v2 & 0x10000000) != 0 )
  {
    v36 = 0x2000;
  }
  else
  {
    if ( (v2 & 0x40000000) == 0 )
      goto LABEL_31;
    v36 = 4096;
  }
  *((_WORD *)v13 + 6) |= v36;
LABEL_31:
  *((_BYTE *)v13 + 14) ^= (*(_BYTE *)(a1 + 32) ^ *((_BYTE *)v13 + 14)) & 0x1F;
  *((_DWORD *)v13 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v13[3] = v6 << 12;
  v19 = *((_WORD *)v13 + 6);
  *v13 = Pool;
  *((_DWORD *)v13 + 2) = v6;
  *((_WORD *)v13 + 6) = v19 ^ (v19 ^ WORD2(v6)) & 0x3FF;
  if ( !v63 )
    goto LABEL_32;
  v44 = *(_DWORD *)(a1 + 16);
  if ( (v44 & 0x20000) != 0 )
  {
    v45 = 4;
  }
  else if ( v44 >= 0 )
  {
    v45 = (v44 & 0x80000) != 0;
  }
  else
  {
    v45 = 2;
  }
  v54 = v45 | 0x40;
  if ( (v44 & 0x10000) == 0 )
    v54 = v45;
  if ( (v44 & 0x10000000) != 0 )
  {
    v54 |= 0x20u;
  }
  else if ( (v44 & 0x40000000) != 0 )
  {
    v54 |= 0x10u;
  }
  v55 = v54 | 8;
  if ( (*(_DWORD *)(a1 + 196) & 1) == 0 )
    v55 = v54;
  if ( (int)MiAllocateAweInfo((__int64)Pool, 0, v55, *(_BYTE *)(a1 + 72), &v79) < 0 )
    goto LABEL_100;
  v15 = v64;
LABEL_32:
  v20 = 0LL;
  v72 = v6;
  v21 = 0LL;
  v22 = (__int64)(Pool + 16);
  for ( i = Pool + 16; ; i[2] = v22 )
  {
    v78 = v20;
    v65 = v22;
    v77 = v21;
    if ( v20 >= v15 )
      break;
    v27 = *(_QWORD *)(v22 + 80) & 0xFFFFFFFFFFFFFFF9uLL;
    *(_QWORD *)v22 = Pool;
    v75 = v22;
    *(_QWORD *)(v22 + 80) = v27 | 1;
    v28 = v72;
    *(_DWORD *)(v22 + 32) = (2 * *(unsigned __int16 *)(a1 + 32)) ^ (*(_DWORD *)(v22 + 32) ^ (2
                                                                                           * *(unsigned __int16 *)(a1 + 32))) & 0xFFFFFFC1;
    if ( v72 > v76 )
      v28 = v76;
    *(_DWORD *)(v22 + 44) = v28;
    Mi4KStartForSubsection(v22, v21);
    v72 -= v28;
    v80 = 8 * v28;
    if ( v30 )
    {
      v31 = MiAllocatePool(0x112uLL, 8 * v28, 1951624525);
      v67 = v31;
      v34 = (void *)v31;
      if ( !v31 )
        goto LABEL_100;
      if ( v2 < 0 && !MmObtainChargesToLockPagedPool(v31, v80, v32, v33) )
      {
        ExFreePoolWithTag(v34, 0);
        goto LABEL_100;
      }
      v35 = v65;
      i = (_QWORD *)v75;
      v29 = v77;
      *(_QWORD *)(v65 + 8) = v34;
    }
    else
    {
      v35 = v65;
    }
    v15 = v64;
    v21 = *(unsigned int *)(v35 + 44) + v29;
    v22 = v35 + 88;
    v20 = v78 + 1;
  }
  i[2] = 0LL;
  v13[8] = v67;
  if ( (v2 & 0x8000000) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v24 = (char *)KeAbPreAcquire((__int64)(v13 + 5), 0LL);
    v74 = v24;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13 + 10, 0LL) )
    {
      ExfAcquirePushLockExclusiveEx(v13 + 5, v24, (__int64)(v13 + 5));
      v24 = v74;
    }
    if ( v24 )
      v24[10] = 1;
    MiUpdateControlAreaCommitCount((__int64)Pool, v6);
    if ( (_InterlockedExchangeAdd64(v13 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13 + 5);
    KeAbPostRelease((ULONG_PTR)(v13 + 5));
    v25 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v25 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( v2 < 0 )
    {
      v68 = 0LL;
      *((_WORD *)v13 + 6) |= 0x400u;
      *((_DWORD *)Pool + 23) |= 0x10000u;
      if ( v64 )
      {
        v37 = Pool + 22;
        do
        {
          v38 = (void *)*((_QWORD *)v37 - 5);
          v66 = (ULONG_PTR)v38;
          MmLockPreChargedPagedPool(v38, 8LL * (unsigned int)*(v37 - 1));
          v39 = *v37 & 0x3FFFFFFF | 0x40000000;
          *v37 = v39;
          if ( v73 )
          {
            --v73;
            *v37 = v39 & 0x3FFFFFFF | 0x80000000;
          }
          memset(v38, 0, 8LL * (unsigned int)*(v37 - 1));
          MiUpdateSystemProtoPtesTree((__int64)(v37 + 2), 1);
          v40 = 0LL;
          v70 = 0LL;
          if ( *(v37 - 1) )
          {
            do
            {
              for ( j = 0LL; ; j = (unsigned int)(j + 1) )
              {
                v56 = (unsigned int)j;
                if ( (unsigned int)j >= 4 )
                  break;
                v57 = 3 * j;
                v58 = (_QWORD **)&v94[3 * j];
                v59 = *v58;
                if ( *v58 != v58 )
                {
                  v40 = v94[3 * j];
                  if ( (_QWORD **)v59[1] != v58 || (v60 = (_QWORD *)*v59, *(_QWORD **)(*v59 + 8LL) != v59) )
                    __fastfail(3u);
                  *v58 = v60;
                  v60[1] = v58;
                  --v95[v57];
                  break;
                }
              }
              v61 = MiPageSizes[v56];
              MiUpdateLargePageSectionPfns(v40, v66, *(_DWORD *)(a1 + 32));
              v70 = (struct _KTHREAD *)((char *)v70 + v61);
              v66 += 8 * v61;
            }
            while ( v70 != (struct _KTHREAD *)(unsigned int)*(v37 - 1) );
          }
          v37 += 22;
          ++v68;
        }
        while ( v68 < v64 );
      }
    }
    else
    {
      MiInitializePrototypePtes(Pool[17], v6, (_DWORD *)Pool + 32, 1);
      MiUpdateSystemProtoPtesTree((__int64)(Pool + 23), 1);
    }
  }
  *(_QWORD *)(a1 + 64) = Pool;
  if ( _InterlockedIncrement64((volatile signed __int64 *)v8 + 218) <= 1 )
    __fastfail(0xEu);
  *(_DWORD *)a1 |= 4u;
  *(_QWORD *)(a1 + 128) = _InterlockedCompareExchange64(v13 + 3, -1LL, -1LL);
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 )
    MiLogSectionCreate(Pool, 1);
  return 0LL;
}
