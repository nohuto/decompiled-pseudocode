/*
 * XREFs of IrqTranslatepQueryDeviceIrql @ 0x1400B15D0
 * Callers:
 *     IrqTransGetInterruptVector @ 0x1400AA520 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1400B13D0 (IrqTranslateResources.c)
 * Callees:
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 *     IrqArbGetDeviceIrql @ 0x1400B1664 (IrqArbGetDeviceIrql.c)
 */

char __fastcall IrqTranslatepQueryDeviceIrql(unsigned int a1, int a2)
{
  _BYTE v5[16]; // [rsp+20h] [rbp-88h] BYREF
  _DWORD v6[24]; // [rsp+30h] [rbp-78h] BYREF

  v5[0] = 0;
  memset(&v6[2], 0, 0x50uLL);
  v6[1] = a2;
  if ( a1 >= 0xFFF00000 )
  {
    v6[0] = 3;
  }
  else
  {
    v6[0] = 0;
    v6[14] = a1;
  }
  IrqArbGetDeviceIrql(v6, v5);
  return v5[0];
}
