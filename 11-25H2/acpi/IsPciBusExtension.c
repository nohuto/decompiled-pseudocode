/*
 * XREFs of IsPciBusExtension @ 0x1400B468C
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x14003C610 (ACPIFilterIrpRemoveDevice.c)
 * Callees:
 *     IsNsobjPciBus @ 0x1400B47D0 (IsNsobjPciBus.c)
 */

__int64 __fastcall IsPciBusExtension(__int64 a1)
{
  return IsNsobjPciBus(*(_QWORD *)(a1 + 760));
}
