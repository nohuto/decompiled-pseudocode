/*
 * XREFs of ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1400C4C2C
 * Callers:
 *     NdisMDeregisterInterrupt @ 0x1400D7820 (NdisMDeregisterInterrupt.c)
 *     NdisMDeregisterInterruptEx @ 0x1401718F0 (NdisMDeregisterInterruptEx.c)
 *     NdisMRegisterInterruptEx @ 0x14017A320 (NdisMRegisterInterruptEx.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x140165B80 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 */

void __fastcall ndisWaitForDpcCompletion(volatile int *a1, volatile unsigned __int8 *a2, struct _KEVENT *a3)
{
  int i; // eax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  *a2 = 1;
  _InterlockedOr(v6, 0);
  for ( i = *a1; i > 0; i = *a1 )
    ndisWaitForKernelObject(a3, 1000LL);
}
