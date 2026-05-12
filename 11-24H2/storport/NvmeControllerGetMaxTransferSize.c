/*
 * XREFs of NvmeControllerGetMaxTransferSize @ 0x1400EEC00
 * Callers:
 *     NvmeControllerEssentialInitialize @ 0x1400ECE18 (NvmeControllerEssentialInitialize.c)
 *     NvmeNamespaceComputeBlockInfo @ 0x1400FCDF8 (NvmeNamespaceComputeBlockInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerGetMaxTransferSize(__int64 a1)
{
  char v1; // r10
  unsigned int v2; // r8d
  unsigned int *v3; // rax
  unsigned int v4; // ecx

  v1 = *(_BYTE *)(*(_QWORD *)(a1 + 592) + 77LL);
  if ( !v1 || (v2 = (1 << v1) * (1 << ((*(_BYTE *)(a1 + 590) & 0xF) + 12)), v2 > 0x200000) )
    v2 = 0x200000;
  v3 = *(unsigned int **)(a1 + 1048);
  if ( v3 )
  {
    if ( *v3 && v2 >= *v3 )
      v2 = *v3;
    v4 = v3[5];
    if ( v4 && v4 < v2 )
      return v3[5];
  }
  return v2;
}
