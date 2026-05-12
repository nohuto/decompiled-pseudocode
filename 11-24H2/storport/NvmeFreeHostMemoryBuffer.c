/*
 * XREFs of NvmeFreeHostMemoryBuffer @ 0x1400F8BE0
 * Callers:
 *     NvmeControllerRemove @ 0x1400F3DCC (NvmeControllerRemove.c)
 *     NvmeControllerStop @ 0x1400F51D8 (NvmeControllerStop.c)
 * Callees:
 *     StorpFreeHostMemoryBuffer @ 0x1400538E8 (StorpFreeHostMemoryBuffer.c)
 *     NvmeControllerSetHostMemoryBuffer @ 0x1400C9C40 (NvmeControllerSetHostMemoryBuffer.c)
 */

void __fastcall NvmeFreeHostMemoryBuffer(__int64 a1)
{
  unsigned int *v2; // rdx
  size_t Size; // [rsp+30h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 1200) )
  {
    if ( (*(_QWORD *)(a1 + 968) & 0x8000LL) == 0 )
    {
      v2 = *(unsigned int **)(a1 + 1200);
      LODWORD(Size) = v2[1];
      NvmeControllerSetHostMemoryBuffer(a1, 1, 0, 0, *v2, v2 + 2, Size);
    }
    StorpFreeHostMemoryBuffer(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 408LL) + 16LL);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1200), 0x484E6152u);
    *(_QWORD *)(a1 + 1200) = 0LL;
  }
}
