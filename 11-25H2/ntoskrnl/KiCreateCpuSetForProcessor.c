/*
 * XREFs of KiCreateCpuSetForProcessor @ 0x140B47D90
 * Callers:
 *     KiCompleteKernelInit @ 0x140B45C50 (KiCompleteKernelInit.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x140274A4C (RtlWriteAcquireTickLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     RtlWriteReleaseTickLock @ 0x1404555D0 (RtlWriteReleaseTickLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiCreateCpuSetForProcessor(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rbx
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rbx
  $1BEA1023BCAB02611A0650306801F03C *p_SecureState; // rdx
  __int64 result; // rax

  if ( KiCpuSetAffinities )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    v3 = *(unsigned __int8 *)(a1 + 208);
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v4 = *(unsigned __int8 *)(a1 + 209);
    ++KiCpuSetCount[v3];
    v5 = (unsigned int)v3;
    v6 = *(_QWORD *)(a1 + 200);
    ++KiTotalCpuSetCount;
    v7 = (unsigned int)(v4 + ((_DWORD)v3 << 6));
    *((_QWORD *)KiCpuSetAffinities + v7) = v6;
    *((_QWORD *)KiCpuSetAffinitiesShadow + v7) = *(_QWORD *)(a1 + 200);
    KiSystemAllowedCpuSets[2 * (unsigned int)v5] |= 1LL << v4;
    KiNonParkedCpuSets[v5] |= 1LL << v4;
    p_SecureState = &PsInitialSystemProcess[3].SecureState;
    if ( (HIDWORD(PsInitialSystemProcess[3].ActiveGroupsMask.Masks[1]) & 0x80u) != 0 )
      p_SecureState = ($1BEA1023BCAB02611A0650306801F03C *)p_SecureState->SecureHandle;
    p_SecureState[v5].SecureHandle |= 1LL << v4;
    RtlWriteReleaseTickLock(&KiCpuSetSequence);
    KxReleaseSpinLock((volatile signed __int64 *)&KiCpuSetLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
