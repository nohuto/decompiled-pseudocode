/*
 * XREFs of ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x14042D7C8
 * Callers:
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x140320C88 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140050A90 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledDeviceUsageNoInline @ 0x140090BB0 (Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledDeviceUsageNoInli.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402D70F0 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403C4754 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1403E1F18 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(
        CCD_TOPOLOGY *this,
        struct tagRECT *a2,
        unsigned int *a3,
        int *a4)
{
  signed int cy; // r14d
  int v5; // r15d
  unsigned int v6; // esi
  int v7; // r13d
  signed int cx; // ebx
  unsigned int v9; // ebp
  unsigned int *v10; // r9
  __int64 v12; // rax
  unsigned __int16 v13; // cx
  const struct _LUID *PathDescriptor; // rdi
  CCD_TOPOLOGY *v15; // rcx
  LONG bottom; // edx
  signed int right; // r9d
  int top; // r9d
  int left; // r9d
  signed int v20; // eax
  char *v21; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v23; // rcx
  CCD_TOPOLOGY *v24; // r13
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned int v27; // r12d
  unsigned int i; // edx
  const struct _LUID *v29; // rbp
  __int64 v30; // rax
  unsigned __int16 v31; // cx
  CCD_TOPOLOGY *v32; // rcx
  __int64 v33; // rax
  unsigned __int16 v34; // cx
  int v35; // edi
  signed int v36; // r13d
  __int64 v37; // rax
  unsigned __int16 v38; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v39; // rbp
  CCD_TOPOLOGY *v40; // rcx
  __int64 v41; // rax
  struct tagRECT v42; // xmm0
  __int64 v43; // rax
  __int64 v44; // r8
  UINT v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  signed int v49; // r10d
  __int64 v50; // rcx
  void *v51; // rdi
  unsigned int v52; // ecx
  struct tagRECT *v53; // rdx
  __int64 v54; // rax
  unsigned int v56; // [rsp+20h] [rbp-F8h]
  signed int v57; // [rsp+24h] [rbp-F4h]
  int v58; // [rsp+28h] [rbp-F0h]
  int v59; // [rsp+2Ch] [rbp-ECh]
  signed int v60; // [rsp+30h] [rbp-E8h]
  int v61; // [rsp+34h] [rbp-E4h]
  signed int v62; // [rsp+34h] [rbp-E4h]
  unsigned int v63; // [rsp+38h] [rbp-E0h]
  struct _D3DKMDT_2DREGION v65; // [rsp+48h] [rbp-D0h] BYREF
  signed int v66; // [rsp+50h] [rbp-C8h]
  struct _D3DKMDT_2DREGION v67; // [rsp+58h] [rbp-C0h] BYREF
  CCD_TOPOLOGY *v68; // [rsp+60h] [rbp-B8h]
  void *v69; // [rsp+68h] [rbp-B0h]
  struct tagRECT *v70; // [rsp+70h] [rbp-A8h]
  int *v71; // [rsp+78h] [rbp-A0h]
  char v72; // [rsp+80h] [rbp-98h] BYREF

  cy = 0x80000000;
  v71 = a4;
  v5 = 0x7FFFFFFF;
  v60 = 0x80000000;
  v6 = 0;
  v58 = 0x7FFFFFFF;
  v7 = 0x7FFFFFFF;
  v59 = 0x7FFFFFFF;
  cx = 0x80000000;
  v57 = 0x80000000;
  v9 = 0;
  v10 = a3;
  v70 = a2;
  v68 = this;
  while ( 1 )
  {
    v12 = *((_QWORD *)this + 8);
    v13 = v12 ? *(_WORD *)(v12 + 20) : 0;
    if ( v6 >= v13 || v9 >= *v10 )
      break;
    PathDescriptor = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    if ( (PathDescriptor->LowPart & 0x800LL) != 0
      && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v6)
      && !PathDescriptor[26].HighPart
      && !CCD_TOPOLOGY::IsVirtualSlate(v15, PathDescriptor) )
    {
      bottom = v70[v9].bottom;
      if ( bottom > cy )
      {
        right = v60;
        cy = v70[v9].bottom;
        if ( v60 < v70[v9].right )
          right = v70[v9].right;
        v60 = right;
      }
      if ( v70[v9].right > cx )
      {
        top = v58;
        cx = v70[v9].right;
        if ( v58 > v70[v9].top )
          top = v70[v9].top;
        v58 = top;
      }
      if ( v70[v9].top < v7 )
      {
        left = v59;
        v7 = v70[v9].top;
        if ( v59 > v70[v9].left )
          left = v70[v9].left;
        v59 = left;
      }
      if ( v70[v9].left < v5 )
      {
        v5 = v70[v9].left;
        v20 = v57;
        if ( v57 < bottom )
          v20 = v70[v9].bottom;
        v57 = v20;
      }
      ++v9;
    }
    v10 = a3;
    ++v6;
  }
  v61 = v7;
  v69 = 0LL;
  v21 = &v72;
  IsEnabledDeviceUsageNoInline = Feature_FixBufferOverrunInAdjustSlateVirtualMonitorsPosition__private_IsEnabledDeviceUsageNoInline();
  v23 = *((_QWORD *)this + 8);
  v24 = this;
  if ( v23 )
  {
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( *(_WORD *)(v23 + 20) < 4u )
        goto LABEL_38;
      v25 = *(unsigned __int16 *)(v23 + 20) + 1LL;
    }
    else
    {
      if ( *(_WORD *)(v23 + 20) <= 4u )
        goto LABEL_38;
      v25 = *(unsigned __int16 *)(v23 + 20);
    }
    v26 = 16 * v25;
    if ( !is_mul_ok(v25, 0x10uLL) )
      v26 = -1LL;
    v69 = (void *)operator new[](v26, 0x4B677844u, 256LL);
    v21 = (char *)v69;
  }
LABEL_38:
  v27 = 0;
  v56 = 0;
  if ( !*a3 )
  {
    for ( i = 0; ; i = v27 )
    {
      v29 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(v24, i);
      v30 = *((_QWORD *)v24 + 8);
      v31 = v30 ? *(_WORD *)(v30 + 20) : 0;
      if ( v27 >= v31
        || CCD_TOPOLOGY::IsPrimaryClonePathByModality(v24, v27)
        && !v29[26].HighPart
        && CCD_TOPOLOGY::IsVirtualSlate(v32, v29) )
      {
        break;
      }
      ++v27;
    }
    v33 = *((_QWORD *)v24 + 8);
    v34 = v33 ? *(_WORD *)(v33 + 20) : 0;
    if ( v27 < v34 )
    {
      v67 = 0LL;
      v56 = 1;
      *a3 = 1;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation((const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v29, 0, &v67);
      cx = v67.cx;
      cy = v67.cy;
      *((_DWORD *)v21 + 1) = 0;
      v5 = 0;
      *(_DWORD *)v21 = 0;
      *((_DWORD *)v21 + 3) = cy;
      v59 = 0;
      *((_DWORD *)v21 + 2) = cx;
      v61 = 0;
      v58 = 0;
      v60 = cx;
      v57 = cy;
    }
  }
  v63 = 0;
  v35 = v61;
  while ( 1 )
  {
    v36 = v35;
    v66 = cy;
    v62 = v5;
    v37 = *((_QWORD *)v68 + 8);
    v38 = v37 ? *(_WORD *)(v37 + 20) : 0;
    if ( v27 >= v38 )
      break;
    v39 = CCD_TOPOLOGY::GetPathDescriptor(v68, v27);
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(v68, v27) && !*((_DWORD *)v39 + 53) )
    {
      if ( CCD_TOPOLOGY::IsVirtualSlate(v40, (const struct _LUID *)v39) )
      {
        v65 = 0LL;
        ++*a3;
        CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v39, 0, &v65);
        v44 = v65.cy;
        v45 = v65.cx;
        if ( (__int64)(v35 - (unsigned __int64)v65.cy) < -32000 )
        {
          if ( (__int64)(v5 - (unsigned __int64)v65.cx) < -32000 )
          {
            if ( (__int64)(cy + (unsigned __int64)v65.cy) > 32000 )
            {
              if ( v65.cx + (__int64)cx > 32000 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5247;
              }
              else
              {
                v49 = cx;
                v50 = 2LL * v56;
                *(_DWORD *)&v21[8 * v50] = cx;
                cx += v45;
                *(_DWORD *)&v21[8 * v50 + 8] = cx;
                if ( v44 + v58 > cy )
                {
                  if ( cy - v44 < -32000 )
                  {
                    cy = v44 - 32000;
                    *(_DWORD *)&v21[16 * v56 + 4] = -32000;
                    *(_DWORD *)&v21[16 * v56 + 12] = v44 - 32000;
                    v35 = -32000;
                    v60 = cx;
                  }
                  else
                  {
                    *(_DWORD *)&v21[16 * v56 + 12] = cy;
                    *(_DWORD *)&v21[16 * v56 + 4] = cy - v44;
                    if ( cy - (int)v44 < v35 )
                    {
                      v35 = cy - v44;
                      v59 = v49;
                    }
                  }
                }
                else
                {
                  *(_DWORD *)&v21[16 * v56 + 4] = v58;
                  *(_DWORD *)&v21[16 * v56 + 12] = v44 + v58;
                }
              }
            }
            else
            {
              v48 = 2LL * v56;
              *(_DWORD *)&v21[8 * v48 + 4] = cy;
              cy += v44;
              *(_DWORD *)&v21[8 * v48 + 12] = cy;
              if ( (__int64)(v60 - (unsigned __int64)v45) < v5 )
              {
                if ( (__int64)(v5 + (unsigned __int64)v45) > 32000 )
                {
                  *(_DWORD *)&v21[16 * v56 + 8] = 32000;
                  v5 = 32000 - v45;
                  v57 = cy;
                  *(_DWORD *)&v21[16 * v56] = 32000 - v45;
                  cx = 32000;
                }
                else
                {
                  *(_DWORD *)&v21[16 * v56] = v5;
                  *(_DWORD *)&v21[16 * v56 + 8] = v45 + v5;
                  if ( (int)(v45 + v5) > cx )
                  {
                    cx = v45 + v5;
                    v58 = v66;
                  }
                }
              }
              else
              {
                *(_DWORD *)&v21[16 * v56 + 8] = v60;
                *(_DWORD *)&v21[16 * v56] = v60 - v45;
              }
            }
          }
          else
          {
            v47 = 2LL * v56;
            *(_DWORD *)&v21[8 * v47 + 8] = v5;
            v5 -= v45;
            *(_DWORD *)&v21[8 * v47] = v5;
            if ( v57 - v44 < v35 )
            {
              if ( v35 + v44 > 32000 )
              {
                *(_DWORD *)&v21[16 * v56 + 12] = 32000;
                v35 = 32000 - v44;
                v59 = v5;
                *(_DWORD *)&v21[16 * v56 + 4] = 32000 - v44;
                cy = 32000;
              }
              else
              {
                *(_DWORD *)&v21[16 * v56 + 4] = v35;
                *(_DWORD *)&v21[16 * v56 + 12] = v44 + v35;
                if ( (int)v44 + v35 > cy )
                {
                  cy = v44 + v35;
                  v60 = v62;
                }
              }
            }
            else
            {
              *(_DWORD *)&v21[16 * v56 + 12] = v57;
              *(_DWORD *)&v21[16 * v56 + 4] = v57 - v44;
            }
          }
        }
        else
        {
          v46 = 2LL * v56;
          *(_DWORD *)&v21[8 * v46 + 12] = v35;
          v35 -= v44;
          *(_DWORD *)&v21[8 * v46 + 4] = v35;
          if ( v45 + (__int64)v59 > cx )
          {
            if ( (__int64)(cx - (unsigned __int64)v45) < -32000 )
            {
              cx = v45 - 32000;
              *(_DWORD *)&v21[16 * v56] = -32000;
              *(_DWORD *)&v21[16 * v56 + 8] = v45 - 32000;
              v5 = -32000;
              v58 = v35;
            }
            else
            {
              *(_DWORD *)&v21[16 * v56 + 8] = cx;
              *(_DWORD *)&v21[16 * v56] = cx - v45;
              if ( (int)(cx - v45) < v5 )
              {
                v5 = cx - v45;
                v57 = v36;
              }
            }
          }
          else
          {
            *(_DWORD *)&v21[16 * v56] = v59;
            *(_DWORD *)&v21[16 * v56 + 8] = v45 + v59;
          }
        }
        ++v56;
      }
      else
      {
        v41 = v63++;
        v42 = v70[v41];
        v43 = 2LL * v56++;
        *(struct tagRECT *)&v21[8 * v43] = v42;
      }
    }
    ++v27;
  }
  v51 = v69;
  if ( cx > *v71 )
    *v71 = cx;
  v52 = 0;
  if ( *a3 )
  {
    v53 = v70;
    do
    {
      v54 = v52++;
      v53[v54] = *(struct tagRECT *)&v21[16 * v54];
    }
    while ( v52 < *a3 );
  }
  if ( v51 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v51);
  return 0LL;
}
