/*
 * XREFs of HalpCreateInterrupt @ 0x14055A380
 * Callers:
 *     HalpTimerTestHypervisorTimer @ 0x14054A490 (HalpTimerTestHypervisorTimer.c)
 *     HalpInterruptSetIdtEntry @ 0x14055A460 (HalpInterruptSetIdtEntry.c)
 * Callees:
 *     KeInitializeInterruptEx @ 0x14047E278 (KeInitializeInterruptEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpAllocateKInterrupt @ 0x14055A274 (HalpAllocateKInterrupt.c)
 *     KeConnectInterruptForHal @ 0x1405BC4E0 (KeConnectInterruptForHal.c)
 */

char *__fastcall HalpCreateInterrupt(
        __int64 (__fastcall *a1)(struct _KINTERRUPT *a1, void *a2, __int64 a3, __int64 a4),
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
