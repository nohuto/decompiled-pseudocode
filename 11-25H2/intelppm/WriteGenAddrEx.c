/*
 * XREFs of WriteGenAddrEx @ 0x14000170C
 * Callers:
 *     PerfControlCpc @ 0x1400015F0 (PerfControlCpc.c)
 *     WriteGenAddrHiddenEx @ 0x140008B58 (WriteGenAddrHiddenEx.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x140008B8C (WriteGenAddrMaybeHiddenEx.c)
 * Callees:
 *     WriteIoMemRawEx @ 0x140001790 (WriteIoMemRawEx.c)
 *     ReadIoMemRawEx @ 0x1400018A4 (ReadIoMemRawEx.c)
 *     WriteGenAddr @ 0x140001A70 (WriteGenAddr.c)
 */

__int64 __fastcall WriteGenAddrEx(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // r11
  __int64 IoMemRaw; // rax
  unsigned __int8 v5; // cl

  v2 = a2;
  v3 = a1;
  if ( *a1 == 1 || *a1 == 127 )
    return WriteGenAddr(a1, a2);
  if ( a1[2] || a1[1] != 64 )
  {
    IoMemRaw = ReadIoMemRawEx();
    v5 = v3[1];
    if ( v5 < 0x40u || v3[2] )
      v2 = IoMemRaw & ~(((1LL << v5) - 1) << v3[2]) | (((1LL << v5) - 1) << v3[2]) & (v2 << v3[2]);
  }
  return WriteIoMemRawEx(v3, v2);
}
