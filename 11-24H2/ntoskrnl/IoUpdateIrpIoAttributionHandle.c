/*
 * XREFs of IoUpdateIrpIoAttributionHandle @ 0x14025DC10
 * Callers:
 *     <none>
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14025CCA4 (IopSetDiskIoAttributionExtension.c)
 */

__int64 __fastcall IoUpdateIrpIoAttributionHandle(__int64 a1, __int64 a2)
{
  return IopSetDiskIoAttributionExtension(a1, a2, (__int64)KeGetCurrentThread(), 1);
}
