/*
 * XREFs of HalpCreateInterrupt @ 0x140557A80
 * Callers:
 *     HalpTimerTestHypervisorTimer @ 0x140547BA0 (HalpTimerTestHypervisorTimer.c)
 *     HalpInterruptSetIdtEntry @ 0x140557B60 (HalpInterruptSetIdtEntry.c)
 * Callees:
 *     KeInitializeInterruptEx @ 0x14047DDDC (KeInitializeInterruptEx.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpAllocateKInterrupt @ 0x140557974 (HalpAllocateKInterrupt.c)
 *     KeConnectInterruptForHal @ 0x1405B8640 (KeConnectInterruptForHal.c)
 */

char *__fastcall HalpCreateInterrupt(
        __int64 (__fastcall *a1)(struct _KINTERRUPT *a1, void *a2),
        int a2,
        char a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int Number; // ebp
  char *KInterrupt; // rbx
  int v11; // [rsp+68h] [rbp-20h]

  Number = KeGetPcr()->Prcb.Number;
  KInterrupt = HalpAllocateKInterrupt(Number, a2);
  if ( !KInterrupt )
    KeBugCheckEx(0xACu, 0x120uLL, 3uLL, (ULONG_PTR)"minkernel\\hals\\lib\\interrupts\\common\\kintrupt.c", 0x190uLL);
  KeInitializeInterruptEx(KInterrupt, a1, 0LL, 0LL, 0, a5, 0LL, a2, a3, a3, 1, 0, Number, v11, 0, 0LL);
  KeConnectInterruptForHal(KInterrupt);
  return KInterrupt;
}
