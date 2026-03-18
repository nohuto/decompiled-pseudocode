/*
 * XREFs of KeSrcuSynchronize @ 0x140730930
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x140489B40 (KeInitializeGate.c)
 *     KiSrcuStartGracePeriod @ 0x1405BD9BC (KiSrcuStartGracePeriod.c)
 */

__int64 __fastcall KeSrcuSynchronize(KSPIN_LOCK *a1)
{
  _OWORD v3[3]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  KeInitializeGate((__int64)&v3[1] + 8, 0);
  KiSrcuStartGracePeriod(a1, (KSPIN_LOCK *)v3);
  return KeWaitForGate((__int64)&v3[1] + 8, 42, 0);
}
