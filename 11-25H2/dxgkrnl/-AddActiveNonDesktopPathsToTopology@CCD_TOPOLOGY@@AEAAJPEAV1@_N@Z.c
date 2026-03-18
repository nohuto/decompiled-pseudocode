/*
 * XREFs of ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x14031A62C
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031B21C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140373174 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x140260EDC (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402CDFF8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x140373DCC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x140374C0C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1403B83D0 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(
        CCD_TOPOLOGY *this,
        struct CCD_TOPOLOGY *a2,
        bool a3)
{
  unsigned __int16 v3; // di
  unsigned __int16 v7; // bx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v11; // rax
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // bx
  int v14; // esi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // eax
  unsigned int j; // esi
  unsigned __int16 v20; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v30; // r8
  int v31; // eax
  __int64 v32; // rax
  int v33; // [rsp+30h] [rbp-39h] BYREF
  __int128 v34; // [rsp+38h] [rbp-31h]
  __int64 v35; // [rsp+48h] [rbp-21h]
  __int16 v36; // [rsp+50h] [rbp-19h]
  __int128 v37; // [rsp+58h] [rbp-11h]
  __int64 v38; // [rsp+68h] [rbp-1h]
  __int64 v39; // [rsp+70h] [rbp+7h]
  char v40; // [rsp+78h] [rbp+Fh]
  int v41; // [rsp+7Ch] [rbp+13h]
  int v42; // [rsp+80h] [rbp+17h]
  __int64 v43; // [rsp+84h] [rbp+1Bh]
  __int64 v44; // [rsp+90h] [rbp+27h]
  unsigned __int16 i; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = 0;
  v33 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0;
  v40 = 1;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v41 = 0;
  v42 = 1;
  v43 = 0LL;
  v44 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v33, 8u);
  LODWORD(v43) = v43 | 4;
  v7 = 1;
  for ( i = 1; ; v7 = i )
  {
    if ( CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v33, v7) < v7 )
    {
      WdLogSingleEntry2(6LL, v7, this);
      WdLogGlobalForLineNumber = 1276;
      LODWORD(v9) = -1073741801;
      goto LABEL_5;
    }
    v8 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v33, 0, a3, 1, &i);
    LODWORD(v9) = v8;
    if ( v8 != -1073741789 )
      break;
  }
  if ( v8 < 0 )
  {
LABEL_5:
    WdLogSingleEntry1(2LL, (int)v9);
    WdLogGlobalForLineNumber = 1288;
    goto LABEL_6;
  }
  if ( v39 && *(_WORD *)(v39 + 20) )
  {
    *((_DWORD *)a2 + 21) |= 1u;
    v11 = *((_QWORD *)this + 8);
    if ( v11 )
    {
      v12 = *(_WORD *)(v11 + 20);
      v13 = v12;
    }
    else
    {
      v12 = 0;
      v13 = 0;
    }
    v14 = i;
    if ( CCD_TOPOLOGY::Reserve(a2, i + v12) >= v14 + (unsigned int)v13 )
    {
      v18 = CCD_TOPOLOGY::CopyTopology(a2, this, v15, v16);
      LODWORD(v9) = v18;
      if ( v18 >= 0 )
      {
        for ( j = 0; ; ++j )
        {
          v20 = v39 ? *(_WORD *)(v39 + 20) : 0;
          if ( j >= v20 )
            break;
          if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j) & 0x100LL) != 0 )
          {
            PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j);
            *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
            v22 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j) + 24);
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j) + 38) = v22;
            v23 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j) + 25);
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j) + 39) = v23;
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j) + 43) = 0;
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j) + 42) = 0;
            v24 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j) + 25);
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j) + 45) = v24;
            v25 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j) + 24);
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j) + 44) = v25;
            v26 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j);
            *(_QWORD *)v26 |= 0x820000uLL;
          }
          if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j) & 0x87) != 0 )
          {
            v27 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j);
            *((_QWORD *)v27 + 1) |= 0x87uLL;
          }
          if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j) & 2) != 0 )
          {
            v28 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j);
            *((_QWORD *)v28 + 1) |= 2uLL;
          }
          v29 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v33, j);
          v31 = CCD_TOPOLOGY::AddPathDescriptor(a2, v29, v30);
          v9 = v31;
          if ( v31 < 0 )
          {
            v32 = *((_QWORD *)a2 + 8);
            if ( v32 )
              v3 = *(_WORD *)(v32 + 20);
            WdLogSingleEntry4(1LL, v9, j, this, v3);
            WdLogGlobalForLineNumber = 1353;
            break;
          }
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v18);
        WdLogGlobalForLineNumber = 1315;
      }
    }
    else
    {
      v17 = *((_QWORD *)this + 8);
      if ( v17 )
        v3 = *(_WORD *)(v17 + 20);
      WdLogSingleEntry2(6LL, this, v14 + (unsigned int)v3);
      WdLogGlobalForLineNumber = 1306;
      LODWORD(v9) = -1073741801;
    }
  }
  else
  {
    LODWORD(v9) = 255;
  }
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v33);
  return (unsigned int)v9;
}
