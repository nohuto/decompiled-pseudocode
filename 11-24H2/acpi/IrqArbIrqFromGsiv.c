/*
 * XREFs of IrqArbIrqFromGsiv @ 0x1400A9D8C
 * Callers:
 *     IrqArbpAssignIrqFromLinkNode @ 0x1400A9FFC (IrqArbpAssignIrqFromLinkNode.c)
 *     IrqArbGetNextAllocationRange @ 0x1400BC8E0 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1400BF404 (IrqArbpFindSuitableRangePci.c)
 *     IrqPolicyGetDistributionDisposition @ 0x1400C8D54 (IrqPolicyGetDistributionDisposition.c)
 * Callees:
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1400C05C0 (IrqArbpLookupIsaOverrideByGsiv.c)
 */

__int64 __fastcall IrqArbIrqFromGsiv(__int64 a1)
{
  char v1; // al
  unsigned int v2; // ecx
  unsigned int v3; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v1 = IrqArbpLookupIsaOverrideByGsiv(a1, &v5);
  v3 = v5;
  if ( !v1 )
    return v2;
  return v3;
}
