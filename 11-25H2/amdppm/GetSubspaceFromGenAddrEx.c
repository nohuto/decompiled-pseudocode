/*
 * XREFs of GetSubspaceFromGenAddrEx @ 0x14000688C
 * Callers:
 *     CpcInitRegisterAddresses @ 0x140025278 (CpcInitRegisterAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSubspaceFromGenAddrEx(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
