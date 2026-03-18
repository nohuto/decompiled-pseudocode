/*
 * XREFs of MiRelocateImagePfn @ 0x1409587A8
 * Callers:
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiValidateInPage @ 0x140436770 (MiValidateInPage.c)
 * Callees:
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiMakeProtectionPfnCompatible @ 0x140313770 (MiMakeProtectionPfnCompatible.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     MiPerformFixups @ 0x140958AE0 (MiPerformFixups.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x140958E74 (RtlDoesRequireFunctionOverrideFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v8; // r15d
  __int64 *v11; // r14
  __int64 v12; // rdi
  unsigned int v14; // ebx
  struct _KTHREAD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  ULONG_PTR v19; // r13
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int64 *v21; // rbx
  _QWORD *v22; // r15
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v25; // rbx
  char DoesRequireFunctionOverrideFixups; // al
  __int64 v27; // rdx
  bool v28; // zf

  v8 = a7;
  v11 = *(__int64 **)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  v12 = *v11;
  if ( (a7 & 1) != 0 && a3 < *((_DWORD *)v11 + 14) )
  {
    v14 = a3;
    v15 = 0LL;
    while ( v14 == a3 )
    {
      if ( *(struct _KTHREAD **)(v12 + 8LL * v14) != v15
        || (v16 = v11[11]) != 0 && *(struct _KTHREAD **)(v16 + 8LL * v14 + 64) != v15
        || (v17 = v11[12]) != 0
        && (DoesRequireFunctionOverrideFixups = RtlDoesRequireFunctionOverrideFixups(v17, v14),
            v15 = 0LL,
            DoesRequireFunctionOverrideFixups)
        || (a7 & 2) != 0 && (unsigned int)PdcCreateWatchdogAroundClientCall() )
      {
        if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v18 = (unsigned __int64)v15;
          v19 = (ULONG_PTR)v15;
        }
        else
        {
          v19 = a2;
          v18 = MiReservePtes((__int64)&qword_140E37568, 1u);
          if ( !v18 )
          {
            if ( !a2 )
              return 3221225626LL;
            v18 = a2;
          }
          a2 = (__int64)(v18 << 25) >> 16;
          ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a4 - 0x220000000000LL);
          ValidPte = MiMakeValidPte(v18, a4, ProtectionPfnCompatible | 0xA0000000);
          v25 = ValidPte;
          if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v18 >= MiGetPteAddress(0xFFFF800000000000uLL) )
            MiCheckLinearProtectedPteAccessedBit(v18, v25, 128);
          *(_QWORD *)v18 = v25;
          v15 = 0LL;
        }
        CurrentThread = KeGetCurrentThread();
        v21 = v11 + 3;
        if ( (struct _KTHREAD *)v11[1] == CurrentThread )
        {
          CurrentThread = v15;
        }
        else
        {
          --CurrentThread->SpecialApcDisable;
          v22 = KeAbPreAcquire((__int64)(v11 + 3), 0LL);
          if ( _InterlockedCompareExchange64(v21, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v11 + 3, 0, v22, (__int64)(v11 + 3));
          if ( v22 )
            *((_BYTE *)v22 + 10) = 1;
          v8 = a7;
        }
        MiPerformFixups(a2, a1, v11[5] & -(__int64)((v8 & 4) != 0), v8);
        if ( CurrentThread )
        {
          if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v21);
          KeAbPostRelease((ULONG_PTR)v21);
          v28 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v28
            && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(1LL, v27);
          }
        }
        if ( v18 )
        {
          if ( v18 == v19 )
          {
            *(_QWORD *)v18 = CLFS_LSN_NULL_EXT;
            MiFlushSingleTbEntry(a2, 2, 1);
          }
          else
          {
            MiReleasePtes((__int64)&qword_140E37568, (_QWORD *)v18, 1u);
          }
        }
        return 0LL;
      }
      ++v14;
    }
  }
  return 1LL;
}
