/*
 * XREFs of ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1402D9B64
 * Callers:
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x14026A320 (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x14026A604 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x14026A7F8 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@@CA_NPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1400553BC (-_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL@@CA_NPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ??$_GetPixelFormatFromDevMode@U_unnamed_type_Mode_@_ENTRY@CDS_JOURNAL@@@CDS_JOURNAL@@CAJAEBU_unnamed_type_Mode_@_ENTRY@0@PEAW4_D3DDDIFORMAT@@@Z @ 0x140090E64 (--$_GetPixelFormatFromDevMode@U_unnamed_type_Mode_@_ENTRY@CDS_JOURNAL@@@CDS_JOURNAL@@CAJAEBU_unn.c)
 *     ??$_GetRotationFromDevMode@U_unnamed_type_Mode_@_ENTRY@CDS_JOURNAL@@@CDS_JOURNAL@@CAJAEBU_unnamed_type_Mode_@_ENTRY@0@PEAW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x140090F78 (--$_GetRotationFromDevMode@U_unnamed_type_Mode_@_ENTRY@CDS_JOURNAL@@@CDS_JOURNAL@@CAJAEBU_unname.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1401C98D4 (ConvertGdiScalingToDMMScaling.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14025841C (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1402D71F0 (DxgkGetAdapterDefaultScaling.c)
 *     EnforceDriverModelScalingPolicy @ 0x1402D8E14 (EnforceDriverModelScalingPolicy.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1403E5DC0 (_EnforceDriverModelScalingPolicy.c)
 */

void __fastcall CDS_JOURNAL::_FillPathDescriptor(
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct CDS_JOURNAL::_ENTRY *a2,
        char a3,
        char a4,
        struct DXGADAPTER *a5)
{
  unsigned int *v5; // rsi
  __int64 v7; // r10
  __int64 v11; // r9
  int v12; // r9d
  __int64 v13; // r10
  __int64 v14; // r9
  int v15; // r10d
  struct DXGADAPTER *v16; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v17; // rdx
  _DWORD *v18; // r14
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ecx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v23; // rdx
  char v24; // cl
  unsigned int v25; // eax
  __int64 v26; // rdx

  *(_QWORD *)a1 &= 0xFFFFFFFFFF7DFE78uLL;
  v5 = (unsigned int *)((char *)a2 + 44);
  v7 = *(_QWORD *)a1;
  if ( (*((_DWORD *)a2 + 11) & 0x80u) != 0 )
  {
    CDS_JOURNAL::_GetRotationFromDevMode<CDS_JOURNAL::_ENTRY::_unnamed_type_Mode_>(v5, (_DWORD *)a1 + 33);
    *(_QWORD *)a1 |= 0x200uLL;
    *((_QWORD *)a1 + 1) |= 0x200uLL;
    v7 = *(_QWORD *)a1;
  }
  if ( _bittest((const signed __int32 *)v5, 0x13u) )
  {
    v20 = *((_DWORD *)a2 + 17);
    v7 |= 0x20000uLL;
    *(_QWORD *)a1 = v7;
    *((_DWORD *)a1 + 38) = v20;
  }
  if ( _bittest((const signed __int32 *)v5, 0x14u) )
  {
    v21 = *((_DWORD *)a2 + 18);
    v7 |= 0x20000uLL;
    *(_QWORD *)a1 = v7;
    *((_DWORD *)a1 + 39) = v21;
  }
  if ( (*((_DWORD *)a2 + 4) & 0x10) == 0 )
  {
    v11 = v7;
    if ( (*v5 & 0x80000) != 0 )
    {
      if ( CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)a1) )
        *((_DWORD *)a1 + 25) = v12;
      else
        *((_DWORD *)a1 + 24) = v12;
      v11 = v13 | 0x40000000000100LL;
      *((_QWORD *)a1 + 1) |= 0x100uLL;
      *(_QWORD *)a1 = v13 | 0x40000000000100LL;
    }
    v7 = v11;
    if ( _bittest((const signed __int32 *)a2 + 11, 0x14u) )
    {
      if ( CDS_JOURNAL::_IsCDSJWidthAndHeightSwapped((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)a1) )
        *((_DWORD *)a1 + 24) = v15;
      else
        *((_DWORD *)a1 + 25) = v15;
      v7 = v14 | 0x40000000000100LL;
      *((_QWORD *)a1 + 1) |= 0x100uLL;
      *(_QWORD *)a1 = v14 | 0x40000000000100LL;
    }
  }
  if ( (*((_DWORD *)a2 + 11) & 0x20) != 0 )
  {
    v7 |= 0x800uLL;
    *((_QWORD *)a1 + 18) = *((_QWORD *)a2 + 6);
    *(_QWORD *)a1 = v7;
  }
  if ( (*((_DWORD *)a2 + 11) & 0x20000000) != 0 )
  {
    v22 = *((_DWORD *)a2 + 15);
    if ( v22 )
    {
      ConvertGdiScalingToDMMScaling(v22, (_DWORD *)a1 + 35);
LABEL_20:
      v16 = a5;
      v17 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)((char *)a1 + 140);
      v18 = (_DWORD *)((char *)a1 + 140);
      if ( !a5 )
      {
LABEL_21:
        EnforceDriverModelScalingPolicy((unsigned int *)a2 + 5, v17);
        goto LABEL_22;
      }
      goto LABEL_35;
    }
  }
  if ( (v7 & 0x10000) != 0 )
    goto LABEL_20;
  v16 = a5;
  v23 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)((char *)a1 + 140);
  if ( !a5 )
  {
    DxgkGetAdapterDefaultScaling((struct _LUID *)((char *)a2 + 20), v23);
    v17 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)((char *)a1 + 140);
    v18 = (_DWORD *)((char *)a1 + 140);
    goto LABEL_21;
  }
  DmmGetDefaultScaling(a5, v23);
  v18 = (_DWORD *)((char *)a1 + 140);
LABEL_35:
  EnforceDriverModelScalingPolicy(v16);
LABEL_22:
  *((_DWORD *)a1 + 34) = *v18;
  *(_QWORD *)a1 |= 0x40000010000uLL;
  if ( (*((_DWORD *)a2 + 11) & 0x40000) != 0 )
    CDS_JOURNAL::_GetPixelFormatFromDevMode<CDS_JOURNAL::_ENTRY::_unnamed_type_Mode_>(
      (unsigned int *)a2 + 11,
      (_DWORD *)a1 + 29);
  v19 = *((_DWORD *)a2 + 11);
  if ( (v19 & 0x200000) != 0 )
  {
    v24 = -((v19 & 0x200000) != 0 && (*((_BYTE *)a2 + 76) & 2) != 0);
    v25 = *((_DWORD *)a1 + 20) & 0xFFFFFFF8;
    *(_QWORD *)a1 |= 4uLL;
    *((_DWORD *)a1 + 20) = v25 | ((v24 != 0) + 1);
  }
  if ( (*((_DWORD *)a2 + 11) & 0x400000) != 0 )
  {
    v26 = *(_QWORD *)a1;
    *((_QWORD *)a1 + 28) = *((_QWORD *)a2 + 10);
    if ( (v26 & 4) != 0 && (unsigned int)(((int)(*((_DWORD *)a1 + 20) << 29) >> 29) - 2) <= 1 )
    {
      if ( (unsigned int)(2 * *((_DWORD *)a2 + 20)) <= *((_DWORD *)a2 + 20) )
        *((_DWORD *)a1 + 57) >>= 1;
      else
        *((_DWORD *)a1 + 56) *= 2;
    }
    *((_DWORD *)a1 + 60) = 1;
    *(_QWORD *)a1 = v26 | 0x1000000;
  }
  if ( !a4 && !a3 )
  {
    *((_DWORD *)a1 + 33) = 0;
    *(_QWORD *)a1 &= ~0x200uLL;
  }
}
