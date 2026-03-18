/*
 * XREFs of ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x140268464
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x140269DA4 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x14026A604 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x140055024 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x140188460 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x14031B3D8 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemoveCloneGroupByModality(CCD_TOPOLOGY *this, const struct _LUID *a2, int a3)
{
  __int64 v3; // rax
  int v4; // ebp
  unsigned int v5; // ebx
  __int64 v9; // r9
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  __int64 v12; // rdi
  int v13; // r10d
  unsigned int v14; // edi
  __int64 v15; // rdx

  v3 = *((_QWORD *)this + 8);
  v4 = -1;
  v5 = 0;
  if ( v3 && *(_WORD *)(v3 + 20) )
  {
    CCD_TOPOLOGY::ClearModalitySetId(this);
    v9 = *((_QWORD *)this + 8);
    v10 = 0;
    v11 = *(unsigned __int16 *)(v9 + 20);
    while ( v10 < v11 )
    {
      v12 = 296LL * v10;
      if ( CCD_TOPOLOGY::IsMatchingSource((const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v12 + v9 + 56), a2, a3) )
      {
        v4 = *(_DWORD *)(v12 + v9 + 240);
        break;
      }
      v10 = v13 + 1;
    }
    v14 = 0;
    if ( v11 )
    {
      v15 = v9;
      do
      {
        v9 = v15;
        if ( v4 != *(_DWORD *)(296LL * v14 + v15 + 240) )
        {
          if ( v5 != v14 )
          {
            CCD_TOPOLOGY::SwapPathsDescriptors(this, v14, v5);
            v9 = *((_QWORD *)this + 8);
          }
          ++v5;
        }
        ++v14;
        v15 = v9;
      }
      while ( v14 < *(unsigned __int16 *)(v9 + 20) );
    }
    *(_WORD *)(v9 + 20) = v5;
  }
  return 0LL;
}
