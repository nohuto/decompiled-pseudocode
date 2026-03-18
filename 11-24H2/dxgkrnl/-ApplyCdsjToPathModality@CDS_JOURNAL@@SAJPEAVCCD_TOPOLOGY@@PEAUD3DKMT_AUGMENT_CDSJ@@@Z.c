/*
 * XREFs of ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x140269C90
 * Callers:
 *     DxgkApplyCdsjToPathsModality @ 0x1401CA650 (DxgkApplyCdsjToPathsModality.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x140269DA4 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x14026A604 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1402D8D1C (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x14031BB44 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::ApplyCdsjToPathModality(struct CCD_TOPOLOGY *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  int v4; // eax
  struct DXGADAPTER *v5; // r8
  unsigned int v6; // edi
  bool v7; // r8
  int v8; // eax
  _DWORD v10[9]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v11; // [rsp+54h] [rbp-54h]
  __int128 v12; // [rsp+5Ch] [rbp-4Ch]
  __int128 v13; // [rsp+6Ch] [rbp-3Ch]
  __int64 v14; // [rsp+7Ch] [rbp-2Ch]
  int v15; // [rsp+84h] [rbp-24h]

  *(_OWORD *)v10 = 0LL;
  *(_OWORD *)&v10[5] = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v4 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 0);
  v6 = v4;
  if ( v4 >= 0 )
  {
    CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v10, a2, v5);
    v8 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v10, this, v7);
    v6 = v8;
    if ( v8 >= 0 )
    {
      CCD_TOPOLOGY::FillScalingIntent(this);
    }
    else
    {
      WdLogSingleEntry4(2LL, v8, this, *((_QWORD *)this + 8), a2);
      WdLogGlobalForLineNumber = 731;
    }
  }
  else
  {
    WdLogSingleEntry4(2LL, v4, this, *((_QWORD *)this + 8), a2);
    WdLogGlobalForLineNumber = 717;
  }
  return v6;
}
