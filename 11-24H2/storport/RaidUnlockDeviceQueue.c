/*
 * XREFs of RaidUnlockDeviceQueue @ 0x140053B48
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1401BC368 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnlockDeviceQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 37) = 0;
}
