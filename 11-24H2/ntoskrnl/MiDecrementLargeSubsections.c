/*
 * XREFs of MiDecrementLargeSubsections @ 0x1404C22C0
 * Callers:
 *     MiRemoveMappedPtes @ 0x1402915D0 (MiRemoveMappedPtes.c)
 *     MiReferenceDataSubsections @ 0x1403953D8 (MiReferenceDataSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1404C2B90 (MiIncrementLargeSubsections.c)
 *     MiDereferenceDataSubsections @ 0x14068CD90 (MiDereferenceDataSubsections.c)
 *     MiCloneLargeFileOnlyVad @ 0x1407F03A4 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x140800B24 (MiDeletePartialCloneVads.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiBuildWakeList @ 0x14043D7C0 (MiBuildWakeList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiChargeLargeProtoSubsection @ 0x1407F0364 (MiChargeLargeProtoSubsection.c)
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
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 CurrentIrql; // rcx
  __int64 *v16; // rax

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
          MiDecrementShareCountEx(v11, 0LL, v12, v13);
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (++v9 & 0xF) == 0 && v9 != v8 && KeShouldYieldProcessor() )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v14) = v6;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
            }
            __writecr8(v6);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v14) = 2;
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v14);
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
      v16 = MiBuildWakeList(v2, 512);
      MiReleaseControlAreaWaiters(v16);
    }
    if ( v3 == v4 )
      break;
    v3 = (__int64 *)v3[2];
  }
  return MiReleaseSpinLockExclusive(v5, v6);
}
