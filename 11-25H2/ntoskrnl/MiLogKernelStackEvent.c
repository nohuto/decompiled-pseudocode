/*
 * XREFs of MiLogKernelStackEvent @ 0x1404CCB64
 * Callers:
 *     MmCreateKernelStack @ 0x140345F40 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 *     MiInPageSingleKernelStack @ 0x14046BDAC (MiInPageSingleKernelStack.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogKernelStackEvent(__int64 a1, __int64 a2, int a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp-20h] BYREF
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]

  v4[1] = a1;
  v4[2] = a2;
  v4[0] = 11LL;
  v5 = v4;
  v7 = 0;
  v6 = 24;
  return EtwTraceKernelEvent((int)&v5, 1, 0x20000001u, 633 - (a3 != 0), 290462468);
}
