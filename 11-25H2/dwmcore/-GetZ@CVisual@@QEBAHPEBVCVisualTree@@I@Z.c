/*
 * XREFs of ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x1800CD0F0
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180052B90 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCOcclusionContext@@@Z @ 0x1802399B4 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCOcclusionContext@@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x18023CA68 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N@Z @ 0x18027460C (-CalcVisibleArea@OverlayPlaneInfo@COverlayContext@@QEAA_NPEBVCDesktopTree@@AEBVCMILMatrix@@_N@Z.c)
 *     ?HasOverlappingCornerRects@COverlayContext@@CA_NPEAVOverlayPlaneInfo@1@AEBV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180276C08 (-HasOverlappingCornerRects@COverlayContext@@CA_NPEAVOverlayPlaneInfo@1@AEBV-$vector_facade@PEAVO.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z @ 0x1800CE110 (-UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetZ(CVisual *this, const struct CVisualTree *a2, unsigned int a3)
{
  CVisual *v3; // r13
  const struct CVisualTree *v4; // rdi
  CVisual *v5; // r15
  CVisual *v6; // rbp
  CVisual *v7; // r9
  __int64 v8; // r14
  const struct CVisualTree *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  void (__fastcall *v13)(COcclusionInfo *__hidden, const struct CVisualTree *, unsigned __int64); // rax
  __int64 v14; // rax
  CVisual **v15; // rax
  __int64 v16; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r14
  unsigned __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r14
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  _BYTE *v29; // rdx
  unsigned int i; // eax
  _QWORD **v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *j; // rax
  int v34; // eax
  int *v35; // r8
  unsigned int v36; // edx
  _BYTE *v37; // rcx
  unsigned int k; // eax
  __int64 v39; // rcx
  _QWORD **v40; // rcx
  _QWORD *v41; // rcx
  _QWORD *m; // rax
  const struct CVisualTree *v43; // rbx
  __int64 v44; // rdx
  bool v45; // cc
  __int64 v46; // rsi
  __int64 v47; // rax
  CSurfaceDrawListBrush *v48; // rcx
  void *(__fastcall *v49)(CWindowOcclusionInfo *__hidden, unsigned int); // rax
  const struct CVisualTree *v50; // rbx
  CMultiPrimitiveDrawListBrush *(__fastcall ***v51)(CMultiPrimitiveDrawListBrush *, char); // rcx
  CMultiPrimitiveDrawListBrush *(__fastcall *v52)(CMultiPrimitiveDrawListBrush *, char); // rax
  const struct CVisualTree *v53; // rbx
  __int64 v54; // rdx
  bool v55; // cc
  __int64 v56; // rsi
  __int64 v57; // rax
  CSurfaceDrawListBrush *v58; // rcx
  void *(__fastcall *v59)(CWindowOcclusionInfo *__hidden, unsigned int); // rax
  CMultiPrimitiveDrawListBrush *(__fastcall ***v60)(CMultiPrimitiveDrawListBrush *, char); // rcx
  CMultiPrimitiveDrawListBrush *(__fastcall *v61)(CMultiPrimitiveDrawListBrush *, char); // rax
  unsigned __int64 v62; // [rsp+20h] [rbp-68h]
  const struct CVisualTree *v63; // [rsp+28h] [rbp-60h]
  __int64 v64; // [rsp+30h] [rbp-58h]
  CVisual *v65; // [rsp+90h] [rbp+8h]
  CVisual *v68; // [rsp+A8h] [rbp+20h]

  v65 = this;
  v3 = (CVisual *)a3;
  v4 = a2;
  v5 = this;
  while ( 1 )
  {
    if ( !v5 )
      return 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v4 + 184LL))(v4) )
      break;
    v27 = *((_QWORD *)v5 + 29);
    if ( *(int *)v27 < 0 )
    {
      v28 = *(unsigned int *)(v27 + 4);
      v29 = (_BYTE *)(v27 + 8);
      for ( i = 0; i < (unsigned int)v28; ++v29 )
      {
        if ( *v29 == 1 )
          break;
        ++i;
      }
      v31 = i >= (unsigned int)v28 ? 0LL : (_QWORD **)(v28 + 15 + v27 + 8LL * i - (((_BYTE)v28 + 15) & 7));
      v32 = *v31;
      if ( v32 )
      {
        for ( j = (_QWORD *)*v32; j != v32; j = (_QWORD *)*j )
        {
          v6 = (CVisual *)(j - 43);
          if ( (const struct CVisualTree *)j[4] == v4 )
            goto LABEL_5;
        }
      }
    }
LABEL_31:
    if ( v5 == *((CVisual **)v4 + 9) )
    {
      v5 = 0LL;
      v65 = 0LL;
    }
    else
    {
      v5 = (CVisual *)*((_QWORD *)v5 + 11);
      v65 = v5;
    }
  }
  v6 = (CVisual *)((char *)v5 + 328);
LABEL_5:
  v7 = 0LL;
  if ( !v6 )
    goto LABEL_31;
  v8 = *((_QWORD *)v6 + 22);
  v9 = 0LL;
  v10 = *((_QWORD *)v6 + 23);
  v11 = v8;
  v63 = 0LL;
  while ( v11 != v10 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v11 + 32LL) == (_DWORD)v3 )
    {
      v9 = *(const struct CVisualTree **)v11;
      v63 = *(const struct CVisualTree **)v11;
      break;
    }
    v11 += 8LL;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 31) + 24LL) + 888LL);
  v68 = (CVisual *)v12;
  if ( *((_QWORD *)v6 + 27) != v12 )
  {
    *((_QWORD *)v6 + 27) = v12;
    if ( (unsigned __int64)((v10 - v8) >> 3) > 1 )
    {
      while ( v8 != *((_QWORD *)v6 + 23) )
      {
        if ( *(const struct CVisualTree **)v8 == v9 || (v18 = *(_QWORD *)(*(_QWORD *)v8 + 16LL)) == 0 || v12 - v18 < 0xA )
        {
          v8 += 8LL;
        }
        else
        {
          v19 = *((_QWORD *)v6 + 22);
          v20 = (v8 - v19) >> 3;
          v21 = (*((_QWORD *)v6 + 23) - v19) >> 3;
          if ( v20 + 1 > v21 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
            goto LABEL_42;
          }
          v4 = (const struct CVisualTree *)(v19 + 8 * v21);
          if ( v20 + 1 != v21 )
          {
            if ( v20 && (!v19 || v20 < 0 || v21 < v20) )
              goto LABEL_90;
            v43 = (const struct CVisualTree *)(v19 + 8 * (v20 + 1));
            v44 = (v4 - v43) >> 3;
            v45 = v44 <= 0;
            if ( v44 < 0 )
            {
              if ( v20 < (unsigned __int64)-v44 )
                goto LABEL_90;
              v45 = v44 <= 0;
            }
            if ( !v45 && v21 - v20 < v44 )
LABEL_90:
              _invalid_parameter_noinfo_noreturn();
            v46 = 8 * v20 - 8 * (v20 + 1);
            while ( 1 )
            {
LABEL_95:
              if ( v43 == v4 )
              {
                v5 = v65;
                goto LABEL_106;
              }
              v47 = *(_QWORD *)v43;
              *(_QWORD *)v43 = 0LL;
              v48 = *(CSurfaceDrawListBrush **)((char *)v43 + v46);
              *(_QWORD *)((char *)v43 + v46) = v47;
              if ( !v48 )
                goto LABEL_100;
              v49 = **(void *(__fastcall ***)(CWindowOcclusionInfo *__hidden, unsigned int))v48;
              if ( v49 == CWindowOcclusionInfo::`vector deleting destructor' )
                break;
              if ( (char *)v49 == (char *)CSurfaceDrawListBrush::`vector deleting destructor' )
              {
                CSurfaceDrawListBrush::`vector deleting destructor'(v48, 1);
                v7 = 0LL;
                v43 = (const struct CVisualTree *)((char *)v43 + 8);
              }
              else
              {
                if ( (char *)v49 != (char *)CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
                {
                  ((void (__fastcall *)(CSurfaceDrawListBrush *, __int64, __int64, _QWORD))v49)(v48, 1LL, v19, 0LL);
                  goto LABEL_99;
                }
                CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v48, 1);
                v7 = 0LL;
                v43 = (const struct CVisualTree *)((char *)v43 + 8);
              }
            }
            operator delete(v48, 0x38uLL);
LABEL_99:
            v7 = 0LL;
LABEL_100:
            v43 = (const struct CVisualTree *)((char *)v43 + 8);
            goto LABEL_95;
          }
LABEL_106:
          v50 = (const struct CVisualTree *)((char *)v4 - 8);
          do
          {
            v51 = *(CMultiPrimitiveDrawListBrush *(__fastcall ****)(CMultiPrimitiveDrawListBrush *, char))v50;
            if ( *(_QWORD *)v50 )
            {
              v52 = **v51;
              if ( (char *)v52 == (char *)CWindowOcclusionInfo::`vector deleting destructor' )
              {
                operator delete(v51, 0x38uLL);
              }
              else if ( v52 == CSurfaceDrawListBrush::`vector deleting destructor' )
              {
                CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v51, 1);
              }
              else if ( v52 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
              {
                CMultiPrimitiveDrawListBrush::`vector deleting destructor'((CMultiPrimitiveDrawListBrush *)v51, 1);
              }
              else
              {
                ((void (__fastcall *)(CMultiPrimitiveDrawListBrush *(__fastcall ***)(CMultiPrimitiveDrawListBrush *, char), __int64, __int64, CVisual *))v52)(
                  v51,
                  1LL,
                  v19,
                  v7);
              }
            }
            v50 = (const struct CVisualTree *)((char *)v50 + 8);
          }
          while ( v50 != v4 );
          v12 = (unsigned __int64)v68;
          v7 = 0LL;
          v3 = (CVisual *)a3;
          *((_QWORD *)v6 + 23) -= 8LL;
          v9 = v63;
          v8 = *((_QWORD *)v6 + 22) + 8 * v20;
        }
      }
      v4 = a2;
    }
  }
  if ( !v9 )
    goto LABEL_31;
  v12 = 0LL;
  v62 = 0LL;
  if ( g_pComposition )
  {
    v12 = *((_QWORD *)g_pComposition + 111);
    v62 = v12;
  }
  if ( *((_QWORD *)v9 + 2) != v12 )
  {
    v13 = *(void (__fastcall **)(COcclusionInfo *__hidden, const struct CVisualTree *, unsigned __int64))(*(_QWORD *)v9 + 16LL);
    if ( v13 == COcclusionInfo::UpdateZFromValidParent )
    {
      v14 = *((_QWORD *)v9 + 1);
      if ( v14 == *((_QWORD *)v4 + 9) )
        goto LABEL_159;
      v3 = *(CVisual **)(v14 + 88);
      while ( 1 )
      {
        if ( !v3 )
          return *((unsigned int *)v9 + 10);
        v6 = v7;
        v65 = v7;
        if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v4 + 184LL))(v4) )
          break;
        v35 = (int *)*((_QWORD *)v3 + 29);
        if ( *v35 >= 0 )
          goto LABEL_21;
        v36 = v35[1];
        v37 = v35 + 2;
        v7 = 0LL;
        for ( k = 0; k < v36; ++v37 )
        {
          if ( *v37 == 1 )
            break;
          ++k;
        }
        v39 = (unsigned int)v35[1];
        if ( k >= (unsigned int)v39 )
          v40 = 0LL;
        else
          v40 = (_QWORD **)((char *)v35 + 8LL * k - (((_BYTE)v39 + 15) & 7) + v39 + 15);
        v41 = *v40;
        if ( v41 )
        {
          for ( m = (_QWORD *)*v41; m != v41; m = (_QWORD *)*m )
          {
            if ( (const struct CVisualTree *)m[4] == v4 )
            {
              v6 = (CVisual *)(m - 43);
              v65 = (CVisual *)(m - 43);
              break;
            }
          }
        }
LABEL_22:
        v5 = 0LL;
        v15 = (CVisual **)*((_QWORD *)v6 + 22);
        v68 = 0LL;
        while ( v15 != *((CVisual ***)v6 + 23) )
        {
          if ( *((_DWORD *)*v15 + 8) == *((_DWORD *)v9 + 8) )
          {
            v5 = *v15;
            v68 = *v15;
            break;
          }
          ++v15;
        }
        v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 31) + 24LL) + 888LL);
        v64 = v16;
        if ( *((_QWORD *)v6 + 27) != v16 )
        {
LABEL_42:
          *((_QWORD *)v6 + 27) = v16;
          v22 = *((_QWORD *)v6 + 22);
          if ( (unsigned __int64)((*((_QWORD *)v6 + 23) - v22) >> 3) > 1 )
          {
            while ( v22 != *((_QWORD *)v6 + 23) )
            {
              if ( *(CVisual **)v22 == v5
                || (v23 = *(_QWORD *)(*(_QWORD *)v22 + 16LL)) == 0
                || (unsigned __int64)(v16 - v23) < 0xA )
              {
                v22 += 8LL;
              }
              else
              {
                v24 = *((_QWORD *)v6 + 22);
                v25 = (v22 - v24) >> 3;
                v26 = (*((_QWORD *)v6 + 23) - v24) >> 3;
                if ( v25 + 1 > v26 )
                {
                  std::_Xoverflow_error("overflow");
                  __debugbreak();
                  goto LABEL_49;
                }
                v4 = (const struct CVisualTree *)(v24 + 8 * v26);
                if ( v25 + 1 != v26 )
                {
                  if ( v25 && (!v24 || v25 < 0 || v26 < v25) )
                    goto LABEL_124;
                  v53 = (const struct CVisualTree *)(v24 + 8 * (v25 + 1));
                  v54 = (v4 - v53) >> 3;
                  v55 = v54 <= 0;
                  if ( v54 < 0 )
                  {
                    if ( v25 < (unsigned __int64)-v54 )
                      goto LABEL_124;
                    v55 = v54 <= 0;
                  }
                  if ( !v55 && v26 - v25 < v54 )
LABEL_124:
                    _invalid_parameter_noinfo_noreturn();
                  v56 = 8 * v25 - 8 * (v25 + 1);
                  while ( 1 )
                  {
LABEL_129:
                    if ( v53 == v4 )
                    {
                      v6 = v65;
                      goto LABEL_140;
                    }
                    v57 = *(_QWORD *)v53;
                    *(_QWORD *)v53 = v7;
                    v58 = *(CSurfaceDrawListBrush **)((char *)v53 + v56);
                    *(_QWORD *)((char *)v53 + v56) = v57;
                    if ( !v58 )
                      goto LABEL_134;
                    v59 = **(void *(__fastcall ***)(CWindowOcclusionInfo *__hidden, unsigned int))v58;
                    if ( v59 == CWindowOcclusionInfo::`vector deleting destructor' )
                      break;
                    if ( (char *)v59 == (char *)CSurfaceDrawListBrush::`vector deleting destructor' )
                    {
                      CSurfaceDrawListBrush::`vector deleting destructor'(v58, 1);
                      v7 = 0LL;
                      v53 = (const struct CVisualTree *)((char *)v53 + 8);
                    }
                    else
                    {
                      if ( (char *)v59 != (char *)CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
                      {
                        v59(v58, 1u);
                        goto LABEL_133;
                      }
                      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v58, 1);
                      v7 = 0LL;
                      v53 = (const struct CVisualTree *)((char *)v53 + 8);
                    }
                  }
                  operator delete(v58, 0x38uLL);
LABEL_133:
                  v7 = 0LL;
LABEL_134:
                  v53 = (const struct CVisualTree *)((char *)v53 + 8);
                  goto LABEL_129;
                }
LABEL_140:
                v9 = (const struct CVisualTree *)((char *)v4 - 8);
                do
                {
                  v60 = *(CMultiPrimitiveDrawListBrush *(__fastcall ****)(CMultiPrimitiveDrawListBrush *, char))v9;
                  if ( *(_QWORD *)v9 )
                  {
                    v61 = **v60;
                    if ( (char *)v61 == (char *)CWindowOcclusionInfo::`vector deleting destructor' )
                    {
                      operator delete(v60, 0x38uLL);
                    }
                    else if ( v61 == CSurfaceDrawListBrush::`vector deleting destructor' )
                    {
                      CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v60, 1);
                    }
                    else if ( v61 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
                    {
                      CMultiPrimitiveDrawListBrush::`vector deleting destructor'((CMultiPrimitiveDrawListBrush *)v60, 1);
                    }
                    else
                    {
                      ((void (__fastcall *)(CMultiPrimitiveDrawListBrush *(__fastcall ***)(CMultiPrimitiveDrawListBrush *, char), __int64, __int64, CVisual *))v61)(
                        v60,
                        1LL,
                        v24,
                        v7);
                    }
                  }
                  v9 = (const struct CVisualTree *)((char *)v9 + 8);
                }
                while ( v9 != v4 );
                v5 = v68;
                v7 = 0LL;
                v12 = v62;
                *((_QWORD *)v6 + 23) -= 8LL;
                v16 = v64;
                v22 = *((_QWORD *)v6 + 22) + 8 * v25;
              }
            }
            v9 = v63;
            v4 = a2;
          }
        }
        if ( v5 && *((_QWORD *)v5 + 2) == v12 )
        {
          *((_DWORD *)v9 + 9) = *((_DWORD *)v5 + 10);
          *((_DWORD *)v9 + 10) = *((_DWORD *)v5 + 10);
          *((_QWORD *)v9 + 2) = v12;
          return *((unsigned int *)v9 + 10);
        }
LABEL_49:
        if ( v3 == *((CVisual **)v4 + 9) )
LABEL_159:
          v3 = v7;
        else
          v3 = (CVisual *)*((_QWORD *)v3 + 11);
      }
      v6 = (CVisual *)((char *)v3 + 328);
      v65 = (CVisual *)((char *)v3 + 328);
LABEL_21:
      v7 = 0LL;
      goto LABEL_22;
    }
    if ( v13 == CWindowOcclusionInfo::UpdateZFromValidParent )
    {
      COcclusionInfo::UpdateZFromValidParent(v9, v4, v12);
      v34 = *((_DWORD *)v9 + 9);
      *((_DWORD *)v9 + 12) = v34;
      *((_DWORD *)v9 + 13) = v34;
    }
    else
    {
      ((void (__fastcall *)(const struct CVisualTree *, const struct CVisualTree *, unsigned __int64, _QWORD))v13)(
        v9,
        v4,
        v12,
        0LL);
    }
  }
  return *((unsigned int *)v9 + 10);
}
