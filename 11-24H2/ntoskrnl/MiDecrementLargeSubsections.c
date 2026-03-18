/*
 * XREFs of MiDecrementLargeSubsections @ 0x1404C8E10
 * Callers:
 *     MiRemoveMappedPtes @ 0x140260FC0 (MiRemoveMappedPtes.c)
 *     MiReferenceDataSubsections @ 0x140416740 (MiReferenceDataSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1404C96E0 (MiIncrementLargeSubsections.c)
 *     MiDereferenceDataSubsections @ 0x14068BC60 (MiDereferenceDataSubsections.c)
 *     MiCloneLargeFileOnlyVad @ 0x1407EFDD4 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x1408003E4 (MiDeletePartialCloneVads.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14020F410 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiBuildWakeList @ 0x140445610 (MiBuildWakeList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiChargeLargeProtoSubsection @ 0x1407EFD94 (MiChargeLargeProtoSubsection.c)
 */

__int64 __fastcall MiDecrementLargeSubsections(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r13
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  volatile LONG *v5; // rsi
  unsigned __int64 v6; // r15
  int v7; // ecx
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  unsigned __int64 *v10; // r12
  ULONG_PTR v11; // rbx
  __int64 v12; // rdx
  __int64 CurrentIrql; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8

  v2 = *a1;
  v3 = a1;
  v4 = a2;
  v5 = (volatile LONG *)(*a1 + 72);
  v6 = ExAcquireSpinLockExclusive(v5);
  while ( 1 )
  {
    v7 = *((_DWORD *)v3 + 27) - 1;
    *((_DWORD *)v3 + 27) = v7;
    if ( v7 == 1 )
    {
      MiReleaseSpinLockExclusive(v5, 0x11u);
      v8 = *((_DWORD *)v3 + 11);
      v9 = 0;
      v10 = (unsigned __int64 *)v3[1];
      if ( v8 )
      {
        do
        {
          v11 = MiLockLeafPage(v10, 0);
          MiDecrementShareCountEx(v11, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (++v9 & 0xF) == 0 && v9 != v8 && KeShouldYieldProcessor() )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v12) = v6;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
            }
            __writecr8(v6);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v12) = 2;
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v12);
            }
          }
          ++v10;
        }
        while ( v9 < v8 );
        v4 = a2;
        v5 = (volatile LONG *)(v2 + 72);
      }
      MiChargeLargeProtoSubsection(v3, 0LL);
      ExAcquireSpinLockExclusive(v5);
      --*((_DWORD *)v3 + 27);
      v14 = MiBuildWakeList(v2, 512);
      MiReleaseControlAreaWaiters(v14, v15, v16);
    }
    if ( v3 == v4 )
      break;
    v3 = (__int64 *)v3[2];
  }
  return MiReleaseSpinLockExclusive(v5, v6);
}
