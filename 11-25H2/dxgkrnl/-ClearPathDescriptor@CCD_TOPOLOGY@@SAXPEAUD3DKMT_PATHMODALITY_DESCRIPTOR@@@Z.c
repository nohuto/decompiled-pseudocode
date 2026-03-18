/*
 * XREFs of ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1402EB8EC
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1402EA610 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     ?RemoveResolutionPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1402EB934 (-RemoveResolutionPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

void __fastcall CCD_TOPOLOGY::ClearPathDescriptor(struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  __int64 v1; // rcx

  CCD_TOPOLOGY::RemoveResolutionPathDescriptor(a1);
  *(_QWORD *)v1 = 0LL;
  *(_DWORD *)(v1 + 24) = -1;
  *(_DWORD *)(v1 + 28) = -1;
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_DWORD *)(v1 + 88) = -2;
  *(_DWORD *)(v1 + 92) = -2;
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_DWORD *)(v1 + 132) = 0;
  *(_QWORD *)(v1 + 144) = 0LL;
  *(_DWORD *)(v1 + 188) = 0;
}
