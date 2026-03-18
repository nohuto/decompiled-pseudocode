/*
 * XREFs of ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x140374400
 * Callers:
 *     DxgkAugmentCdsj @ 0x1401C54A0 (DxgkAugmentCdsj.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x140188744 (-Purge@CDS_JOURNAL@@QEAAJXZ.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x140262EA4 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x140263704 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z @ 0x140263E4C (-_PurgeRelatedEntries@CDS_JOURNAL@@AEAAJAEBU_ENTRY@1@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x140359CB8 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14036D944 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x140373DCC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x140374960 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x140374B0C (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x140374BE0 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x140374C0C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x140379894 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x140407EC0 (-_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::Augment(CDS_JOURNAL *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  unsigned __int16 i; // ax
  unsigned __int16 v5; // ax
  __int64 v6; // rbx
  _QWORD *v8; // rsi
  struct DXGADAPTER *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int16 j; // ax
  unsigned __int16 v13; // ax
  int Active; // eax
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // cx
  int v17; // eax
  int Persisted; // eax
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // ax
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  _QWORD *v25; // rdx
  struct DXGADAPTER *v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 *v29; // rax
  unsigned __int16 v30[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v31[6]; // [rsp+34h] [rbp-CCh] BYREF
  struct D3DKMT_GETPATHSMODALITY *v32; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v33; // [rsp+48h] [rbp-B8h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  __int16 v35; // [rsp+60h] [rbp-A0h]
  __int128 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int16 v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+8Ch] [rbp-74h]
  int v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+94h] [rbp-6Ch]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  __int16 v47; // [rsp+D0h] [rbp-30h]
  __int128 v48; // [rsp+D8h] [rbp-28h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  __int64 v50; // [rsp+F0h] [rbp-10h]
  char v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+FCh] [rbp-4h]
  int v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+104h] [rbp+4h]
  __int64 v55; // [rsp+110h] [rbp+10h]
  _DWORD v56[9]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v57; // [rsp+144h] [rbp+44h]
  __int128 v58; // [rsp+14Ch] [rbp+4Ch]
  __int128 v59; // [rsp+15Ch] [rbp+5Ch]
  __int64 v60; // [rsp+16Ch] [rbp+6Ch]
  int v61; // [rsp+174h] [rbp+74h]

  if ( (*(_DWORD *)a2 & 4) != 0 )
    return CDS_JOURNAL::_PreVerify(a2);
  v44 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0;
  v51 = 1;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v52 = 0;
  v53 = 1;
  v54 = 0LL;
  v55 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v44, 8u);
  CCD_TOPOLOGY::Clear((CCD_TOPOLOGY *)&v44);
  for ( i = 0; ; i = v31[0] + 1 )
  {
    while ( 1 )
    {
      v31[0] = i + 1;
      v5 = CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v44, i + 1);
      if ( v5 < v31[0] )
      {
        WdLogSingleEntry1(6LL, v31[0]);
        WdLogGlobalForLineNumber = 1596;
LABEL_5:
        LODWORD(v6) = -1073741801;
        goto LABEL_6;
      }
      Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v44, 0, 0, 0, v31);
      LODWORD(v6) = Active;
      if ( Active >= 0 )
        break;
      if ( Active != -1073741789 )
      {
        WdLogSingleEntry4(2LL, Active, &v44, v50, a2);
        WdLogGlobalForLineNumber = 1635;
        goto LABEL_6;
      }
      i = v31[0];
    }
    v15 = v50 ? *(_WORD *)(v50 + 20) : 0;
    v16 = v50 ? *(_WORD *)(v50 + 22) : 0;
    if ( v15 < v16 )
      break;
  }
  v17 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology((struct CCD_TOPOLOGY *)&v44, a2, 1);
  LODWORD(v6) = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry4(2LL, v17, &v44, v50, a2);
    WdLogGlobalForLineNumber = 1652;
    goto LABEL_6;
  }
  if ( *((_DWORD *)a2 + 4) == -1 )
  {
    LODWORD(v6) = -1071774974;
    goto LABEL_6;
  }
  v8 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v8 != v8 && *(_DWORD *)this == 1 )
  {
    LODWORD(v6) = CCD_TOPOLOGY::VerifyConnectivityHash((CCD_TOPOLOGY *)&v44, this);
    if ( (_DWORD)v6 == -1073741266 )
    {
      WdLogSingleEntry3(3LL, this, &v44, v50);
      WdLogGlobalForLineNumber = 489;
      LODWORD(v6) = CDS_JOURNAL::Purge(this);
    }
  }
  v11 = v50;
  *(_OWORD *)this = *(_OWORD *)v50;
  *((_DWORD *)this + 4) = *(_DWORD *)(v11 + 16);
  if ( (*(_DWORD *)a2 & 1) == 0 )
  {
    v25 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      goto LABEL_57;
    v26 = (struct DXGADAPTER *)*((unsigned int *)a2 + 4);
    do
    {
      v27 = (__int64)v25;
      if ( *((_DWORD *)v25 + 8) == (_DWORD)v26
        && *((_DWORD *)v25 + 5) == *((_DWORD *)a2 + 1)
        && *((_DWORD *)v25 + 6) == *((_DWORD *)a2 + 2) )
      {
        break;
      }
      v25 = (_QWORD *)*v25;
    }
    while ( v25 != v8 );
    if ( v25 == v8 )
    {
LABEL_57:
      v28 = operator new(0x58uLL, 0x63644356u, 256LL, v10);
      v27 = v28;
      if ( !v28 )
      {
        WdLogSingleEntry1(6LL, 88LL);
        WdLogGlobalForLineNumber = 565;
        goto LABEL_5;
      }
      *(_OWORD *)v28 = 0LL;
      *(_OWORD *)(v28 + 20) = 0LL;
      *(_QWORD *)(v28 + 36) = 0LL;
      *(_OWORD *)(v28 + 44) = 0LL;
      *(_OWORD *)(v28 + 60) = 0LL;
      *(_QWORD *)(v28 + 76) = 0LL;
      *(_DWORD *)(v28 + 84) = 0;
      v29 = (__int64 *)*((_QWORD *)this + 4);
      if ( (_QWORD *)*v29 != v8 )
        __fastfail(3u);
      *(_QWORD *)v27 = v8;
      *(_QWORD *)(v27 + 8) = v29;
      *v29 = v27;
      *((_QWORD *)this + 4) = v27;
    }
    CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v27, a2, v26);
    goto LABEL_6;
  }
  v57 = 0LL;
  v60 = 0LL;
  v61 = 0;
  *(_OWORD *)v56 = 0LL;
  *(_OWORD *)&v56[5] = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v56, a2, v9);
  LODWORD(v32) = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  LOBYTE(v39) = 1;
  v40 = 0;
  v41 = 1;
  v42 = 0LL;
  v43 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v32, 8u);
  CCD_TOPOLOGY::Clear((CCD_TOPOLOGY *)&v32);
  for ( j = 0; ; j = v30[0] )
  {
    while ( 1 )
    {
      v30[0] = j + 1;
      v13 = CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v32, j + 1);
      if ( v13 < v30[0] )
      {
        WdLogSingleEntry1(6LL, v30[0]);
        WdLogGlobalForLineNumber = 1596;
        LODWORD(v6) = -1073741801;
        goto LABEL_16;
      }
      Persisted = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v32, 0xFu, v30);
      v6 = Persisted;
      if ( Persisted < 0 )
        break;
      v19 = v38 ? *(_WORD *)(v38 + 20) : 0;
      v20 = v38 ? *(_WORD *)(v38 + 22) : 0;
      if ( v19 < v20 )
        break;
      j = v30[0] + 1;
    }
    if ( (_DWORD)v6 != -1073741789 )
      break;
  }
  if ( (int)v6 >= 0 )
  {
    v21 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v56, (struct CCD_TOPOLOGY *)&v32);
    LODWORD(v6) = v21;
    if ( v21 >= 0 )
    {
      CCD_TOPOLOGY::FillScalingIntent((CCD_TOPOLOGY *)&v32);
      v24 = CCD_TOPOLOGY::Persist(&v32, 1LL, v22, v23);
      LODWORD(v6) = v24;
      if ( v24 >= 0 )
      {
        LODWORD(v6) = CDS_JOURNAL::_PurgeRelatedEntries(this, (const struct CDS_JOURNAL::_ENTRY *)v56);
      }
      else
      {
        WdLogSingleEntry3(2LL, v24, &v32, v38);
        WdLogGlobalForLineNumber = 533;
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, v21, &v32, v38);
      WdLogGlobalForLineNumber = 519;
    }
  }
  else
  {
    WdLogSingleEntry4(2LL, v6, &v32, v38, a2);
    WdLogGlobalForLineNumber = 1635;
  }
LABEL_16:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v32);
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v44);
  return (unsigned int)v6;
}
