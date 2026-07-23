/*
 * XREFs of MiRelocateImagePfn @ 0x14093B6F8
 * Callers:
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     MiPerformFixups @ 0x14093BA30 (MiPerformFixups.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x14093BDC4 (RtlDoesRequireFunctionOverrideFixups.c)
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
  char *v22; // r15
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v25; // rbx
  char DoesRequireFunctionOverrideFixups; // al
  bool v27; // zf

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
          v18 = MiReservePtes((__int64)&qword_140E376A8, 1u);
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
            MiCheckLinearProtectedPteAccessedBit(v18, v25, 128LL);
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
          v22 = (char *)KeAbPreAcquire((__int64)(v11 + 3), 0LL);
          if ( _InterlockedCompareExchange64(v21, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v11 + 3, 0, v22, (__int64)(v11 + 3));
          if ( v22 )
            v22[10] = 1;
          v8 = a7;
        }
        MiPerformFixups(a2, a1, v11[5] & -(__int64)((v8 & 4) != 0), v8);
        if ( CurrentThread )
        {
          if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v21);
          KeAbPostRelease((ULONG_PTR)v21);
          v27 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v27
            && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
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
            MiReleasePtes((__int64)&qword_140E376A8, (_QWORD *)v18, 1u);
          }
        }
        return 0LL;
      }
      ++v14;
    }
  }
  return 1LL;
}
