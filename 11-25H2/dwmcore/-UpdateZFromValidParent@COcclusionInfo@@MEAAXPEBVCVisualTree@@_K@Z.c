/*
 * XREFs of ?UpdateZFromValidParent@COcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z @ 0x1800CE110
 * Callers:
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z @ 0x1800CBAF0 (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z.c)
 *     ?GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x1800CD0F0 (-GetZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetFlipExSurfaceZ@CWindowOcclusionInfo@@QEAAHPEBVCVisualTree@@@Z @ 0x180109E90 (-GetFlipExSurfaceZ@CWindowOcclusionInfo@@QEAAHPEBVCVisualTree@@@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18023FEC0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COcclusionInfo::UpdateZFromValidParent(
        COcclusionInfo *this,
        const struct CVisualTree *a2,
        const struct CVisualTree *a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r9
  const struct CVisualTree *v5; // rdi
  const struct CVisualTree *v6; // rbx
  COcclusionInfo *v7; // r12
  _QWORD *v8; // r15
  _QWORD *v9; // rbp
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  _BYTE *v20; // rdx
  unsigned int i; // eax
  _QWORD **v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *j; // rax
  const struct CVisualTree *v25; // rbx
  __int64 v26; // rdx
  bool v27; // cc
  __int64 v28; // rsi
  __int64 v29; // rax
  CSurfaceDrawListBrush *v30; // rcx
  CWindowOcclusionInfo *(__fastcall *v31)(CWindowOcclusionInfo *, char); // rax
  CMultiPrimitiveDrawListBrush *(__fastcall ***v32)(CMultiPrimitiveDrawListBrush *, char); // rcx
  CMultiPrimitiveDrawListBrush *(__fastcall *v33)(CMultiPrimitiveDrawListBrush *, char); // rax
  __int64 v34; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+28h] [rbp-50h]
  _QWORD *v39; // [rsp+98h] [rbp+20h]

  v3 = *((_QWORD *)this + 1);
  v4 = 0LL;
  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( v3 == *((_QWORD *)a2 + 9) )
    v8 = 0LL;
  else
    v8 = *(_QWORD **)(v3 + 88);
  while ( v8 )
  {
    v9 = v4;
    v39 = v4;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v6 + 184LL))(v6) )
    {
      v9 = v8 + 41;
      v39 = v8 + 41;
LABEL_6:
      v4 = 0LL;
      goto LABEL_7;
    }
    v18 = v8[29];
    if ( *(int *)v18 >= 0 )
      goto LABEL_6;
    v19 = *(unsigned int *)(v18 + 4);
    v20 = (_BYTE *)(v18 + 8);
    v4 = 0LL;
    for ( i = 0; i < (unsigned int)v19; ++v20 )
    {
      if ( *v20 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v19 )
      v22 = 0LL;
    else
      v22 = (_QWORD **)(v19 + 15 + v18 + 8LL * i - (((_BYTE)v19 + 15) & 7));
    v23 = *v22;
    if ( v23 )
    {
      for ( j = (_QWORD *)*v23; j != v23; j = (_QWORD *)*j )
      {
        if ( (const struct CVisualTree *)j[4] == v6 )
        {
          v9 = j - 43;
          v39 = j - 43;
          break;
        }
      }
    }
LABEL_7:
    v10 = v9[22];
    v11 = 0LL;
    v12 = v10;
    v34 = 0LL;
    while ( v12 != v9[23] )
    {
      if ( *(_DWORD *)(*(_QWORD *)v12 + 32LL) == *((_DWORD *)v7 + 8) )
      {
        v11 = *(_QWORD *)v12;
        v34 = *(_QWORD *)v12;
        break;
      }
      v12 += 8LL;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(v9[31] + 24LL) + 888LL);
    v35 = v13;
    if ( v9[27] != v13 )
    {
      v9[27] = v13;
      if ( (unsigned __int64)((v9[23] - v10) >> 3) > 1 )
      {
        while ( v10 != v9[23] )
        {
          if ( *(_QWORD *)v10 == v11
            || (v14 = *(_QWORD *)(*(_QWORD *)v10 + 16LL)) == 0
            || (unsigned __int64)(v13 - v14) < 0xA )
          {
            v10 += 8LL;
          }
          else
          {
            v15 = v9[22];
            v16 = (v10 - v15) >> 3;
            v17 = (v9[23] - v15) >> 3;
            if ( v16 + 1 > v17 )
            {
              std::_Xoverflow_error("overflow");
              __debugbreak();
              goto LABEL_24;
            }
            v5 = (const struct CVisualTree *)(v15 + 8 * v17);
            if ( v16 + 1 != v17 )
            {
              if ( v16 && (!v15 || v16 < 0 || v17 < v16) )
                goto LABEL_48;
              v25 = (const struct CVisualTree *)(v15 + 8 * (v16 + 1));
              v26 = (v5 - v25) >> 3;
              v27 = v26 <= 0;
              if ( v26 < 0 )
              {
                if ( v16 < (unsigned __int64)-v26 )
                  goto LABEL_48;
                v27 = v26 <= 0;
              }
              if ( !v27 && v17 - v16 < v26 )
LABEL_48:
                _invalid_parameter_noinfo_noreturn();
              v28 = 8 * v16 - 8 * (v16 + 1);
              while ( 1 )
              {
LABEL_53:
                if ( v25 == v5 )
                {
                  v9 = v39;
                  goto LABEL_64;
                }
                v29 = *(_QWORD *)v25;
                *(_QWORD *)v25 = 0LL;
                v30 = *(CSurfaceDrawListBrush **)((char *)v25 + v28);
                *(_QWORD *)((char *)v25 + v28) = v29;
                if ( !v30 )
                  goto LABEL_58;
                v31 = **(CWindowOcclusionInfo *(__fastcall ***)(CWindowOcclusionInfo *, char))v30;
                if ( v31 == CWindowOcclusionInfo::`vector deleting destructor' )
                  break;
                if ( v31 == CSurfaceDrawListBrush::`vector deleting destructor' )
                {
                  CSurfaceDrawListBrush::`vector deleting destructor'(v30, 1);
                  v4 = 0LL;
                  v25 = (const struct CVisualTree *)((char *)v25 + 8);
                }
                else
                {
                  if ( v31 != CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
                  {
                    ((void (__fastcall *)(CSurfaceDrawListBrush *, __int64, __int64, _QWORD))v31)(v30, 1LL, v15, 0LL);
                    goto LABEL_57;
                  }
                  CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v30, 1);
                  v4 = 0LL;
                  v25 = (const struct CVisualTree *)((char *)v25 + 8);
                }
              }
              operator delete(v30, 0x38uLL);
LABEL_57:
              v4 = 0LL;
LABEL_58:
              v25 = (const struct CVisualTree *)((char *)v25 + 8);
              goto LABEL_53;
            }
LABEL_64:
            v6 = (const struct CVisualTree *)((char *)v5 - 8);
            do
            {
              v32 = *(CMultiPrimitiveDrawListBrush *(__fastcall ****)(CMultiPrimitiveDrawListBrush *, char))v6;
              if ( *(_QWORD *)v6 )
              {
                v33 = **v32;
                if ( v33 == CWindowOcclusionInfo::`vector deleting destructor' )
                {
                  operator delete(v32, 0x38uLL);
                }
                else if ( v33 == CSurfaceDrawListBrush::`vector deleting destructor' )
                {
                  CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v32, 1);
                }
                else if ( v33 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
                {
                  CMultiPrimitiveDrawListBrush::`vector deleting destructor'((CMultiPrimitiveDrawListBrush *)v32, 1);
                }
                else
                {
                  ((void (__fastcall *)(CMultiPrimitiveDrawListBrush *(__fastcall ***)(CMultiPrimitiveDrawListBrush *, char), __int64, __int64, _QWORD *))v33)(
                    v32,
                    1LL,
                    v15,
                    v4);
                }
              }
              v6 = (const struct CVisualTree *)((char *)v6 + 8);
            }
            while ( v6 != v5 );
            v11 = v34;
            v4 = 0LL;
            v7 = this;
            v9[23] -= 8LL;
            v13 = v35;
            v10 = v9[22] + 8 * v16;
          }
        }
        v6 = a2;
        v5 = a3;
      }
    }
    if ( v11 && *(const struct CVisualTree **)(v11 + 16) == v5 )
    {
      *((_DWORD *)v7 + 9) = *(_DWORD *)(v11 + 40);
      *((_DWORD *)v7 + 10) = *(_DWORD *)(v11 + 40);
      *((_QWORD *)v7 + 2) = v5;
      return;
    }
LABEL_24:
    if ( v8 == *((_QWORD **)v6 + 9) )
      v8 = v4;
    else
      v8 = (_QWORD *)v8[11];
  }
}
