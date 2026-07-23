/*
 * XREFs of x86BiosWriteCmosPortByte @ 0x1405440F0
 * Callers:
 *     x86BiosWriteCmosPort @ 0x140544078 (x86BiosWriteCmosPort.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140419CB4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140419D98 (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall x86BiosWriteCmosPortByte(char a1, unsigned __int8 a2)
{
  __int64 result; // rax

  if ( (a1 & 1) != 0 )
  {
    HalpAcquireCmosSpinLock();
    __outbyte(0x70u, XmCmosAddress);
    __outbyte(0x71u, a2);
    return HalpReleaseCmosSpinLock();
  }
  else
  {
    XmCmosAddress = a2;
  }
  return result;
}
