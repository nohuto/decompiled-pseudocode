/*
 * XREFs of RawDeleteVcb @ 0x140A6EA4C
 * Callers:
 *     RawInitiateDeleteVolume @ 0x14048397C (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1404BD08C (RawCheckForDeleteVolume.c)
 * Callees:
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 192));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
