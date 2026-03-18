/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x1408ECC80
 * Callers:
 *     PspCallJobHierarchyCallbacks @ 0x1408EBFF8 (PspCallJobHierarchyCallbacks.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PspSendJobNotification @ 0x140493C70 (PspSendJobNotification.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x140777C90 (PspSendNoWakeChargeLimitNotification.c)
 *     PspRemoveProcessFromJobChain @ 0x1408A9078 (PspRemoveProcessFromJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1408EAFCC (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspLockJobExclusive @ 0x1408EB430 (PspLockJobExclusive.c)
 *     PspAddAccountingValues @ 0x1408ED2FC (PspAddAccountingValues.c)
 *     PspUnlockJob @ 0x1408ED360 (PspUnlockJob.c)
 *     PspLockJobMemoryLimitsShared @ 0x1408ED4D8 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x1408ED540 (PspRateControlLimitFlag.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1408ED564 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobShared @ 0x1408ED5D4 (PspLockJobShared.c)
 *     PspSendReliableJobNotification @ 0x1408F0174 (PspSendReliableJobNotification.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(char *Object, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // r12
  int v18; // esi
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // r13
  int v22; // r8d
  __int8 *v23; // r9
  char *v24; // r10
  unsigned int *v25; // rdx
  unsigned int v26; // ecx
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  void *v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int64 v39; // r9
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // r8
  int v42; // eax
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  _DWORD *v49; // rdx
  int v50; // ecx
  __int64 v51; // r8
  __int64 v52; // r9
  struct _KPROCESS *v53; // rcx
  int v54; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v56; // [rsp+30h] [rbp-D0h]
  __int64 v57; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v58; // [rsp+40h] [rbp-C0h]
  __int64 v59; // [rsp+48h] [rbp-B8h]
  __int64 v60; // [rsp+50h] [rbp-B0h]
  _QWORD v61[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v62; // [rsp+70h] [rbp-90h]
  __int128 v63; // [rsp+80h] [rbp-80h]
  __int128 v64; // [rsp+90h] [rbp-70h]
  __int128 v65; // [rsp+A0h] [rbp-60h]
  __int128 v66; // [rsp+B0h] [rbp-50h]
  __int128 v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+D0h] [rbp-30h]
  __int128 v69; // [rsp+E0h] [rbp-20h] BYREF
  __m256i v70; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v71; // [rsp+110h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)(Object + 56), 1u);
  v4 = *((_QWORD *)Object + 152);
  if ( v4 )
  {
    v36 = *(_OWORD *)(v4 + 24);
    v69 = *(_OWORD *)(v4 + 8);
    v37 = *(_OWORD *)(v4 + 40);
    *(_OWORD *)v70.m256i_i8 = v36;
    v38 = *(_OWORD *)(v4 + 56);
    *(_OWORD *)&v70.m256i_u64[2] = v37;
    v71 = v38;
  }
  else
  {
    memset_0(&v69, 0, 0x40uLL);
  }
  v5 = *((_QWORD *)Object + 76);
  v6 = *((_QWORD *)Object + 77);
  v7 = *(_OWORD *)(Object + 1368);
  v62 = *(_OWORD *)(Object + 1352);
  v8 = *(_OWORD *)(Object + 1384);
  v63 = v7;
  v9 = *(_OWORD *)(Object + 1400);
  v64 = v8;
  v10 = *(_OWORD *)(Object + 1416);
  v65 = v9;
  v11 = *(_OWORD *)(Object + 1432);
  v66 = v10;
  *(_QWORD *)&v10 = *((_QWORD *)Object + 181);
  v59 = *((_QWORD *)Object + 20);
  v60 = *((_QWORD *)Object + 23);
  v54 = *((_DWORD *)Object + 137);
  v12 = *((_DWORD *)Object + 64);
  v67 = v11;
  v68 = v10;
  if ( (v12 & 4) != 0 )
    v56 = *((_QWORD *)Object + 29);
  else
    v56 = 0LL;
  v13 = *((_DWORD *)Object + 388);
  v58 = 0LL;
  v57 = 0LL;
  if ( (v13 & 0x800) != 0 )
  {
    if ( *((_DWORD *)Object + 266) )
    {
      v58 = *((_QWORD *)Object + 147);
      if ( (v13 & 0x400000) == 0 )
      {
        v45 = *((_QWORD *)Object + 163);
        if ( !v45 || (*(_DWORD *)(v45 + 1552) & 0x1000) == 0 || !*(_DWORD *)(v45 + 1064) )
        {
          v57 = *((_QWORD *)Object + 147);
          if ( v45 )
            _InterlockedOr((volatile signed __int32 *)(v45 + 1552), 0x400000u);
        }
      }
    }
  }
  if ( (*((_DWORD *)Object + 388) & 0x400000) != 0 )
  {
    v44 = *((_QWORD *)Object + 163);
    if ( v44 )
      _InterlockedOr((volatile signed __int32 *)(v44 + 1552), 0x400000u);
    _InterlockedAnd((volatile signed __int32 *)Object + 388, 0xFFBFFFFF);
  }
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  if ( CurrentThread )
  {
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v15, v14);
  }
  v17 = v69;
  v18 = 0;
  if ( (_QWORD)v69 && v5 + (__int64)v66 > (unsigned __int64)v69 )
    v18 = 0x10000;
  v19 = *((_QWORD *)&v69 + 1);
  if ( *((_QWORD *)&v69 + 1) && (unsigned __int64)(v6 + *((_QWORD *)&v66 + 1)) > *((_QWORD *)&v69 + 1) )
    v18 |= 0x20000u;
  v20 = v70.m256i_i64[0];
  if ( v70.m256i_i64[0] && (unsigned __int64)(*((_QWORD *)&v62 + 1) + v59) > v70.m256i_i64[0] )
    v18 |= 4u;
  v21 = v70.m256i_i64[2];
  if ( *(_OWORD *)&v70.m256i_u64[1] != 0LL )
  {
    PspLockJobMemoryLimitsShared(Object, CurrentThread);
    v39 = *((_QWORD *)Object + 152);
    v40 = *(_QWORD *)(v39 + 40);
    v41 = *((_QWORD *)Object + 151) + *((_QWORD *)Object + 196);
    if ( (*(_DWORD *)v39 & 0x200000) == 0 )
      v41 = *((_QWORD *)Object + 151);
    v42 = 0;
    if ( v40 && v41 > v40 )
      v42 = 512;
    v43 = *(_QWORD *)(v39 + 32);
    if ( v43 && v41 < v43 )
      v42 |= 0x8000u;
    v18 |= v42;
    PspUnlockJobMemoryLimitsShared(Object, CurrentThread);
    v21 = v70.m256i_i64[2];
    v20 = v70.m256i_i64[0];
    v19 = *((_QWORD *)&v69 + 1);
    v17 = v69;
  }
  v22 = 0;
  v23 = &v70.m256i_i8[-a2 + 24];
  v24 = (char *)&v69 - a2 + 8;
  v25 = (unsigned int *)(a2 + 44);
  do
  {
    v26 = *(unsigned int *)((char *)v25 + (_QWORD)v23 - 44);
    if ( v26 && *(v25 - 3) == *(unsigned int *)((char *)v25 + (_QWORD)v24) && *v25 >= v26 )
      v18 |= PspRateControlLimitFlag((unsigned int)v22);
    ++v22;
    ++v25;
  }
  while ( v22 < 3 );
  if ( v18 )
  {
    PspLockJobExclusive((__int64)Object, (__int64)CurrentThread);
    v46 = *((_QWORD *)Object + 152);
    if ( v46 )
    {
      *(_DWORD *)(v46 + 4) |= v18;
      v47 = (_QWORD *)(*((_QWORD *)Object + 152) + 72LL);
      if ( (v18 & 0x10000) != 0 )
        *v47 = v17;
      if ( (v18 & 0x20000) != 0 )
        v47[1] = v19;
      if ( (v18 & 4) != 0 )
        v47[2] = v20;
      if ( (v18 & 0x200) != 0 )
        v47[4] = v21;
      if ( (v18 & 0x8000) != 0 )
        v47[3] = v70.m256i_i64[1];
      v48 = 0LL;
      do
      {
        if ( ((unsigned int)PspRateControlLimitFlag(v48) & v18) != 0 )
        {
          *(v49 - 3) = *(_DWORD *)((char *)v49 + v51 - 52);
          *v49 = *(_DWORD *)((char *)v49 + v52);
        }
        v48 = (unsigned int)(v50 + 1);
      }
      while ( (int)v48 < 3 );
    }
    if ( *((_QWORD *)Object + 69) && (*((_DWORD *)Object + 276) & 0x800) != 0 && (Object[1552] & 4) == 0 )
      PspSendReliableJobNotification(Object);
    PspUnlockJob(Object, CurrentThread);
  }
  v27 = *(_QWORD *)(a2 + 16);
  if ( v27 )
  {
    if ( (*(_DWORD *)(v27 + 496) & 1) == 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v27 + 496), 0xFFFFFFDF);
      v53 = *(struct _KPROCESS **)(a2 + 16);
      v61[0] = *(_QWORD *)(a2 + 8);
      v61[1] = 2LL;
      v61[2] = v53[1].Header.WaitListHead.Flink;
      PspRemoveProcessFromJobChain(v53, v61, 0xEu, 0xC0000044);
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 16));
  }
  if ( v56 && *((_QWORD *)&v62 + 1) + v60 > v56 )
  {
    if ( v54 )
    {
      if ( v54 != 1 )
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
  v28 = *(_QWORD *)(a2 + 24) + v57;
  v16 = *(_BYTE *)(a2 + 56) == 0;
  *(_QWORD *)(a2 + 24) = v28;
  if ( v16 )
  {
    if ( v28 >= (unsigned int)PspSystemNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(0LL);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v58 >= (unsigned int)PspJobNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(Object);
    }
  }
  v29 = *((_QWORD *)Object + 163);
  if ( v29 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(v29 + 56), 1u);
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
    PspAddAccountingValues(*((_QWORD *)Object + 163) + 1352LL, Object + 1352);
    memset_0(v30, 0, 0x68uLL);
    ExReleaseResourceLite((PERESOURCE)(Object + 56));
    if ( CurrentThread )
    {
      v16 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v16
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v32, v31);
      }
    }
    ExReleaseResourceLite((PERESOURCE)(*((_QWORD *)Object + 163) + 56LL));
    if ( CurrentThread )
    {
      v16 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v16
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v34, v33);
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
