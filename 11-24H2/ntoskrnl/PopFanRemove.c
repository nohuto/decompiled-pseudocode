/*
 * XREFs of PopFanRemove @ 0x14075CEF0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140418FA0 (IoCancelIrp.c)
 *     PopFanSetNoiseImpact @ 0x14075CF3C (PopFanSetNoiseImpact.c)
 */

__int64 __fastcall PopFanRemove(__int64 a1)
{
  *(_BYTE *)(a1 + 440) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 416), Executive, 0, 0, 0LL);
  return PopFanSetNoiseImpact(a1, 0LL);
}
