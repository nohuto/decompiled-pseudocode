/*
 * XREFs of GetSubspaceFromGenAddrEx @ 0x14000C030
 * Callers:
 *     CpcInitRegisterAddresses @ 0x14002D25C (CpcInitRegisterAddresses.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSubspaceFromGenAddrEx(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
