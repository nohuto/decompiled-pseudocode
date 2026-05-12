/*
 * XREFs of RiAllocateMiniportDeviceExtension @ 0x140181048
 * Callers:
 *     RaidInitializeAdapter @ 0x1401BE038 (RaidInitializeAdapter.c)
 *     InitializeNvmeAdapter @ 0x1401BEFA0 (InitializeNvmeAdapter.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall RiAllocateMiniportDeviceExtension(__int64 a1)
{
  unsigned int v2; // ecx
  _QWORD *Pool; // rax

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 232) + 64LL);
  if ( v2 >= 0xFFFFFFF0 )
    return 3221225495LL;
  if ( v2 + 16 < v2 )
    return 3221225495LL;
  Pool = (_QWORD *)RaidAllocatePool(
                     64LL,
                     v2 + 16,
                     (*(_BYTE *)(a1 + 248) & 1) != 0 ? 1447977298 : 1162699090,
                     *(_QWORD *)(*(_QWORD *)a1 + 8LL));
  *(_QWORD *)(a1 + 240) = Pool;
  if ( !Pool )
    return 3221225495LL;
  *Pool = a1;
  *(_QWORD *)(*(_QWORD *)(a1 + 240) + 8LL) = a1;
  return 0LL;
}
