/*
 * XREFs of MiDereferenceSlabIdentity @ 0x140688860
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
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
