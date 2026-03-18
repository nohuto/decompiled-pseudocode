/*
 * XREFs of ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x14026A604
 * Callers:
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x140269C90 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x14031B5E4 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1403EFE50 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140050A90 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x140055024 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z @ 0x140091094 (-_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x140268464 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x14026A7F8 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402D70F0 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1402D9B64 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 */

__int64 __fastcall CDS_JOURNAL::_CommitEntry(const struct CDS_JOURNAL::_ENTRY *a1, struct CCD_TOPOLOGY *this)
{
  char IsPrimaryClonePathByModality; // r14
  int v3; // r12d
  unsigned int i; // ebx
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  _DWORD *v9; // r15
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rcx
  __int64 result; // rax
  unsigned int v12; // edi
  unsigned int j; // r14d
  __int64 v14; // rax
  unsigned __int16 v15; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // r13
  bool v18; // bl
  char v19; // al
  int v20; // [rsp+80h] [rbp+18h]

  IsPrimaryClonePathByModality = 0;
  v20 = -1;
  v3 = -1;
  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    v9 = (_DWORD *)((char *)a1 + 20);
    if ( i >= v8 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    if ( *((_DWORD *)PathDescriptor + 7) == *((_DWORD *)a1 + 8)
      && *((_DWORD *)PathDescriptor + 4) == *v9
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a1 + 6) )
    {
      v3 = *((_DWORD *)PathDescriptor + 6);
      v20 = *((_DWORD *)PathDescriptor + 46);
      IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i);
      break;
    }
  }
  if ( CDS_JOURNAL::_IsUnextend(a1) )
  {
    if ( v3 != -1 && IsPrimaryClonePathByModality )
    {
      result = CCD_TOPOLOGY::RemoveCloneGroupByModality(this, (const struct _LUID *)((char *)a1 + 20), v3);
      goto LABEL_15;
    }
    WdLogSingleEntry5(3LL, *((int *)a1 + 6), (unsigned int)*v9, *((unsigned int *)a1 + 8), this, *((_QWORD *)this + 8));
    WdLogGlobalForLineNumber = 1183;
    return 0LL;
  }
  if ( v3 != -1 )
  {
    if ( IsPrimaryClonePathByModality )
    {
      for ( j = 0; ; ++j )
      {
        v14 = *((_QWORD *)this + 8);
        v15 = v14 ? *(_WORD *)(v14 + 20) : 0;
        if ( j >= v15 )
          break;
        v16 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
        v17 = v16;
        if ( v20 == *((_DWORD *)v16 + 46) )
        {
          v18 = !CCD_TOPOLOGY::IsMatchingSource(v16, (const struct _LUID *)((char *)a1 + 20), v3);
          v19 = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j);
          CDS_JOURNAL::_FillPathDescriptor(v17, a1, v19, v18, 0LL);
        }
      }
      return 0;
    }
    WdLogSingleEntry5(3LL, *((int *)a1 + 6), (unsigned int)*v9, *((unsigned int *)a1 + 8), this, *((_QWORD *)this + 8));
    WdLogGlobalForLineNumber = 1234;
    return 0LL;
  }
  result = CDS_JOURNAL::_ExtendTopology(this, a1);
LABEL_15:
  v12 = result;
  if ( (int)result >= 0 )
    return v12;
  return result;
}
