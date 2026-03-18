/*
 * XREFs of KeSetGroupMaskProcess @ 0x140499A10
 * Callers:
 *     KeInitializeProcess @ 0x140A4EB18 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 152) = *a2;
}
