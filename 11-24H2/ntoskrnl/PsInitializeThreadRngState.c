/*
 * XREFs of PsInitializeThreadRngState @ 0x14047A17C
 * Callers:
 *     KiAllocatePrcbThread @ 0x1405B52C0 (KiAllocatePrcbThread.c)
 *     KiInitializeAndStartInitialThread @ 0x1405C03D4 (KiInitializeAndStartInitialThread.c)
 *     PspAllocateThread @ 0x1408FAFD4 (PspAllocateThread.c)
 * Callees:
 *     RtlInitializeTRng @ 0x14047A204 (RtlInitializeTRng.c)
 */

__int64 __fastcall PsInitializeThreadRngState(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1 ^ (unsigned __int64)KeGetCurrentThread() ^ *(_QWORD *)(a1 + 40) ^ *(_QWORD *)(a1 + 240) ^ *(_QWORD *)(a1 + 1216) ^ *(_QWORD *)(a1 + 1288) ^ *(_QWORD *)(a1 + 1296);
  v1 = (unsigned __int64)&v3 ^ v3 ^ KeGetCurrentPrcb()->InterruptCount ^ __rdtsc();
  if ( !v1 )
    v1 = 1LL;
  return RtlInitializeTRng(a1 + 1888, v1);
}
