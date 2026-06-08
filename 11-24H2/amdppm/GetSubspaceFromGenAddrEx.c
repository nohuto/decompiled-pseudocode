/*
 * XREFs of GetSubspaceFromGenAddrEx @ 0x14000752C
 * Callers:
 *     CpcInitRegisterAddresses @ 0x140026484 (CpcInitRegisterAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSubspaceFromGenAddrEx(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
