/*
 * XREFs of ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x180055720
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z @ 0x180055BA0 (-RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z.c)
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x180056980 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800FABC0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1801DBB6C (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?FlushD2DInternal@CD2DContext@@AEAAJXZ @ 0x1801FD688 (-FlushD2DInternal@CD2DContext@@AEAAJXZ.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180250164 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CDeviceTextureTarget@@WBAA@EAAKXZ @ 0x1802CDD40 (-Release@CDeviceTextureTarget@@WBAA@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::PopTarget(CD2DContext *this, struct ID2DContextOwner *a2, struct IDeviceTarget **a3)
{
  _BOOL8 v6; // r8
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // ebp
  bool v11; // zf
  const struct DrawingContextFlags *v12; // rdx
  void (__fastcall *v13)(CDrawingContext *__hidden, const struct DrawingContextFlags *, bool); // rax
  _BYTE *v14; // rcx
  bool (__fastcall *v15)(CDeviceTextureTarget *__hidden); // rax
  char v16; // al
  int v17; // eax
  int v18; // edi
  __int64 v19; // rsi
  int v21; // eax
  __int64 v22; // rbp
  struct IDeviceTarget *v23; // rcx
  void (*v24)(void); // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  void (*v31)(void); // rax
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // eax
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // [rsp+60h] [rbp+8h] BYREF

  if ( a3 )
    *a3 = 0LL;
  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  v7 = *((_DWORD *)this + 88);
  v8 = 0LL;
  v9 = (unsigned int)(v7 - 1);
  if ( v7 )
    v8 = *(_QWORD *)(*((_QWORD *)this + 41) + 8 * v9);
  *((_DWORD *)this + 88) = v9;
  v10 = v7 - 1;
  v11 = v7 == 1;
  v12 = (const struct DrawingContextFlags *)(v8 + 72);
  LOBYTE(v6) = v7 == 1;
  v13 = *(void (__fastcall **)(CDrawingContext *__hidden, const struct DrawingContextFlags *, bool))(*(_QWORD *)a2 + 32LL);
  if ( v13 == CDrawingContext::RestoreDrawingContextFlags )
    CDrawingContext::RestoreDrawingContextFlags(a2, v12, v11);
  else
    v13(a2, v12, v6);
  if ( v10 )
  {
    v21 = *((_DWORD *)this + 88);
    v22 = 0LL;
    if ( v21 )
      v22 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v21 - 1));
    if ( a3 )
    {
      v23 = *(struct IDeviceTarget **)(v22 + 24);
      *a3 = v23;
      v24 = *(void (**)(void))(*(_QWORD *)v23 + 8LL);
      if ( (char *)v24 == (char *)CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(v23);
      else
        v24();
    }
    if ( *((_BYTE *)this + 437) )
    {
      if ( !*(_BYTE *)(v22 + 78) )
      {
        v25 = *(_QWORD *)(v22 + 40);
        v26 = *(_QWORD *)(v22 + 32);
        *(_QWORD *)(v22 + 16) = this;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 26) + 56LL))(
          *((_QWORD *)this + 26),
          v26,
          v25);
        *(_BYTE *)(v22 + 78) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v22);
      }
      if ( *(_BYTE *)(v8 + 80) )
      {
        if ( *(_BYTE *)(v8 + 79) )
        {
          v37 = CD2DContext::FlushD2DInternal(this);
          if ( v37 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x2DFu, 0LL);
        }
        else
        {
          *(_BYTE *)(v22 + 80) = 1;
        }
      }
    }
    v27 = (__int64)this + 1096;
    if ( !this )
      v27 = 1112LL;
    if ( *(_DWORD *)v27 )
    {
      v18 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x2E8u, 0LL);
    }
    else
    {
      v18 = 0;
    }
    if ( v8 )
    {
      v28 = *(_QWORD *)(v8 + 40);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      v29 = *(_QWORD *)(v8 + 32);
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      v30 = *(_QWORD *)(v8 + 24);
      if ( v30 )
      {
        v31 = *(void (**)(void))(*(_QWORD *)v30 + 16LL);
        if ( (char *)v31 == (char *)CDeviceTextureTarget::Release )
          CDeviceTextureTarget::Release(v30);
        else
          v31();
      }
      operator delete((void *)v8, 0x58uLL);
    }
  }
  else
  {
    if ( *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL
      && ((v14 = *(_BYTE **)(v8 + 24),
           v15 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(*(_QWORD *)v14 + 128LL),
           v15 != CDeviceTextureTarget::IsDisplayTarget)
        ? (v16 = ((__int64 (*)(void))v15)())
        : (v16 = v14[33]),
          v16) )
    {
      *((_QWORD *)this + 53) = v8;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 26) + 56LL))(
        *((_QWORD *)this + 26),
        0LL,
        0LL);
      if ( v8 )
        CD2DTarget::`scalar deleting destructor'((CD2DTarget *)v8, v32);
    }
    v17 = CD2DContext::EndDraw(this);
    v18 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x2FEu, 0LL);
  }
  v19 = (__int64)this + 1096;
  if ( !this )
    v19 = 1112LL;
  if ( *(_DWORD *)v19 || v18 != -2005532292 && v18 != -2147024882 && v18 != -2005270523 )
    goto LABEL_21;
  v33 = (__int64)this + 432;
  if ( !this )
    v33 = 448LL;
  if ( !*(_DWORD *)v33 )
  {
LABEL_21:
    if ( v18 >= 0 )
      goto LABEL_22;
    goto LABEL_59;
  }
  if ( v18 != -2005270523 )
  {
LABEL_56:
    v35 = (__int64)this;
    if ( !this )
      v35 = 16LL;
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)v35);
    goto LABEL_21;
  }
  v34 = (__int64)this + 536;
  if ( !this )
    v34 = 552LL;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v34 + 312LL))(*(_QWORD *)v34) == -2005270480 )
  {
    if ( !*(_DWORD *)v19 )
    {
      v41 = (__int64)this + 1096;
      if ( !this )
        v41 = 1112LL;
      *(_DWORD *)v41 = -2005270480;
    }
    goto LABEL_56;
  }
  if ( !*(_DWORD *)v19 )
  {
    v42 = (__int64)this + 1096;
    if ( !this )
      v42 = 1112LL;
    *(_DWORD *)v42 = -2005270523;
  }
LABEL_59:
  v36 = (__int64)this + 1096;
  if ( !this )
    v36 = 1112LL;
  if ( *(_DWORD *)v36 )
    return 2291662989LL;
LABEL_22:
  v43 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v18, 0LL, &v43) )
  {
    v38 = v43;
    if ( v43 == -2003304307 )
    {
      v39 = (__int64)this + 1096;
      if ( v18 >= 0 )
        v18 = -2003304307;
      if ( !this )
        v39 = 1112LL;
      if ( !*(_DWORD *)v39 )
      {
        v40 = (__int64)this + 1096;
        if ( !this )
          v40 = 1112LL;
        *(_DWORD *)v40 = v18;
      }
    }
    v18 = v38;
    if ( v38 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xB31u, 0LL);
  }
  return (unsigned int)v18;
}
