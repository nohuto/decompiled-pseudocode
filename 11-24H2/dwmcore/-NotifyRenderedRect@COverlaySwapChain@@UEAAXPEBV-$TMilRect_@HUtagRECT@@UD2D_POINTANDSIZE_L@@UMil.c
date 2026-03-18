/*
 * XREFs of ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18002C7D0
 * Callers:
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x180063990 (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180099DE8 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801EC14C (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180027CF0 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18002AFC0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002B300 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?GetBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x18002C470 (-GetBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ.c)
 *     ?GetPhysicalBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z @ 0x18002C4A0 (-GetPhysicalBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z.c)
 *     ?GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z @ 0x18002D0F0 (-GetPhysicalBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@I@Z.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x18002D580 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?GetPhysicalBackBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@XZ @ 0x1801EEA40 (-GetPhysicalBackBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAE0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall COverlaySwapChain::NotifyRenderedRect(CDDisplaySwapChain *this, int *a2)
{
  unsigned int v3; // r13d
  struct IDeviceTarget *(__fastcall *v5)(CDDisplaySwapChain *); // rax
  __int64 v6; // rax
  struct IDeviceTarget *v7; // rcx
  void (__fastcall *v8)(struct IDeviceTarget *, _DWORD *); // rax
  int v9; // r14d
  int v10; // r15d
  unsigned int (__fastcall *v11)(CLegacySwapChain *__hidden); // rax
  unsigned int v12; // r12d
  struct ISwapChainBuffer *(__fastcall *v13)(CDDisplaySwapChain *__hidden); // rax
  struct ISwapChainBuffer *PhysicalBuffer; // rax
  struct ISwapChainBuffer *v15; // rsi
  unsigned int (__fastcall *v16)(CSwapChainBuffer *__hidden); // rax
  unsigned int v17; // eax
  int v18; // ecx
  const struct FastRegion::Internal::CRgnData *v19; // r14
  int v20; // edx
  int v21; // r10d
  int v22; // r8d
  int v23; // esp
  unsigned __int64 v24; // r8
  int v25; // r9d
  const struct FastRegion::Internal::CRgnData **v26; // rdi
  int *v27; // r15
  int v28; // eax
  int v29; // r14d
  const struct FastRegion::Internal::CRgnData *v30; // r11
  int v31; // r10d
  unsigned int v32; // edx
  char *v33; // rdi
  _DWORD *v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  char *v39; // rdi
  int v40; // edi
  __int64 v41; // rdx
  int *v42; // rax
  struct IDeviceTarget *BackBuffer; // rax
  void (__fastcall *v44)(CSwapChainBuffer *, const struct FastRegion::Internal::CRgnData **); // rax
  unsigned int v45; // r14d
  unsigned int v46; // r15d
  unsigned int v47; // eax
  struct ISwapChainBuffer *(__fastcall *v48)(CDDisplaySwapChain *, unsigned int); // rax
  __int64 v49; // rcx
  CRegion *v50; // rcx
  void (__fastcall *v51)(CSwapChainBuffer *, const struct FastRegion::Internal::CRgnData **); // rax
  int *v52; // rdi
  const struct FastRegion::Internal::CRgnData **v53; // rsi
  int v54; // r13d
  int *v55; // r12
  int v56; // r14d
  int v57; // eax
  const struct FastRegion::Internal::CRgnData *v58; // r11
  int v59; // edx
  int v60; // esi
  __int64 v61; // r9
  _DWORD *v62; // rax
  _DWORD *v63; // r10
  __int64 v64; // rcx
  __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // r9
  int v69; // edi
  void *v70; // rdi
  HANDLE ProcessHeap; // rax
  struct ISwapChainBuffer *v72; // rax
  int v73; // eax
  FastRegion::Internal::CRgnData *v74; // rcx
  const struct FastRegion::Internal::CRgnData *v75; // r13
  int v76; // eax
  FastRegion::Internal::CRgnData *v77; // rcx
  const struct FastRegion::Internal::CRgnData *v78; // r12
  FastRegion::Internal::CRgnData *v79; // rax
  FastRegion::Internal::CRgnData *v80; // rax
  __int64 v81; // rax
  unsigned int v83; // [rsp+20h] [rbp-E0h]
  unsigned int v84; // [rsp+24h] [rbp-DCh]
  _DWORD v85[2]; // [rsp+28h] [rbp-D8h] BYREF
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  int v87; // [rsp+38h] [rbp-C8h] BYREF
  int v88; // [rsp+3Ch] [rbp-C4h]
  int v89; // [rsp+40h] [rbp-C0h]
  int v90; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v91; // [rsp+48h] [rbp-B8h]
  _DWORD v92[13]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v93; // [rsp+80h] [rbp-80h] BYREF
  void *v94; // [rsp+88h] [rbp-78h]
  _BYTE v95[256]; // [rsp+90h] [rbp-70h] BYREF
  int v96; // [rsp+190h] [rbp+90h] BYREF
  void *v97; // [rsp+198h] [rbp+98h]
  _BYTE v98[256]; // [rsp+1A0h] [rbp+A0h] BYREF
  void *retaddr; // [rsp+2D8h] [rbp+1D8h]

  v3 = 0;
  v5 = *(struct IDeviceTarget *(__fastcall **)(CDDisplaySwapChain *))(*(_QWORD *)this + 104LL);
  if ( v5 == CLegacySwapChain::GetBackBuffer )
  {
    v6 = *((_QWORD *)this + 34);
    v7 = (struct IDeviceTarget *)(v6 + 16);
    if ( !v6 )
      v7 = 0LL;
  }
  else
  {
    if ( v5 == CDDisplaySwapChain::GetBackBuffer )
      BackBuffer = CDDisplaySwapChain::GetBackBuffer(this);
    else
      BackBuffer = v5(this);
    v7 = BackBuffer;
  }
  v8 = *(void (__fastcall **)(struct IDeviceTarget *, _DWORD *))(*(_QWORD *)v7 + 88LL);
  if ( (char *)v8 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
    IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v7, v85);
  else
    v8(v7, v85);
  v9 = v85[0];
  v10 = v85[1];
  v11 = *(unsigned int (__fastcall **)(CLegacySwapChain *__hidden))(*(_QWORD *)this + 88LL);
  if ( v11 == CLegacySwapChain::GetBufferCount )
    v12 = *((_DWORD *)this + 118);
  else
    v12 = v11(this);
  v84 = v12;
  v13 = *(struct ISwapChainBuffer *(__fastcall **)(CDDisplaySwapChain *__hidden))(*(_QWORD *)this + 192LL);
  if ( v13 == CLegacySwapChain::GetPhysicalBackBuffer )
  {
    PhysicalBuffer = CLegacySwapChain::GetPhysicalBuffer(this, *((_DWORD *)this + 119));
  }
  else if ( v13 == CDDisplaySwapChain::GetPhysicalBackBuffer )
  {
    PhysicalBuffer = CDDisplaySwapChain::GetPhysicalBackBuffer(this);
  }
  else
  {
    PhysicalBuffer = v13(this);
  }
  v15 = PhysicalBuffer;
  v16 = *(unsigned int (__fastcall **)(CSwapChainBuffer *__hidden))(*(_QWORD *)PhysicalBuffer + 88LL);
  if ( v16 == CSwapChainBuffer::GetPhysicalIndex )
    v17 = *((_DWORD *)v15 + 26);
  else
    v17 = v16(v15);
  v83 = v17;
  if ( !a2 )
  {
    if ( v9 <= 0 || v10 <= 0 )
    {
      **((_DWORD **)this + 20) = 0;
    }
    else
    {
      v41 = *((_QWORD *)this + 20);
      *(_DWORD *)(v41 + 12) = 0;
      *(_QWORD *)v41 = 2LL;
      *(_DWORD *)(v41 + 8) = v9;
      *(_DWORD *)(v41 + 16) = 16;
      *(_DWORD *)(v41 + 28) = 0;
      *(_DWORD *)(v41 + 32) = v9;
      *(_DWORD *)(v41 + 20) = v10;
      *(_DWORD *)(v41 + 24) = 16;
    }
    LODWORD(v42) = (*(__int64 (__fastcall **)(struct ISwapChainBuffer *))(*(_QWORD *)v15 + 128LL))(v15);
    if ( v12 )
    {
      LODWORD(v42) = v83;
      do
      {
        if ( v3 != (_DWORD)v42 )
        {
          v81 = (*(__int64 (__fastcall **)(CDDisplaySwapChain *, _QWORD))(*(_QWORD *)this + 208LL))(this, v3);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 112LL))(v81);
          LODWORD(v42) = v83;
        }
        ++v3;
      }
      while ( v3 < v12 );
    }
    return (int)v42;
  }
  v18 = a2[2];
  v19 = (const struct FastRegion::Internal::CRgnData *)&v87;
  v20 = *a2;
  v21 = a2[3];
  v22 = a2[1];
  lpMem = &v87;
  if ( v20 >= v18 || v22 >= v21 )
  {
    v24 = v91;
    v25 = 0;
    v87 = 0;
  }
  else
  {
    v90 = v22;
    v89 = v18;
    v92[3] = v18;
    v24 = v23 + 84 - (unsigned int)&v90;
    v88 = v20;
    v91 = v24;
    v92[2] = v20;
    v92[0] = v21;
    v25 = 2;
    v92[1] = v23 + 84 - (unsigned int)v92 + 8;
    v87 = 2;
  }
  v26 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 160);
  if ( v25 )
  {
    if ( *(_DWORD *)*v26 )
    {
      v76 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v26, (const struct FastRegion::Internal::CRgnData *)&v87);
      v77 = (FastRegion::Internal::CRgnData *)v95;
      v94 = v95;
      v93 = v76;
      if ( (unsigned __int64)v76 > 0x100 )
      {
        v80 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v76);
        v77 = v80;
        if ( !v80 )
        {
          if ( v95 != v94 )
            operator delete(v94);
          v40 = -2147024882;
LABEL_31:
          ModuleFailFastForHRESULT(v40, retaddr);
        }
        v19 = (const struct FastRegion::Internal::CRgnData *)lpMem;
        v94 = v80;
      }
      FastRegion::Internal::CRgnData::Union(v77, *v26, v19);
      v40 = FastRegion::CRegion::SaveResult(
              (CDDisplaySwapChain *)((char *)this + 160),
              (struct FastRegion::Internal::CWorkBuffer *)&v93);
      if ( v95 != v94 )
        operator delete(v94);
      goto LABEL_30;
    }
    if ( v26 != (const struct FastRegion::Internal::CRgnData **)&lpMem )
    {
      v27 = (int *)((char *)this + 168);
      v28 = 60;
      v29 = *(&v90 + 2 * v25 - 1) + 8 * v25 - v24 - (unsigned int)&v90 + (unsigned int)(&v90 + 2 * v25 - 2) + 12;
      if ( (CDDisplaySwapChain *)((char *)this + 168) != *v26 )
        v28 = *v27;
      if ( v28 < v29 )
      {
        v78 = (const struct FastRegion::Internal::CRgnData *)MIDL_user_allocate(v29);
        if ( !v78 )
        {
          v40 = -2147024882;
LABEL_30:
          if ( v40 < 0 )
            goto LABEL_31;
          goto LABEL_42;
        }
        FastRegion::CRegion::FreeMemory((CDDisplaySwapChain *)((char *)this + 160));
        v25 = v87;
        *v26 = v78;
        *v27 = v29;
      }
      v30 = *v26;
      v31 = 0;
      *(_DWORD *)v30 = v25;
      *((_DWORD *)v30 + 1) = v88;
      *((_DWORD *)v30 + 2) = v89;
      v32 = v91;
      v33 = (char *)&v90 + (int)v91;
      v24 = (unsigned __int64)v30 + 8 * v25 + 12;
      if ( v25 > 0 )
      {
        v34 = (_DWORD *)((char *)v30 + 12);
        do
        {
          *v34 = *(_DWORD *)((char *)v34 + (char *)&v87 - (char *)v30);
          v35 = v31;
          v34 += 2;
          v36 = (__int64)v30 + 8 * v31++ + 12;
          *(_DWORD *)(v36 + 4) = (unsigned int)(&v90 + 2 * v35)
                               + 4 * ((__int64)(v24 - (_QWORD)v33) >> 2)
                               + *(&v90 + 2 * v35 + 1)
                               - v36;
        }
        while ( v31 < *(_DWORD *)v30 );
        v32 = v91;
      }
      v37 = (unsigned __int64)(int)(*(&v90 + 2 * v87 - 1) - v32 - (unsigned int)&v90 + (unsigned int)&v90
                                                                                     + 8 * (v87 - 1)) >> 2;
      v38 = (int)v37;
      if ( (int)v37 > 0 )
      {
        v39 = &v33[-v24];
        do
        {
          *(_DWORD *)v24 = *(_DWORD *)&v39[v24];
          v24 += 4LL;
          --v38;
        }
        while ( v38 );
      }
    }
    v40 = 0;
    goto LABEL_30;
  }
LABEL_42:
  v44 = *(void (__fastcall **)(CSwapChainBuffer *, const struct FastRegion::Internal::CRgnData **))(*(_QWORD *)v15
                                                                                                  + 120LL);
  if ( v44 == CSwapChainBuffer::AddValidRegion )
    CRegion::Subtract((struct ISwapChainBuffer *)((char *)v15 + 32), (const struct CRegion *)&lpMem);
  else
    ((void (__fastcall *)(struct ISwapChainBuffer *, LPVOID *, unsigned __int64))v44)(v15, &lpMem, v24);
  v45 = v84;
  v46 = 0;
  if ( v84 )
  {
    v47 = v83;
    while ( v46 == v47 )
    {
LABEL_70:
      if ( ++v46 >= v45 )
        goto LABEL_71;
    }
    v48 = *(struct ISwapChainBuffer *(__fastcall **)(CDDisplaySwapChain *, unsigned int))(*(_QWORD *)this + 208LL);
    if ( v48 == CLegacySwapChain::GetPhysicalBuffer )
    {
      v49 = *((_QWORD *)this + 44);
      if ( v46 >= (unsigned __int64)((*((_QWORD *)this + 45) - v49) >> 3) )
        v50 = 0LL;
      else
        v50 = *(CRegion **)(v49 + 8LL * v46);
    }
    else
    {
      if ( v48 == CDDisplaySwapChain::GetPhysicalBuffer )
        v72 = CDDisplaySwapChain::GetPhysicalBuffer(this, v46);
      else
        v72 = (struct ISwapChainBuffer *)((__int64 (__fastcall *)(CDDisplaySwapChain *, _QWORD, void (__fastcall *)(CRegion *__hidden, const struct CRegion *)))v48)(
                                           this,
                                           v46,
                                           CRegion::Union);
      v50 = v72;
    }
    v51 = *(void (__fastcall **)(CSwapChainBuffer *, const struct FastRegion::Internal::CRgnData **))(*(_QWORD *)v50 + 104LL);
    if ( v51 == CSwapChainBuffer::AddInvalidRegion )
    {
      v52 = (int *)lpMem;
      v53 = (const struct FastRegion::Internal::CRgnData **)((char *)v50 + 32);
      if ( *(_DWORD *)lpMem )
      {
        if ( *(_DWORD *)*v53 )
        {
          v73 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
                  *v53,
                  (const struct FastRegion::Internal::CRgnData *)lpMem);
          v74 = (FastRegion::Internal::CRgnData *)v98;
          v97 = v98;
          v96 = v73;
          if ( (unsigned __int64)v73 > 0x100 )
          {
            v79 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v73);
            v74 = v79;
            if ( !v79 )
            {
              if ( v98 != v97 )
                operator delete(v97);
              v69 = -2147024882;
LABEL_66:
              ModuleFailFastForHRESULT(v69, retaddr);
            }
            v97 = v79;
          }
          FastRegion::Internal::CRgnData::Union(v74, *v53, (const struct FastRegion::Internal::CRgnData *)lpMem);
          v69 = FastRegion::CRegion::SaveResult(
                  (FastRegion::CRegion *)v53,
                  (struct FastRegion::Internal::CWorkBuffer *)&v96);
          if ( v98 != v97 )
            operator delete(v97);
          goto LABEL_65;
        }
        if ( v53 != (const struct FastRegion::Internal::CRgnData **)&lpMem )
        {
          v54 = (_DWORD)lpMem + 12;
          v55 = (int *)((char *)v50 + 40);
          v56 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
              + 8 * *(_DWORD *)lpMem
              - *((_DWORD *)lpMem + 4)
              - 12
              + 8 * (*(_DWORD *)lpMem - 1)
              + 24;
          v57 = 60;
          if ( (CRegion *)((char *)v50 + 40) != *v53 )
            v57 = *v55;
          if ( v57 < v56 )
          {
            v75 = (const struct FastRegion::Internal::CRgnData *)MIDL_user_allocate(v56);
            if ( !v75 )
            {
              v69 = -2147024882;
              goto LABEL_64;
            }
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v53);
            *v53 = v75;
            v54 = (_DWORD)v52 + 12;
            *v55 = v56;
          }
          v58 = *v53;
          v59 = *v52;
          v60 = 0;
          *(_DWORD *)v58 = *v52;
          *((_DWORD *)v58 + 1) = v52[1];
          *((_DWORD *)v58 + 2) = v52[2];
          v61 = (__int64)v52 + v52[4] + 12;
          v62 = (_DWORD *)((char *)v58 + 8 * v59 + 12);
          if ( v59 > 0 )
          {
            v63 = (_DWORD *)((char *)v58 + 12);
            do
            {
              *v63 = *(_DWORD *)((char *)v63 + (char *)v52 - (char *)v58);
              v63 += 2;
              v64 = v60++;
              *((_DWORD *)v58 + 2 * v64 + 4) = (_DWORD)v52
                                             + 8 * v64
                                             + 4 * (((__int64)v62 - v61) >> 2)
                                             + v52[2 * v64 + 4]
                                             - ((_DWORD)v58
                                              + 8 * v64);
            }
            while ( v60 < *(_DWORD *)v58 );
          }
          v65 = (__int64)&v52[2 * *v52 + 1];
          v66 = (unsigned __int64)((int)v65 + *(_DWORD *)(v65 + 4) - v52[4] - v54) >> 2;
          v67 = (int)v66;
          if ( (int)v66 > 0 )
          {
            v68 = v61 - (_QWORD)v62;
            do
            {
              *v62 = *(_DWORD *)((char *)v62 + v68);
              ++v62;
              --v67;
            }
            while ( v67 );
          }
        }
        v69 = 0;
LABEL_64:
        v45 = v84;
LABEL_65:
        if ( v69 < 0 )
          goto LABEL_66;
      }
    }
    else if ( (char *)v51 == (char *)CRegion::Union )
    {
      CRegion::Union(v50, (const struct CRegion *)&lpMem);
    }
    else
    {
      ((void (__fastcall *)(CRegion *, LPVOID *, void (__fastcall *)(CRegion *__hidden, const struct CRegion *)))v51)(
        v50,
        &lpMem,
        CRegion::Union);
    }
    v47 = v83;
    goto LABEL_70;
  }
LABEL_71:
  v70 = lpMem;
  v42 = &v87;
  if ( &v87 != lpMem && lpMem )
  {
    ProcessHeap = GetProcessHeap();
    LODWORD(v42) = HeapFree(ProcessHeap, 0, v70);
  }
  return (int)v42;
}
