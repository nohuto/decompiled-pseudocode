/*
 * XREFs of RamdiskInitialize @ 0x140C60778
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 * Callees:
 *     _memicmp @ 0x14051E8A0 (_memicmp.c)
 *     RamdiskCreateSymbolicLink @ 0x140C60628 (RamdiskCreateSymbolicLink.c)
 *     RamdiskStart @ 0x140C607D8 (RamdiskStart.c)
 */

__int64 __fastcall RamdiskInitialize(int a1, __int64 a2, __int64 a3)
{
  if ( a1 )
    return RamdiskCreateSymbolicLink(a2, a3);
  if ( memicmp(*(const void **)(a2 + 184), "ramdisk(", 8uLL) )
    return 3221226021LL;
  return RamdiskStart(a2, a3);
}
