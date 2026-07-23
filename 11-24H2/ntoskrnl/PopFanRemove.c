/*
 * XREFs of PopFanRemove @ 0x14075BE90
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     PopFanSetNoiseImpact @ 0x14075BEDC (PopFanSetNoiseImpact.c)
 */

__int64 __fastcall PopFanRemove(__int64 a1)
{
  *(_BYTE *)(a1 + 440) = 1;
  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 416), Executive, 0, 0, 0LL);
  return PopFanSetNoiseImpact(a1, 0LL);
}
