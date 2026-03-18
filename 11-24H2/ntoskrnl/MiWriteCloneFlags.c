/*
 * XREFs of MiWriteCloneFlags @ 0x14047F9C8
 * Callers:
 *     SymCryptModExpWindowed @ 0x1405378D8 (SymCryptModExpWindowed.c)
 *     MiCloneProcessAddressSpace @ 0x140ABD72C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall MiWriteCloneFlags(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
