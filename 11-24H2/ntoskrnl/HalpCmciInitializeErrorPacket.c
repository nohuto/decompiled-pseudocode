/*
 * XREFs of HalpCmciInitializeErrorPacket @ 0x14047CC18
 * Callers:
 *     HalpInitializeCmc @ 0x140B4BAE8 (HalpInitializeCmc.c)
 *     HalpCmciInit @ 0x140B6C938 (HalpCmciInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     HalpCmcInitializeErrorPacketContents @ 0x14047CCF0 (HalpCmcInitializeErrorPacketContents.c)
 *     HalpGetMcaPcrContext @ 0x14047D638 (HalpGetMcaPcrContext.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpCmciInitializeErrorPacket(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 McaPcrContext; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rdx
  __int64 result; // rax

  v3 = 0LL;
  McaPcrContext = HalpGetMcaPcrContext(a2);
  if ( !*(_QWORD *)(McaPcrContext + 16) )
  {
    v3 = HalpMmAllocCtxAlloc(v4, 1272LL);
    if ( !v3 )
      KeBugCheckEx(0xACu, 0x4F8uLL, 0xDA00uLL, 0LL, 0LL);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4, 15LL);
  }
  if ( v3 )
    *(_QWORD *)(McaPcrContext + 16) = v3;
  HalpCmcInitializeErrorPacketContents(*(_QWORD *)(McaPcrContext + 16));
  *(_OWORD *)(*(_QWORD *)(McaPcrContext + 16) + 32LL) = CMCI_NOTIFY_TYPE_GUID;
  *(_QWORD *)(McaPcrContext + 24) = a1;
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
