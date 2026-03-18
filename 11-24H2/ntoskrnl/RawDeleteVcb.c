/*
 * XREFs of RawDeleteVcb @ 0x140A70C4C
 * Callers:
 *     RawInitiateDeleteVolume @ 0x14048419C (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1404BC1EC (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1403F1B00 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 192));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
