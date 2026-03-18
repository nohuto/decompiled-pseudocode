/*
 * XREFs of ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x140321A18
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x14031FF34 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140347618 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x140267DDC (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402D70F0 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x14031BDF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14031CB7C (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1403F5890 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(
        CCD_TOPOLOGY *this,
        struct CCD_TOPOLOGY *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int16 v4; // di
  char v7; // si
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 v10; // bx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int16 v16; // bx
  int v17; // esi
  __int64 v18; // rax
  int v19; // eax
  unsigned int j; // esi
  unsigned __int16 v21; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v30; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v31; // r8
  int v32; // eax
  __int64 v33; // rax
  int v34; // [rsp+30h] [rbp-39h] BYREF
  __int128 v35; // [rsp+38h] [rbp-31h]
  __int64 v36; // [rsp+48h] [rbp-21h]
  __int16 v37; // [rsp+50h] [rbp-19h]
  __int128 v38; // [rsp+58h] [rbp-11h]
  __int64 v39; // [rsp+68h] [rbp-1h]
  __int64 v40; // [rsp+70h] [rbp+7h]
  char v41; // [rsp+78h] [rbp+Fh]
  int v42; // [rsp+7Ch] [rbp+13h]
  int v43; // [rsp+80h] [rbp+17h]
  __int64 v44; // [rsp+84h] [rbp+1Bh]
  __int64 v45; // [rsp+90h] [rbp+27h]
  unsigned __int16 i; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = 0;
  v34 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v41 = 1;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v7 = a3;
  v42 = 0;
  v43 = 1;
  v44 = 0LL;
  v45 = 0LL;
  CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v34, 8LL, a3, a4);
  LODWORD(v44) = v44 | 4;
  v10 = 1;
  for ( i = 1; ; v10 = i )
  {
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)&v34, v10, v8, v9) < v10 )
    {
      WdLogSingleEntry2(6LL, v10, this);
      WdLogGlobalForLineNumber = 1276;
      LODWORD(v12) = -1073741801;
      goto LABEL_5;
    }
    v11 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v34, 0, v7, 1, &i);
    LODWORD(v12) = v11;
    if ( v11 != -1073741789 )
      break;
  }
  if ( v11 < 0 )
  {
LABEL_5:
    WdLogSingleEntry1(2LL, (int)v12);
    WdLogGlobalForLineNumber = 1288;
    goto LABEL_6;
  }
  if ( v40 && *(_WORD *)(v40 + 20) )
  {
    *((_DWORD *)a2 + 21) |= 1u;
    v14 = *((_QWORD *)this + 8);
    if ( v14 )
    {
      v15 = *(unsigned __int16 *)(v14 + 20);
      v16 = *(_WORD *)(v14 + 20);
    }
    else
    {
      v15 = 0LL;
      v16 = 0;
    }
    LOWORD(v15) = i + v15;
    v17 = i;
    if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(a2, v15, v8, v9) >= v17 + (unsigned int)v16 )
    {
      v19 = CCD_TOPOLOGY::CopyTopology(a2, this);
      LODWORD(v12) = v19;
      if ( v19 >= 0 )
      {
        for ( j = 0; ; ++j )
        {
          v21 = v40 ? *(_WORD *)(v40 + 20) : 0;
          if ( j >= v21 )
            break;
          if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j) & 0x100LL) != 0 )
          {
            PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j);
            *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
            v23 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j) + 24);
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j) + 38) = v23;
            v24 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j) + 25);
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j) + 39) = v24;
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j) + 43) = 0;
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j) + 42) = 0;
            v25 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j) + 25);
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j) + 45) = v25;
            v26 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j) + 24);
            *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j) + 44) = v26;
            v27 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j);
            *(_QWORD *)v27 |= 0x820000uLL;
          }
          if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j) & 0x87) != 0 )
          {
            v28 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j);
            *((_QWORD *)v28 + 1) |= 0x87uLL;
          }
          if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j) & 2) != 0 )
          {
            v29 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j);
            *((_QWORD *)v29 + 1) |= 2uLL;
          }
          v30 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)&v34, j);
          v32 = CCD_TOPOLOGY::AddPathDescriptor(a2, v30, v31);
          v12 = v32;
          if ( v32 < 0 )
          {
            v33 = *((_QWORD *)a2 + 8);
            if ( v33 )
              v4 = *(_WORD *)(v33 + 20);
            WdLogSingleEntry4(1LL, v12, j, this, v4);
            WdLogGlobalForLineNumber = 1353;
            break;
          }
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v19);
        WdLogGlobalForLineNumber = 1315;
      }
    }
    else
    {
      v18 = *((_QWORD *)this + 8);
      if ( v18 )
        v4 = *(_WORD *)(v18 + 20);
      WdLogSingleEntry2(6LL, this, v17 + (unsigned int)v4);
      WdLogGlobalForLineNumber = 1306;
      LODWORD(v12) = -1073741801;
    }
  }
  else
  {
    LODWORD(v12) = 255;
  }
LABEL_6:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v34);
  return (unsigned int)v12;
}
