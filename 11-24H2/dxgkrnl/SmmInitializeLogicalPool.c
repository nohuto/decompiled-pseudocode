/*
 * XREFs of SmmInitializeLogicalPool @ 0x140095700
 * Callers:
 *     SmmInitializeLogicalAllocator @ 0x14028730C (SmmInitializeLogicalAllocator.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmInitializeLogicalPool(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
  *(_DWORD *)(a1 + 16) = 0;
}
