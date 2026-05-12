/*
 * XREFs of NvmeControllerInitReenumerationContext @ 0x1400BF21C
 * Callers:
 *     NvmeControllerStartReenumeration @ 0x1400BF540 (NvmeControllerStartReenumeration.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeControllerDeleteReenumerationContext @ 0x1400BEB40 (NvmeControllerDeleteReenumerationContext.c)
 */

__int64 __fastcall NvmeControllerInitReenumerationContext(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 Pool; // rax

  v1 = 0;
  if ( *(_QWORD *)(a1 + 1656) )
    return 0LL;
  Pool = RaidAllocatePool(64LL, 56LL, 1950703954LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 1656) = Pool;
  if ( !Pool
    || (*(_QWORD *)(*(_QWORD *)(a1 + 1656) + 48LL) = RaidAllocatePool(
                                                       64LL,
                                                       4096LL,
                                                       1950703954LL,
                                                       *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL))) == 0LL
    || (*(_QWORD *)(*(_QWORD *)(a1 + 1656) + 40LL) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 128) + 8LL))) == 0LL )
  {
    v1 = -1073741670;
    NvmeControllerDeleteReenumerationContext(a1);
  }
  return v1;
}
