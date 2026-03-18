/*
 * XREFs of KeFlushEntireTb @ 0x1405B89A0
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140C43D10 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     KiFlushAddressSpaceTb @ 0x14026F6A0 (KiFlushAddressSpaceTb.c)
 *     KxFlushEntireTb @ 0x14027043C (KxFlushEntireTb.c)
 *     ExFlushTb @ 0x1403FA11C (ExFlushTb.c)
 *     KiPreprocessFlushTb @ 0x140403650 (KiPreprocessFlushTb.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 KeFlushEntireTb()
{
  __int64 v0; // r8
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  char v3; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int8 v4; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0;
  KiPreprocessFlushTb(1, 2u, 2, &v3, &v4);
  if ( v3 )
  {
    LOBYTE(v0) = 1;
    result = KiFlushAddressSpaceTb(0LL, 0LL, v0, 1);
  }
  else
  {
    result = KxFlushEntireTb(2LL);
  }
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    ExFlushTb(0, 0LL, 2);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
