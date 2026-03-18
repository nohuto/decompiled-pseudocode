/*
 * XREFs of HalpMceInitializeErrorPacket @ 0x140B5E84C
 * Callers:
 *     HalpMceInitProcessor @ 0x140B589B8 (HalpMceInitProcessor.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     HalpGetMcaPcrContext @ 0x14047C738 (HalpGetMcaPcrContext.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpMceInitializeErrorPacketContents @ 0x140B5E8D8 (HalpMceInitializeErrorPacketContents.c)
 */

void __fastcall HalpMceInitializeErrorPacket(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  volatile __int64 *McaPcrContext; // rbx
  __int64 v9; // rdi

  v4 = HalpMmAllocCtxAlloc(a1, 1272LL);
  v5 = v4;
  if ( !v4 )
    KeBugCheckEx(0xACu, 0x4F8uLL, 0xDA00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\mca.c", 0x737uLL);
  HalpMceInitializeErrorPacketContents(v4);
  McaPcrContext = (volatile __int64 *)HalpGetMcaPcrContext(a2, v6);
  v9 = _InterlockedExchange64(McaPcrContext, v5);
  if ( v9 )
    HalpMmAllocCtxFree(v7, v9);
  _InterlockedExchange64(McaPcrContext + 1, a1);
}
