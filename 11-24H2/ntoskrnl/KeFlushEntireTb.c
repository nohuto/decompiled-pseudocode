/*
 * XREFs of KeFlushEntireTb @ 0x1405BC840
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140C54F90 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     ExFlushTb @ 0x1402922A4 (ExFlushTb.c)
 *     KiPreprocessFlushTb @ 0x1403AEBC0 (KiPreprocessFlushTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403AFCAC (KiFlushAddressSpaceTb.c)
 *     KxFlushEntireTb @ 0x1403B07A4 (KxFlushEntireTb.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 KeFlushEntireTb()
{
  __int64 v0; // r8
  __int64 result; // rax
  __int64 v2; // r9
  unsigned __int8 CurrentIrql; // bl
  char v4; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int8 v5; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0;
  KiPreprocessFlushTb(1, 2u, 2, &v4, &v5);
  if ( v4 )
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
    ExFlushTb(0, 0LL, 2, v2);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
