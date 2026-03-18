/*
 * XREFs of ?GetSubtreeZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x1800CDAA0
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180053BD0 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?erase@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@V?$basic_iterator@$$CBV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@@Z @ 0x1800CC2C0 (-erase@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetSubtreeZ(CVisual *this, const struct CVisualTree *a2, int a3)
{
  CMultiPrimitiveDrawListBrush *(__fastcall ****v3)(CMultiPrimitiveDrawListBrush *, char); // rbx
  CVisual **v4; // r12
  _QWORD *v6; // r14
  __int64 v7; // r9
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  void (__fastcall *v14)(COcclusionInfo *__hidden, const struct CVisualTree *, unsigned __int64); // rax
  __int64 v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // rsi
  __int64 n; // rax
  __int64 v19; // r14
  __int64 v21; // r8
  __int64 v22; // rcx
  _BYTE *v23; // rdx
  unsigned int i; // eax
  _QWORD ***v25; // rcx
  _QWORD **v26; // rcx
  _QWORD *j; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r15
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  int *v34; // r8
  unsigned int v35; // edx
  _BYTE *v36; // rcx
  unsigned int k; // eax
  __int64 v38; // rcx
  int *v39; // rcx
  _QWORD *v40; // rcx
  _QWORD *m; // rax
  CMultiPrimitiveDrawListBrush *(__fastcall ****v42)(CMultiPrimitiveDrawListBrush *, char); // rdi
  CMultiPrimitiveDrawListBrush *(__fastcall ****v43)(CMultiPrimitiveDrawListBrush *, char); // rbx
  __int64 v44; // rdx
  bool v45; // cc
  __int64 v46; // rsi
  CMultiPrimitiveDrawListBrush *(__fastcall ***v47)(CMultiPrimitiveDrawListBrush *, char); // rax
  CSurfaceDrawListBrush *v48; // rcx
  CWindowOcclusionInfo *(__fastcall *v49)(CWindowOcclusionInfo *, char); // rax
  CMultiPrimitiveDrawListBrush *(__fastcall ***v50)(CMultiPrimitiveDrawListBrush *, char); // rcx
  CMultiPrimitiveDrawListBrush *(__fastcall *v51)(CMultiPrimitiveDrawListBrush *, char); // rax
  __int64 v52; // [rsp+20h] [rbp-58h]
  __int64 v53; // [rsp+80h] [rbp+8h] BYREF
  const struct CVisualTree *v54; // [rsp+88h] [rbp+10h]
  int v55; // [rsp+90h] [rbp+18h]
  char *v56; // [rsp+98h] [rbp+20h] BYREF

  v55 = a3;
  v54 = a2;
  LODWORD(v3) = a3;
  v4 = (CVisual **)a2;
  while ( 1 )
  {
    if ( !this )
      return 0LL;
    if ( (*((unsigned __int8 (__fastcall **)(CVisual **))*v4 + 23))(v4) )
      break;
    v21 = *((_QWORD *)this + 29);
    if ( *(int *)v21 < 0 )
    {
      v22 = *(unsigned int *)(v21 + 4);
      v23 = (_BYTE *)(v21 + 8);
      for ( i = 0; i < (unsigned int)v22; ++v23 )
      {
        if ( *v23 == 1 )
          break;
        ++i;
      }
      v25 = i >= (unsigned int)v22 ? 0LL : (_QWORD ***)(v22 + 15 + v21 + 8LL * i - (((_BYTE)v22 + 15) & 7));
      v26 = *v25;
      if ( v26 )
      {
        for ( j = *v26; j != v26; j = (_QWORD *)*j )
        {
          v6 = j - 43;
          v56 = (char *)(j - 43);
          if ( (CVisual **)j[4] == v4 )
            goto LABEL_5;
        }
      }
    }
LABEL_6:
    if ( this == v4[9] )
      this = 0LL;
    else
      this = (CVisual *)*((_QWORD *)this + 11);
  }
  v6 = (_QWORD *)((char *)this + 328);
  v56 = (char *)this + 328;
LABEL_5:
  v7 = 0LL;
  if ( !v6 )
    goto LABEL_6;
  v8 = v6[22];
  v9 = 0LL;
  v10 = v6[23];
  v11 = v8;
  v53 = 0LL;
  while ( v11 != v10 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v11 + 32LL) == (_DWORD)v3 )
    {
      v9 = *(_QWORD *)v11;
      v53 = *(_QWORD *)v11;
      break;
    }
    v11 += 8LL;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(v6[31] + 24LL) + 888LL);
  v52 = v12;
  if ( v6[27] != v12 )
  {
    v6[27] = v12;
    if ( (unsigned __int64)((v6[23] - v8) >> 3) > 1 )
    {
      while ( v8 != v6[23] )
      {
        if ( *(_QWORD *)v8 == v9
          || (v28 = *(_QWORD *)(*(_QWORD *)v8 + 16LL)) == 0
          || (unsigned __int64)(v12 - v28) < 0xA )
        {
          v8 += 8LL;
        }
        else
        {
          v29 = v6[22];
          v30 = (v8 - v29) >> 3;
          v31 = (v6[23] - v29) >> 3;
          if ( v30 + 1 > v31 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
            goto LABEL_6;
          }
          v42 = (CMultiPrimitiveDrawListBrush *(__fastcall ****)(CMultiPrimitiveDrawListBrush *, char))(v29 + 8 * v31);
          if ( v30 + 1 != v31 )
          {
            if ( v30 && (!v29 || v30 < 0 || v31 < v30) )
              goto LABEL_86;
            v43 = (CMultiPrimitiveDrawListBrush *(__fastcall ****)(CMultiPrimitiveDrawListBrush *, char))(v29 + 8 * (v30 + 1));
            v44 = v42 - v43;
            v45 = v44 <= 0;
            if ( v44 < 0 )
            {
              if ( v30 < (unsigned __int64)-v44 )
                goto LABEL_86;
              v45 = v44 <= 0;
            }
            if ( !v45 && v31 - v30 < v44 )
LABEL_86:
              _invalid_parameter_noinfo_noreturn();
            v46 = 8 * v30 - 8 * (v30 + 1);
            while ( 1 )
            {
LABEL_91:
              if ( v43 == v42 )
              {
                v6 = v56;
                goto LABEL_102;
              }
              v47 = *v43;
              *v43 = 0LL;
              v48 = *(CSurfaceDrawListBrush **)((char *)v43 + v46);
              *(CMultiPrimitiveDrawListBrush *(__fastcall ****)(CMultiPrimitiveDrawListBrush *, char))((char *)v43 + v46) = v47;
              if ( !v48 )
                goto LABEL_96;
              v49 = **(CWindowOcclusionInfo *(__fastcall ***)(CWindowOcclusionInfo *, char))v48;
              if ( v49 == CWindowOcclusionInfo::`vector deleting destructor' )
                break;
              if ( v49 == CSurfaceDrawListBrush::`vector deleting destructor' )
              {
                CSurfaceDrawListBrush::`vector deleting destructor'(v48, 1);
                v7 = 0LL;
                ++v43;
              }
              else
              {
                if ( v49 != CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
                {
                  ((void (__fastcall *)(CSurfaceDrawListBrush *, __int64, __int64, _QWORD))v49)(v48, 1LL, v29, 0LL);
                  goto LABEL_95;
                }
                CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v48, 1);
                v7 = 0LL;
                ++v43;
              }
            }
            operator delete(v48, 0x38uLL);
LABEL_95:
            v7 = 0LL;
LABEL_96:
            ++v43;
            goto LABEL_91;
          }
LABEL_102:
          v3 = v42 - 1;
          do
          {
            v50 = *v3;
            if ( *v3 )
            {
              v51 = **v50;
              if ( v51 == CWindowOcclusionInfo::`vector deleting destructor' )
              {
                operator delete(v50, 0x38uLL);
              }
              else if ( v51 == CSurfaceDrawListBrush::`vector deleting destructor' )
              {
                CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v50, 1);
              }
              else if ( v51 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
              {
                CMultiPrimitiveDrawListBrush::`vector deleting destructor'((CMultiPrimitiveDrawListBrush *)v50, 1);
              }
              else
              {
                ((void (__fastcall *)(CMultiPrimitiveDrawListBrush *(__fastcall ***)(CMultiPrimitiveDrawListBrush *, char), __int64, __int64, __int64))v51)(
                  v50,
                  1LL,
                  v29,
                  v7);
              }
            }
            ++v3;
          }
          while ( v3 != v42 );
          v4 = (CVisual **)v54;
          v7 = 0LL;
          v9 = v53;
          v6[23] -= 8LL;
          v12 = v52;
          v8 = v6[22] + 8 * v30;
        }
      }
      LODWORD(v3) = v55;
    }
  }
  if ( !v9 )
    goto LABEL_6;
  v13 = 0LL;
  if ( g_pComposition )
    v13 = *((_QWORD *)g_pComposition + 111);
  if ( *(_QWORD *)(v9 + 16) != v13 )
  {
    v14 = *(void (__fastcall **)(COcclusionInfo *__hidden, const struct CVisualTree *, unsigned __int64))(*(_QWORD *)v9 + 16LL);
    if ( v14 == COcclusionInfo::UpdateZFromValidParent )
    {
      v15 = *(_QWORD *)(v9 + 8);
      while ( 1 )
      {
        v15 = (CVisual *)v15 == v4[9] ? 0LL : *(_QWORD *)(v15 + 88);
        if ( !v15 )
          break;
        v16 = 0LL;
        if ( (*((unsigned __int8 (__fastcall **)(CVisual **))*v4 + 23))(v4) )
        {
          v16 = (__int64 *)(v15 + 328);
        }
        else
        {
          v34 = *(int **)(v15 + 232);
          if ( *v34 < 0 )
          {
            v35 = v34[1];
            v36 = v34 + 2;
            for ( k = 0; k < v35; ++v36 )
            {
              if ( *v36 == 1 )
                break;
              ++k;
            }
            v38 = (unsigned int)v34[1];
            v39 = k >= (unsigned int)v38 ? 0LL : (int *)((char *)v34 + v38 + 8LL * k - (((_BYTE)v38 + 15) & 7) + 15);
            v40 = *(_QWORD **)v39;
            if ( v40 )
            {
              for ( m = (_QWORD *)*v40; m != v40; m = (_QWORD *)*m )
              {
                if ( (CVisual **)m[4] == v4 )
                {
                  v16 = m - 43;
                  break;
                }
              }
            }
          }
        }
        v17 = 0LL;
        for ( n = v16[22]; n != v16[23]; n += 8LL )
        {
          if ( *(_DWORD *)(*(_QWORD *)n + 32LL) == *(_DWORD *)(v9 + 32) )
          {
            v17 = *(_QWORD *)n;
            break;
          }
        }
        v19 = *(_QWORD *)(*(_QWORD *)(v16[31] + 24) + 888LL);
        if ( v16[27] != v19 )
        {
          v16[27] = v19;
          v32 = v16[22];
          if ( (unsigned __int64)((v16[23] - v32) >> 3) > 1 )
          {
            while ( v32 != v16[23] )
            {
              if ( *(_QWORD *)v32 == v17
                || (v33 = *(_QWORD *)(*(_QWORD *)v32 + 16LL)) == 0
                || (unsigned __int64)(v19 - v33) < 0xA )
              {
                v32 += 8LL;
              }
              else
              {
                v53 = v32;
                v32 = *detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
                         v16 + 22,
                         &v56,
                         &v53);
              }
            }
          }
        }
        if ( v17 && *(_QWORD *)(v17 + 16) == v13 )
        {
          *(_DWORD *)(v9 + 36) = *(_DWORD *)(v17 + 40);
          *(_DWORD *)(v9 + 40) = *(_DWORD *)(v17 + 40);
          *(_QWORD *)(v9 + 16) = v13;
          return *(unsigned int *)(v9 + 36);
        }
      }
    }
    else
    {
      ((void (__fastcall *)(__int64, CVisual **, __int64, _QWORD))v14)(v9, v4, v13, 0LL);
    }
  }
  return *(unsigned int *)(v9 + 36);
}
