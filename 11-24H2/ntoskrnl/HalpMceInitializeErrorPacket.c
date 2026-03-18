/*
 * XREFs of HalpMceInitializeErrorPacket @ 0x140B6D8FC
 * Callers:
 *     HalpMceInitProcessor @ 0x140B687E8 (HalpMceInitProcessor.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpGetMcaPcrContext @ 0x14047D638 (HalpGetMcaPcrContext.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpMceInitializeErrorPacketContents @ 0x140B6D988 (HalpMceInitializeErrorPacketContents.c)
 */

void __fastcall HalpMceInitializeErrorPacket(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  volatile __int64 *McaPcrContext; // rbx
  __int64 v11; // rdi

  v4 = HalpMmAllocCtxAlloc(a1, 1272LL);
  v5 = v4;
  if ( !v4 )
    KeBugCheckEx(0xACu, 0x4F8uLL, 0xDA00uLL, (ULONG_PTR)"minkernel\\hals\\lib\\whea\\mca.c", 0x737uLL);
  HalpMceInitializeErrorPacketContents(v4);
  McaPcrContext = (volatile __int64 *)HalpGetMcaPcrContext(a2, v6, v7, v8);
  v11 = _InterlockedExchange64(McaPcrContext, v5);
  if ( v11 )
    HalpMmAllocCtxFree(v9, v11);
  _InterlockedExchange64(McaPcrContext + 1, a1);
}
