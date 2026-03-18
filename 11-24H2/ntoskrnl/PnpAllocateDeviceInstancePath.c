/*
 * XREFs of PnpAllocateDeviceInstancePath @ 0x140724790
 * Callers:
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpAllocateDeviceInstancePath(__int64 a1, __int16 a2)
{
  __int64 Pool2; // rax

  *(_WORD *)(a1 + 42) = a2;
  *(_WORD *)(a1 + 40) = 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  *(_QWORD *)(a1 + 48) = Pool2;
  return Pool2 == 0 ? 0xC000009A : 0;
}
