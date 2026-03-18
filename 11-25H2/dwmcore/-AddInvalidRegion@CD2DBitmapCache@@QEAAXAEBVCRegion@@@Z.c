/*
 * XREFs of ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x180061260
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x180061F10 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x180175EF4 (-CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAXAEBVCRegion@@@Z @ 0x180202FF0 (-AddDirtyRegion@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization.c)
 *     ?AddDirtyRegion@CColorKeyBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802109B0 (-AddDirtyRegion@CColorKeyBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CRenderTargetBitmap@@UEAAXAEBVCRegion@@@Z @ 0x180228CC0 (-AddDirtyRegion@CRenderTargetBitmap@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802E1D00 (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CWICBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802E2760 (-AddDirtyRegion@CWICBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180061030 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180064300 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180064640 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800996C0 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CD2DBitmapCache::AddInvalidRegion(
        CD2DBitmapCache *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  __int64 v2; // rbx
  int *v5; // rdi
  const struct FastRegion::Internal::CRgnData **v6; // rbx
  int v7; // r9d
  int *v8; // r12
  int v9; // eax
  int v10; // ebp
  int v11; // ecx
  int v12; // ebp
  const struct FastRegion::Internal::CRgnData *v13; // r9
  __int64 v14; // r10
  _DWORD *v15; // r8
  _DWORD *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r10
  int v22; // ebx
  __int64 v23; // rdi
  __int64 i; // rbx
  int v25; // eax
  FastRegion::Internal::CRgnData *v26; // rcx
  const struct FastRegion::Internal::CRgnData *v27; // r14
  FastRegion::Internal::CRgnData *v28; // rax
  int v29; // [rsp+20h] [rbp-158h] BYREF
  void *v30; // [rsp+28h] [rbp-150h]
  _BYTE v31[256]; // [rsp+30h] [rbp-148h] BYREF
  void *retaddr; // [rsp+178h] [rbp+0h]

  v2 = *((_QWORD *)this + 5);
  if ( !v2 )
    goto LABEL_17;
  v5 = (int *)*a2;
  v6 = (const struct FastRegion::Internal::CRgnData **)(v2 + 40);
  v7 = *(_DWORD *)*a2;
  if ( !v7 )
    goto LABEL_17;
  if ( *(_DWORD *)*v6 )
  {
    v25 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v6, *a2);
    v26 = (FastRegion::Internal::CRgnData *)v31;
    v30 = v31;
    v29 = v25;
    if ( (unsigned __int64)v25 > 0x100 )
    {
      v28 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v25);
      v26 = v28;
      if ( !v28 )
      {
        if ( v31 != v30 )
          operator delete(v30);
        v22 = -2147024882;
LABEL_16:
        ModuleFailFastForHRESULT(v22, retaddr);
      }
      v30 = v28;
    }
    FastRegion::Internal::CRgnData::Union(v26, *v6, *a2);
    v22 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)v6, (struct FastRegion::Internal::CWorkBuffer *)&v29);
    if ( v31 != v30 )
      operator delete(v30);
    goto LABEL_15;
  }
  if ( v6 == a2 )
    goto LABEL_14;
  v8 = (int *)(v6 + 1);
  v9 = 60;
  v10 = v5[2 * v7 + 2] + 8 * v7 - v5[4] - 12 + 8 * (v7 - 1) + 24;
  if ( v6 + 1 != (const struct FastRegion::Internal::CRgnData **)*v6 )
    v9 = *v8;
  if ( v9 >= v10 )
  {
LABEL_8:
    v11 = *v5;
    v12 = 0;
    v13 = *v6;
    *(_DWORD *)v13 = *v5;
    *((_DWORD *)v13 + 1) = v5[1];
    *((_DWORD *)v13 + 2) = v5[2];
    v14 = (__int64)v5 + v5[4] + 12;
    v15 = (_DWORD *)((char *)v13 + 8 * v11 + 12);
    if ( v11 > 0 )
    {
      v16 = (_DWORD *)((char *)v13 + 12);
      do
      {
        *v16 = *(_DWORD *)((char *)v16 + (char *)v5 - (char *)v13);
        v17 = v12;
        v16 += 2;
        ++v12;
        *((_DWORD *)v13 + 2 * v17 + 4) = (_DWORD)v5
                                       + 8 * v17
                                       + 4 * (((__int64)v15 - v14) >> 2)
                                       + v5[2 * v17 + 4]
                                       - ((_DWORD)v13
                                        + 8 * v17);
      }
      while ( v12 < *(_DWORD *)v13 );
    }
    v18 = (__int64)&v5[2 * *v5 + 1];
    v19 = (unsigned __int64)((int)v18 + *(_DWORD *)(v18 + 4) - v5[4] - ((int)v5 + 12)) >> 2;
    v20 = (int)v19;
    if ( (int)v19 > 0 )
    {
      v21 = v14 - (_QWORD)v15;
      do
      {
        *v15 = *(_DWORD *)((char *)v15 + v21);
        ++v15;
        --v20;
      }
      while ( v20 );
    }
LABEL_14:
    v22 = 0;
    goto LABEL_15;
  }
  v27 = (const struct FastRegion::Internal::CRgnData *)MIDL_user_allocate(v10);
  if ( v27 )
  {
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v6);
    *v6 = v27;
    *v8 = v10;
    goto LABEL_8;
  }
  v22 = -2147024882;
LABEL_15:
  if ( v22 < 0 )
    goto LABEL_16;
LABEL_17:
  v23 = *((_QWORD *)this + 7);
  for ( i = *((_QWORD *)this + 6); i != v23; i += 8LL )
    CRegion::Union((CRegion *)(*(_QWORD *)(*(_QWORD *)i + 8LL) + 256LL), (const struct CRegion *)a2);
}
