/*
 * XREFs of x86BiosWritePciDataPort @ 0x1405441D0
 * Callers:
 *     x86BiosWriteIoSpace @ 0x140461350 (x86BiosWriteIoSpace.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 x86BiosWritePciDataPort()
{
  return guard_dispatch_icall_no_overrides(
           BYTE2(XmPCIConfigAddress),
           (XmPCIConfigAddress & 0x700 | ((unsigned int)XmPCIConfigAddress >> 8) & 0xF8) >> 3);
}
