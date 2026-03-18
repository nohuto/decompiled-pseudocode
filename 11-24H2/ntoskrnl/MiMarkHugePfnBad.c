/*
 * XREFs of MiMarkHugePfnBad @ 0x140670EEC
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     MiIsPageInHugePfn @ 0x1403CEEA0 (MiIsPageInHugePfn.c)
 *     MiUnlockDynamicMemoryShared @ 0x1403D57CC (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x1403D5830 (MiLockDynamicMemoryShared.c)
 *     MiUnlockHugePfn @ 0x1404CF53C (MiUnlockHugePfn.c)
 *     MiHugePfnPartition @ 0x1404D91E4 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x1404F0CC0 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404F0F98 (MiUnlinkHugeRange.c)
 *     MiLockHugePfn @ 0x140670D7C (MiLockHugePfn.c)
 *     MiLockHugeRangeColorHeadAtDpc @ 0x140670DC4 (MiLockHugeRangeColorHeadAtDpc.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkHugePfnBad(ULONG_PTR a1, int a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // ebp
  PVOID *v5; // r15
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v8; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v14; // rbx
  void *Pool; // rbx
  __int64 v16; // rax
  __int64 *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  volatile signed __int64 *v22; // r12
  volatile signed __int32 *v23; // rax
  _QWORD *v24; // rdx
  bool v25; // r8
  _QWORD *v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int8 v30; // cl
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rbx
  volatile signed __int32 *v34; // rsi
  __int64 v35; // [rsp+20h] [rbp-78h]
  int v36; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v38; // [rsp+B0h] [rbp+18h]
  __int64 v39; // [rsp+B8h] [rbp+20h]

  v36 = a1;
  v39 = 0LL;
  v2 = (a1 >> 18) & 0x3FFFFF;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  MiPageToNode(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((__int64)&qword_140E2FF48, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FF48, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E2FF48, 0, v8, (__int64)&qword_140E2FF48);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v9 = (_QWORD *)(qword_140E2FFC0 + 8 * v2);
  v35 = MiHugePfnPartition(v9);
  v10 = v35;
  if ( v35 )
  {
    while ( 1 )
    {
      MiLockDynamicMemoryShared(v10, (__int64)CurrentThread);
      if ( v10 == MiHugePfnPartition(v9) )
        break;
      MiUnlockDynamicMemoryShared(v10, (__int64)CurrentThread);
      v35 = MiHugePfnPartition(v9);
      v10 = v35;
      if ( !v35 )
        goto LABEL_8;
    }
    if ( (*(_DWORD *)(v10 + 4) & 1) != 0 )
    {
LABEL_23:
      v4 = -1073740748;
    }
    else
    {
      while ( 1 )
      {
        v17 = (__int64 *)(qword_140E2FFC0 + 8 * v2);
        v38 = MiLockHugePfn((__int64)v17);
        if ( !(unsigned int)MiIsPageInHugePfn(a1) )
        {
          MiUnlockHugePfn((__int64)v17, v18);
          v5 = (PVOID *)v6;
          goto LABEL_23;
        }
        v14 = *v17;
        if ( (*v17 & 8) != 0 )
          break;
        if ( v6 )
        {
          v21 = *v17 & 7;
          if ( v21 == 1 || (v22 = 0LL, v21 == 2) )
          {
            v23 = MiLockHugeRangeColorHeadAtDpc(v17);
            v14 = *v17;
            v22 = (volatile signed __int64 *)v23;
          }
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FED0);
          v24 = (_QWORD *)qword_140E2FF20;
          v25 = 0;
          if ( qword_140E2FF20 )
          {
            while ( 1 )
            {
              if ( v2 >= (v24[3] & 0x3FFFFFuLL) )
              {
                v26 = (_QWORD *)v24[1];
                if ( !v26 )
                {
                  v25 = 1;
                  break;
                }
              }
              else
              {
                v26 = (_QWORD *)*v24;
                if ( !*v24 )
                  break;
              }
              v24 = v26;
            }
          }
          RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E2FF20, (unsigned __int64)v24, v25, (_QWORD *)v6);
          v14 |= 8uLL;
          *v17 = v14;
          goto LABEL_54;
        }
        MiUnlockHugePfn((__int64)v17, v18);
        v5 = 0LL;
        Pool = (void *)MiAllocatePool(0x40uLL, 0x10000uLL, 1883793741);
        if ( !Pool )
          goto LABEL_35;
        v16 = MiAllocatePool(0x40uLL, 0x28uLL, 1883793741);
        v6 = v16;
        if ( !v16 )
        {
          ExFreePoolWithTag(Pool, 0);
LABEL_35:
          v4 = -1073741670;
          goto LABEL_24;
        }
        *(_QWORD *)(v16 + 24) = v2;
        *(_QWORD *)(v16 + 32) = Pool;
      }
      v39 = v6 & -(__int64)(v6 != 0);
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2FED0);
      v6 = qword_140E2FF20;
      while ( v6 )
      {
        v27 = *(_QWORD *)(v6 + 24) & 0x3FFFFFLL;
        if ( v2 <= v27 )
        {
          if ( v2 >= v27 )
            break;
          v6 = *(_QWORD *)v6;
        }
        else
        {
          v6 = *(_QWORD *)(v6 + 8);
        }
      }
      v22 = 0LL;
LABEL_54:
      v28 = v36 & 0x3FFFF;
      if ( !_bittest64(*(const signed __int64 **)(v6 + 32), v28) )
      {
        _bittestandset64(*(signed __int64 **)(v6 + 32), v28);
        ++qword_140E2FF28;
      }
      v29 = *(_QWORD *)(v6 + 32);
      v30 = _bittest64((const signed __int64 *)(v29 + 0x8000), v28);
      if ( (a2 & 0x10000000) != 0 )
      {
        if ( !v30 )
          _bittestandset64((signed __int64 *)(v29 + 0x8000), v28);
      }
      else if ( v30 )
      {
        _bittestandreset64((signed __int64 *)(v29 + 0x8000), v28);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2FED0);
      if ( v22 )
        _InterlockedAnd64(v22, 0xFFFFFFFFFFFFFFF7uLL);
      v32 = v14 & 7;
      if ( (unsigned __int64)(v32 - 1) <= 1 )
      {
        v33 = MiHugePfnPartition(v17);
        v34 = MiLockHugeRangeColorHeadAtDpc(v17);
        MiUnlinkHugeRange(v33, v2);
        _InterlockedAnd64((volatile signed __int64 *)v34, 0xFFFFFFFFFFFFFFF7uLL);
        MiInsertHugeRangeInList(0LL, v2, 4);
      }
      else if ( v32 != 4 )
      {
        v4 = 259;
      }
      LOBYTE(v31) = v38;
      MiUnlockHugePfn((__int64)v17, v31);
      v5 = (PVOID *)v39;
    }
LABEL_24:
    MiUnlockDynamicMemoryShared(v35, (__int64)CurrentThread);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FF48, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E2FF48);
    KeAbPostRelease((ULONG_PTR)&qword_140E2FF48);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v20, v19);
    if ( v5 )
    {
      ExFreePoolWithTag(v5[4], 0);
      ExFreePoolWithTag(v5, 0);
    }
    if ( v4 == -1073740748 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
    return v4;
  }
  else
  {
LABEL_8:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FF48, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E2FF48);
    KeAbPostRelease((ULONG_PTR)&qword_140E2FF48);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(1LL, v11);
    return 3221226548LL;
  }
}
