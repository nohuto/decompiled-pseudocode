/*
 * XREFs of KeSetTagCpuSets @ 0x1405BFDEC
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x14029D4E4 (RtlWriteAcquireTickLock.c)
 *     KiValidateCpuSetMasks @ 0x1403C8288 (KiValidateCpuSetMasks.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetTagCpuSets(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  unsigned int i; // r8d
  unsigned __int64 j; // rdx
  unsigned __int64 v10; // rcx

  v3 = (unsigned __int64 *)a2;
  result = KiValidateCpuSetMasks(a2, a1);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < a1; ++v3 )
    {
      for ( j = *v3; j; *(_QWORD *)(KiCpuSetData + 16LL * ((i << 6) + (unsigned int)v10) + 8) = a3 )
      {
        _BitScanForward64(&v10, j);
        j &= ~(1LL << v10);
      }
      ++i;
    }
    ++KiCpuSetSequence;
    KxReleaseSpinLock((volatile signed __int64 *)&KiCpuSetLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  return result;
}
