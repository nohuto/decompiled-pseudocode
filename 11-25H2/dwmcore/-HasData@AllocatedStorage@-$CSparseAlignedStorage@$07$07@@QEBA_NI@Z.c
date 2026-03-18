/*
 * XREFs of ?HasData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEBA_NI@Z @ 0x180195A80
 * Callers:
 *     ?ProcessVisuals@CPreWalkVisual@@SAXXZ @ 0x18001E4A0 (-ProcessVisuals@CPreWalkVisual@@SAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::HasData(_DWORD *a1, char a2)
{
  return (__ROR4__(1, a2) & *a1) != 0;
}
