/*
 * XREFs of MmDuplicateMemory @ 0x140B64A68
 * Callers:
 *     IopLiveDumpCapture @ 0x140596E48 (IopLiveDumpCapture.c)
 *     MmCreateMirror @ 0x1407EC490 (MmCreateMirror.c)
 *     PnprInitiateReplaceOperation @ 0x140B55C44 (PnprInitiateReplaceOperation.c)
 *     PopTransitionToSleep @ 0x140B67570 (PopTransitionToSleep.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiUnlockDynamicMemoryShared @ 0x140264630 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140264694 (MiLockDynamicMemoryShared.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     MmUnlockPagableImageSection @ 0x1402BBBB0 (MmUnlockPagableImageSection.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiLockAllMemoryLists @ 0x140484718 (MiLockAllMemoryLists.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     CcNotifyWriteBehind @ 0x1405778D0 (CcNotifyWriteBehind.c)
 *     MiMirrorBlackPhase @ 0x140673E6C (MiMirrorBlackPhase.c)
 *     MiMirrorVerify @ 0x140673FA4 (MiMirrorVerify.c)
 *     MiResumeFromHibernate @ 0x1406741E0 (MiResumeFromHibernate.c)
 *     MiUnlockAllMemoryLists @ 0x1406860D0 (MiUnlockAllMemoryLists.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     MmLockPagableSectionByHandle @ 0x140A35770 (MmLockPagableSectionByHandle.c)
 *     MiActOnMirrorBitmap @ 0x140AA4F10 (MiActOnMirrorBitmap.c)
 *     MiUpdateMirrorBitmaps @ 0x140ABBD20 (MiUpdateMirrorBitmaps.c)
 *     MiMirrorBrownPhase @ 0x140B6E4AC (MiMirrorBrownPhase.c)
 */

NTSTATUS __fastcall MmDuplicateMemory(__int64 a1)
{
  int v2; // edx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int8 v4; // r15
  NTSTATUS result; // eax
  int v6; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  char *v8; // rbx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rdx
  int v14; // edx
  unsigned __int8 v15; // bl
  __int64 v16; // rdx
  bool v17; // zf
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+90h] [rbp+40h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  v2 = *(_DWORD *)(a1 + 32);
  DWORD2(v18) = v2;
  CurrentIrql = 17;
  v4 = 17;
  if ( (v2 & 1) != 0 && (v2 & 0x404) != 0 )
    return -1073741811;
  if ( (v2 & 8) != 0 )
  {
    v2 &= 0xFFFFFBFA;
    DWORD2(v18) = v2;
  }
  if ( (v2 & 0x400) != 0 && (v2 & 4) != 0
    || (v2 & 0xC0) != 0 && ((v2 & 0xFFFFFC2E) != 0 || (v2 & 0x11) != 0x11 || (v2 & 0x40) != 0 && (v2 & 0x80u) != 0) )
  {
    return -1073741811;
  }
  if ( (v2 & 0x800) == 0 && (v2 & 0xA) == 0 )
    CcNotifyWriteBehind();
  *(_QWORD *)&v18 = a1;
  v6 = 0;
  HIDWORD(v18) = 8;
  BYTE4(v19) = 0;
  CurrentThread = KeGetCurrentThread();
  result = KeWaitForSingleObject(
             &stru_140E30190,
             WrVirtualMemory,
             0,
             0,
             (PLARGE_INTEGER)((unsigned __int64)&v20 & -(__int64)((WORD4(v18) & 0x200) != 0)));
  if ( result >= 0 )
  {
    if ( result == 258 )
      return 258;
    if ( (MiFlags & 4) == 0 )
      MmLockPagableSectionByHandle(ExPageLockHandle);
    --CurrentThread->SpecialApcDisable;
    v8 = (char *)KeAbPreAcquire((__int64)&qword_140E30088, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E30088, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E30088, 0, v8, (__int64)&qword_140E30088);
    if ( v8 )
      v8[10] = 1;
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    _InterlockedIncrement(&dword_140E37650);
    qword_140E301C8 = (__int64)CurrentThread;
    if ( !(unsigned int)MiUpdateMirrorBitmaps(0LL, 0LL) )
    {
      v9 = -1073741670;
LABEL_55:
      dword_140E3018C = 0;
      qword_140E301C8 = 0LL;
      if ( BYTE4(v19) )
        _InterlockedDecrement(&dword_140E37458);
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
        stru_140E301A8.Parameter = (void *)HIDWORD(v18);
        ExQueueWorkItem(&stru_140E301A8, HyperCriticalWorkQueue);
      }
      else
      {
        _InterlockedDecrement(&dword_140E37650);
        KeSetEvent(&stru_140E30190, 0, 0);
      }
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E30088, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140E30088);
      KeAbPostRelease((ULONG_PTR)&qword_140E30088);
      v17 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v17
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
      return v9;
    }
    MiActOnMirrorBitmap((unsigned __int64 *)&xmmword_140E301E0, 1);
    v12 = 1;
    LODWORD(v19) = 0;
    if ( (BYTE8(v18) & 1) != 0 )
    {
      LODWORD(v19) = 3;
LABEL_35:
      v12 = 0;
      goto LABEL_36;
    }
    if ( (WORD4(v18) & 0x400) == 0 )
    {
      if ( (BYTE8(v18) & 4) != 0 )
      {
        HIDWORD(v18) = 7;
LABEL_34:
        LODWORD(v19) = 2;
        goto LABEL_35;
      }
      if ( (BYTE8(v18) & 8) == 0 )
      {
LABEL_36:
        v9 = guard_dispatch_icall_no_overrides(v11, v10);
        if ( v9 >= 0 )
        {
          dword_140E3018C = 1;
          v9 = MiMirrorBrownPhase(&v18);
          if ( v9 >= 0 )
          {
            if ( (WORD4(v18) & 0x802) == 0 && BYTE4(v19) )
            {
              _InterlockedDecrement(&dword_140E37458);
              BYTE4(v19) = 0;
            }
            CurrentIrql = KeGetCurrentIrql();
            v9 = guard_dispatch_icall_no_overrides(0LL, v13);
            if ( v9 >= 0 )
            {
              v4 = KeGetCurrentIrql();
              if ( *(_QWORD *)(a1 + 24) )
                MiActOnMirrorBitmap((unsigned __int64 *)xmmword_140E301D0, 1);
              if ( v4 < 2u )
              {
                v15 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(v14) = 2;
                  KiRaiseIrqlProcessIrqlFlags(v15, v14);
                }
                v4 = v15;
              }
              MiLockAllMemoryLists();
              if ( BYTE4(v19) )
              {
                _InterlockedDecrement(&dword_140E37458);
                BYTE4(v19) = 0;
              }
              dword_140E3018C = 2;
              v9 = MiMirrorBlackPhase((__int64 *)&v18);
              if ( v9 >= 0 )
              {
                v9 = MiMirrorVerify(a1);
                if ( v9 >= 0 )
                {
                  v9 = guard_dispatch_icall_no_overrides(1LL, v16);
                  if ( v9 == 1073742484 && !v12 )
                  {
                    v9 = 0;
                    MiResumeFromHibernate(HIDWORD(v18));
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
    HIDWORD(v18) = 0;
    goto LABEL_34;
  }
  return result;
}
