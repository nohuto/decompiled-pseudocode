/*
 * XREFs of RtlpHpLfhSlotAllocateSlow @ 0x14035EE00
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeap @ 0x1403E93B0 (RtlpHpAllocateHeap.c)
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpReleaseLockShared @ 0x140219598 (RtlpHpReleaseLockShared.c)
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14035EA3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x14035EB70 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpEnvTlsGetValue @ 0x14035F690 (RtlpHpEnvTlsGetValue.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x140360750 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1403D81F0 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403D8700 (RtlpHpLfhOwnerRunMaintenance.c)
 *     RtlpHpLfhOwnerFreeListProcess @ 0x1403D8924 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1403D9464 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1404321F4 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhHeatMapUpdate @ 0x14044FD54 (RtlpHpLfhHeatMapUpdate.c)
 *     RtlpHpLfhHeatMapDecayCounts @ 0x140454F4C (RtlpHpLfhHeatMapDecayCounts.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1404A2CC0 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1404B4594 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1404E7284 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1404E751C (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2F1C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvTlsSetValue @ 0x1404F2F94 (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpLfhContextLockExtension @ 0x140603DC0 (RtlpHpLfhContextLockExtension.c)
 *     RtlpHpLfhContextMetadataFree @ 0x140603E74 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextUnlockExtension @ 0x140603F8C (RtlpHpLfhContextUnlockExtension.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x1406040C0 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140604374 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlHeapZero @ 0x1406B5ED0 (RtlHeapZero.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSlotAllocateSlow(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r13
  unsigned __int8 *v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 Value; // rbx
  int v10; // r9d
  unsigned int v11; // r10d
  signed __int32 *v12; // r14
  __int64 v13; // r11
  signed __int32 v14; // eax
  __int64 v15; // rcx
  int v16; // edx
  signed __int32 v17; // ett
  unsigned int v18; // edx
  unsigned int v19; // ecx
  signed int v20; // edi
  __int64 v21; // r12
  int v22; // r13d
  KIRQL v23; // di
  volatile __int32 *Subsegment; // rax
  unsigned __int64 v25; // rbx
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // di
  volatile LONG *v28; // rcx
  unsigned __int8 *v29; // rcx
  __int64 v30; // rax
  int j; // edx
  unsigned int v32; // ecx
  int v33; // ecx
  struct _KTHREAD *v34; // r9
  int v35; // eax
  struct _LIST_ENTRY *v36; // rcx
  unsigned __int64 v37; // rdx
  bool v38; // zf
  int v39; // r10d
  char *v40; // r8
  unsigned __int64 v41; // rdx
  int v42; // r12d
  int v43; // r11d
  unsigned int v44; // r9d
  signed __int64 *v45; // rdx
  __int64 v46; // r14
  signed __int64 v47; // r8
  unsigned int v53; // r14d
  __int64 v54; // rdi
  unsigned __int64 v55; // rdi
  signed __int64 i; // rbx
  signed __int64 v58; // rax
  signed __int64 v60; // rax
  volatile LONG *v61; // rcx
  _QWORD *v62; // rbx
  int v63; // edi
  __int64 v64; // rbx
  int v65; // eax
  __int64 v66; // rax
  volatile LONG *v67; // rcx
  unsigned __int64 v69; // rax
  unsigned int v70; // eax
  signed __int32 *v73; // rax
  signed __int32 *v74; // rdi
  __int64 v75; // rax
  volatile LONG *v76; // rcx
  struct _KTHREAD *CurrentThread; // r9
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v79; // rdx
  char *v80; // r8
  unsigned __int64 v81; // rdx
  char v82; // al
  __int64 v83; // rdx
  _QWORD *v84; // r12
  __int64 v85; // rdi
  int v86; // eax
  char v87; // r9
  char v88; // al
  _QWORD *v89; // rdx
  _QWORD *v90; // rcx
  __int64 *v91; // rax
  unsigned __int64 v92; // rdx
  int v93; // r11d
  __int64 v94; // r10
  signed __int64 *v95; // rdx
  int v99; // edx
  char v100; // dl
  unsigned __int64 v101; // rdx
  signed __int64 v102; // rtt
  signed __int64 *v104; // roff
  signed __int64 v105; // rax
  __int64 v106; // r10
  __int64 v107; // rdx
  signed __int64 v108; // rax
  signed __int64 v109; // rtt
  int v110; // [rsp+38h] [rbp-39h]
  unsigned int v111; // [rsp+38h] [rbp-39h]
  int v112; // [rsp+3Ch] [rbp-35h]
  unsigned __int16 v113; // [rsp+3Eh] [rbp-33h]
  unsigned __int8 *v114; // [rsp+40h] [rbp-31h]
  __int64 v115; // [rsp+48h] [rbp-29h]
  int v116; // [rsp+4Ch] [rbp-25h]
  __int64 v117; // [rsp+50h] [rbp-21h] BYREF
  __int64 *v118; // [rsp+58h] [rbp-19h]
  signed __int32 *v119; // [rsp+60h] [rbp-11h]
  int v120; // [rsp+68h] [rbp-9h]
  int v121; // [rsp+6Ch] [rbp-5h]
  _QWORD v122[11]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v123; // [rsp+D8h] [rbp+67h]
  KIRQL v124; // [rsp+D8h] [rbp+67h]
  __int64 v125; // [rsp+E0h] [rbp+6Fh]
  unsigned __int8 v126; // [rsp+E0h] [rbp+6Fh]
  signed __int64 v127; // [rsp+E0h] [rbp+6Fh]
  unsigned __int16 v128; // [rsp+E2h] [rbp+71h]

  v125 = a2;
  v4 = *(unsigned __int16 *)(a2 + 2);
  v118 = &v117;
  v6 = (unsigned __int8 *)(a1 + (v4 << 6));
  v117 = (__int64)&v117;
  v7 = *(unsigned int *)(a1 + 76);
  v114 = v6;
  v8 = a2;
  v120 = 0;
  Value = RtlpHpEnvTlsGetValue(v7);
  if ( !Value )
  {
    Value = RtlpHpLfhThreadDataInitializeSet(a1);
    v11 = 0;
  }
  v12 = (signed __int32 *)(a1 + ((unsigned __int64)WORD1(Value) << 6));
  v13 = *v6 >> 1;
  v119 = v12;
  if ( (unsigned int)v13 >= 0x7E )
  {
    v18 = v11;
  }
  else
  {
    v14 = v12[63];
    while ( 1 )
    {
      v15 = MEMORY[0xFFFFF78000000008] >> 20;
      v16 = (MEMORY[0xFFFFF78000000008] >> 20) - v14;
      if ( (unsigned int)(MEMORY[0xFFFFF78000000008] >> 20) == v14 )
        break;
      v17 = v14;
      v14 = _InterlockedCompareExchange(v12 + 63, v15, v14);
      if ( v17 == v14 )
      {
        RtlpHpLfhHeatMapDecayCounts(v15, v16, a1 + (WORD1(Value) << 6), v10, v16);
        break;
      }
    }
    v18 = *((unsigned __int16 *)v12 + v13);
    v11 = 0;
  }
  v19 = ((unsigned int)RtlpHpLfhPerfFlags >> 8) & 3;
  if ( v19 )
  {
    if ( v19 == 2 )
    {
      v20 = 2;
      goto LABEL_14;
    }
    if ( v19 != 1 )
    {
      CurrentThread = KeGetCurrentThread();
      Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
      v79 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
      v80 = (char *)Blink + v79;
      v81 = (unsigned __int64)Blink ^ v79;
      CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v81, 37);
      CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v81 ^ (v81 << 16) ^ __ROL8__(Blink, 24));
      v20 = BYTE4(v80) % 3u;
      goto LABEL_14;
    }
  }
  else
  {
    if ( (RtlpHpLfhPerfFlags & 1) == 0 || v18 < *((unsigned __int16 *)v6 + 38) )
    {
      v20 = v11;
      goto LABEL_14;
    }
    if ( v18 >= *((unsigned __int16 *)v6 + 39) )
    {
      v20 = ((*(_BYTE *)(a1 + 72) & 1) != 0) + 1;
      goto LABEL_14;
    }
  }
  v20 = 1;
LABEL_14:
  v21 = a1 + 192;
  if ( v12 == (signed __int32 *)(a1 + 192) && v20 >= 1 )
  {
    v123 = Value;
    if ( (*(_DWORD *)(a1 + 72) & 1) != 0 )
    {
      v73 = (signed __int32 *)RtlpHpLfhContextMetadataAllocate(a1, 1LL);
      v119 = v73;
      v12 = v73;
      v74 = v73;
      if ( v73 )
      {
        memset_0(v73, 0, 0x100uLL);
        v12[63] = MEMORY[0xFFFFF78000000008] >> 20;
        WORD1(v123) = ((unsigned __int64)v12 - a1) >> 6;
        if ( (int)RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 76), v123) < 0 )
        {
          v119 = (signed __int32 *)(a1 + 192);
          v12 = (signed __int32 *)(a1 + 192);
          RtlpHpLfhContextMetadataFree(a1, v74, 1LL);
        }
      }
      else
      {
        v12 = (signed __int32 *)(a1 + 192);
        v119 = (signed __int32 *)(a1 + 192);
      }
    }
    else
    {
      v12 = (signed __int32 *)(a1 + 192);
      v119 = (signed __int32 *)(a1 + 192);
    }
    v112 = 1;
    LOWORD(v11) = 0;
  }
  else
  {
    v112 = v20;
    if ( v20 == 2 )
    {
      v112 = 2;
      if ( *(_WORD *)(v8 + 4) != (_WORD)v11 )
        goto LABEL_119;
      v75 = RtlpHpLfhPrivateSlotCreate(a1, Value, v6, 2LL);
      v11 = 0;
      if ( !v75 )
      {
        v112 = 1;
        goto LABEL_118;
      }
      v112 = 2;
LABEL_139:
      v125 = v75;
      v8 = v75;
LABEL_118:
      if ( !*(_WORD *)(v8 + 4) )
        goto LABEL_22;
LABEL_119:
      v21 = (__int64)v12;
      v115 = (__int64)v12;
      v22 = v11;
      v110 = v11;
      v23 = v11;
      v124 = v11;
      goto LABEL_23;
    }
  }
  if ( *(_WORD *)(v8 + 4) != (_WORD)v11 )
  {
    v75 = RtlpHpLfhPrivateSlotShutdown(a1, v8, Value, 0LL);
    v11 = 0;
    goto LABEL_139;
  }
LABEL_22:
  v115 = a1 + 192;
  v22 = 2;
  v110 = 2;
  v23 = RtlpHpAcquireLockExclusive((int *)(v8 + 16), *(unsigned __int8 *)(a1 + 65));
  v124 = v23;
  LOWORD(v11) = 0;
LABEL_23:
  while ( 1 )
  {
    if ( *(_WORD *)(v8 + 4) == (_WORD)v11 )
    {
      _m_prefetchw((const void *)(v8 + 56));
      for ( i = *(_QWORD *)(v8 + 56); ; i = v58 )
      {
        if ( (i & 0xFFF) == 0 )
          goto LABEL_24;
        v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 56), i - 1, i);
        if ( i == v58 )
          break;
        v120 = 1;
      }
      v25 = i & 0xFFFFFFFFFFFFF000uLL;
      if ( v25 )
        break;
    }
LABEL_24:
    Subsegment = RtlpHpLfhOwnerGetSubsegment(a1, v8);
    v25 = (unsigned __int64)Subsegment;
    if ( Subsegment )
    {
      v26 = *((_WORD *)Subsegment + 16);
      v27 = 4096;
      if ( v26 <= 0x1000u )
        v27 = v26;
      *(_WORD *)(v25 + 32) = v26 - v27;
      if ( v27 > 1u )
        *(_QWORD *)(v8 + 56) = (v27 - 1LL) ^ ((v27 - 1LL) ^ v25) & 0xFFFFFFFFFFFFF000uLL;
      if ( v22 )
      {
        v28 = (volatile LONG *)(v8 + 16);
        if ( v22 == 2 )
          RtlpHpReleaseLockExclusive((ULONG_PTR)v28);
        else
          RtlpHpReleaseLockShared(v28, *(unsigned __int8 *)(a1 + 65), v124);
        v22 = 0;
      }
      v29 = v114;
      v30 = *v114 >> 1;
      if ( (unsigned int)v30 < 0x7E )
      {
        for ( j = *(unsigned __int16 *)(v115 + 2 * v30); ; j = v33 )
        {
          v32 = j + v27;
          if ( v32 >= 0xFFFF )
            v32 = 0xFFFF;
          if ( v32 == j )
            break;
          if ( v115 != a1 + 192 )
          {
            *(_WORD *)(v115 + 2LL * (unsigned int)v30) = v32;
            break;
          }
          v33 = (unsigned __int16)_InterlockedCompareExchange16(
                                    (volatile signed __int16 *)(v115 + 2LL * (unsigned int)v30),
                                    v32,
                                    j);
          if ( v33 == j )
            break;
        }
        v29 = v114;
      }
      if ( v12 != (signed __int32 *)v115 )
        RtlpHpLfhHeatMapUpdate(a1, v12, v29, v27);
      LOWORD(v11) = 0;
      break;
    }
    RtlpHpLfhOwnerRunMaintenance(a1, v8, &v117, 0LL);
    LOWORD(v11) = 0;
    if ( !*(_BYTE *)(v8 + 1) )
    {
      if ( v22 )
      {
        v61 = (volatile LONG *)(v8 + 16);
        if ( v22 == 2 )
          RtlpHpReleaseLockExclusive((ULONG_PTR)v61);
        else
          RtlpHpReleaseLockShared(v61, *(unsigned __int8 *)(a1 + 65), v23);
        v22 = 0;
        v110 = 0;
      }
      v62 = 0LL;
      v122[1] = v122;
      v122[0] = v122;
      if ( *(_QWORD *)(a1 + 160) )
      {
        do
        {
          v82 = RtlpHpLfhContextLockExtension(a1);
          v84 = *(_QWORD **)(a1 + 160);
          if ( v84 )
            *(_QWORD *)(a1 + 160) = *v84;
          LOBYTE(v83) = v82;
          RtlpHpLfhContextUnlockExtension(a1, v83);
          if ( !v84 )
            break;
          v85 = a1 + ((unsigned __int64)*((unsigned __int16 *)v84 - 7) << 6);
          RtlpHpLfhOwnerFreeListProcess(a1, v84 - 2, v122, 0LL);
          v86 = RtlpHpLfhHeatMapQuery(a1, a1 + 192, v85);
          v87 = 8;
          if ( v86 < 1 )
            v87 = 4;
          RtlpHpLfhBucketAddSubsegment(a1, v85, v122, v87);
          if ( (_QWORD *)v84[3] == v84 + 3 )
          {
            RtlpHpLfhContextMetadataFree(a1, v84 - 2, 2LL);
          }
          else
          {
            *v84 = v62;
            v62 = v84;
          }
        }
        while ( *(_QWORD *)(a1 + 160) );
        v12 = v119;
        v8 = v125;
        v22 = v110;
        if ( v62 )
        {
          v88 = RtlpHpLfhContextLockExtension(a1);
          v89 = *(_QWORD **)(a1 + 160);
          do
          {
            v90 = v62;
            v62 = (_QWORD *)*v62;
            *v90 = v89;
            v89 = v90;
            *(_QWORD *)(a1 + 160) = v90;
          }
          while ( v62 );
          LOBYTE(v89) = v88;
          RtlpHpLfhContextUnlockExtension(a1, v89);
          v119 = v12;
        }
        v21 = v115;
      }
      if ( (signed __int32 *)v21 == v12 )
      {
        v63 = v112;
      }
      else
      {
        v63 = RtlpHpLfhHeatMapQuery(a1, v21, v114);
        if ( v63 >= 1 )
          v63 = 1;
      }
      v64 = RtlpHpLfhBucketGetSubsegment(a1, v114, (unsigned int)v63);
      if ( !v64 )
      {
        v64 = RtlpHpLfhSubsegmentCreate(a1, (__int64)v114);
        if ( !v64 )
        {
          v55 = 0LL;
          goto LABEL_60;
        }
      }
      if ( *(_WORD *)(v8 + 4) )
      {
        v23 = v124;
      }
      else
      {
        v22 = 2;
        v110 = 2;
        v23 = RtlpHpAcquireLockExclusive((int *)(v8 + 16), *(unsigned __int8 *)(a1 + 65));
        v124 = v23;
      }
      v65 = RtlpHpLfhOwnerMoveSubsegment(a1, v8, v64, 0, 0);
      LOWORD(v11) = 0;
      if ( !v65 )
      {
        if ( *(_WORD *)(v64 + 32) == *(_WORD *)(v64 + 34) )
        {
          v66 = v117;
          if ( *(__int64 **)(v117 + 8) != &v117 )
            goto LABEL_156;
          *(_QWORD *)v64 = v117;
          *(_QWORD *)(v64 + 8) = &v117;
          *(_QWORD *)(v66 + 8) = v64;
          v117 = v64;
        }
        else
        {
          v91 = v118;
          if ( (__int64 *)*v118 != &v117 )
LABEL_156:
            __fastfail(3u);
          *(_QWORD *)(v64 + 8) = v118;
          *(_QWORD *)v64 = &v117;
          *v91 = v64;
          v118 = (__int64 *)v64;
        }
      }
    }
  }
  if ( v22 )
  {
    v67 = (volatile LONG *)(v8 + 16);
    if ( v22 == 2 )
      RtlpHpReleaseLockExclusive((ULONG_PTR)v67);
    else
      RtlpHpReleaseLockShared(v67, *(unsigned __int8 *)(a1 + 65), v124);
    LOWORD(v11) = 0;
    v22 = 0;
  }
  v34 = KeGetCurrentThread();
  v35 = qword_140E28348 ^ *(_DWORD *)(v25 + 40) ^ (v25 >> 12);
  v36 = v34[1].SchedulerApc.ApcListEntry.Blink;
  v37 = (unsigned __int64)v34[1].SchedulerApc.Reserved[0];
  v38 = *(_WORD *)(v8 + 4) == (unsigned __int16)v11;
  v39 = *(unsigned __int8 *)(v25 + 24);
  v40 = (char *)v36 + v37;
  if ( v38 )
  {
    v41 = (unsigned __int64)v36 ^ v37;
    v113 = ((unsigned int)qword_140E28348 ^ *(_DWORD *)(v25 + 40) ^ (unsigned int)(v25 >> 12)) >> 16;
    v42 = (unsigned __int16)v35;
    v43 = BYTE4(v40);
    v34[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v41, 37);
    v34[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v41 ^ (v41 << 16) ^ __ROL8__(v36, 24));
    v44 = *(unsigned __int8 *)(v25 + 50);
    v126 = *(_BYTE *)(v25 + 39);
    v111 = v44;
    v45 = (signed __int64 *)(v25 + 64 + 8LL * *(unsigned __int8 *)(v25 + 36));
    v46 = v25 + 64 + 8 * ((unsigned int)(v39 - 8) - 1LL);
LABEL_47:
    v47 = *v45;
    while ( 1 )
    {
      _R8 = ~v47;
      if ( !_R8 )
      {
        if ( v45 == (signed __int64 *)v46 )
          v45 = (signed __int64 *)(v25 + 64);
        else
          ++v45;
        goto LABEL_47;
      }
      if ( (qword_140E28368 & 4) != 0 )
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
          _BitScanReverse64(&v69, _R8);
          v121 = v69;
          v70 = v69 - _RCX + 1;
          if ( v44 < v70 )
            v70 = v44;
          v43 = _RCX + ((v70 * v43) >> 8);
          _R8 = __ROR8__(_R8, v43);
          __asm { tzcnt   r9, r8 }
          _R9 = (unsigned int)(v43 + _R9);
        }
        else
        {
          _R8 = __ROR8__(_R8, v43);
          __asm { tzcnt   r9, r8 }
          _R9 = ((_BYTE)v43 + (_BYTE)_R9) & 0x3F;
        }
        _R10 = 1LL << _R9;
      }
      _m_prefetchw(v45);
      v47 = _InterlockedOr64(v45, _R10);
      if ( (_R10 & v47) == 0 )
        break;
      v44 = v111;
    }
    v53 = _R9 + 8 * ((_DWORD)v45 - (v25 + 64));
    *(_BYTE *)(v25 + 36) = v53 >> 6;
    v54 = v113 + v53 * v42;
    if ( v126 <= 1u )
    {
      if ( v53 > *(unsigned __int16 *)(v25 + 48) )
        RtlpHpLfhSubsegmentPrefetch(a1, v25, (unsigned int)v54);
    }
    else if ( (int)RtlpHpLfhSubsegmentCommitBlock(a1, v25, (unsigned int)v54) < 0 )
    {
      v55 = 0LL;
      if ( v53 != -1 )
      {
        _InterlockedAnd64(
          (volatile signed __int64 *)(v25 + 8 * ((unsigned __int64)v53 >> 6) + 64),
          __ROL8__(-2LL, v53 & 0x3F));
LABEL_78:
        v60 = *(_QWORD *)(v25 + 16);
        v47 = 2LL;
        do
        {
          v127 = v60;
          v100 = BYTE6(v60);
          v116 = HIDWORD(v60);
          if ( BYTE6(v60) == 1 )
            v100 = 2;
          WORD1(v127) = WORD1(v60) + 1;
          BYTE6(v127) = v100;
          v101 = (unsigned __int64)*(unsigned __int16 *)(v25 + 44) << 6;
          v102 = v60;
          v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 16), v127, v60);
        }
        while ( v102 != v60 );
        if ( !*(_BYTE *)(v101 + a1 + 92) )
        {
          *(_BYTE *)(v101 + a1 + 92) = 1;
          if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)a1 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
            RtlpHpEnvCompactionSchedule(*(_QWORD **)(*(_QWORD *)a1 + 56LL));
        }
        if ( BYTE2(v116) == 1 )
        {
          _R9 = (unsigned __int16)v116 << 6;
          v104 = (signed __int64 *)(_R9 + a1 + 8);
          _m_prefetchw(v104);
          v105 = *v104;
          v106 = *(_QWORD *)(v25 + 24);
          v107 = *v104 & 0xFFF;
          v47 = v106 & 0xFFF;
          *(_QWORD *)(v25 + 24) = v47 | (*v104 - v107);
          v109 = v105;
          v108 = _InterlockedCompareExchange64(v104, v107 | v25, v105);
          if ( v109 != v108 )
          {
            do
            {
              v47 = v108;
              *(_QWORD *)(v25 + 24) = v106 ^ (v106 ^ v108) & 0xFFFFFFFFFFFFF000uLL;
              v108 = _InterlockedCompareExchange64((volatile signed __int64 *)(_R9 + a1 + 8), v25 | v108 & 0xFFF, v108);
            }
            while ( v108 != v47 );
          }
        }
        goto LABEL_60;
      }
LABEL_59:
      if ( v55 )
        goto LABEL_60;
      goto LABEL_78;
    }
    v55 = v25 + v54;
    if ( (a4 & 2) != 0 )
      RtlHeapZero(v55, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    goto LABEL_59;
  }
  v92 = (unsigned __int64)v36 ^ v37;
  v128 = ((unsigned int)qword_140E28348 ^ *(_DWORD *)(v25 + 40) ^ (unsigned int)(v25 >> 12)) >> 16;
  v93 = (unsigned __int16)v35;
  v34[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v92, 37);
  v34[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v92 ^ (v92 << 16) ^ __ROL8__(v36, 24));
  _R9 = v25 + 64;
  v94 = v25 + 64 + 8 * ((unsigned int)(v39 - 8) - 1LL);
  v95 = (signed __int64 *)(v25 + 64 + 8LL * *(unsigned __int8 *)(v25 + 36));
  while ( *v95 == -1 )
  {
    if ( v95 == (signed __int64 *)v94 )
      v95 = (signed __int64 *)(v25 + 64);
    else
      ++v95;
  }
  _RAX = 1LL << ((unsigned __int16)(BYTE4(v40) * (unsigned __int16)__popcnt(~*v95)) >> 8);
  __asm { pdep    rcx, rax, rcx }
  v47 = _RCX | *v95;
  __asm { tzcnt   rax, rcx }
  *v95 = v47;
  v99 = (_DWORD)v95 - _R9;
  *(_BYTE *)(v25 + 36) = (unsigned int)(_RAX + 8 * v99) >> 6;
  v55 = v25 + ((_DWORD)_RAX + 8 * v99) * v93 + (unsigned int)v128;
  if ( (a4 & 2) != 0 )
    RtlHeapZero(v55, (a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
LABEL_60:
  if ( v22 )
  {
    v76 = (volatile LONG *)(v8 + 16);
    if ( v22 == 2 )
      RtlpHpReleaseLockExclusive((ULONG_PTR)v76);
    else
      RtlpHpReleaseLockShared(v76, *(unsigned __int8 *)(a1 + 65), v124);
  }
  if ( v120 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, v114, v47, _R9);
  if ( (__int64 *)v117 != &v117 )
    RtlpHpLfhBucketAddSubsegment(a1, (__int64)v114, &v117, 0);
  return v55;
}
