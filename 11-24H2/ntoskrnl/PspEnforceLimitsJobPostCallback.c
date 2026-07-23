/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x14085E4B0
 * Callers:
 *     PspCallJobHierarchyCallbacks @ 0x14085D828 (PspCallJobHierarchyCallbacks.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     PspSendJobNotification @ 0x14048E6FC (PspSendJobNotification.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140777E50 (PspSendNoWakeChargeLimitNotification.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x14085C7FC (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspLockJobExclusive @ 0x14085CC60 (PspLockJobExclusive.c)
 *     PspAddAccountingValues @ 0x14085EB2C (PspAddAccountingValues.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     PspLockJobMemoryLimitsShared @ 0x14085ED08 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x14085ED70 (PspRateControlLimitFlag.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x14085ED94 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobShared @ 0x14085EE04 (PspLockJobShared.c)
 *     PspSendReliableJobNotification @ 0x140861974 (PspSendReliableJobNotification.c)
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(char *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  int v7; // eax
  bool v8; // zf
  __int64 v9; // r12
  int v10; // esi
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r13
  int v14; // r8d
  __int8 *v15; // r9
  char *v16; // r10
  unsigned int *v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  void *v22; // r9
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // r9
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r8
  int v30; // eax
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rdx
  int v38; // ecx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v43; // [rsp+30h] [rbp-D0h]
  __int64 v44; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v45; // [rsp+40h] [rbp-C0h]
  __int64 v46; // [rsp+48h] [rbp-B8h]
  __int64 v47; // [rsp+50h] [rbp-B0h]
  __int128 v48; // [rsp+70h] [rbp-90h]
  __int128 v49; // [rsp+B0h] [rbp-50h]
  __int128 v50; // [rsp+E0h] [rbp-20h] BYREF
  __m256i v51; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v52; // [rsp+110h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
  v4 = *((_QWORD *)Object + 152);
  if ( v4 )
  {
    v24 = *(_OWORD *)(v4 + 24);
    v50 = *(_OWORD *)(v4 + 8);
    v25 = *(_OWORD *)(v4 + 40);
    *(_OWORD *)v51.m256i_i8 = v24;
    v26 = *(_OWORD *)(v4 + 56);
    *(_OWORD *)&v51.m256i_u64[2] = v25;
    v52 = v26;
  }
  else
  {
    memset_0(&v50, 0, 0x40uLL);
  }
  v5 = *((_QWORD *)Object + 76);
  v6 = *((_QWORD *)Object + 77);
  v48 = *(_OWORD *)(Object + 1352);
  v49 = *(_OWORD *)(Object + 1416);
  v46 = *((_QWORD *)Object + 20);
  v47 = *((_QWORD *)Object + 23);
  v41 = *((_DWORD *)Object + 137);
  if ( (*((_DWORD *)Object + 64) & 4) != 0 )
    v43 = *((_QWORD *)Object + 29);
  else
    v43 = 0LL;
  v7 = *((_DWORD *)Object + 388);
  v45 = 0LL;
  v44 = 0LL;
  if ( (v7 & 0x800) != 0 )
  {
    if ( *((_DWORD *)Object + 266) )
    {
      v45 = *((_QWORD *)Object + 147);
      if ( (v7 & 0x400000) == 0 )
      {
        v33 = *((_QWORD *)Object + 163);
        if ( !v33 || (*(_DWORD *)(v33 + 1552) & 0x1000) == 0 || !*(_DWORD *)(v33 + 1064) )
        {
          v44 = *((_QWORD *)Object + 147);
          if ( v33 )
            _InterlockedOr((volatile signed __int32 *)(v33 + 1552), 0x400000u);
        }
      }
    }
  }
  if ( (*((_DWORD *)Object + 388) & 0x400000) != 0 )
  {
    v32 = *((_QWORD *)Object + 163);
    if ( v32 )
      _InterlockedOr((volatile signed __int32 *)(v32 + 1552), 0x400000u);
    _InterlockedAnd((volatile signed __int32 *)Object + 388, 0xFFBFFFFF);
  }
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  if ( CurrentThread )
  {
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  v9 = v50;
  v10 = 0;
  if ( (_QWORD)v50 && v5 + (__int64)v49 > (unsigned __int64)v50 )
    v10 = 0x10000;
  v11 = *((_QWORD *)&v50 + 1);
  if ( *((_QWORD *)&v50 + 1) && (unsigned __int64)(v6 + *((_QWORD *)&v49 + 1)) > *((_QWORD *)&v50 + 1) )
    v10 |= 0x20000u;
  v12 = v51.m256i_i64[0];
  if ( v51.m256i_i64[0] && (unsigned __int64)(*((_QWORD *)&v48 + 1) + v46) > v51.m256i_i64[0] )
    v10 |= 4u;
  v13 = v51.m256i_i64[2];
  if ( *(_OWORD *)&v51.m256i_u64[1] != 0LL )
  {
    PspLockJobMemoryLimitsShared(Object, CurrentThread);
    v27 = *((_QWORD *)Object + 152);
    v28 = *(_QWORD *)(v27 + 40);
    v29 = *((_QWORD *)Object + 151) + *((_QWORD *)Object + 196);
    if ( (*(_DWORD *)v27 & 0x200000) == 0 )
      v29 = *((_QWORD *)Object + 151);
    v30 = 0;
    if ( v28 && v29 > v28 )
      v30 = 512;
    v31 = *(_QWORD *)(v27 + 32);
    if ( v31 && v29 < v31 )
      v30 |= 0x8000u;
    v10 |= v30;
    PspUnlockJobMemoryLimitsShared(Object, CurrentThread);
    v13 = v51.m256i_i64[2];
    v12 = v51.m256i_i64[0];
    v11 = *((_QWORD *)&v50 + 1);
    v9 = v50;
  }
  v14 = 0;
  v15 = &v51.m256i_i8[-a2 + 24];
  v16 = (char *)&v50 - a2 + 8;
  v17 = (unsigned int *)(a2 + 44);
  do
  {
    v18 = *(unsigned int *)((char *)v17 + (_QWORD)v15 - 44);
    if ( v18 && *(v17 - 3) == *(unsigned int *)((char *)v17 + (_QWORD)v16) && *v17 >= v18 )
      v10 |= PspRateControlLimitFlag((unsigned int)v14);
    ++v14;
    ++v17;
  }
  while ( v14 < 3 );
  if ( v10 )
  {
    PspLockJobExclusive((__int64)Object, (__int64)CurrentThread);
    v34 = *((_QWORD *)Object + 152);
    if ( v34 )
    {
      *(_DWORD *)(v34 + 4) |= v10;
      v35 = (_QWORD *)(*((_QWORD *)Object + 152) + 72LL);
      if ( (v10 & 0x10000) != 0 )
        *v35 = v9;
      if ( (v10 & 0x20000) != 0 )
        v35[1] = v11;
      if ( (v10 & 4) != 0 )
        v35[2] = v12;
      if ( (v10 & 0x200) != 0 )
        v35[4] = v13;
      if ( (v10 & 0x8000) != 0 )
        v35[3] = v51.m256i_i64[1];
      v36 = 0LL;
      do
      {
        if ( ((unsigned int)PspRateControlLimitFlag(v36) & v10) != 0 )
        {
          *(v37 - 3) = *(_DWORD *)((char *)v37 + v39 - 52);
          *v37 = *(_DWORD *)((char *)v37 + v40);
        }
        v36 = (unsigned int)(v38 + 1);
      }
      while ( (int)v36 < 3 );
    }
    if ( *((_QWORD *)Object + 69) && (*((_DWORD *)Object + 276) & 0x800) != 0 && (Object[1552] & 4) == 0 )
      PspSendReliableJobNotification(Object);
    PspUnlockJob(Object, CurrentThread);
  }
  v19 = *(_QWORD *)(a2 + 16);
  if ( v19 )
  {
    if ( (*(_DWORD *)(v19 + 496) & 1) == 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v19 + 496), 0xFFFFFFDF);
      PspRemoveProcessFromJobChain(*(PEPROCESS *)(a2 + 16));
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 16));
  }
  if ( v43 && *((_QWORD *)&v48 + 1) + v47 > v43 )
  {
    if ( v41 )
    {
      if ( v41 != 1 )
        goto LABEL_24;
      PspLockJobShared(Object, CurrentThread);
      if ( !*((_QWORD *)Object + 69) || (*((_DWORD *)Object + 276) & 2) == 0 )
      {
        PspUnlockJob(Object, CurrentThread);
        PspTerminateAllProcessesInJobHierarchy((PRKEVENT)Object, -1073741756, 1);
        goto LABEL_24;
      }
      if ( (int)PspSendJobNotification((__int64)Object, 1LL, 0, 0) >= 0 )
      {
        *((_DWORD *)Object + 64) &= ~4u;
        *((_QWORD *)Object + 29) = 0LL;
      }
    }
    else
    {
      if ( !PspTerminateAllProcessesInJobHierarchy((PRKEVENT)Object, -1073741756, 1) )
        goto LABEL_24;
      PspLockJobExclusive((__int64)Object, (__int64)CurrentThread);
      if ( !*((_DWORD *)Object + 54) && *((_QWORD *)Object + 69) && (*((_DWORD *)Object + 276) & 2) != 0 )
        PspSendJobNotification((__int64)Object, 1LL, 0, 0);
    }
    PspUnlockJob(Object, CurrentThread);
  }
LABEL_24:
  v20 = *(_QWORD *)(a2 + 24) + v44;
  v8 = *(_BYTE *)(a2 + 56) == 0;
  *(_QWORD *)(a2 + 24) = v20;
  if ( v8 )
  {
    if ( v20 >= (unsigned int)PspSystemNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(0LL);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v45 >= (unsigned int)PspJobNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(Object);
    }
  }
  v21 = *((_QWORD *)Object + 163);
  if ( v21 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(v21 + 56), 1u);
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
    PspAddAccountingValues(*((_QWORD *)Object + 163) + 1352LL, Object + 1352);
    memset_0(v22, 0, 0x68uLL);
    ExReleaseResourceLite((PERESOURCE)(Object + 56));
    if ( CurrentThread )
    {
      v8 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v8
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    ExReleaseResourceLite((PERESOURCE)(*((_QWORD *)Object + 163) + 56LL));
    if ( CurrentThread )
    {
      v8 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v8
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  else
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
    memset_0(Object + 1352, 0, 0x68uLL);
    PspUnlockJob(Object, CurrentThread);
  }
  return 0LL;
}
