/*
 * XREFs of ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1402E7A04
 * Callers:
 *     ?CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ @ 0x140282A74 (-CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1403740C0 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x140055874 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402E7614 (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1402E9830 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1402E9934 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(CCD_TOPOLOGY **this, char a2)
{
  __int64 v4; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  unsigned int i; // edi
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v11; // rax
  SESSION_VIEW *v12; // rcx
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  struct SESSION_VIEW *SessionViewFromSource; // rax
  unsigned int j; // esi
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // eax
  CCD_TOPOLOGY *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned int k; // esi
  __int64 v27; // rax
  unsigned __int16 v28; // cx
  const struct _LUID *v29; // rax
  __int64 v30; // r9
  CCD_TOPOLOGY *v31; // rdi
  __int64 v32; // rbx
  __int64 CurrentProcess; // rax

  v4 = *((_QWORD *)*this + 8);
  if ( !v4 || !*(_WORD *)(v4 + 20) )
    return 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( Current )
  {
    if ( *((_QWORD *)Current + 11) )
    {
      for ( i = 0; ; ++i )
      {
        v8 = *((_QWORD *)*this + 8);
        if ( v8 )
          v9 = *(_WORD *)(v8 + 20);
        else
          v9 = 0;
        if ( i >= v9 )
          return 0LL;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
        v11 = *(_QWORD *)PathDescriptor;
        if ( (*(_QWORD *)PathDescriptor & 0x4000000000000LL) == 0 )
        {
          *(_QWORD *)PathDescriptor = v11 | 0x4000000000000LL;
          if ( (v11 & 0x1000000000LL) != 0 )
          {
            v21 = i | 0xFE5A0000;
            goto LABEL_24;
          }
          if ( v11 >= 0 )
          {
            v21 = i | 0xFE580000;
LABEL_24:
            *((_DWORD *)PathDescriptor + 46) = v21;
            continue;
          }
          v12 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 35);
          *((_DWORD *)PathDescriptor + 46) = i | 0xFE590000;
          if ( v12 )
          {
            if ( *((_DWORD *)SESSION_VIEW::GetPrimaryDisplaySource(v12) + 4) == *((_DWORD *)PathDescriptor + 6) )
            {
              Global = DXGGLOBAL::GetGlobal();
              SessionData = DXGSESSIONMGR::GetSessionData(*((DXGSESSIONMGR **)Global + 118));
              if ( SessionData )
              {
                SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                          SessionData,
                                          (const struct _LUID *)PathDescriptor + 2,
                                          *((_DWORD *)PathDescriptor + 6));
                if ( SessionViewFromSource )
                {
                  *((_DWORD *)PathDescriptor + 36) = *((_DWORD *)SessionViewFromSource + 6);
                  *((_DWORD *)PathDescriptor + 37) = *((_DWORD *)SessionViewFromSource + 7);
                }
              }
              *(_QWORD *)PathDescriptor |= 0x800uLL;
              for ( j = 0; ; ++j )
              {
                v17 = *((_QWORD *)*this + 8);
                v18 = v17 ? *(_WORD *)(v17 + 20) : 0;
                if ( j >= v18 )
                  break;
                v19 = CCD_TOPOLOGY::GetPathDescriptor(*this, j);
                v20 = *(_QWORD *)v19;
                if ( (*(_QWORD *)v19 & 0x8004000000000000uLL) == 0x8000000000000000uLL
                  && *((_QWORD *)PathDescriptor + 35) == *((_QWORD *)v19 + 35) )
                {
                  *((_DWORD *)v19 + 46) = i | 0xFE590000;
                  *(_QWORD *)v19 = v20 | 0x4000000000800LL;
                  *((_QWORD *)v19 + 18) = *((_QWORD *)PathDescriptor + 18);
                }
              }
            }
          }
          else if ( a2 )
          {
            for ( k = i; ; ++k )
            {
              v27 = *((_QWORD *)*this + 8);
              v28 = v27 ? *(_WORD *)(v27 + 20) : 0;
              if ( k >= v28 )
                break;
              v29 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(*this, k);
              if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, v29 + 2, v29[3].LowPart) )
              {
                *(_QWORD *)v30 |= 0x4000000000000uLL;
                *(_DWORD *)(v30 + 184) = i | 0xFE580000;
              }
            }
          }
          else
          {
            WdLogSingleEntry4(
              2LL,
              *((int *)PathDescriptor + 5),
              *((unsigned int *)PathDescriptor + 4),
              *((unsigned int *)PathDescriptor + 6),
              *((unsigned int *)PathDescriptor + 7));
            WdLogGlobalForLineNumber = 584;
          }
        }
      }
    }
    v31 = *this;
    v32 = *((_QWORD *)*this + 8);
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry3(2LL, CurrentProcess, v31, v32);
    WdLogGlobalForLineNumber = 516;
  }
  else
  {
    v23 = *this;
    v24 = *((_QWORD *)*this + 8);
    v25 = PsGetCurrentProcess(v6);
    WdLogSingleEntry3(2LL, v25, v23, v24);
    WdLogGlobalForLineNumber = 505;
  }
  return 3221225473LL;
}
