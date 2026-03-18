/*
 * XREFs of MiDecrementLargeSubsections @ 0x1404C8190
 * Callers:
 *     MiReferenceDataSubsections @ 0x1402A485C (MiReferenceDataSubsections.c)
 *     MiRemoveMappedPtes @ 0x1402A9320 (MiRemoveMappedPtes.c)
 *     MiIncrementLargeSubsections @ 0x1404C92E4 (MiIncrementLargeSubsections.c)
 *     MiDereferenceDataSubsections @ 0x1406803D0 (MiDereferenceDataSubsections.c)
 *     MiCloneLargeFileOnlyVad @ 0x1407DFF34 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x1407F052C (MiDeletePartialCloneVads.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14022F630 (MiReleaseControlAreaWaiters.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiBuildWakeList @ 0x140447BD0 (MiBuildWakeList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiChargeLargeProtoSubsection @ 0x1407DFEF4 (MiChargeLargeProtoSubsection.c)
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
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 CurrentIrql; // rcx
  __int64 *v14; // rax

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
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
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
      MiReleaseControlAreaWaiters(v14);
    }
    if ( v3 == v4 )
      break;
    v3 = (__int64 *)v3[2];
  }
  return MiReleaseSpinLockExclusive(v5, v6);
}
