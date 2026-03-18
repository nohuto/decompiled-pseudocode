/*
 * XREFs of MmDuplicateMemory @ 0x140B62998
 * Callers:
 *     IopLiveDumpCapture @ 0x140599EC4 (IopLiveDumpCapture.c)
 *     MmCreateMirror @ 0x1407EBEC0 (MmCreateMirror.c)
 *     PnprInitiateReplaceOperation @ 0x140B53BF4 (PnprInitiateReplaceOperation.c)
 *     PopTransitionToSleep @ 0x140B65430 (PopTransitionToSleep.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     MiUnlockDynamicMemoryShared @ 0x1403D57CC (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x1403D5830 (MiLockDynamicMemoryShared.c)
 *     MiLockAllMemoryLists @ 0x140489A08 (MiLockAllMemoryLists.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     CcNotifyWriteBehind @ 0x14057A440 (CcNotifyWriteBehind.c)
 *     MiMirrorBlackPhase @ 0x140672C9C (MiMirrorBlackPhase.c)
 *     MiMirrorVerify @ 0x140672DD4 (MiMirrorVerify.c)
 *     MiResumeFromHibernate @ 0x140673010 (MiResumeFromHibernate.c)
 *     MiUnlockAllMemoryLists @ 0x140684FA4 (MiUnlockAllMemoryLists.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     MmLockPagableSectionByHandle @ 0x140A3FE90 (MmLockPagableSectionByHandle.c)
 *     MiActOnMirrorBitmap @ 0x140AA9E60 (MiActOnMirrorBitmap.c)
 *     MiUpdateMirrorBitmaps @ 0x140AC0BC0 (MiUpdateMirrorBitmaps.c)
 *     MiMirrorBrownPhase @ 0x140B6CC0C (MiMirrorBrownPhase.c)
 */

NTSTATUS __fastcall MmDuplicateMemory(__int64 a1)
{
  int v2; // edx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int8 v4; // r15
  NTSTATUS result; // eax
  int v6; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v8; // rbx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // edx
  unsigned __int8 v19; // bl
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  bool v28; // zf
  __int128 v29; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+40h] [rbp-10h]
  __int64 v31; // [rsp+90h] [rbp+40h] BYREF

  v31 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v2 = *(_DWORD *)(a1 + 32);
  DWORD2(v29) = v2;
  CurrentIrql = 17;
  v4 = 17;
  if ( (v2 & 1) != 0 && (v2 & 0x404) != 0 )
    return -1073741811;
  if ( (v2 & 8) != 0 )
  {
    v2 &= 0xFFFFFBFA;
    DWORD2(v29) = v2;
  }
  if ( (v2 & 0x400) != 0 && (v2 & 4) != 0
    || (v2 & 0xC0) != 0 && ((v2 & 0xFFFFFC2E) != 0 || (v2 & 0x11) != 0x11 || (v2 & 0x40) != 0 && (v2 & 0x80u) != 0) )
  {
    return -1073741811;
  }
  if ( (v2 & 0x800) == 0 && (v2 & 0xA) == 0 )
    CcNotifyWriteBehind();
  *(_QWORD *)&v29 = a1;
  v6 = 0;
  HIDWORD(v29) = 8;
  BYTE4(v30) = 0;
  CurrentThread = KeGetCurrentThread();
  result = KeWaitForSingleObject(
             &stru_140E30050,
             WrVirtualMemory,
             0,
             0,
             (PLARGE_INTEGER)((unsigned __int64)&v31 & -(__int64)((WORD4(v29) & 0x200) != 0)));
  if ( result >= 0 )
  {
    if ( result == 258 )
      return 258;
    if ( (MiFlags & 4) == 0 )
      MmLockPagableSectionByHandle(ExPageLockHandle);
    --CurrentThread->SpecialApcDisable;
    v8 = KeAbPreAcquire((__int64)&qword_140E2FF48, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FF48, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E2FF48, 0, v8, (__int64)&qword_140E2FF48);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    _InterlockedIncrement(&dword_140E37510);
    qword_140E30088 = (__int64)CurrentThread;
    if ( !(unsigned int)MiUpdateMirrorBitmaps(0LL, 0LL) )
    {
      v9 = -1073741670;
LABEL_55:
      dword_140E3004C = 0;
      qword_140E30088 = 0LL;
      if ( BYTE4(v30) )
        _InterlockedDecrement(&dword_140E37318);
      if ( CurrentIrql != 17 )
      {
        if ( v4 != 17 )
          MiUnlockAllMemoryLists();
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      if ( v6 )
      {
        stru_140E30068.Parameter = (void *)HIDWORD(v29);
        ExQueueWorkItem(&stru_140E30068, HyperCriticalWorkQueue);
      }
      else
      {
        _InterlockedDecrement(&dword_140E37510);
        KeSetEvent(&stru_140E30050, 0, 0);
      }
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FF48, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140E2FF48);
      KeAbPostRelease((ULONG_PTR)&qword_140E2FF48);
      v28 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v28
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v27, v26);
      }
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
      return v9;
    }
    MiActOnMirrorBitmap((unsigned __int64 *)&xmmword_140E300A0, 1);
    v14 = 1;
    LODWORD(v30) = 0;
    if ( (BYTE8(v29) & 1) != 0 )
    {
      LODWORD(v30) = 3;
LABEL_35:
      v14 = 0;
      goto LABEL_36;
    }
    if ( (WORD4(v29) & 0x400) == 0 )
    {
      if ( (BYTE8(v29) & 4) != 0 )
      {
        HIDWORD(v29) = 7;
LABEL_34:
        LODWORD(v30) = 2;
        goto LABEL_35;
      }
      if ( (BYTE8(v29) & 8) == 0 )
      {
LABEL_36:
        v9 = guard_dispatch_icall_no_overrides(v11, v10, v12, v13);
        if ( v9 >= 0 )
        {
          dword_140E3004C = 1;
          v9 = MiMirrorBrownPhase(&v29);
          if ( v9 >= 0 )
          {
            if ( (WORD4(v29) & 0x802) == 0 && BYTE4(v30) )
            {
              _InterlockedDecrement(&dword_140E37318);
              BYTE4(v30) = 0;
            }
            CurrentIrql = KeGetCurrentIrql();
            v9 = guard_dispatch_icall_no_overrides(0LL, v15, v16, v17);
            if ( v9 >= 0 )
            {
              v4 = KeGetCurrentIrql();
              if ( *(_QWORD *)(a1 + 24) )
                MiActOnMirrorBitmap((unsigned __int64 *)xmmword_140E30090, 1);
              if ( v4 < 2u )
              {
                v19 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(v18) = 2;
                  KiRaiseIrqlProcessIrqlFlags(v19, v18);
                }
                v4 = v19;
              }
              MiLockAllMemoryLists();
              if ( BYTE4(v30) )
              {
                _InterlockedDecrement(&dword_140E37318);
                BYTE4(v30) = 0;
              }
              dword_140E3004C = 2;
              v9 = MiMirrorBlackPhase((__int64 *)&v29);
              if ( v9 >= 0 )
              {
                v9 = MiMirrorVerify(a1, v20, v21, v22);
                if ( v9 >= 0 )
                {
                  v9 = guard_dispatch_icall_no_overrides(1LL, v23, v24, v25);
                  if ( v9 == 1073742484 && !v14 )
                  {
                    v9 = 0;
                    MiResumeFromHibernate(HIDWORD(v29));
                    v6 = 1;
                  }
                }
              }
            }
          }
        }
        goto LABEL_55;
      }
    }
    HIDWORD(v29) = 0;
    goto LABEL_34;
  }
  return result;
}
