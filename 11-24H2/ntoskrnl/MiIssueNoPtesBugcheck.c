/*
 * XREFs of MiIssueNoPtesBugcheck @ 0x1404F3650
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MmGetNumberOfFreeSystemPtes @ 0x1403F5EC4 (MmGetNumberOfFreeSystemPtes.c)
 *     MiGetHighestPteConsumer @ 0x1404F36B8 (MiGetHighestPteConsumer.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiIssueNoPtesBugcheck(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR HighestPteConsumer; // rbx
  ULONG_PTR NumberOfFreeSystemPtes; // rax
  ULONG_PTR v4; // rax
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp+10h] BYREF

  BugCheckParameter2a = 0LL;
  v1 = (unsigned int)BugCheckParameter2;
  HighestPteConsumer = MiGetHighestPteConsumer(&BugCheckParameter2a);
  if ( HighestPteConsumer )
  {
    NumberOfFreeSystemPtes = MmGetNumberOfFreeSystemPtes();
    KeBugCheckEx(0xD8u, HighestPteConsumer, BugCheckParameter2a, NumberOfFreeSystemPtes, 0LL);
  }
  v4 = MmGetNumberOfFreeSystemPtes();
  KeBugCheckEx(0x3Fu, 0LL, v1, v4, 0LL);
}
