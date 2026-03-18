/*
 * XREFs of KeSetGroupMaskProcess @ 0x1404998C8
 * Callers:
 *     KeInitializeProcess @ 0x1409BE04C (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 152) = *a2;
}
