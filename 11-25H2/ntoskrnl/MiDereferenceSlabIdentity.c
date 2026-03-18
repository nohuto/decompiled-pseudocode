/*
 * XREFs of MiDereferenceSlabIdentity @ 0x14067BEA0
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1408D7B40 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x140A47B88 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDereferenceSlabIdentity(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  result = a2;
  if ( _InterlockedDecrement64((volatile signed __int64 *)(a1 + 8LL * a2 + 17752)) <= -1 )
    __fastfail(0xEu);
  return result;
}
