/*
 * XREFs of RawDeleteVcb @ 0x140A6A0DC
 * Callers:
 *     RawInitiateDeleteVolume @ 0x14047F73C (RawInitiateDeleteVolume.c)
 *     RawCheckForDeleteVolume @ 0x1404B6EAC (RawCheckForDeleteVolume.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 */

void __fastcall RawDeleteVcb(__int64 a1)
{
  ObfDereferenceObject(*(PVOID *)(a1 + 192));
  IoDeleteDevice((PDEVICE_OBJECT)(a1 - 336));
}
