/*
 * XREFs of MiWriteCloneFlags @ 0x14047A758
 * Callers:
 *     SymCryptModExpWindowed @ 0x140531D78 (SymCryptModExpWindowed.c)
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

void __fastcall MiWriteCloneFlags(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
