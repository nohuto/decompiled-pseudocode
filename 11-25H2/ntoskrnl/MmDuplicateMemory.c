/*
 * XREFs of MmDuplicateMemory @ 0x140B52868
 * Callers:
 *     IopLiveDumpCapture @ 0x1405967B4 (IopLiveDumpCapture.c)
 *     MmCreateMirror @ 0x1407DC020 (MmCreateMirror.c)
 *     PnprInitiateReplaceOperation @ 0x140B43BF4 (PnprInitiateReplaceOperation.c)
 *     PopTransitionToSleep @ 0x140B55320 (PopTransitionToSleep.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MmUnlockPagableImageSection @ 0x14036DFD0 (MmUnlockPagableImageSection.c)
 *     MiUnlockDynamicMemoryShared @ 0x140393038 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140393098 (MiLockDynamicMemoryShared.c)
 *     MiLockAllMemoryLists @ 0x1404744BC (MiLockAllMemoryLists.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     CcNotifyWriteBehind @ 0x140577140 (CcNotifyWriteBehind.c)
 *     MiMirrorBlackPhase @ 0x1406671EC (MiMirrorBlackPhase.c)
 *     MiMirrorVerify @ 0x140667324 (MiMirrorVerify.c)
 *     MiResumeFromHibernate @ 0x140667560 (MiResumeFromHibernate.c)
 *     MiUnlockAllMemoryLists @ 0x140679718 (MiUnlockAllMemoryLists.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     MmLockPagableSectionByHandle @ 0x140A4B850 (MmLockPagableSectionByHandle.c)
 *     MiActOnMirrorBitmap @ 0x140AA4ED0 (MiActOnMirrorBitmap.c)
 *     MiUpdateMirrorBitmaps @ 0x140ABC7F0 (MiUpdateMirrorBitmaps.c)
 *     MiMirrorBrownPhase @ 0x140B5DB2C (MiMirrorBrownPhase.c)
 */

NTSTATUS __fastcall MmDuplicateMemory(__int64 a1)
{
  int v2; // edx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int8 v4; // r15
  NTSTATUS result; // eax
  int v6; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v8; // rbx
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // edi
  int v12; // edx
  unsigned __int8 v13; // bl
  bool v14; // zf
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]
  __int64 v17; // [rsp+90h] [rbp+40h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v2 = *(_DWORD *)(a1 + 32);
  DWORD2(v15) = v2;
  CurrentIrql = 17;
  v4 = 17;
  if ( (v2 & 1) != 0 && (v2 & 0x404) != 0 )
    return -1073741811;
  if ( (v2 & 8) != 0 )
  {
    v2 &= 0xFFFFFBFA;
    DWORD2(v15) = v2;
  }
  if ( (v2 & 0x400) != 0 && (v2 & 4) != 0
    || (v2 & 0xC0) != 0 && ((v2 & 0xFFFFFC2E) != 0 || (v2 & 0x11) != 0x11 || (v2 & 0x40) != 0 && (v2 & 0x80u) != 0) )
  {
    return -1073741811;
  }
  if ( (v2 & 0x800) == 0 && (v2 & 0xA) == 0 )
    CcNotifyWriteBehind();
  *(_QWORD *)&v15 = a1;
  v6 = 0;
  HIDWORD(v15) = 8;
  BYTE4(v16) = 0;
  CurrentThread = KeGetCurrentThread();
  result = KeWaitForSingleObject(
             &stru_140E2FE10,
             WrVirtualMemory,
             0,
             0,
             (PLARGE_INTEGER)((unsigned __int64)&v17 & -(__int64)((WORD4(v15) & 0x200) != 0)));
  if ( result >= 0 )
  {
    if ( result == 258 )
      return 258;
    if ( (MiFlags & 4) == 0 )
      MmLockPagableSectionByHandle(ExPageLockHandle);
    --CurrentThread->SpecialApcDisable;
    v8 = KeAbPreAcquire((__int64)&qword_140E2FD08, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FD08, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E2FD08, 0, v8, (unsigned __int64)&qword_140E2FD08);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    _InterlockedIncrement(&dword_140E372D0);
    qword_140E2FE48 = (__int64)CurrentThread;
    if ( !(unsigned int)MiUpdateMirrorBitmaps(0LL, 0LL) )
    {
      v9 = -1073741670;
LABEL_55:
      dword_140E2FE0C = 0;
      qword_140E2FE48 = 0LL;
      if ( BYTE4(v16) )
        _InterlockedDecrement(&dword_140E370D8);
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
        stru_140E2FE28.Parameter = (void *)HIDWORD(v15);
        ExQueueWorkItem(&stru_140E2FE28, HyperCriticalWorkQueue);
      }
      else
      {
        _InterlockedDecrement(&dword_140E372D0);
        KeSetEvent(&stru_140E2FE10, 0, 0);
      }
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FD08, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140E2FD08);
      KeAbPostRelease((ULONG_PTR)&qword_140E2FD08);
      v14 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v14
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
      return v9;
    }
    MiActOnMirrorBitmap((unsigned __int64 *)&xmmword_140E2FE60, 1);
    v11 = 1;
    LODWORD(v16) = 0;
    if ( (BYTE8(v15) & 1) != 0 )
    {
      LODWORD(v16) = 3;
LABEL_35:
      v11 = 0;
      goto LABEL_36;
    }
    if ( (WORD4(v15) & 0x400) == 0 )
    {
      if ( (BYTE8(v15) & 4) != 0 )
      {
        HIDWORD(v15) = 7;
LABEL_34:
        LODWORD(v16) = 2;
        goto LABEL_35;
      }
      if ( (BYTE8(v15) & 8) == 0 )
      {
LABEL_36:
        v9 = guard_dispatch_icall_no_overrides(v10);
        if ( v9 >= 0 )
        {
          dword_140E2FE0C = 1;
          v9 = MiMirrorBrownPhase(&v15);
          if ( v9 >= 0 )
          {
            if ( (WORD4(v15) & 0x802) == 0 && BYTE4(v16) )
            {
              _InterlockedDecrement(&dword_140E370D8);
              BYTE4(v16) = 0;
            }
            CurrentIrql = KeGetCurrentIrql();
            v9 = guard_dispatch_icall_no_overrides(0LL);
            if ( v9 >= 0 )
            {
              v4 = KeGetCurrentIrql();
              if ( *(_QWORD *)(a1 + 24) )
                MiActOnMirrorBitmap((unsigned __int64 *)xmmword_140E2FE50, 1);
              if ( v4 < 2u )
              {
                v13 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(v12) = 2;
                  KiRaiseIrqlProcessIrqlFlags(v13, v12);
                }
                v4 = v13;
              }
              MiLockAllMemoryLists();
              if ( BYTE4(v16) )
              {
                _InterlockedDecrement(&dword_140E370D8);
                BYTE4(v16) = 0;
              }
              dword_140E2FE0C = 2;
              v9 = MiMirrorBlackPhase((__int64 *)&v15);
              if ( v9 >= 0 )
              {
                v9 = MiMirrorVerify(a1);
                if ( v9 >= 0 )
                {
                  v9 = guard_dispatch_icall_no_overrides(1LL);
                  if ( v9 == 1073742484 && !v11 )
                  {
                    v9 = 0;
                    MiResumeFromHibernate(HIDWORD(v15));
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
    HIDWORD(v15) = 0;
    goto LABEL_34;
  }
  return result;
}
