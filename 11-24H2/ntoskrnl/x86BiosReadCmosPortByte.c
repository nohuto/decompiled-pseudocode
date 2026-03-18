/*
 * XREFs of x86BiosReadCmosPortByte @ 0x1405466B4
 * Callers:
 *     x86BiosReadCmosPort @ 0x140546634 (x86BiosReadCmosPort.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140425E04 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLock @ 0x140425EE8 (HalpAcquireCmosSpinLock.c)
 */

char __fastcall x86BiosReadCmosPortByte(char a1)
{
  char v1; // dl

  if ( (a1 & 1) == 0 )
    return XmCmosAddress;
  HalpAcquireCmosSpinLock();
  __outbyte(0x70u, XmCmosAddress);
  __inbyte(0x71u);
  HalpReleaseCmosSpinLock();
  return v1;
}
