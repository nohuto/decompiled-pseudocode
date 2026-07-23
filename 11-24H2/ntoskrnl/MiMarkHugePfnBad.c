/*
 * XREFs of MiMarkHugePfnBad @ 0x1406720BC
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiUnlockDynamicMemoryShared @ 0x140264630 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140264694 (MiLockDynamicMemoryShared.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiIsPageInHugePfn @ 0x14038ED20 (MiIsPageInHugePfn.c)
 *     MiUnlockHugePfn @ 0x1404C8804 (MiUnlockHugePfn.c)
 *     MiHugePfnPartition @ 0x1404D2634 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x1404EE760 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x1404EEA38 (MiUnlinkHugeRange.c)
 *     MiLockHugePfn @ 0x140671F4C (MiLockHugePfn.c)
 *     MiLockHugeRangeColorHeadAtDpc @ 0x140671F94 (MiLockHugeRangeColorHeadAtDpc.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkHugePfnBad(ULONG_PTR a1, int a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // ebp
  PVOID *v5; // r15
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // r14
  char *v8; // rbx
  _QWORD *v9; // rbx
  __int64 v10; // r13
  bool v11; // zf
  __int64 v13; // rbx
  void *Pool; // rbx
  __int64 v15; // rax
  __int64 *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rax
  volatile signed __int64 *v19; // r12
  volatile signed __int32 *v20; // rax
  _QWORD *v21; // rdx
  bool v22; // r8
  _QWORD *v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int8 v27; // cl
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rbx
  volatile signed __int32 *v31; // rsi
  __int64 v32; // [rsp+20h] [rbp-78h]
  int v33; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v35; // [rsp+B0h] [rbp+18h]
  __int64 v36; // [rsp+B8h] [rbp+20h]

  v33 = a1;
  v36 = 0LL;
  v2 = (a1 >> 18) & 0x3FFFFF;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  MiPageToNode(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (char *)KeAbPreAcquire((__int64)&qword_140E30088, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E30088, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E30088, 0, v8, (__int64)&qword_140E30088);
  if ( v8 )
    v8[10] = 1;
  v9 = (_QWORD *)(qword_140E30100 + 8 * v2);
  v32 = MiHugePfnPartition(v9);
  v10 = v32;
  if ( v32 )
  {
    while ( 1 )
    {
      MiLockDynamicMemoryShared(v10, (__int64)CurrentThread);
      if ( v10 == MiHugePfnPartition(v9) )
        break;
      MiUnlockDynamicMemoryShared(v10, (__int64)CurrentThread);
      v32 = MiHugePfnPartition(v9);
      v10 = v32;
      if ( !v32 )
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
        v16 = (__int64 *)(qword_140E30100 + 8 * v2);
        v35 = MiLockHugePfn((__int64)v16);
        if ( !(unsigned int)MiIsPageInHugePfn(a1) )
        {
          MiUnlockHugePfn((__int64)v16, v17);
          v5 = (PVOID *)v6;
          goto LABEL_23;
        }
        v13 = *v16;
        if ( (*v16 & 8) != 0 )
          break;
        if ( v6 )
        {
          v18 = *v16 & 7;
          if ( v18 == 1 || (v19 = 0LL, v18 == 2) )
          {
            v20 = MiLockHugeRangeColorHeadAtDpc(v16);
            v13 = *v16;
            v19 = (volatile signed __int64 *)v20;
          }
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E30010);
          v21 = (_QWORD *)qword_140E30060;
          v22 = 0;
          if ( qword_140E30060 )
          {
            while ( 1 )
            {
              if ( v2 >= (v21[3] & 0x3FFFFFuLL) )
              {
                v23 = (_QWORD *)v21[1];
                if ( !v23 )
                {
                  v22 = 1;
                  break;
                }
              }
              else
              {
                v23 = (_QWORD *)*v21;
                if ( !*v21 )
                  break;
              }
              v21 = v23;
            }
          }
          RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E30060, (unsigned __int64)v21, v22, (_QWORD *)v6);
          v13 |= 8uLL;
          *v16 = v13;
          goto LABEL_54;
        }
        MiUnlockHugePfn((__int64)v16, v17);
        v5 = 0LL;
        Pool = (void *)MiAllocatePool(0x40uLL, 0x10000uLL, 1883793741);
        if ( !Pool )
          goto LABEL_35;
        v15 = MiAllocatePool(0x40uLL, 0x28uLL, 1883793741);
        v6 = v15;
        if ( !v15 )
        {
          ExFreePoolWithTag(Pool, 0);
LABEL_35:
          v4 = -1073741670;
          goto LABEL_24;
        }
        *(_QWORD *)(v15 + 24) = v2;
        *(_QWORD *)(v15 + 32) = Pool;
      }
      v36 = v6 & -(__int64)(v6 != 0);
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E30010);
      v6 = qword_140E30060;
      while ( v6 )
      {
        v24 = *(_QWORD *)(v6 + 24) & 0x3FFFFFLL;
        if ( v2 <= v24 )
        {
          if ( v2 >= v24 )
            break;
          v6 = *(_QWORD *)v6;
        }
        else
        {
          v6 = *(_QWORD *)(v6 + 8);
        }
      }
      v19 = 0LL;
LABEL_54:
      v25 = v33 & 0x3FFFF;
      if ( !_bittest64(*(const signed __int64 **)(v6 + 32), v25) )
      {
        _bittestandset64(*(signed __int64 **)(v6 + 32), v25);
        ++qword_140E30068;
      }
      v26 = *(_QWORD *)(v6 + 32);
      v27 = _bittest64((const signed __int64 *)(v26 + 0x8000), v25);
      if ( (a2 & 0x10000000) != 0 )
      {
        if ( !v27 )
          _bittestandset64((signed __int64 *)(v26 + 0x8000), v25);
      }
      else if ( v27 )
      {
        _bittestandreset64((signed __int64 *)(v26 + 0x8000), v25);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E30010);
      if ( v19 )
        _InterlockedAnd64(v19, 0xFFFFFFFFFFFFFFF7uLL);
      v29 = v13 & 7;
      if ( (unsigned __int64)(v29 - 1) <= 1 )
      {
        v30 = MiHugePfnPartition(v16);
        v31 = MiLockHugeRangeColorHeadAtDpc(v16);
        MiUnlinkHugeRange(v30, v2);
        _InterlockedAnd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFF7uLL);
        MiInsertHugeRangeInList(0LL, v2, 4);
      }
      else if ( v29 != 4 )
      {
        v4 = 259;
      }
      LOBYTE(v28) = v35;
      MiUnlockHugePfn((__int64)v16, v28);
      v5 = (PVOID *)v36;
    }
LABEL_24:
    MiUnlockDynamicMemoryShared(v32, (__int64)CurrentThread);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E30088, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E30088);
    KeAbPostRelease((ULONG_PTR)&qword_140E30088);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E30088, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E30088);
    KeAbPostRelease((ULONG_PTR)&qword_140E30088);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221226548LL;
  }
}
