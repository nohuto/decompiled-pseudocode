/*
 * XREFs of NdisCoSendPackets @ 0x1400D3DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisCoSendPackets(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 264))();
}
