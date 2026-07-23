/*
 * XREFs of KeSetGroupMaskProcess @ 0x140494478
 * Callers:
 *     KeInitializeProcess @ 0x140A45798 (KeInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetGroupMaskProcess(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 152) = *a2;
}
