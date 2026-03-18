/*
 * XREFs of ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x140374960
 * Callers:
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x140262D90 (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x140263420 (-FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x140374400 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x140045E18 (-IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z.c)
 */

void __fastcall CDS_JOURNAL::_FillEntry(
        struct CDS_JOURNAL::_ENTRY *a1,
        const struct D3DKMT_AUGMENT_CDSJ *a2,
        struct DXGADAPTER *a3)
{
  char *v3; // r10
  const struct D3DKMT_AUGMENT_CDSJ *v4; // r11
  struct CDS_JOURNAL::_ENTRY *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  char *v8; // r9
  int v9; // eax
  __int64 v10; // r10
  int *v11; // rdx
  int v12; // eax
  char *v13; // r10
  int *v14; // rcx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r9
  _QWORD *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // [rsp+40h] [rbp+18h]

  v3 = (char *)a2 + 32;
  *((_DWORD *)a1 + 4) = *(_DWORD *)a2;
  v4 = a2;
  v5 = a1;
  *(_QWORD *)((char *)a1 + 20) = *(_QWORD *)((char *)a2 + 4);
  *((_DWORD *)a1 + 7) = *((_DWORD *)a2 + 3);
  *((_DWORD *)a1 + 8) = *((_DWORD *)a2 + 4);
  *((_DWORD *)a1 + 9) = *((_DWORD *)a2 + 5);
  *((_DWORD *)a1 + 10) = *((_DWORD *)a2 + 6);
  v6 = *((_QWORD *)a2 + 4);
  if ( (*(_DWORD *)(v6 + 72) & 0x20) != 0 )
  {
    v7 = *(_QWORD *)(v6 + 76);
    v8 = (char *)v4 + 32;
    *((_DWORD *)a1 + 11) |= 0x20u;
    *((_QWORD *)a1 + 6) = v7;
  }
  else
  {
    v8 = v3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v3 + 72LL) & 0x80u) == 0 )
  {
    v8 = v3;
  }
  else
  {
    v9 = *(_DWORD *)(*(_QWORD *)v3 + 84LL);
    *((_DWORD *)a1 + 11) |= 0x80u;
    *((_DWORD *)a1 + 14) = v9;
  }
  v10 = *(_QWORD *)v3;
  v11 = (int *)((char *)a1 + 44);
  if ( (*(_DWORD *)(v10 + 72) & 0x20000000) != 0 )
  {
    v12 = *(_DWORD *)(v10 + 88);
    v13 = (char *)v4 + 32;
    *((_DWORD *)a1 + 11) |= 0x20000000u;
    *((_DWORD *)a1 + 15) = v12;
  }
  else
  {
    v11 = (int *)((char *)a1 + 44);
    v13 = v8;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v8 + 72LL) & 0x40000) != 0 )
  {
    *((_DWORD *)a1 + 16) = *(_DWORD *)(*(_QWORD *)v8 + 168LL);
    *v11 = *((_DWORD *)a1 + 11) | 0x40000;
    v14 = (int *)((char *)a1 + 44);
  }
  else
  {
    v13 = v8;
    v14 = v11;
  }
  v15 = *(_QWORD *)v8;
  if ( (*(_DWORD *)(v15 + 72) & 0x80000) != 0 )
  {
    v16 = *(_DWORD *)(v15 + 172);
    *v11 |= 0x80000u;
    *((_DWORD *)v5 + 17) = v16;
  }
  else
  {
    v14 = v11;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v13 + 72LL) & 0x100000) != 0 )
  {
    *((_DWORD *)v5 + 18) = *(_DWORD *)(*(_QWORD *)v13 + 176LL);
    *v14 = *v11 | 0x100000;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v13 + 72LL) & 0x400000) != 0 )
  {
    LODWORD(v22) = *(_DWORD *)(*(_QWORD *)v13 + 184LL);
    HIDWORD(v22) = 1;
    *((_QWORD *)v5 + 10) = v22;
    v17 = *(_QWORD *)v13;
    if ( *(_WORD *)(*(_QWORD *)v13 + 64LL) == 1025
      && *(_WORD *)(v17 + 66) == 1025
      && *(_WORD *)(v17 + 68) == 220
      && *(_WORD *)(v17 + 70) == 24
      && !IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(v17 + 220))
      && *(_DWORD *)v18
      && *(_DWORD *)(v19 + 224) )
    {
      *((_QWORD *)v5 + 10) = *v18;
    }
    v14 = (int *)((char *)v5 + 44);
    *((_DWORD *)v5 + 11) |= 0x400000u;
  }
  v20 = *((_QWORD *)v4 + 4);
  if ( (*(_DWORD *)(v20 + 72) & 0x200000) != 0 )
  {
    v21 = *(_DWORD *)(v20 + 180);
    *v14 |= 0x200000u;
    *((_DWORD *)v5 + 19) = v21;
  }
}
