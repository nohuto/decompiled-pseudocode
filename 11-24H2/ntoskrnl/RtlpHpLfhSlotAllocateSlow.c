/*
 * XREFs of RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeap @ 0x1402B7A40 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockShared @ 0x140246CF4 (RtlpHpReleaseLockShared.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1402B4550 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1402B52CC (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1402B55B8 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1402B5B00 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x1402B5D24 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1402B6864 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x1402B6AE8 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402B7624 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1402B9010 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x140421D08 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhHeatMapUpdate @ 0x14045A904 (RtlpHpLfhHeatMapUpdate.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14045CC3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhHeatMapDecayCounts @ 0x14046006C (RtlpHpLfhHeatMapDecayCounts.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1404B96F4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F561C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvTlsSetValue @ 0x1404F5694 (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpLfhContextLockExtension @ 0x140606780 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhContextMetadataFree @ 0x140606834 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x14060694C (RtlpHpLfhContextUnlockExtension.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x140606A80 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140606D74 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlHeapZero @ 0x1406B4F30 (RtlHeapZero.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSlotAllocateSlow(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r13
  __int64 v5; // r15
  unsigned __int8 *v7; // r13
  unsigned __int64 v8; // rax
  unsigned int v9; // edx
  _QWORD *ExSaPageArray; // r9
  unsigned int v11; // ecx
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rbx
  signed __int32 *v15; // r14
  __int64 v16; // r11
  signed __int32 v17; // eax
  __int64 v18; // rcx
  int v19; // edx
  signed __int32 v20; // ett
  unsigned int v21; // edx
  unsigned int v22; // ecx
  signed int v23; // edi
  __int64 v24; // r12
  int v25; // r13d
  unsigned __int64 Subsegment; // rax
  unsigned __int64 v27; // rbx
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // di
  unsigned __int8 *v30; // rcx
  __int64 v31; // rax
  int j; // edx
  unsigned int v33; // ecx
  int v34; // ecx
  struct _KTHREAD *v35; // r9
  int v36; // eax
  struct _LIST_ENTRY *v37; // rcx
  unsigned __int64 v38; // rdx
  int v39; // r10d
  char *v40; // r8
  unsigned __int64 v41; // rdx
  int v42; // r12d
  int v43; // r11d
  unsigned int v44; // r9d
  signed __int64 *v45; // rdx
  __int64 v46; // r14
  signed __int64 v47; // r8
  unsigned int v52; // r14d
  __int64 v53; // rdi
  unsigned __int64 v54; // rdi
  signed __int64 i; // rbx
  signed __int64 v57; // rax
  signed __int64 v59; // rax
  int v60; // r9d
  _QWORD *v61; // rbx
  int v62; // edi
  __int64 v63; // rbx
  __int64 v64; // r8
  volatile __int32 ***v65; // rax
  unsigned __int64 v67; // rax
  unsigned int v68; // eax
  __int64 v70; // rax
  struct _KTHREAD *CurrentThread; // r9
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v73; // rdx
  char *v74; // r8
  unsigned __int64 v75; // rdx
  void *v76; // rax
  _DWORD *v77; // rdi
  char v78; // al
  __int64 v79; // rdx
  _QWORD *v80; // r12
  unsigned __int8 *v81; // rdi
  int v82; // r9d
  int v83; // eax
  __int64 v84; // r9
  char v85; // al
  _QWORD *v86; // rdx
  _QWORD *v87; // rcx
  _QWORD *v88; // rax
  unsigned __int64 v89; // rdx
  int v90; // r11d
  __int64 v91; // r10
  _QWORD *v92; // rdx
  int v96; // edx
  char v97; // dl
  unsigned __int64 v98; // rdx
  signed __int64 v99; // rtt
  __int64 v101; // r9
  signed __int64 *v102; // roff
  signed __int64 v103; // rax
  __int64 v104; // r10
  __int64 v105; // rdx
  signed __int64 v106; // rax
  signed __int64 v107; // rtt
  signed __int64 v108; // r8
  __int64 v109; // [rsp+28h] [rbp-49h]
  __int64 v110; // [rsp+30h] [rbp-41h]
  int v111; // [rsp+38h] [rbp-39h]
  unsigned int v112; // [rsp+38h] [rbp-39h]
  int v113; // [rsp+3Ch] [rbp-35h]
  unsigned __int16 v114; // [rsp+3Eh] [rbp-33h]
  unsigned __int8 *v115; // [rsp+40h] [rbp-31h]
  __int64 v116; // [rsp+48h] [rbp-29h]
  int v117; // [rsp+4Ch] [rbp-25h]
  volatile __int32 ***v118; // [rsp+50h] [rbp-21h] BYREF
  volatile __int32 ***v119; // [rsp+58h] [rbp-19h]
  signed __int32 *v120; // [rsp+60h] [rbp-11h]
  int v121; // [rsp+68h] [rbp-9h]
  int v122; // [rsp+6Ch] [rbp-5h]
  int v123; // [rsp+70h] [rbp-1h]
  unsigned __int64 v124[10]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v125; // [rsp+D8h] [rbp+67h]
  __int64 v126; // [rsp+E0h] [rbp+6Fh]
  unsigned __int8 v127; // [rsp+E0h] [rbp+6Fh]
  signed __int64 v128; // [rsp+E0h] [rbp+6Fh]
  unsigned __int16 v129; // [rsp+E2h] [rbp+71h]

  v126 = a2;
  v4 = *(unsigned __int16 *)(a2 + 2);
  v119 = (volatile __int32 ***)&v118;
  v5 = a2;
  v7 = (unsigned __int8 *)(a1 + (v4 << 6));
  v118 = (volatile __int32 ***)&v118;
  v8 = *(unsigned int *)(a1 + 76);
  v9 = ((unsigned int)v8 >> 13) & 0x3FFFF;
  v121 = 0;
  ExSaPageArray = KeGetCurrentPrcb()->ExSaPageArray;
  _BitScanReverse(&v11, v9);
  v115 = v7;
  v12 = 1 << v11;
  v13 = v11 - 2;
  v122 = v13;
  v14 = *(_QWORD *)(*(_QWORD *)(ExSaPageArray[v13] + 8LL * (v9 ^ v12) + 8) + 8 * ((v8 >> 4) & 0x1FF));
  if ( !v14 )
    v14 = RtlpHpLfhThreadDataInitializeSet(a1);
  v15 = (signed __int32 *)(a1 + ((unsigned __int64)WORD1(v14) << 6));
  v16 = *v7 >> 1;
  v120 = v15;
  if ( (unsigned int)v16 >= 0x7E )
  {
    v21 = 0;
  }
  else
  {
    v17 = v15[63];
    while ( 1 )
    {
      v18 = MEMORY[0xFFFFF78000000008] >> 20;
      v19 = (MEMORY[0xFFFFF78000000008] >> 20) - v17;
      if ( (unsigned int)(MEMORY[0xFFFFF78000000008] >> 20) == v17 )
        break;
      v20 = v17;
      v17 = _InterlockedCompareExchange(v15 + 63, v18, v17);
      if ( v20 == v17 )
      {
        RtlpHpLfhHeatMapDecayCounts(v18, v19, a1 + (WORD1(v14) << 6), (_DWORD)ExSaPageArray, v19);
        break;
      }
    }
    v21 = *((unsigned __int16 *)v15 + v16);
  }
  v22 = ((unsigned int)RtlpHpLfhPerfFlags >> 8) & 3;
  if ( v22 )
  {
    if ( v22 == 2 )
    {
      v23 = 2;
      goto LABEL_14;
    }
    if ( v22 != 1 )
    {
      CurrentThread = KeGetCurrentThread();
      Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
      v73 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
      v74 = (char *)Blink + v73;
      v75 = (unsigned __int64)Blink ^ v73;
      CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v75, 37);
      CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v75 ^ (v75 << 16) ^ __ROL8__(Blink, 24));
      v23 = BYTE4(v74) % 3u;
      goto LABEL_14;
    }
  }
  else
  {
    if ( (RtlpHpLfhPerfFlags & 1) == 0 || v21 < *((unsigned __int16 *)v7 + 38) )
    {
      v23 = 0;
      goto LABEL_14;
    }
    if ( v21 >= *((unsigned __int16 *)v7 + 39) )
    {
      v23 = ((*(_BYTE *)(a1 + 72) & 1) != 0) + 1;
      goto LABEL_14;
    }
  }
  v23 = 1;
LABEL_14:
  v24 = a1 + 192;
  if ( v15 == (signed __int32 *)(a1 + 192) && v23 >= 1 )
  {
    v125 = v14;
    if ( (*(_DWORD *)(a1 + 72) & 1) != 0
      && (v76 = (void *)RtlpHpLfhContextMetadataAllocate(a1, 1LL, 2LL),
          v120 = (signed __int32 *)v76,
          v15 = (signed __int32 *)v76,
          (v77 = v76) != 0LL) )
    {
      memset_0(v76, 0, 0x100uLL);
      v77[63] = MEMORY[0xFFFFF78000000008] >> 20;
      WORD1(v125) = ((unsigned __int64)v77 - a1) >> 6;
      if ( (int)RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 76), v125) < 0 )
      {
        v120 = (signed __int32 *)(a1 + 192);
        v15 = (signed __int32 *)(a1 + 192);
        RtlpHpLfhContextMetadataFree(a1, v77, 1LL);
      }
    }
    else
    {
      v15 = (signed __int32 *)(a1 + 192);
      v120 = (signed __int32 *)(a1 + 192);
    }
    v113 = 1;
  }
  else
  {
    v113 = v23;
    if ( v23 == 2 )
    {
      v113 = 2;
      if ( *(_WORD *)(v5 + 4) )
        goto LABEL_110;
      v70 = RtlpHpLfhPrivateSlotCreate(a1, v14, v7);
      if ( !v70 )
      {
        v113 = 1;
        goto LABEL_109;
      }
      v113 = 2;
LABEL_126:
      v126 = v70;
      v5 = v70;
LABEL_109:
      if ( !*(_WORD *)(v5 + 4) )
        goto LABEL_22;
LABEL_110:
      v24 = (__int64)v15;
      v116 = (__int64)v15;
      v25 = 0;
      v111 = 0;
      goto LABEL_23;
    }
  }
  if ( *(_WORD *)(v5 + 4) )
  {
    v70 = RtlpHpLfhPrivateSlotShutdown(a1, v5, v14, 0LL);
    goto LABEL_126;
  }
LABEL_22:
  v116 = a1 + 192;
  v25 = 2;
  v111 = 2;
  RtlpHpAcquireLockExclusive((int *)(v5 + 16), *(unsigned __int8 *)(a1 + 65), 2LL);
LABEL_23:
  while ( 1 )
  {
    if ( !*(_WORD *)(v5 + 4) )
    {
      _m_prefetchw((const void *)(v5 + 56));
      for ( i = *(_QWORD *)(v5 + 56); ; i = v57 )
      {
        if ( (i & 0xFFF) == 0 )
          goto LABEL_24;
        v57 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 56), i - 1, i);
        if ( i == v57 )
          break;
        v121 = 1;
      }
      v27 = i & 0xFFFFFFFFFFFFF000uLL;
      if ( v27 )
        break;
    }
LABEL_24:
    Subsegment = RtlpHpLfhOwnerGetSubsegment((ULONG_PTR *)a1, v5);
    v27 = Subsegment;
    if ( Subsegment )
    {
      v28 = *(_WORD *)(Subsegment + 32);
      v29 = 4096;
      if ( v28 <= 0x1000u )
        v29 = v28;
      *(_WORD *)(v27 + 32) = v28 - v29;
      if ( v29 > 1u )
        *(_QWORD *)(v5 + 56) = (v29 - 1LL) ^ (v27 ^ (v29 - 1LL)) & 0xFFFFFFFFFFFFF000uLL;
      if ( v25 )
      {
        RtlpHpReleaseLockExclusive(v5 + 16);
        v25 = 0;
      }
      v30 = v115;
      v31 = *v115 >> 1;
      if ( (unsigned int)v31 < 0x7E )
      {
        for ( j = *(unsigned __int16 *)(v116 + 2 * v31); ; j = v34 )
        {
          v33 = v29 + j;
          if ( v33 >= 0xFFFF )
            v33 = 0xFFFF;
          if ( v33 == j )
            break;
          if ( v116 != a1 + 192 )
          {
            *(_WORD *)(v116 + 2LL * (unsigned int)v31) = v33;
            break;
          }
          v34 = (unsigned __int16)_InterlockedCompareExchange16(
                                    (volatile signed __int16 *)(v116 + 2LL * (unsigned int)v31),
                                    v33,
                                    j);
          if ( v34 == j )
            break;
        }
        v30 = v115;
      }
      if ( v15 != (signed __int32 *)v116 )
        RtlpHpLfhHeatMapUpdate(a1, v15, v30, v29);
      break;
    }
    RtlpHpLfhOwnerRunMaintenance(a1, v5, (volatile __int32 **)&v118, 0);
    if ( !*(_BYTE *)(v5 + 1) )
    {
      if ( v25 )
      {
        RtlpHpReleaseLockExclusive(v5 + 16);
        v25 = 0;
        v111 = 0;
      }
      v61 = 0LL;
      v124[1] = (unsigned __int64)v124;
      v124[0] = (unsigned __int64)v124;
      if ( *(_QWORD *)(a1 + 160) )
      {
        do
        {
          v78 = RtlpHpLfhContextLockExtension(a1);
          v80 = *(_QWORD **)(a1 + 160);
          if ( v80 )
            *(_QWORD *)(a1 + 160) = *v80;
          LOBYTE(v79) = v78;
          RtlpHpLfhContextUnlockExtension(a1, v79);
          if ( !v80 )
            break;
          v81 = (unsigned __int8 *)(a1 + ((unsigned __int64)*((unsigned __int16 *)v80 - 7) << 6));
          RtlpHpLfhOwnerFreeListProcess(a1, (__int64)(v80 - 2), v124, 0);
          v83 = RtlpHpLfhHeatMapQuery(a1, a1 + 192, v81, v82);
          v84 = 8LL;
          if ( v83 < 1 )
            v84 = 4LL;
          RtlpHpLfhBucketAddSubsegment(a1, v81, v124, v84, v109, v110);
          if ( (_QWORD *)v80[3] == v80 + 3 )
          {
            RtlpHpLfhContextMetadataFree(a1, v80 - 2, 2LL);
          }
          else
          {
            *v80 = v61;
            v61 = v80;
          }
        }
        while ( *(_QWORD *)(a1 + 160) );
        v15 = v120;
        v5 = v126;
        v25 = v111;
        if ( v61 )
        {
          v85 = RtlpHpLfhContextLockExtension(a1);
          v86 = *(_QWORD **)(a1 + 160);
          do
          {
            v87 = v61;
            v61 = (_QWORD *)*v61;
            *v87 = v86;
            v86 = v87;
            *(_QWORD *)(a1 + 160) = v87;
          }
          while ( v61 );
          LOBYTE(v86) = v85;
          RtlpHpLfhContextUnlockExtension(a1, v86);
          v120 = v15;
        }
        v24 = v116;
      }
      if ( (signed __int32 *)v24 == v15 )
      {
        v62 = v113;
      }
      else
      {
        v62 = RtlpHpLfhHeatMapQuery(a1, v24, v115, v60);
        if ( v62 >= 1 )
          v62 = 1;
      }
      v63 = RtlpHpLfhBucketGetSubsegment(a1, (__int64)v115, (unsigned int)v62);
      if ( !v63 )
      {
        v63 = (__int64)RtlpHpLfhSubsegmentCreate(a1, (volatile signed __int64 *)v115, v62);
        if ( !v63 )
        {
          v54 = 0LL;
          goto LABEL_58;
        }
      }
      if ( !*(_WORD *)(v5 + 4) )
      {
        v25 = 2;
        v111 = 2;
        RtlpHpAcquireLockExclusive((int *)(v5 + 16), *(unsigned __int8 *)(a1 + 65), v64);
      }
      if ( !(unsigned int)RtlpHpLfhOwnerMoveSubsegment(a1, (char *)v5, (__int64 *)v63, 0, 0) )
      {
        if ( *(_WORD *)(v63 + 32) == *(_WORD *)(v63 + 34) )
        {
          v65 = v118;
          if ( v118[1] != (volatile __int32 **)&v118 )
            goto LABEL_143;
          *(_QWORD *)v63 = v118;
          *(_QWORD *)(v63 + 8) = &v118;
          v65[1] = (volatile __int32 **)v63;
          v118 = (volatile __int32 ***)v63;
        }
        else
        {
          v88 = v119;
          if ( *v119 != (volatile __int32 **)&v118 )
LABEL_143:
            __fastfail(3u);
          *(_QWORD *)(v63 + 8) = v119;
          *(_QWORD *)v63 = &v118;
          *v88 = v63;
          v119 = (volatile __int32 ***)v63;
        }
      }
    }
  }
  if ( v25 )
  {
    RtlpHpReleaseLockExclusive(v5 + 16);
    v25 = 0;
  }
  v35 = KeGetCurrentThread();
  v36 = qword_140E28208 ^ *(_DWORD *)(v27 + 40) ^ (v27 >> 12);
  v37 = v35[1].SchedulerApc.ApcListEntry.Blink;
  v38 = (unsigned __int64)v35[1].SchedulerApc.Reserved[0];
  v39 = *(unsigned __int8 *)(v27 + 24);
  v40 = (char *)v37 + v38;
  if ( !*(_WORD *)(v5 + 4) )
  {
    v41 = (unsigned __int64)v37 ^ v38;
    v114 = ((unsigned int)qword_140E28208 ^ *(_DWORD *)(v27 + 40) ^ (unsigned int)(v27 >> 12)) >> 16;
    v42 = (unsigned __int16)v36;
    v43 = BYTE4(v40);
    v35[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v41, 37);
    v35[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v41 ^ (v41 << 16) ^ __ROL8__(v37, 24));
    v44 = *(unsigned __int8 *)(v27 + 50);
    v127 = *(_BYTE *)(v27 + 39);
    v112 = v44;
    v45 = (signed __int64 *)(v27 + 64 + 8LL * *(unsigned __int8 *)(v27 + 36));
    v46 = v27 + 64 + 8 * ((unsigned int)(v39 - 8) - 1LL);
LABEL_45:
    v47 = *v45;
    while ( 1 )
    {
      _R8 = ~v47;
      if ( !_R8 )
      {
        if ( v45 == (signed __int64 *)v46 )
          v45 = (signed __int64 *)(v27 + 64);
        else
          ++v45;
        goto LABEL_45;
      }
      if ( (qword_140E28228 & 4) != 0 )
      {
        _RAX = 1LL << ((unsigned __int16)(v43 * __popcnt(_R8)) >> 8);
        __asm
        {
          pdep    r10, rax, r8
          tzcnt   r9, r10
        }
      }
      else
      {
        if ( v45 == (signed __int64 *)v46 || v44 != 64 )
        {
          __asm { tzcnt   rcx, r8 }
          _BitScanReverse64(&v67, _R8);
          v123 = v67;
          v68 = v67 - _RCX + 1;
          if ( v44 < v68 )
            v68 = v44;
          v43 = _RCX + ((v68 * v43) >> 8);
          _R8 = __ROR8__(_R8, v43);
          __asm { tzcnt   r9, r8 }
          LODWORD(_R9) = v43 + _R9;
        }
        else
        {
          _R8 = __ROR8__(_R8, v43);
          __asm { tzcnt   r9, r8 }
          LODWORD(_R9) = ((_BYTE)v43 + (_BYTE)_R9) & 0x3F;
        }
        _R10 = 1LL << _R9;
      }
      _m_prefetchw(v45);
      v47 = _InterlockedOr64(v45, _R10);
      if ( (_R10 & v47) == 0 )
        break;
      v44 = v112;
    }
    v52 = _R9 + 8 * ((_DWORD)v45 - (v27 + 64));
    *(_BYTE *)(v27 + 36) = v52 >> 6;
    v53 = v114 + v52 * v42;
    if ( v127 <= 1u )
    {
      if ( v52 > *(unsigned __int16 *)(v27 + 48) )
        RtlpHpLfhSubsegmentPrefetch(a1, v27, (unsigned int)v53);
    }
    else if ( (int)RtlpHpLfhSubsegmentCommitBlock(a1, v27, (unsigned int)v53) < 0 )
    {
      v54 = 0LL;
      if ( v52 != -1 )
      {
        _InterlockedAnd64(
          (volatile signed __int64 *)(v27 + 8 * ((unsigned __int64)v52 >> 6) + 64),
          __ROL8__(-2LL, v52 & 0x3F));
LABEL_76:
        v59 = *(_QWORD *)(v27 + 16);
        do
        {
          v128 = v59;
          v97 = BYTE6(v59);
          v117 = HIDWORD(v59);
          if ( BYTE6(v59) == 1 )
            v97 = 2;
          WORD1(v128) = WORD1(v59) + 1;
          BYTE6(v128) = v97;
          v98 = (unsigned __int64)*(unsigned __int16 *)(v27 + 44) << 6;
          v99 = v59;
          v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 16), v128, v59);
        }
        while ( v99 != v59 );
        if ( !*(_BYTE *)(v98 + a1 + 92) )
        {
          *(_BYTE *)(v98 + a1 + 92) = 1;
          if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)a1 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
            RtlpHpEnvCompactionSchedule(*(_QWORD **)(*(_QWORD *)a1 + 56LL));
        }
        if ( BYTE2(v117) == 1 )
        {
          v101 = (unsigned __int16)v117 << 6;
          v102 = (signed __int64 *)(v101 + a1 + 8);
          _m_prefetchw(v102);
          v103 = *v102;
          v104 = *(_QWORD *)(v27 + 24);
          v105 = *v102 & 0xFFF;
          *(_QWORD *)(v27 + 24) = v104 & 0xFFF | (*v102 - v105);
          v107 = v103;
          v106 = _InterlockedCompareExchange64(v102, v105 | v27, v103);
          if ( v107 != v106 )
          {
            do
            {
              v108 = v106;
              *(_QWORD *)(v27 + 24) = v104 ^ (v106 ^ v104) & 0xFFFFFFFFFFFFF000uLL;
              v106 = _InterlockedCompareExchange64((volatile signed __int64 *)(v101 + a1 + 8), v27 | v106 & 0xFFF, v106);
            }
            while ( v106 != v108 );
          }
        }
        goto LABEL_58;
      }
LABEL_57:
      if ( v54 )
        goto LABEL_58;
      goto LABEL_76;
    }
    v54 = v27 + v53;
    if ( (a4 & 2) != 0 )
      RtlHeapZero(v54, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    goto LABEL_57;
  }
  v89 = (unsigned __int64)v37 ^ v38;
  v129 = ((unsigned int)qword_140E28208 ^ *(_DWORD *)(v27 + 40) ^ (unsigned int)(v27 >> 12)) >> 16;
  v90 = (unsigned __int16)v36;
  v35[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v89, 37);
  v91 = v27 + 64 + 8 * ((unsigned int)(v39 - 8) - 1LL);
  v35[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v89 ^ (v89 << 16) ^ __ROL8__(v37, 24));
  v92 = (_QWORD *)(v27 + 64 + 8LL * *(unsigned __int8 *)(v27 + 36));
  while ( *v92 == -1LL )
  {
    if ( v92 == (_QWORD *)v91 )
      v92 = (_QWORD *)(v27 + 64);
    else
      ++v92;
  }
  _RAX = 1LL << ((unsigned __int16)(BYTE4(v40) * (unsigned __int16)__popcnt(~*v92)) >> 8);
  __asm
  {
    pdep    rcx, rax, rcx
    tzcnt   rax, rcx
  }
  *v92 |= _RCX;
  v96 = (_DWORD)v92 - (v27 + 64);
  *(_BYTE *)(v27 + 36) = (unsigned int)(_RAX + 8 * v96) >> 6;
  v54 = v27 + ((_DWORD)_RAX + 8 * v96) * v90 + (unsigned int)v129;
  if ( (a4 & 2) != 0 )
    RtlHeapZero(v54, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
LABEL_58:
  if ( v25 )
    RtlpHpReleaseLockExclusive(v5 + 16);
  if ( v121 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, v115);
  if ( v118 != (volatile __int32 ***)&v118 )
    RtlpHpLfhBucketAddSubsegment(a1, v115, &v118, 0LL, v109, v110);
  return v54;
}
