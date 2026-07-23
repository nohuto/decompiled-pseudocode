/*
 * XREFs of MiLogKernelStackEvent @ 0x1404C5C18
 * Callers:
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     MiInPageSingleKernelStack @ 0x14047BE44 (MiInPageSingleKernelStack.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
