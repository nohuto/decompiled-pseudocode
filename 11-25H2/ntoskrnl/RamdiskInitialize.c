/*
 * XREFs of RamdiskInitialize @ 0x140C4D2A8
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 * Callees:
 *     _memicmp @ 0x14051E850 (_memicmp.c)
 *     RamdiskCreateSymbolicLink @ 0x140C4D158 (RamdiskCreateSymbolicLink.c)
 *     RamdiskStart @ 0x140C4D308 (RamdiskStart.c)
 */

__int64 __fastcall RamdiskInitialize(int a1, __int64 a2, __int64 a3)
{
  if ( a1 )
    return RamdiskCreateSymbolicLink(a2, a3);
  if ( memicmp(*(const void **)(a2 + 184), "ramdisk(", 8uLL) )
    return 3221226021LL;
  return RamdiskStart(a2, a3);
}
