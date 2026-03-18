/*
 * XREFs of ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x140321514
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x140321460 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     Feature_UpdateContentResOnAllPathsShrink__private_IsEnabledDeviceUsageNoInline @ 0x140090C04 (Feature_UpdateContentResOnAllPathsShrink__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402D70F0 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1403085C0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1403E1F18 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  unsigned int v2; // r13d
  char v3; // r12
  char v4; // bl
  _DWORD *v6; // r15
  UINT cx; // esi
  UINT cy; // r14d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ebx
  int i; // r13d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // rax
  __int64 v16; // r15
  unsigned int v17; // ebx
  int *v18; // rax
  signed int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v25; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 result; // rax
  __int64 v30; // rax
  unsigned int v31; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v32; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v33; // rbx
  int IsVirtualizationDisabledForTarget; // eax
  unsigned int v35; // r15d
  char v36; // [rsp+40h] [rbp-10h]
  int v37; // [rsp+48h] [rbp-8h]
  char v38; // [rsp+90h] [rbp+40h] BYREF
  char v39; // [rsp+A0h] [rbp+50h] BYREF
  struct _D3DKMDT_2DREGION v40; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  v3 = 1;
  v4 = 0;
  v36 = 1;
  v38 = 0;
  v6 = 0LL;
  v39 = 0;
  LOBYTE(v40.cx) = 1;
  v37 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  cx = 0x7FFFFFFF;
  cy = 0x7FFFFFFF;
  if ( *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
  {
    while ( 1 )
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v2);
      if ( *((_DWORD *)PathDescriptor + 46) == v37 )
      {
        if ( (*(_DWORD *)PathDescriptor & 0x20000) == 0 )
        {
          v4 = 1;
          v3 = 0;
          break;
        }
        if ( !v6 )
          v6 = (_DWORD *)((char *)PathDescriptor + 152);
        v10 = *((_DWORD *)PathDescriptor + 38);
        if ( !v10 || (v11 = *((_DWORD *)PathDescriptor + 39)) == 0 || *v6 != v10 || v6[1] != v11 )
        {
          v38 = 1;
          *((_DWORD *)PathDescriptor + 65) |= 0x400u;
          v3 = 0;
LABEL_21:
          v4 = v38;
          break;
        }
        if ( (unsigned int)Feature_UpdateContentResOnAllPathsShrink__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( (*(_BYTE *)PathDescriptor & 1) != 0 )
          {
            v12 = *((_DWORD *)PathDescriptor + 11);
            v39 = 1;
            if ( *v6 <= v12 || v6[1] <= *((_DWORD *)PathDescriptor + 12) )
              LOBYTE(v40.cx) = 0;
          }
        }
        if ( _bittest64((const signed __int64 *)PathDescriptor, 0x35u) )
        {
          if ( *((_DWORD *)PathDescriptor + 38) == *((_DWORD *)PathDescriptor + 40)
            && *((_DWORD *)PathDescriptor + 39) == *((_DWORD *)PathDescriptor + 41) )
          {
            v36 = 0;
          }
        }
        else
        {
          v3 = 0;
        }
      }
      if ( ++v2 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
        goto LABEL_21;
    }
  }
  if ( (unsigned int)Feature_UpdateContentResOnAllPathsShrink__private_IsEnabledDeviceUsageNoInline()
    && v39
    && LOBYTE(v40.cx) )
  {
    v13 = 0;
    for ( i = v37; v13 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++v13 )
    {
      v15 = CCD_TOPOLOGY::GetPathDescriptor(this, v13);
      if ( *((_DWORD *)v15 + 46) == v37 )
        *((_DWORD *)v15 + 65) |= 0x1000u;
    }
LABEL_62:
    v30 = *((_QWORD *)this + 8);
    v31 = 0;
    v38 = 0;
    v39 = 0;
    if ( *(_WORD *)(v30 + 20) )
    {
      while ( 1 )
      {
        v32 = CCD_TOPOLOGY::GetPathDescriptor(this, v31);
        v33 = v32;
        if ( *((_DWORD *)v32 + 46) == i )
        {
          v40 = 0LL;
          CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v32, 1, &v40);
          IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                                *(struct _LUID *)((char *)v33 + 16),
                                                *((_DWORD *)v33 + 7),
                                                (bool *)&v38,
                                                (bool *)&v39,
                                                0LL,
                                                0LL,
                                                0LL,
                                                0LL);
          v35 = IsVirtualizationDisabledForTarget;
          if ( IsVirtualizationDisabledForTarget < 0 )
          {
            WdLogSingleEntry1(2LL, IsVirtualizationDisabledForTarget);
            result = v35;
            WdLogGlobalForLineNumber = 4567;
            return result;
          }
          if ( v38 && !v39 )
            goto LABEL_76;
          if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v33 + 22)) )
          {
            if ( (*(_DWORD *)v33 & 0x20000) != 0 )
            {
              cx = *((_DWORD *)v33 + 38);
              cy = *((_DWORD *)v33 + 39);
              goto LABEL_44;
            }
LABEL_76:
            cx = v40.cx;
            cy = v40.cy;
            goto LABEL_44;
          }
          if ( v40.cx < cx )
          {
            cx = v40.cx;
            *((_DWORD *)v33 + 65) |= 0x4000u;
          }
          if ( v40.cy < cy )
          {
            cy = v40.cy;
            *((_DWORD *)v33 + 65) |= 0x4000u;
          }
        }
        if ( ++v31 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
          goto LABEL_44;
      }
    }
LABEL_81:
    WdLogSingleEntry3(2LL, *((_QWORD *)this + 8), cx, cy);
    WdLogGlobalForLineNumber = 4622;
    return 3221225473LL;
  }
  if ( !v3 )
  {
    if ( v4 )
    {
      i = v37;
      goto LABEL_62;
    }
    return 0LL;
  }
  v16 = 0x3FFFFFFF00000001LL;
  v17 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    goto LABEL_81;
  i = v37;
  do
  {
    v18 = (int *)CCD_TOPOLOGY::GetPathDescriptor(this, v17);
    if ( v18[46] == v37 )
    {
      if ( v36 )
      {
        v19 = v18[40];
        v20 = v18[41];
        v21 = v20 * v19;
        v22 = v18[38] * (__int64)v18[39] - v21;
        v23 = v21 - v18[38] * (__int64)v18[39];
        if ( v23 < 0 )
          v23 = v22;
        if ( v23 < v16 )
        {
          cx = v19;
          cy = v20;
          v16 = v23;
        }
      }
      else if ( v18[38] == v18[40] && v18[39] == v18[41] )
      {
        cx = v18[40];
        cy = v18[41];
        break;
      }
    }
    ++v17;
  }
  while ( v17 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
LABEL_44:
  if ( !cx || !cy || cx == 0x7FFFFFFF || cy == 0x7FFFFFFF )
    goto LABEL_81;
  v24 = 0;
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 1 )
  {
    v25 = CCD_TOPOLOGY::GetPathDescriptor(this, v24);
    v26 = v25;
    if ( *((_DWORD *)v25 + 46) != i )
      goto LABEL_56;
    v27 = *(_QWORD *)v25;
    if ( (*(_QWORD *)v25 & 0x20000LL) != 0 && *((_DWORD *)v25 + 38) == cx && *((_DWORD *)v25 + 39) == cy )
      goto LABEL_56;
    if ( (*((_DWORD *)v25 + 2) & 0x20000) != 0 )
      break;
    v28 = *((_QWORD *)v25 + 31);
    *((_DWORD *)v26 + 38) = cx;
    *((_DWORD *)v26 + 39) = cy;
    *(_QWORD *)v26 = v27 & 0xFFFFFFFFFF7DFFFFuLL | 0x20000;
    if ( v28 )
    {
      *(_DWORD *)(v28 + 172) = cx;
      *(_DWORD *)(*((_QWORD *)v26 + 31) + 176LL) = cy;
    }
LABEL_56:
    if ( ++v24 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
  }
  if ( (*(_QWORD *)v25 & 0x20000LL) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4651;
  }
  *((_DWORD *)v26 + 65) |= 0x80000000;
  WdLogSingleEntry3(2LL, *((_QWORD *)this + 8), cx, cy);
  WdLogGlobalForLineNumber = 4654;
  return 3221225473LL;
}
