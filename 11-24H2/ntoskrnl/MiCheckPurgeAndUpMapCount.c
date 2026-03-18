/*
 * XREFs of MiCheckPurgeAndUpMapCount @ 0x14040EFF0
 * Callers:
 *     AlpcpCreateView @ 0x14089328C (AlpcpCreateView.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiMapImageInSystemSpace @ 0x1408F5378 (MiMapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1408F6F24 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewInSystemSpace @ 0x140946C58 (MiMapViewInSystemSpace.c)
 *     KsepSdbMapToMemory @ 0x14095CECC (KsepSdbMapToMemory.c)
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     NtGetNlsSectionPtr @ 0x140A08EB0 (NtGetNlsSectionPtr.c)
 *     MiCreateUserPhysicalView @ 0x140AE76D8 (MiCreateUserPhysicalView.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiCheckPurgeAndUpMapCount(__int64 a1, __int64 a2, __int64 a3)
{
  int *v4; // rbx
  KIRQL CurrentIrql; // bp
  unsigned int v6; // esi
  int i; // edx
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  char *v11; // [rsp+40h] [rbp-28h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v4 = (int *)(a1 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v11 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v6 = 0;
    if ( _interlockedbittestandset(v4, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(v4, CurrentIrql, a3);
    for ( i = *v4; (*v4 & 0xBFFFFFFF) != 0x80000000; i = *v4 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(v4, 0x40000000u);
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4, CurrentIrql);
  }
  for ( result = *(unsigned int *)(a1 + 56); (result & 4) != 0; result = *(unsigned int *)(a1 + 56) )
  {
    DWORD2(v9) = 2;
    v11 = (char *)&v10 + 8;
    LOWORD(v10) = 263;
    *((_QWORD *)&v10 + 1) = (char *)&v10 + 8;
    *(_QWORD *)&v9 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v9;
    BYTE2(v10) = 6;
    DWORD1(v10) = 0;
    MiReleaseSpinLockExclusive(v4, CurrentIrql);
    KeWaitForGate(&v10, 18LL);
    CurrentIrql = ExAcquireSpinLockExclusive(v4);
  }
  *(__m128i *)(a1 + 40) = _mm_add_epi64(
                            _mm_load_si128((const __m128i *)&_xmm),
                            _mm_loadu_si128((const __m128i *)(a1 + 40)));
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      *v4 = 0;
    }
    else
    {
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v4 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
