/*
 * XREFs of SmmInitializeLogicalPool @ 0x1400931FC
 * Callers:
 *     SmmInitializeLogicalAllocator @ 0x14027FE70 (SmmInitializeLogicalAllocator.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmInitializeLogicalPool(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
  *(_DWORD *)(a1 + 16) = 0;
}
