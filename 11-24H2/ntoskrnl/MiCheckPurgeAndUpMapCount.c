/*
 * XREFs of MiCheckPurgeAndUpMapCount @ 0x1404071F0
 * Callers:
 *     AlpcpCreateView @ 0x140897248 (AlpcpCreateView.c)
 *     MiMapViewInSystemSpace @ 0x1408EB578 (MiMapViewInSystemSpace.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiMapImageInSystemSpace @ 0x14093E220 (MiMapImageInSystemSpace.c)
 *     KsepSdbMapToMemory @ 0x14094498C (KsepSdbMapToMemory.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140974760 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     NtGetNlsSectionPtr @ 0x140A053E0 (NtGetNlsSectionPtr.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 *     MiCreateUserPhysicalView @ 0x140AEA2A8 (MiCreateUserPhysicalView.c)
 * Callees:
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiCheckPurgeAndUpMapCount(__int64 a1)
{
  int *v2; // rbx
  KIRQL CurrentIrql; // bp
  unsigned int v4; // esi
  int i; // edx
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  char *v9; // [rsp+40h] [rbp-28h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v7 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  v2 = (int *)(a1 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v9 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v4 = 0;
    if ( _interlockedbittestandset(v2, 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire(v2, CurrentIrql);
    for ( i = *v2; (*v2 & 0xBFFFFFFF) != 0x80000000; i = *v2 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(v2, 0x40000000u);
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2, CurrentIrql);
  }
  for ( result = *(unsigned int *)(a1 + 56); (result & 4) != 0; result = *(unsigned int *)(a1 + 56) )
  {
    DWORD2(v7) = 2;
    v9 = (char *)&v8 + 8;
    LOWORD(v8) = 263;
    *((_QWORD *)&v8 + 1) = (char *)&v8 + 8;
    *(_QWORD *)&v7 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v7;
    BYTE2(v8) = 6;
    DWORD1(v8) = 0;
    MiReleaseSpinLockExclusive(v2, CurrentIrql);
    KeWaitForGate((__int64)&v8, 18LL);
    CurrentIrql = ExAcquireSpinLockExclusive(v2);
  }
  *(__m128i *)(a1 + 40) = _mm_add_epi64(
                            _mm_load_si128((const __m128i *)&_xmm),
                            _mm_loadu_si128((const __m128i *)(a1 + 40)));
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      *v2 = 0;
    }
    else
    {
      return ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v2 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
