/*
 * XREFs of ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x1800D7AD0
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x1800D8850 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800DAB4C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180086A40 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1801D9094 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18025B75C (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ?GetD2DBitmap@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D6C30 (-GetD2DBitmap@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EAAJPEAPEAUID2D.c)
 *     ?Release@CDeviceTextureTarget@@WBAA@EAAKXZ @ 0x1802D6FB0 (-Release@CDeviceTextureTarget@@WBAA@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::PushTarget(CD2DContext *this, struct ID2DContextOwner *a2, struct IDeviceTarget *a3)
{
  char *v3; // r15
  int v4; // eax
  __int64 v7; // rsi
  __int64 v8; // r13
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 (__fastcall *v11)(struct IDeviceTarget *, struct ID2DContextOwner **, _QWORD); // rax
  int D2DBitmap; // eax
  int v13; // ebx
  struct ID2DContextOwner **v14; // rax
  _BYTE *v15; // rcx
  __int64 v16; // r8
  struct DrawingContextFlags *v17; // rdx
  void (__fastcall *v18)(CDrawingContext *__hidden, struct DrawingContextFlags *); // r9
  unsigned int v19; // eax
  char *v20; // r8
  unsigned int v21; // edx
  int v22; // r14d
  int v23; // r14d
  unsigned int v24; // eax
  int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  void (*v29)(void); // rax
  __int64 v30; // r14
  int v32; // r9d
  HANDLE ProcessHeap; // rax
  char *v34; // rax
  char *v35; // r12
  struct ID2DContextOwner *v36; // rbx
  struct ID2DContextOwner *v37; // rcx
  unsigned int (__fastcall *v38)(CMILRefCountImpl *__hidden); // rax
  __int64 v39; // rcx
  _DWORD *v40; // rdx
  unsigned int v41; // eax
  unsigned int v42; // edx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // eax
  int v49; // r9d
  int v50; // r9d
  __int64 v51; // rax
  int v52; // eax
  int v53; // eax
  unsigned int v54; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  char *v56; // [rsp+70h] [rbp+8h] BYREF
  struct ID2DContextOwner *v57; // [rsp+78h] [rbp+10h]
  struct ID2DContextOwner *v58; // [rsp+88h] [rbp+20h] BYREF

  v57 = a2;
  v3 = (char *)this + 328;
  v4 = *((_DWORD *)this + 88);
  v58 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( v4 )
    v8 = *(_QWORD *)(*(_QWORD *)v3 + 8LL * (unsigned int)(v4 - 1));
  v9 = -2003304307;
  if ( *((_QWORD *)this + 19) )
  {
    v13 = -2003292412;
    v54 = 608;
LABEL_65:
    v32 = v13;
    goto LABEL_44;
  }
  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  v10 = (__int64)this + 1096;
  if ( !this )
    v10 = 1112LL;
  if ( *(_DWORD *)v10 )
  {
    v13 = -2003304307;
    v54 = 613;
    v32 = -2003304307;
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, v54, 0LL);
    goto LABEL_29;
  }
  v11 = *(__int64 (__fastcall **)(struct IDeviceTarget *, struct ID2DContextOwner **, _QWORD))(*(_QWORD *)a3 + 104LL);
  if ( (char *)v11 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetD2DBitmap )
    D2DBitmap = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetD2DBitmap(a3, &v58, 0LL);
  else
    D2DBitmap = v11(a3, &v58, 0LL);
  v13 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    v54 = 615;
    goto LABEL_65;
  }
  v7 = (*(__int64 (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)a3 + 168LL))(a3);
  if ( v8 )
    goto LABEL_46;
  v14 = (struct ID2DContextOwner **)*((_QWORD *)this + 53);
  if ( !v14 || v58 != v14[4] || (struct ID2DContextOwner *)v7 != v14[5] )
  {
    SAFE_DELETE<CD2DTarget>((char *)this + 424);
LABEL_46:
    ProcessHeap = GetProcessHeap();
    v34 = (char *)HeapAlloc(ProcessHeap, 0, 0x58uLL);
    v35 = v34;
    if ( !v34 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v36 = v58;
    v37 = v57;
    *((_QWORD *)v34 + 1) = *((_QWORD *)this + 22);
    *(_QWORD *)v34 = v37;
    *((_QWORD *)v34 + 2) = 0LL;
    *((_QWORD *)v34 + 4) = 0LL;
    *((_QWORD *)v34 + 5) = 0LL;
    *((_DWORD *)v34 + 12) = 0;
    *(_DWORD *)(v34 + 77) = 0;
    *((_QWORD *)v34 + 3) = a3;
    v38 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)a3 + 8LL);
    if ( v38 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(a3);
    else
      v38(a3);
    *((_QWORD *)v35 + 4) = v36;
    if ( v36 )
      (*(void (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)v36 + 8LL))(v36);
    *((_QWORD *)v35 + 5) = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v39 = *(_QWORD *)v35;
    v40 = v35 + 72;
    if ( *(void (__fastcall **)(CDrawingContext *__hidden, struct DrawingContextFlags *))(**(_QWORD **)v35 + 24LL) == CDrawingContext::SaveDrawingContextFlags )
    {
      *v40 = *(_DWORD *)(v39 + 7956);
      v35[76] = *(_BYTE *)(v39 + 7960);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _DWORD *))(**(_QWORD **)v35 + 24LL))(v39, v40);
    }
    v41 = *((_DWORD *)v3 + 6);
    v56 = v35;
    v42 = v41 + 1;
    if ( v41 + 1 < v41 )
    {
      v23 = -2147024362;
      v24 = 181;
      v13 = -2147024362;
      v25 = -2147024362;
    }
    else
    {
      v23 = 0;
      if ( v42 <= *((_DWORD *)v3 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v3 + 8LL * v41) = v35;
        *((_DWORD *)v3 + 6) = v42;
        goto LABEL_58;
      }
      v53 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3, 8, 1, &v56);
      v23 = v53;
      v13 = v53;
      if ( v53 >= 0 )
      {
LABEL_58:
        v13 = v23;
        if ( *((_BYTE *)this + 437) )
        {
          if ( v8 )
            *(_BYTE *)(v8 + 78) = 0;
          if ( !v35[78] )
          {
            v43 = *((_QWORD *)v35 + 5);
            v44 = *((_QWORD *)v35 + 4);
            *((_QWORD *)v35 + 2) = this;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 26) + 56LL))(
              *((_QWORD *)this + 26),
              v44,
              v43);
            v35[78] = 1;
            CD2DTarget::ApplyCurrentClip((CD2DTarget *)v35);
          }
        }
        goto LABEL_29;
      }
      v25 = v53;
      v24 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, v24, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x293u, 0LL);
    v26 = *((_QWORD *)v35 + 5);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    v27 = *((_QWORD *)v35 + 4);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    v28 = *((_QWORD *)v35 + 3);
    if ( v28 )
    {
      v29 = *(void (**)(void))(*(_QWORD *)v28 + 16LL);
      if ( (char *)v29 == (char *)CDeviceTextureTarget::Release )
        CDeviceTextureTarget::Release(v28);
      else
        v29();
    }
    operator delete(v35, 0x58uLL);
    goto LABEL_29;
  }
  *v14 = v57;
  v15 = (_BYTE *)*((_QWORD *)this + 53);
  v16 = *(_QWORD *)v15;
  v17 = (struct DrawingContextFlags *)(v15 + 72);
  v18 = *(void (__fastcall **)(CDrawingContext *__hidden, struct DrawingContextFlags *))(**(_QWORD **)v15 + 24LL);
  if ( v18 == CDrawingContext::SaveDrawingContextFlags )
  {
    *(_DWORD *)v17 = *(_DWORD *)(v16 + 7956);
    v15[76] = *(_BYTE *)(v16 + 7960);
  }
  else
  {
    v18(*(CDrawingContext **)v15, v17);
  }
  v19 = *((_DWORD *)v3 + 6);
  v20 = (char *)*((_QWORD *)this + 53);
  v56 = v20;
  v21 = v19 + 1;
  if ( v19 + 1 < v19 )
  {
    v22 = -2147024362;
    v48 = 181;
    v13 = -2147024362;
    v49 = -2147024362;
  }
  else
  {
    v22 = 0;
    if ( v21 <= *((_DWORD *)v3 + 5) )
    {
      *(_QWORD *)(*(_QWORD *)v3 + 8LL * v19) = v20;
      *((_DWORD *)v3 + 6) = v21;
LABEL_19:
      v13 = v22;
      *((_QWORD *)this + 53) = 0LL;
      goto LABEL_29;
    }
    v52 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v3, 8, 1, &v56);
    v22 = v52;
    v13 = v52;
    if ( v52 >= 0 )
      goto LABEL_19;
    v49 = v52;
    v48 = 192;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, v48, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x27Au, 0LL);
LABEL_29:
  v30 = (__int64)this + 1096;
  if ( v58 )
    (*(void (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)v58 + 16LL))(v58);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( !this )
    v30 = 1112LL;
  if ( !*(_DWORD *)v30 && (v13 == -2005532292 || v13 == -2147024882 || v13 == -2005270523) )
  {
    v45 = (__int64)this + 432;
    if ( !this )
      v45 = 448LL;
    if ( *(_DWORD *)v45 )
    {
      if ( v13 == -2005270523 )
      {
        v46 = (__int64)this + 536;
        if ( !this )
          v46 = 552LL;
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v46 + 312LL))(*(_QWORD *)v46) != -2005270480 )
        {
          if ( *(_DWORD *)v30 )
            return v9;
          *(_DWORD *)v30 = -2005270523;
LABEL_79:
          if ( *(_DWORD *)v30 )
            return v9;
          goto LABEL_40;
        }
        if ( !*(_DWORD *)v30 )
          *(_DWORD *)v30 = -2005270480;
      }
      v47 = (__int64)this;
      if ( !this )
        v47 = 16LL;
      CD2DContext::TempDisableHardwareProtection((CD2DContext *)v47);
    }
  }
  if ( v13 < 0 )
    goto LABEL_79;
LABEL_40:
  LODWORD(v56) = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v13, 0LL, &v56) )
  {
    v50 = (int)v56;
    if ( (_DWORD)v56 == -2003304307 )
    {
      if ( v13 >= 0 )
        v13 = -2003304307;
      if ( !*(_DWORD *)v30 )
      {
        v51 = (__int64)this + 1096;
        if ( !this )
          v51 = 1112LL;
        *(_DWORD *)v51 = v13;
      }
    }
    v13 = v50;
    if ( v50 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0xB4Du, 0LL);
  }
  return (unsigned int)v13;
}
