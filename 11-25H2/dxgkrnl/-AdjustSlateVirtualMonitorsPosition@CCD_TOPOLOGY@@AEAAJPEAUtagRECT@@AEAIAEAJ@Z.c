/*
 * XREFs of ?AdjustSlateVirtualMonitorsPosition@CCD_TOPOLOGY@@AEAAJPEAUtagRECT@@AEAIAEAJ@Z @ 0x140370FE0
 * Callers:
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z @ 0x140371650 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJ_N@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140051020 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x140371EC4 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NPEAU_D3DKMDT_2DREGION@@@Z @ 0x1403E8E68 (-_QueryDesktopSurfaceRegionWithRotation@CCD_TOPOLOGY@@CAXAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@_NP.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AdjustSlateVirtualMonitorsPosition(
        CCD_TOPOLOGY *this,
        struct tagRECT *a2,
        unsigned int *a3,
        int *a4)
{
  signed int cy; // r14d
  LONG v5; // r15d
  unsigned int v6; // esi
  LONG v7; // r13d
  LONG cx; // ebx
  unsigned int v9; // ebp
  CCD_TOPOLOGY *v11; // r11
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  __int64 v14; // rdx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  CCD_TOPOLOGY *v16; // rcx
  LONG bottom; // edx
  LONG right; // r8d
  LONG top; // r8d
  LONG left; // r8d
  LONG v21; // eax
  char *v22; // rsi
  unsigned int v23; // r12d
  struct tagRECT *v24; // rdi
  __int64 v25; // rax
  unsigned __int16 v26; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rbp
  CCD_TOPOLOGY *v28; // rcx
  __int64 v29; // rax
  struct tagRECT v30; // xmm0
  __int64 v31; // rax
  void *v32; // rdi
  unsigned int v33; // ecx
  struct tagRECT *v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v37; // rax
  char *v38; // rax
  unsigned int v39; // edx
  CCD_TOPOLOGY *v40; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v41; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v42; // rbp
  __int64 v43; // rax
  unsigned __int16 v44; // cx
  CCD_TOPOLOGY *v45; // rcx
  __int64 v46; // rax
  unsigned __int16 v47; // cx
  __int64 v48; // r8
  UINT v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  LONG v53; // r10d
  __int64 v54; // rcx
  unsigned int v55; // [rsp+20h] [rbp-108h]
  signed int v56; // [rsp+24h] [rbp-104h]
  LONG v57; // [rsp+28h] [rbp-100h]
  LONG v58; // [rsp+2Ch] [rbp-FCh]
  LONG v59; // [rsp+30h] [rbp-F8h]
  unsigned int v61; // [rsp+40h] [rbp-E8h]
  unsigned int *v62; // [rsp+48h] [rbp-E0h]
  struct _D3DKMDT_2DREGION v63; // [rsp+50h] [rbp-D8h] BYREF
  LONG v64; // [rsp+58h] [rbp-D0h]
  LONG v65; // [rsp+5Ch] [rbp-CCh]
  LONG v66; // [rsp+60h] [rbp-C8h]
  struct _D3DKMDT_2DREGION v67; // [rsp+68h] [rbp-C0h] BYREF
  void *v68; // [rsp+70h] [rbp-B8h]
  struct tagRECT *v69; // [rsp+78h] [rbp-B0h]
  int *v70; // [rsp+80h] [rbp-A8h]
  char v71; // [rsp+90h] [rbp-98h] BYREF

  cy = 0x80000000;
  v70 = a4;
  v5 = 0x7FFFFFFF;
  v59 = 0x80000000;
  v6 = 0;
  v57 = 0x7FFFFFFF;
  v7 = 0x7FFFFFFF;
  v58 = 0x7FFFFFFF;
  cx = 0x80000000;
  v56 = 0x80000000;
  v9 = 0;
  v62 = a3;
  v69 = a2;
  v11 = this;
  while ( 1 )
  {
    v12 = *((_QWORD *)v11 + 8);
    if ( v12 )
      v13 = *(_WORD *)(v12 + 20);
    else
      v13 = 0;
    v14 = *((_QWORD *)v11 + 8);
    if ( !v12 )
      v14 = 0LL;
    if ( v6 >= v13 || v9 >= *a3 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(v11, v6);
    if ( (*(_DWORD *)PathDescriptor & 0x800LL) != 0
      && CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v6)
      && !*((_DWORD *)PathDescriptor + 53)
      && !CCD_TOPOLOGY::IsVirtualSlate(v16, PathDescriptor) )
    {
      bottom = a2[v9].bottom;
      if ( bottom > cy )
      {
        right = v59;
        cy = a2[v9].bottom;
        if ( v59 < a2[v9].right )
          right = a2[v9].right;
        v59 = right;
      }
      if ( a2[v9].right > cx )
      {
        top = v57;
        cx = a2[v9].right;
        if ( v57 > a2[v9].top )
          top = a2[v9].top;
        v57 = top;
      }
      if ( a2[v9].top < v7 )
      {
        left = v58;
        v7 = a2[v9].top;
        if ( v58 > a2[v9].left )
          left = a2[v9].left;
        v58 = left;
      }
      if ( a2[v9].left < v5 )
      {
        v5 = a2[v9].left;
        v21 = v56;
        if ( v56 < bottom )
          v21 = a2[v9].bottom;
        v56 = v21;
      }
      ++v9;
    }
    v11 = this;
    ++v6;
    a3 = v62;
  }
  v22 = &v71;
  v68 = 0LL;
  if ( v12 && *(_WORD *)(v14 + 20) > 4u )
  {
    v37 = 16LL * *(unsigned __int16 *)(v14 + 20);
    if ( !is_mul_ok(*(unsigned __int16 *)(v14 + 20), 0x10uLL) )
      v37 = -1LL;
    v38 = (char *)operator new[](v37, 0x4B677844u, 256LL, (__int64)a4);
    v11 = this;
    v22 = v38;
    a3 = v62;
    v68 = v38;
  }
  v55 = 0;
  v23 = 0;
  if ( !*a3 )
  {
    v39 = 0;
    v40 = v11;
    while ( 1 )
    {
      v41 = CCD_TOPOLOGY::GetPathDescriptor(v40, v39);
      v11 = this;
      v42 = v41;
      v43 = *((_QWORD *)this + 8);
      v44 = v43 ? *(_WORD *)(v43 + 20) : 0;
      if ( v23 >= v44 )
        break;
      if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v23)
        && !*((_DWORD *)v42 + 53)
        && CCD_TOPOLOGY::IsVirtualSlate(v45, v42) )
      {
        v11 = this;
        break;
      }
      v40 = this;
      v39 = ++v23;
    }
    v46 = *((_QWORD *)v11 + 8);
    if ( v46 )
      v47 = *(_WORD *)(v46 + 20);
    else
      v47 = 0;
    if ( v23 < v47 )
    {
      v67 = 0LL;
      v55 = 1;
      *v62 = 1;
      CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v42, 0, &v67);
      cx = v67.cx;
      cy = v67.cy;
      v7 = 0;
      *((_DWORD *)v22 + 1) = 0;
      v5 = 0;
      *(_DWORD *)v22 = 0;
      *((_DWORD *)v22 + 3) = cy;
      v58 = 0;
      *((_DWORD *)v22 + 2) = cx;
      v57 = 0;
      v59 = cx;
      v56 = cy;
    }
  }
  v61 = 0;
  v24 = v69;
  while ( 1 )
  {
    v25 = *((_QWORD *)v11 + 8);
    v66 = cy;
    v65 = v5;
    v64 = v7;
    v26 = v25 ? *(_WORD *)(v25 + 20) : 0;
    if ( v23 >= v26 )
      break;
    v27 = CCD_TOPOLOGY::GetPathDescriptor(v11, v23);
    if ( CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, v23) && !*((_DWORD *)v27 + 53) )
    {
      if ( CCD_TOPOLOGY::IsVirtualSlate(v28, v27) )
      {
        v63 = 0LL;
        ++*v62;
        CCD_TOPOLOGY::_QueryDesktopSurfaceRegionWithRotation(v27, 0, &v63);
        v48 = v63.cy;
        v49 = v63.cx;
        if ( (__int64)(v7 - (unsigned __int64)v63.cy) < -32000 )
        {
          if ( (__int64)(v5 - (unsigned __int64)v63.cx) < -32000 )
          {
            if ( (__int64)(cy + (unsigned __int64)v63.cy) > 32000 )
            {
              if ( v63.cx + (__int64)cx > 32000 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 5176;
              }
              else
              {
                v53 = cx;
                v54 = 2LL * v55;
                *(_DWORD *)&v22[8 * v54] = cx;
                cx += v49;
                *(_DWORD *)&v22[8 * v54 + 8] = cx;
                if ( v48 + v57 > cy )
                {
                  if ( cy - v48 < -32000 )
                  {
                    cy = v48 - 32000;
                    *(_DWORD *)&v22[16 * v55 + 4] = -32000;
                    *(_DWORD *)&v22[16 * v55 + 12] = v48 - 32000;
                    v7 = -32000;
                    v59 = cx;
                  }
                  else
                  {
                    *(_DWORD *)&v22[16 * v55 + 12] = cy;
                    *(_DWORD *)&v22[16 * v55 + 4] = cy - v48;
                    if ( cy - (int)v48 < v7 )
                    {
                      v7 = cy - v48;
                      v58 = v53;
                    }
                  }
                }
                else
                {
                  *(_DWORD *)&v22[16 * v55 + 4] = v57;
                  *(_DWORD *)&v22[16 * v55 + 12] = v48 + v57;
                }
              }
            }
            else
            {
              v52 = 2LL * v55;
              *(_DWORD *)&v22[8 * v52 + 4] = cy;
              cy += v48;
              *(_DWORD *)&v22[8 * v52 + 12] = cy;
              if ( (__int64)(v59 - (unsigned __int64)v49) < v5 )
              {
                if ( (__int64)(v5 + (unsigned __int64)v49) > 32000 )
                {
                  *(_DWORD *)&v22[16 * v55 + 8] = 32000;
                  v5 = 32000 - v49;
                  v56 = cy;
                  *(_DWORD *)&v22[16 * v55] = 32000 - v49;
                  cx = 32000;
                }
                else
                {
                  *(_DWORD *)&v22[16 * v55] = v5;
                  *(_DWORD *)&v22[16 * v55 + 8] = v49 + v5;
                  if ( (int)(v49 + v5) > cx )
                  {
                    cx = v49 + v5;
                    v57 = v66;
                  }
                }
              }
              else
              {
                *(_DWORD *)&v22[16 * v55 + 8] = v59;
                *(_DWORD *)&v22[16 * v55] = v59 - v49;
              }
            }
          }
          else
          {
            v51 = 2LL * v55;
            *(_DWORD *)&v22[8 * v51 + 8] = v5;
            v5 -= v49;
            *(_DWORD *)&v22[8 * v51] = v5;
            if ( v56 - v48 < v7 )
            {
              if ( v7 + v48 > 32000 )
              {
                *(_DWORD *)&v22[16 * v55 + 12] = 32000;
                v7 = 32000 - v48;
                v58 = v5;
                *(_DWORD *)&v22[16 * v55 + 4] = 32000 - v48;
                cy = 32000;
              }
              else
              {
                *(_DWORD *)&v22[16 * v55 + 4] = v7;
                *(_DWORD *)&v22[16 * v55 + 12] = v48 + v7;
                if ( (int)v48 + v7 > cy )
                {
                  cy = v48 + v7;
                  v59 = v65;
                }
              }
            }
            else
            {
              *(_DWORD *)&v22[16 * v55 + 12] = v56;
              *(_DWORD *)&v22[16 * v55 + 4] = v56 - v48;
            }
          }
        }
        else
        {
          v50 = 2LL * v55;
          *(_DWORD *)&v22[8 * v50 + 12] = v7;
          v7 -= v48;
          *(_DWORD *)&v22[8 * v50 + 4] = v7;
          if ( v49 + (__int64)v58 > cx )
          {
            if ( (__int64)(cx - (unsigned __int64)v49) < -32000 )
            {
              cx = v49 - 32000;
              *(_DWORD *)&v22[16 * v55] = -32000;
              *(_DWORD *)&v22[16 * v55 + 8] = v49 - 32000;
              v5 = -32000;
              v57 = v7;
            }
            else
            {
              *(_DWORD *)&v22[16 * v55 + 8] = cx;
              *(_DWORD *)&v22[16 * v55] = cx - v49;
              if ( (int)(cx - v49) < v5 )
              {
                v5 = cx - v49;
                v56 = v64;
              }
            }
          }
          else
          {
            *(_DWORD *)&v22[16 * v55] = v58;
            *(_DWORD *)&v22[16 * v55 + 8] = v49 + v58;
          }
        }
        ++v55;
      }
      else
      {
        v29 = v61++;
        v30 = v24[v29];
        v31 = 2LL * v55++;
        *(struct tagRECT *)&v22[8 * v31] = v30;
      }
    }
    v11 = this;
    ++v23;
  }
  v32 = v68;
  if ( cx > *v70 )
    *v70 = cx;
  v33 = 0;
  if ( *v62 )
  {
    v34 = v69;
    do
    {
      v35 = v33++;
      v34[v35] = *(struct tagRECT *)&v22[16 * v35];
    }
    while ( v33 < *v62 );
  }
  if ( v32 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v32);
  return 0LL;
}
