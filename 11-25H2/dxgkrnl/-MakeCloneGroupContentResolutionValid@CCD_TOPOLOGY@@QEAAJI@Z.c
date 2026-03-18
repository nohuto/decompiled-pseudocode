/*
 * XREFs of ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x140370C10
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x140370B5C (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x140325E40 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1403E8E68 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  char v2; // r12
  char v4; // r13
  _DWORD *v5; // r15
  unsigned int v6; // ebx
  UINT cx; // edi
  UINT cy; // esi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v9; // rax
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v13; // rbx
  int IsVirtualizationDisabledForTarget; // eax
  unsigned int v15; // r12d
  __int64 result; // rax
  unsigned int v17; // ebx
  __int64 v18; // r15
  int *PathDescriptor; // rax
  signed int v20; // r9d
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int i; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  struct _D3DKMDT_2DREGION v29; // [rsp+40h] [rbp-10h] BYREF
  struct _D3DKMDT_2DREGION v30; // [rsp+48h] [rbp-8h]
  bool v31; // [rsp+90h] [rbp+40h] BYREF
  bool v32; // [rsp+A0h] [rbp+50h] BYREF
  int v33; // [rsp+A8h] [rbp+58h]

  v2 = 1;
  v4 = 1;
  v5 = 0LL;
  v6 = 0;
  cx = 0x7FFFFFFF;
  cy = 0x7FFFFFFF;
  v33 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  while ( 1 )
  {
    if ( v6 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
    {
      if ( v2 )
      {
        v17 = 0;
        v18 = 0x3FFFFFFF00000001LL;
        while ( v17 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        {
          PathDescriptor = (int *)CCD_TOPOLOGY::GetPathDescriptor(this, v17);
          if ( PathDescriptor[46] == v33 )
          {
            if ( v4 )
            {
              v20 = PathDescriptor[40];
              v21 = PathDescriptor[41];
              v22 = v21 * v20;
              v23 = PathDescriptor[38] * (__int64)PathDescriptor[39] - v22;
              v24 = v22 - PathDescriptor[38] * (__int64)PathDescriptor[39];
              if ( v24 < 0 )
                v24 = v23;
              if ( v24 < v18 )
              {
                cx = v20;
                cy = v21;
                v18 = v24;
              }
            }
            else if ( PathDescriptor[38] == PathDescriptor[40] && PathDescriptor[39] == PathDescriptor[41] )
            {
              cx = PathDescriptor[40];
              cy = PathDescriptor[41];
              goto LABEL_47;
            }
          }
          ++v17;
        }
        goto LABEL_47;
      }
      return 0LL;
    }
    v9 = CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    if ( *((_DWORD *)v9 + 46) == v33 )
      break;
LABEL_16:
    ++v6;
  }
  if ( (*(_QWORD *)v9 & 0x20000LL) == 0 )
    goto LABEL_18;
  if ( !v5 )
    v5 = (_DWORD *)((char *)v9 + 152);
  v10 = *((_DWORD *)v9 + 38);
  if ( v10 )
  {
    v11 = *((_DWORD *)v9 + 39);
    if ( v11 )
    {
      if ( *v5 == v10 && v5[1] == v11 )
      {
        if ( (*(_QWORD *)v9 & 0x20000000000000LL) != 0 )
        {
          if ( v10 == *((_DWORD *)v9 + 40) && v11 == *((_DWORD *)v9 + 41) )
            v4 = 0;
        }
        else
        {
          v2 = 0;
        }
        goto LABEL_16;
      }
    }
  }
  *((_DWORD *)v9 + 65) |= 0x400u;
LABEL_18:
  v31 = 0;
  v12 = 0;
  v32 = 0;
  while ( v12 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
  {
    v13 = CCD_TOPOLOGY::GetPathDescriptor(this, v12);
    if ( *((_DWORD *)v13 + 46) == v33 )
    {
      v29 = 0LL;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v13, 1, &v29);
      IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                            *(struct _LUID *)((char *)v13 + 16),
                                            *((_DWORD *)v13 + 7),
                                            &v31,
                                            &v32,
                                            0LL,
                                            0LL,
                                            0LL,
                                            0LL);
      v15 = IsVirtualizationDisabledForTarget;
      if ( IsVirtualizationDisabledForTarget < 0 )
      {
        WdLogSingleEntry1(2LL, IsVirtualizationDisabledForTarget);
        result = v15;
        WdLogGlobalForLineNumber = 4513;
        return result;
      }
      if ( v31 && !v32 )
        goto LABEL_30;
      if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v13 + 22)) )
      {
        if ( (*(_DWORD *)v13 & 0x20000) == 0 )
        {
LABEL_30:
          v30 = v29;
          cx = v29.cx;
          cy = v29.cy;
          break;
        }
        cx = *((_DWORD *)v13 + 38);
        cy = *((_DWORD *)v13 + 39);
        break;
      }
      if ( v29.cx < cx )
      {
        cx = v29.cx;
        *((_DWORD *)v13 + 65) |= 0x4000u;
      }
      if ( v29.cy < cy )
      {
        cy = v29.cy;
        *((_DWORD *)v13 + 65) |= 0x4000u;
      }
    }
    ++v12;
  }
LABEL_47:
  if ( cx && cy && cx != 0x7FFFFFFF && cy != 0x7FFFFFFF )
  {
    for ( i = 0; i < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++i )
    {
      v26 = CCD_TOPOLOGY::GetPathDescriptor(this, i);
      if ( *((_DWORD *)v26 + 46) == v33
        && ((*(_QWORD *)v26 & 0x20000LL) == 0 || *((_DWORD *)v26 + 38) != cx || *((_DWORD *)v26 + 39) != cy) )
      {
        if ( (*((_DWORD *)v26 + 2) & 0x20000) != 0 )
        {
          if ( (*(_QWORD *)v26 & 0x20000LL) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4597;
          }
          *((_DWORD *)v26 + 65) |= 0x80000000;
          WdLogSingleEntry3(2LL, *((_QWORD *)this + 8), cx, cy);
          WdLogGlobalForLineNumber = 4600;
          return 3221225473LL;
        }
        v27 = *((_QWORD *)v26 + 31);
        v28 = *(_QWORD *)v26 & 0xFFFFFFFFFF7DFFFFuLL | 0x20000;
        *((_DWORD *)v26 + 38) = cx;
        *((_DWORD *)v26 + 39) = cy;
        *(_QWORD *)v26 = v28;
        if ( v27 )
        {
          *(_DWORD *)(v27 + 172) = cx;
          *(_DWORD *)(*((_QWORD *)v26 + 31) + 176LL) = cy;
        }
      }
    }
    return 0LL;
  }
  WdLogSingleEntry3(2LL, *((_QWORD *)this + 8), cx, cy);
  WdLogGlobalForLineNumber = 4568;
  return 3221225473LL;
}
