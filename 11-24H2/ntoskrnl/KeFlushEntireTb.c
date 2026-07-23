/*
 * XREFs of KeFlushEntireTb @ 0x1405B9E70
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140C57120 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     ExFlushTb @ 0x1402A1EA4 (ExFlushTb.c)
 *     KiPreprocessFlushTb @ 0x14039D3D0 (KiPreprocessFlushTb.c)
 *     KiFlushAddressSpaceTb @ 0x14039E4BC (KiFlushAddressSpaceTb.c)
 *     KxFlushEntireTb @ 0x14039EFB4 (KxFlushEntireTb.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
