/*
 * XREFs of KiAllocateStaticRescheduleContext @ 0x1405B5F24
 * Callers:
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140B746D0 (ExAllocatePool3.c)
 */

__int64 __fastcall KiAllocateStaticRescheduleContext(__int64 a1)
{
  __int64 Pool3; // rcx
  __int64 result; // rax

  Pool3 = ExAllocatePool3(0x40uLL, 1);
  result = 0LL;
  if ( !Pool3 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 14312) = Pool3;
  return result;
}
