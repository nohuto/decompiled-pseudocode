/*
 * XREFs of RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeap @ 0x1403C93A0 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1402F792C (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpReleaseLockShared @ 0x14035E3FC (RtlpHpReleaseLockShared.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1403BBC64 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403C6CA0 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x1403C6EC0 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1403C7710 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x1403C83BC (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1403C8420 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x1403C8554 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1403C870C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1403C8930 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1403CA350 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1403CAEB8 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14044FFDC (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhHeatMapUpdate @ 0x14045FFD0 (RtlpHpLfhHeatMapUpdate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2D18 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhContextLockExtension @ 0x1405FA440 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1405FA4F4 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x1405FA60C (RtlpHpLfhContextUnlockExtension.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1405FA740 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x1405FAA34 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlHeapZero @ 0x1406A9C60 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSlotAllocateSlow(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned __int8 *v7; // r14
  unsigned __int64 v8; // rax
  unsigned int v9; // edx
  _QWORD *ExSaPageArray; // r9
  unsigned int v11; // ecx
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rbx
  char *v15; // r14
  __int64 v16; // r12
  int v17; // r13d
  char v18; // di
  unsigned __int64 Subsegment; // rax
  unsigned __int64 v20; // rbx
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // di
  unsigned __int8 *v23; // rcx
  __int64 v24; // rax
  int j; // edx
  unsigned int v26; // ecx
  int v27; // ecx
  struct _KTHREAD *CurrentThread; // r9
  __int64 v29; // r10
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v31; // rdx
  int v32; // eax
  char *v33; // r8
  unsigned __int64 v34; // rdx
  int v35; // r12d
  int v36; // r11d
  unsigned int v37; // r9d
  signed __int64 *v38; // rdx
  __int64 v39; // r14
  signed __int64 v40; // r8
  signed __int64 i; // rbx
  signed __int64 v46; // rax
  unsigned int v47; // r14d
  __int64 v48; // rdi
  unsigned __int64 v49; // rdi
  unsigned __int64 v52; // rax
  unsigned int v53; // eax
  int v55; // r9d
  _QWORD *v56; // rbx
  int v57; // edi
  unsigned __int64 v58; // rbx
  __int64 **v59; // rax
  signed __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  int v63; // r11d
  __int64 v64; // r10
  _QWORD *v65; // rdx
  char v67; // al
  __int64 v68; // rdx
  _QWORD *v69; // r12
  unsigned __int8 *v70; // rdi
  int v71; // r9d
  int v72; // eax
  char v73; // r9
  char v74; // al
  _QWORD *v75; // rdx
  _QWORD *v76; // rcx
  _QWORD *v77; // rax
  int v81; // edx
  char v82; // dl
  unsigned __int64 v83; // rdx
  signed __int64 v84; // rtt
  __int64 v86; // r9
  signed __int64 *v87; // roff
  signed __int64 v88; // rax
  __int64 v89; // r10
  __int64 v90; // rdx
  signed __int64 v91; // rax
  signed __int64 v92; // rtt
  signed __int64 v93; // r8
  int v94; // [rsp+38h] [rbp-39h]
  unsigned int v95; // [rsp+38h] [rbp-39h]
  int v96; // [rsp+3Ch] [rbp-35h]
  unsigned __int16 v97; // [rsp+3Eh] [rbp-33h]
  unsigned __int8 *v98; // [rsp+40h] [rbp-31h]
  char *v99; // [rsp+48h] [rbp-29h]
  int v100; // [rsp+4Ch] [rbp-25h]
  __int64 **v101; // [rsp+50h] [rbp-21h] BYREF
  __int64 ***v102; // [rsp+58h] [rbp-19h]
  int v103; // [rsp+60h] [rbp-11h]
  char *v104; // [rsp+68h] [rbp-9h]
  int v105; // [rsp+70h] [rbp-1h]
  int v106; // [rsp+74h] [rbp+3h]
  __int64 *v107[10]; // [rsp+78h] [rbp+7h] BYREF
  unsigned __int8 v108; // [rsp+D8h] [rbp+67h]
  __int64 v109; // [rsp+E0h] [rbp+6Fh]
  unsigned __int8 v110; // [rsp+E0h] [rbp+6Fh]
  signed __int64 v111; // [rsp+E0h] [rbp+6Fh]
  unsigned __int16 v112; // [rsp+E2h] [rbp+71h]

  v109 = a2;
  v4 = *(unsigned __int16 *)(a2 + 2);
  v102 = &v101;
  v5 = a2;
  v7 = (unsigned __int8 *)(a1 + (v4 << 6));
  v101 = (__int64 **)&v101;
  v8 = *(unsigned int *)(a1 + 76);
  v9 = ((unsigned int)v8 >> 13) & 0x3FFFF;
  v103 = 0;
  ExSaPageArray = KeGetCurrentPrcb()->ExSaPageArray;
  _BitScanReverse(&v11, v9);
  v98 = v7;
  v12 = 1 << v11;
  v13 = v11 - 2;
  v105 = v13;
  v14 = *(_QWORD *)(*(_QWORD *)(ExSaPageArray[v13] + 8LL * (v9 ^ v12) + 8) + 8 * ((v8 >> 4) & 0x1FF));
  if ( !v14 )
    v14 = RtlpHpLfhThreadDataInitializeSet(a1);
  v94 = RtlpHpLfhHeatMapQuery(a1, a1 + ((unsigned __int64)WORD1(v14) << 6), v7, (int)ExSaPageArray);
  if ( a1 + ((unsigned __int64)WORD1(v14) << 6) == a1 + 192 && v94 >= 1 )
  {
    v15 = RtlpHpLfhContextPrivateHeatMapCreate((char *)a1, v14);
    v104 = v15;
    v94 = 1;
  }
  else
  {
    v104 = (char *)(a1 + ((unsigned __int64)WORD1(v14) << 6));
    v15 = v104;
    if ( v94 == 2 )
    {
      v104 = (char *)(a1 + ((unsigned __int64)WORD1(v14) << 6));
      if ( *(_WORD *)(v5 + 4) )
        goto LABEL_92;
      v61 = RtlpHpLfhPrivateSlotCreate(a1, v14, v98);
      if ( v61 )
      {
        v5 = v61;
        v109 = v61;
      }
      else
      {
        v94 = 1;
      }
      v104 = (char *)(a1 + ((unsigned __int64)WORD1(v14) << 6));
LABEL_91:
      if ( !*(_WORD *)(v5 + 4) )
        goto LABEL_8;
LABEL_92:
      v16 = (__int64)v15;
      v99 = v15;
      v17 = 0;
      v96 = 0;
      v18 = 0;
      v108 = 0;
      goto LABEL_9;
    }
  }
  if ( *(_WORD *)(v5 + 4) )
  {
    v5 = RtlpHpLfhPrivateSlotShutdown(a1, v5, v14, 0LL);
    v109 = v5;
    goto LABEL_91;
  }
LABEL_8:
  v99 = (char *)(a1 + 192);
  v16 = a1 + 192;
  v96 = 2;
  v17 = 2;
  v18 = RtlpHpAcquireLockExclusive((int *)(v5 + 16), *(unsigned __int8 *)(a1 + 65));
  v108 = v18;
LABEL_9:
  while ( 1 )
  {
    if ( !*(_WORD *)(v5 + 4) )
    {
      _m_prefetchw((const void *)(v5 + 56));
      for ( i = *(_QWORD *)(v5 + 56); ; i = v46 )
      {
        if ( (i & 0xFFF) == 0 )
          goto LABEL_10;
        v46 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 56), i - 1, i);
        if ( i == v46 )
          break;
        v103 = 1;
      }
      v20 = i & 0xFFFFFFFFFFFFF000uLL;
      if ( v20 )
        break;
    }
LABEL_10:
    Subsegment = RtlpHpLfhOwnerGetSubsegment((ULONG_PTR *)a1, v5);
    v20 = Subsegment;
    if ( Subsegment )
    {
      v21 = *(_WORD *)(Subsegment + 32);
      v22 = 4096;
      if ( v21 <= 0x1000u )
        v22 = v21;
      *(_WORD *)(v20 + 32) = v21 - v22;
      if ( v22 > 1u )
        *(_QWORD *)(v5 + 56) = (v22 - 1LL) ^ ((v22 - 1LL) ^ v20) & 0xFFFFFFFFFFFFF000uLL;
      if ( v17 )
      {
        RtlpHpReleaseLockExclusive(v5 + 16, *(unsigned __int8 *)(a1 + 65), v108);
        v17 = 0;
      }
      v23 = v98;
      v24 = *v98 >> 1;
      if ( (unsigned int)v24 < 0x7E )
      {
        for ( j = *(unsigned __int16 *)&v99[2 * v24]; ; j = v27 )
        {
          v26 = v22 + j;
          if ( v26 >= 0xFFFF )
            v26 = 0xFFFF;
          if ( v26 == j )
            break;
          if ( v99 != (char *)(a1 + 192) )
          {
            *(_WORD *)&v99[2 * (unsigned int)v24] = v26;
            break;
          }
          v27 = (unsigned __int16)_InterlockedCompareExchange16(
                                    (volatile signed __int16 *)&v99[2 * (unsigned int)v24],
                                    v26,
                                    j);
          if ( v27 == j )
            break;
        }
        v23 = v98;
      }
      if ( v15 != v99 )
        RtlpHpLfhHeatMapUpdate(a1, v15, v23, v22);
      break;
    }
    RtlpHpLfhOwnerRunMaintenance(a1, v5, (volatile __int32 **)&v101, 0);
    if ( !*(_BYTE *)(v5 + 1) )
    {
      if ( v17 )
      {
        RtlpHpReleaseLockExclusive(v5 + 16, *(unsigned __int8 *)(a1 + 65), v18);
        v17 = 0;
        v96 = 0;
      }
      v56 = 0LL;
      v107[1] = (__int64 *)v107;
      v107[0] = (__int64 *)v107;
      if ( *(_QWORD *)(a1 + 160) )
      {
        do
        {
          v67 = RtlpHpLfhContextLockExtension(a1);
          v69 = *(_QWORD **)(a1 + 160);
          if ( v69 )
            *(_QWORD *)(a1 + 160) = *v69;
          LOBYTE(v68) = v67;
          RtlpHpLfhContextUnlockExtension(a1, v68);
          if ( !v69 )
            break;
          v70 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)v69 - 7) << 6));
          RtlpHpLfhOwnerFreeListProcess(a1, (__int64)(v69 - 2), (unsigned __int64 *)v107, 0);
          v72 = RtlpHpLfhHeatMapQuery(a1, a1 + 192, v70, v71);
          v73 = 8;
          if ( v72 < 1 )
            v73 = 4;
          RtlpHpLfhBucketAddSubsegment(a1, (__int64)v70, v107, v73);
          if ( (_QWORD *)v69[3] == v69 + 3 )
          {
            RtlpHpLfhContextMetadataFree(a1, v69 - 2, 2LL);
          }
          else
          {
            *v69 = v56;
            v56 = v69;
          }
        }
        while ( *(_QWORD *)(a1 + 160) );
        v15 = v104;
        v5 = v109;
        v17 = v96;
        if ( v56 )
        {
          v74 = RtlpHpLfhContextLockExtension(a1);
          v75 = *(_QWORD **)(a1 + 160);
          do
          {
            v76 = v56;
            v56 = (_QWORD *)*v56;
            *v76 = v75;
            v75 = v76;
            *(_QWORD *)(a1 + 160) = v76;
          }
          while ( v56 );
          LOBYTE(v75) = v74;
          RtlpHpLfhContextUnlockExtension(a1, v75);
          v104 = v15;
        }
        v16 = (__int64)v99;
      }
      if ( (char *)v16 == v15 )
      {
        v57 = v94;
      }
      else
      {
        v57 = RtlpHpLfhHeatMapQuery(a1, v16, v98, v55);
        if ( v57 >= 1 )
          v57 = 1;
      }
      v58 = RtlpHpLfhBucketGetSubsegment(a1, v98, (unsigned int)v57);
      if ( !v58 )
      {
        v58 = RtlpHpLfhSubsegmentCreate(a1, v98, v57);
        if ( !v58 )
        {
          v49 = 0LL;
          goto LABEL_50;
        }
      }
      if ( *(_WORD *)(v5 + 4) )
      {
        v18 = v108;
      }
      else
      {
        v17 = 2;
        v96 = 2;
        v18 = RtlpHpAcquireLockExclusive((int *)(v5 + 16), *(unsigned __int8 *)(a1 + 65));
        v108 = v18;
      }
      if ( !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (char *)v5, (__int64 *)v58, 0, 0) )
      {
        if ( *(_WORD *)(v58 + 32) == *(_WORD *)(v58 + 34) )
        {
          v59 = v101;
          if ( v101[1] != (__int64 *)&v101 )
            goto LABEL_121;
          *(_QWORD *)v58 = v101;
          *(_QWORD *)(v58 + 8) = &v101;
          v59[1] = (__int64 *)v58;
          v101 = (__int64 **)v58;
        }
        else
        {
          v77 = v102;
          if ( *v102 != (__int64 **)&v101 )
LABEL_121:
            __fastfail(3u);
          *(_QWORD *)(v58 + 8) = v102;
          *(_QWORD *)v58 = &v101;
          *v77 = v58;
          v102 = (__int64 ***)v58;
        }
      }
    }
  }
  if ( v17 )
  {
    RtlpHpReleaseLockExclusive(v5 + 16, *(unsigned __int8 *)(a1 + 65), v108);
    v17 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v29 = (unsigned int)*(unsigned __int8 *)(v20 + 24) - 8;
  Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
  v31 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
  v32 = qword_140E27FC8 ^ *(_DWORD *)(v20 + 40) ^ (v20 >> 12);
  v33 = (char *)Blink + v31;
  if ( !*(_WORD *)(v5 + 4) )
  {
    v34 = (unsigned __int64)Blink ^ v31;
    v97 = ((unsigned int)qword_140E27FC8 ^ *(_DWORD *)(v20 + 40) ^ (unsigned int)(v20 >> 12)) >> 16;
    v35 = (unsigned __int16)v32;
    v36 = BYTE4(v33);
    CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v34, 37);
    CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v34 ^ (v34 << 16) ^ __ROL8__(Blink, 24));
    v37 = *(unsigned __int8 *)(v20 + 50);
    v110 = *(_BYTE *)(v20 + 39);
    v95 = v37;
    v38 = (signed __int64 *)(v20 + 64 + 8LL * *(unsigned __int8 *)(v20 + 36));
    v39 = v20 + 64 + 8 * ((unsigned int)v29 - 1LL);
LABEL_31:
    v40 = *v38;
    while ( 1 )
    {
      _R8 = ~v40;
      if ( !_R8 )
      {
        if ( v38 == (signed __int64 *)v39 )
          v38 = (signed __int64 *)(v20 + 64);
        else
          ++v38;
        goto LABEL_31;
      }
      if ( (qword_140E27FE8 & 4) != 0 )
      {
        _RAX = 1LL << ((unsigned __int16)(v36 * __popcnt(_R8)) >> 8);
        __asm
        {
          pdep    r10, rax, r8
          tzcnt   r9, r10
        }
      }
      else
      {
        if ( v37 != 64 || v38 == (signed __int64 *)v39 )
        {
          __asm { tzcnt   rcx, r8 }
          _BitScanReverse64(&v52, _R8);
          v106 = v52;
          v53 = v52 - _RCX + 1;
          if ( v37 < v53 )
            v53 = v37;
          v36 = _RCX + ((v53 * v36) >> 8);
          _R8 = __ROR8__(_R8, v36);
          __asm { tzcnt   r9, r8 }
          LODWORD(_R9) = v36 + _R9;
        }
        else
        {
          _R8 = __ROR8__(_R8, v36);
          __asm { tzcnt   r9, r8 }
          LODWORD(_R9) = ((_BYTE)v36 + (_BYTE)_R9) & 0x3F;
        }
        _R10 = 1LL << _R9;
      }
      _m_prefetchw(v38);
      v40 = _InterlockedOr64(v38, _R10);
      if ( (_R10 & v40) == 0 )
        break;
      v37 = v95;
    }
    v47 = _R9 + 8 * ((_DWORD)v38 - (v20 + 64));
    *(_BYTE *)(v20 + 36) = v47 >> 6;
    v48 = v97 + v47 * v35;
    if ( v110 <= 1u )
    {
      if ( v47 > *(unsigned __int16 *)(v20 + 48) )
        RtlpHpLfhSubsegmentPrefetch(a1, v20, (unsigned int)v48);
    }
    else if ( (int)RtlpHpLfhSubsegmentCommitBlock(a1, v20, (unsigned int)v48) < 0 )
    {
      v49 = 0LL;
      if ( v47 != -1 )
      {
        _InterlockedAnd64(
          (volatile signed __int64 *)(v20 + 8 * ((unsigned __int64)v47 >> 6) + 64),
          __ROL8__(-2LL, v47 & 0x3F));
LABEL_90:
        v60 = *(_QWORD *)(v20 + 16);
        do
        {
          v111 = v60;
          v82 = BYTE6(v60);
          v100 = HIDWORD(v60);
          if ( BYTE6(v60) == 1 )
            v82 = 2;
          WORD1(v111) = WORD1(v60) + 1;
          BYTE6(v111) = v82;
          v83 = (unsigned __int64)*(unsigned __int16 *)(v20 + 44) << 6;
          v84 = v60;
          v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 16), v111, v60);
        }
        while ( v84 != v60 );
        if ( !*(_BYTE *)(v83 + a1 + 92) )
        {
          *(_BYTE *)(v83 + a1 + 92) = 1;
          if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)a1 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
            RtlpHpEnvCompactionSchedule(*(_QWORD **)(*(_QWORD *)a1 + 56LL));
        }
        if ( BYTE2(v100) == 1 )
        {
          v86 = (unsigned __int16)v100 << 6;
          v87 = (signed __int64 *)(v86 + a1 + 8);
          _m_prefetchw(v87);
          v88 = *v87;
          v89 = *(_QWORD *)(v20 + 24);
          v90 = *v87 & 0xFFF;
          *(_QWORD *)(v20 + 24) = v89 & 0xFFF | (*v87 - v90);
          v92 = v88;
          v91 = _InterlockedCompareExchange64(v87, v90 | v20, v88);
          if ( v92 != v91 )
          {
            do
            {
              v93 = v91;
              *(_QWORD *)(v20 + 24) = v89 ^ (v91 ^ v89) & 0xFFFFFFFFFFFFF000uLL;
              v91 = _InterlockedCompareExchange64((volatile signed __int64 *)(v86 + a1 + 8), v20 | v91 & 0xFFF, v91);
            }
            while ( v91 != v93 );
          }
        }
        goto LABEL_50;
      }
LABEL_49:
      if ( v49 )
        goto LABEL_50;
      goto LABEL_90;
    }
    v49 = v20 + v48;
    if ( (a4 & 2) != 0 )
      RtlHeapZero(v49, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    goto LABEL_49;
  }
  v62 = (unsigned __int64)Blink ^ v31;
  v112 = ((unsigned int)qword_140E27FC8 ^ *(_DWORD *)(v20 + 40) ^ (unsigned int)(v20 >> 12)) >> 16;
  v63 = (unsigned __int16)v32;
  CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v62, 37);
  CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v62 ^ (v62 << 16) ^ __ROL8__(Blink, 24));
  v64 = v20 + 64 + 8 * (v29 - 1);
  v65 = (_QWORD *)(v20 + 64 + 8LL * *(unsigned __int8 *)(v20 + 36));
  while ( *v65 == -1LL )
  {
    if ( v65 == (_QWORD *)v64 )
      v65 = (_QWORD *)(v20 + 64);
    else
      ++v65;
  }
  _RAX = 1LL << ((unsigned __int16)(BYTE4(v33) * (unsigned __int16)__popcnt(~*v65)) >> 8);
  __asm { pdep    rcx, rax, rcx }
  __asm { tzcnt   rax, rcx }
  *v65 |= _RCX;
  v81 = (_DWORD)v65 - (v20 + 64);
  *(_BYTE *)(v20 + 36) = (unsigned int)(_RAX + 8 * v81) >> 6;
  v49 = v20 + ((_DWORD)_RAX + 8 * v81) * v63 + (unsigned int)v112;
  if ( (a4 & 2) != 0 )
    RtlHeapZero(v49, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
LABEL_50:
  if ( v17 )
    RtlpHpReleaseLockExclusive(v5 + 16, *(unsigned __int8 *)(a1 + 65), v108);
  if ( v103 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, (volatile signed __int8 *)v98);
  if ( v101 != (__int64 **)&v101 )
    RtlpHpLfhBucketAddSubsegment(a1, (__int64)v98, (__int64 **)&v101, 0);
  return v49;
}
