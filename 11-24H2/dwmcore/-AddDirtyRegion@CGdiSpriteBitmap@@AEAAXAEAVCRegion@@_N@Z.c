/*
 * XREFs of ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18002F954
 * Callers:
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x180026C0C (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18002F5A0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x180207270 (-SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDS.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180028278 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x18003023C (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180030510 (-EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180030720 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?IsOfType@?$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800310E0 (-IsOfType@-$CWindowNodeGeneratedT@VCWindowNode@@VCVisual@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x180031108 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     McTemplateU0xxxxx_EventWriteTransfer @ 0x180219D80 (McTemplateU0xxxxx_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAXAEBVCRegion@@@Z @ 0x1802D6B50 (-AddDirtyRegion@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@.c)
 *     ?AddDirtyRegion@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAXAEBVCRegion@@@Z @ 0x1802D9690 (-AddDirtyRegion@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitm_ea_1802D9690.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGdiSpriteBitmap::AddDirtyRegion(CGdiSpriteBitmap *this, struct CRegion *a2, char a3)
{
  int v3; // r9d
  int v5; // edx
  __int64 v7; // rbx
  signed int v8; // edi
  const struct FastRegion::Internal::CRgnData *v9; // rcx
  int v10; // eax
  FastRegion::Internal::CRgnData *v11; // rcx
  int *v12; // rbx
  int v13; // edi
  _DWORD *v14; // rdi
  int v15; // r13d
  int *v16; // r12
  int v17; // r15d
  int v18; // eax
  int v19; // ecx
  int v20; // r15d
  _DWORD *v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // r11
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  void *v29; // rbx
  _DWORD *v30; // r8
  __int64 v31; // rcx
  int *v32; // r10
  int *v33; // rdx
  int v34; // edi
  int v35; // r9d
  int v36; // ebx
  int v37; // r11d
  int v38; // eax
  __int64 v39; // r15
  __int64 v40; // r9
  int *v41; // rcx
  unsigned __int64 v42; // r8
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rax
  int *v46; // rbx
  int v47; // r13d
  int v48; // r12d
  __int64 v49; // rcx
  int v50; // r8d
  int v51; // eax
  int *i; // rcx
  int v53; // r10d
  int *j; // r8
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rcx
  void (__fastcall *v58)(__int64, struct CRegion *, unsigned __int64, __int64); // rax
  __int64 *v59; // r15
  __int64 *v60; // r12
  __int64 v61; // rcx
  __int64 v62; // rax
  char v63; // r15
  unsigned int k; // edi
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // r9
  __int64 (__fastcall *v69)(unsigned __int64, __int64); // rax
  char v70; // al
  __int64 v71; // rbx
  unsigned __int64 v72; // rcx
  CWindowNode *v73; // rbx
  void *v74; // rbx
  int v75; // r12d
  HANDLE v76; // rax
  HANDLE ProcessHeap; // rax
  FastRegion::Internal::CRgnData *v78; // rax
  signed int LastError; // eax
  __int64 v80; // rdi
  int (__fastcall *v81)(__int64, HGDIOBJ *); // rbx
  HGDIOBJ ho; // [rsp+58h] [rbp-A8h] BYREF
  int v84; // [rsp+60h] [rbp-A0h]
  int v85; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v86; // [rsp+68h] [rbp-98h]
  LPVOID lpMem; // [rsp+70h] [rbp-90h]
  __int64 v88; // [rsp+78h] [rbp-88h] BYREF
  int v89; // [rsp+80h] [rbp-80h]
  _DWORD v90[2]; // [rsp+84h] [rbp-7Ch] BYREF
  _DWORD v91[13]; // [rsp+8Ch] [rbp-74h] BYREF
  int *v92; // [rsp+C0h] [rbp-40h] BYREF
  int v93; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v94[16]; // [rsp+100h] [rbp+0h] BYREF
  int v95; // [rsp+110h] [rbp+10h]
  LPVOID v96; // [rsp+118h] [rbp+18h]
  _BYTE v97[256]; // [rsp+120h] [rbp+20h] BYREF
  void *retaddr; // [rsp+268h] [rbp+168h]

  v3 = *((_DWORD *)this + 109);
  v5 = *((_DWORD *)this + 108);
  lpMem = &v88;
  if ( v5 <= 0 || v3 <= 0 )
  {
    LODWORD(v88) = 0;
  }
  else
  {
    v88 = 2LL;
    v89 = v5;
    v90[0] = 0;
    v91[2] = 0;
    v90[1] = (unsigned int)v94 - 108 - (unsigned int)v90;
    v91[3] = v5;
    v91[0] = v3;
    v91[1] = (unsigned int)v94 - 108 - (unsigned int)v91 + 8;
  }
  if ( !**(_DWORD **)a2 )
    return;
  if ( !*((_QWORD *)this + 45) && *((_BYTE *)this + 152) )
  {
    v7 = *((_QWORD *)this + 16);
    v92 = &v93;
    v93 = 0;
    v8 = 0;
    ho = 0LL;
    SetLastError(0);
    if ( !(unsigned int)DwmHLSurfGetDirtyRgn(*(_QWORD *)(v7 + 24), 0LL, 0LL, &ho, 0LL, 0LL, 0LL, 0LL, 0LL) )
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      if ( v8 >= 0 )
        v8 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1803C6568, 4u, v8, 0xD6u, 0LL);
    }
    if ( ho )
    {
      CRegion::SetHRGN((CRegion *)&v92, (HRGN)ho);
      DeleteObject(ho);
    }
    if ( v8 >= 0 )
      CRegion::Intersect(a2, (const struct CRegion *)&v92);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v92);
  }
  v9 = *(const struct FastRegion::Internal::CRgnData **)a2;
  if ( *(_DWORD *)lpMem )
  {
    if ( *(_DWORD *)v9 )
    {
      v10 = FastRegion::Internal::CRgnData::EstimateSizeIntersect(
              v9,
              (const struct FastRegion::Internal::CRgnData *)lpMem);
      v11 = (FastRegion::Internal::CRgnData *)v97;
      v96 = v97;
      v95 = v10;
      if ( (unsigned __int64)v10 > 0x100 )
      {
        v78 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v10);
        v11 = v78;
        if ( !v78 )
        {
          if ( v97 != v96 )
            operator delete(v96);
          v13 = -2147024882;
          goto LABEL_113;
        }
        v96 = v78;
      }
      FastRegion::Internal::CRgnData::Intersect(
        v11,
        *(const struct FastRegion::Internal::CRgnData **)a2,
        (const struct FastRegion::Internal::CRgnData *)lpMem);
      v12 = (int *)v96;
      v13 = 0;
      if ( *(_DWORD *)v96 )
      {
        if ( v97 == v96 )
        {
          v14 = *(_DWORD **)a2;
          v15 = (_DWORD)v96 + 12;
          v16 = (int *)((char *)a2 + 8);
          v17 = *((_DWORD *)v96 + 2 * *(_DWORD *)v96 + 2)
              + 8 * *(_DWORD *)v96
              - *((_DWORD *)v96 + 4)
              - 12
              + 8 * (*(_DWORD *)v96 - 1)
              + 24;
          v18 = 60;
          if ( (struct CRegion *)((char *)a2 + 8) != *(struct CRegion **)a2 )
            v18 = *v16;
          if ( v18 < v17 )
          {
            v14 = MIDL_user_allocate(v17);
            if ( !v14 )
            {
              v13 = -2147024882;
              goto LABEL_28;
            }
            FastRegion::CRegion::FreeMemory(a2);
            *(_QWORD *)a2 = v14;
            *v16 = v17;
          }
          v19 = *v12;
          v20 = 0;
          *v14 = *v12;
          v14[1] = v12[1];
          v14[2] = v12[2];
          v21 = &v14[2 * v19 + 3];
          v22 = (__int64)v12 + v12[4] + 12;
          if ( v19 > 0 )
          {
            v23 = v14 + 3;
            do
            {
              *v23 = *(_DWORD *)((char *)v23 + (char *)v12 - (char *)v14);
              v23 += 2;
              v24 = v20++;
              v14[2 * v24 + 4] = (_DWORD)v12
                               + 8 * v24
                               + 4 * (((__int64)v21 - v22) >> 2)
                               + v12[2 * v24 + 4]
                               - ((_DWORD)v14
                                + 8 * v24);
            }
            while ( v20 < *v14 );
          }
          v25 = (__int64)&v12[2 * *v12 + 1];
          v26 = (unsigned __int64)((int)v25 + *(_DWORD *)(v25 + 4) - v12[4] - v15) >> 2;
          v27 = (int)v26;
          if ( (int)v26 > 0 )
          {
            v28 = v22 - (_QWORD)v21;
            do
            {
              *v21 = *(_DWORD *)((char *)v21 + v28);
              ++v21;
              --v27;
            }
            while ( v27 );
          }
          v13 = 0;
        }
        else
        {
          v75 = v95;
          v96 = v97;
          v95 = 0;
          FastRegion::CRegion::FreeMemory(a2);
          *(_QWORD *)a2 = v12;
          *((_DWORD *)a2 + 2) = v75;
        }
      }
      else
      {
        **(_DWORD **)a2 = 0;
      }
LABEL_28:
      v29 = v96;
      if ( v97 != v96 && v96 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v29);
      }
      if ( v13 >= 0 )
        goto LABEL_32;
LABEL_113:
      ModuleFailFastForHRESULT(v13, retaddr);
    }
  }
  else
  {
    *(_DWORD *)v9 = 0;
  }
LABEL_32:
  v30 = *(_DWORD **)a2;
  v31 = **(int **)a2;
  if ( (_DWORD)v31 )
  {
    if ( *((_BYTE *)this + 152)
      && (v32 = (int *)*((_QWORD *)this + 22), *v32)
      && (v33 = v30 + 3, v34 = v32[1], v35 = v32[2], v36 = v32[3], v37 = v32[2 * *v32 + 1], v84 = v37, v34 <= v30[1])
      && v36 <= *v33
      && v35 >= v30[2]
      && v37 >= v30[2 * v31 + 1] )
    {
      v38 = v31 - 1;
      v39 = (__int64)v30 + v30[4] + 12;
      v40 = 0LL;
      v41 = v30 + 5;
      v42 = (unsigned __int64)&v30[2 * v38 + 3];
      v43 = v33[3] - v39;
      v86 = v42;
      v44 = ((__int64)v33 + v43 + 8) >> 3;
      if ( (int)v44 <= 0 )
      {
        v40 = 1LL;
        while ( 1 )
        {
          v33 = v41;
          v45 = v41[3];
          v39 = (__int64)v41 + v41[1];
          v41 += 2;
          LODWORD(v44) = ((__int64)v41 + v45 - v39) >> 3;
          if ( (_DWORD)v44 )
            break;
          if ( (unsigned __int64)v33 >= v42 )
            goto LABEL_43;
        }
        v40 = 0LL;
      }
LABEL_43:
      v46 = v33 + 2;
LABEL_44:
      while ( (unsigned __int64)v33 < v42 )
      {
        v47 = *v46;
        v48 = *v33;
        v49 = 2 * (int)v40;
        v50 = *(_DWORD *)(v39 + 4 * v49);
        v51 = *(_DWORD *)(v39 + 4 * v49 + 4);
        LODWORD(ho) = v50;
        v85 = v51;
        if ( v47 > v37 || v50 < v32[1] || v51 > v32[2] || v48 < v32[3] )
          goto LABEL_64;
        for ( i = v32 + 5; v47 > *(i - 2); i += 2 )
        {
          if ( v48 < *i )
          {
            v53 = v50;
            for ( j = (int *)((char *)i + *(i - 1) - 8); j < (int *)((char *)i + i[1]) && *j <= v53; j += 2 )
            {
              v55 = j[1];
              if ( v55 <= v53 )
                v55 = v53;
              v53 = v55;
            }
            if ( v53 < v85 )
              goto LABEL_64;
            v50 = (int)ho;
          }
        }
        v32 = (int *)*((_QWORD *)this + 22);
        v40 = (unsigned int)(v40 + 1);
        v42 = v86;
        v37 = v84;
        if ( (int)v40 >= (int)v44 )
        {
          while ( 1 )
          {
            v33 = v46;
            v56 = v46[3];
            v39 = (__int64)v46 + v46[1];
            v46 += 2;
            LODWORD(v44) = ((__int64)v46 + v56 - v39) >> 3;
            if ( (_DWORD)v44 )
              break;
            if ( (unsigned __int64)v33 >= v86 )
              goto LABEL_44;
          }
          v40 = 0LL;
        }
      }
    }
    else
    {
LABEL_64:
      CRegion::Union((CGdiSpriteBitmap *)((char *)this + 176), a2);
      *((_BYTE *)this + 154) = 1;
    }
    v57 = *((_QWORD *)this + 56);
    if ( v57 )
    {
      v58 = *(void (__fastcall **)(__int64, struct CRegion *, unsigned __int64, __int64))(*(_QWORD *)v57 + 72LL);
      if ( (char *)v58 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion )
      {
        IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion(v57, a2, v42, v40);
      }
      else if ( (char *)v58 == (char *)IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion )
      {
        IBitmapRealizationMethodsT<CSectionBitmapRealization,IGDIBitmapRealization>::AddDirtyRegion(v57, a2, v42, v40);
      }
      else
      {
        v58(v57, a2, v42, v40);
      }
      v59 = (__int64 *)*((_QWORD *)this + 57);
      v60 = (__int64 *)*((_QWORD *)this + 58);
      while ( v59 != v60 )
      {
        v80 = *v59;
        ho = 0LL;
        v81 = *(int (__fastcall **)(__int64, HGDIOBJ *))(*(_QWORD *)(v80 + 72) + 64LL);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&ho);
        if ( v81(v80 + 72, &ho) >= 0 )
          (*(void (__fastcall **)(HGDIOBJ, struct CRegion *))(*(_QWORD *)ho + 72LL))(ho, a2);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&ho);
        ++v59;
      }
    }
    if ( *((_BYTE *)this + 149) )
    {
      v61 = *(_QWORD *)(*((_QWORD *)g_pComposition + 709) + 24LL);
      if ( v61 )
      {
        v62 = (*(__int64 (__fastcall **)(__int64, int *, unsigned __int64, __int64))(*(_QWORD *)v61 + 48LL))(
                v61,
                v33,
                v42,
                v40);
        if ( v62 )
          (*(void (__fastcall **)(__int64, char *, struct CRegion *))(*(_QWORD *)v62 + 8LL))(
            v62,
            (char *)this + 120,
            a2);
      }
    }
    v63 = *((_BYTE *)this + 148);
    *((_BYTE *)this + 148) = 1;
    if ( a3 )
    {
      for ( k = 0; ; ++k )
      {
        v65 = *((_QWORD *)this + 4) & 2LL;
        v66 = *((_QWORD *)this + 4) & 1LL;
        v67 = *((_QWORD *)this + 4) & 0xFFFFFFFFFFFFFFFCuLL;
        v68 = v65 ? *(_QWORD *)v67 : *((_QWORD *)this + 4) & 1LL;
        if ( k >= v68 )
          break;
        if ( v65 )
          v66 = *(_QWORD *)v67;
        if ( k >= v66 )
        {
          v67 = 0LL;
        }
        else if ( v66 != 1 )
        {
          _mm_lfence();
          v67 = *(_QWORD *)((*((_QWORD *)this + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 8LL * k + 16);
        }
        v69 = *(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v67 + 64LL);
        if ( v69 == CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType )
          v70 = CWindowNodeGeneratedT<CWindowNode,CVisual>::IsOfType(v67, 192LL);
        else
          v70 = v69(v67, 192LL);
        if ( v70 )
        {
          v71 = *((_QWORD *)this + 4);
          if ( (v71 & 2) != 0 )
            v72 = *(_QWORD *)(v71 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v72 = *((_QWORD *)this + 4) & 1LL;
          if ( k >= v72 )
          {
            v73 = 0LL;
          }
          else if ( v72 == 1 )
          {
            v73 = (CWindowNode *)(v71 & 0xFFFFFFFFFFFFFFFCuLL);
          }
          else
          {
            _mm_lfence();
            v73 = *(CWindowNode **)((*((_QWORD *)this + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 8LL * k + 16);
          }
          if ( !v63 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xxxxx_EventWriteTransfer(
              v72,
              k,
              (_DWORD)this,
              *((_QWORD *)this + 52),
              (char)v73,
              *((_QWORD *)v73 + 11),
              *((_QWORD *)this + 10));
          CWindowNode::NotifyDirtySurface(v73, a2, *((_BYTE *)this + 154));
        }
      }
    }
  }
  v74 = lpMem;
  if ( &v88 != lpMem && lpMem )
  {
    v76 = GetProcessHeap();
    HeapFree(v76, 0, v74);
  }
}
