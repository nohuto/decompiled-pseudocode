/*
 * XREFs of ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x180173810
 * Callers:
 *     ?AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ @ 0x1802073AC (-AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180084294 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x180105B10 (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180173370 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x180173C90 (-HasActiveInk@CSuperWetInkManager@@QEBA_NXZ.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x180173CD0 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180175760 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18019E7F0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801EEEDC (McTemplateU0xq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScribbleSwapChain::GetComputeScribbleInvalidRects(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r15
  CComputeScribbleRenderer *v13; // rax
  CComputeScribbleRenderer *v14; // r13
  char HasActiveInk; // di
  int v16; // edx
  int v17; // r8d
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // ebx
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  FastRegion::CRegion **v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v31; // rcx
  int v32; // eax
  int v33[2]; // [rsp+20h] [rbp-E0h]
  int v34; // [rsp+28h] [rbp-D8h]
  int v35; // [rsp+2Ch] [rbp-D4h]
  struct D2D_RECT_F v36; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h]
  _BYTE v38[8]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-B0h]
  int *v40; // [rsp+58h] [rbp-A8h]
  __int64 v41; // [rsp+60h] [rbp-A0h]
  int v42; // [rsp+68h] [rbp-98h]
  int *v43; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v44[18]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v45; // [rsp+D0h] [rbp-30h] BYREF
  FastRegion::CRegion *v46; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v47[3]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v48[2]; // [rsp+F4h] [rbp-Ch] BYREF
  int v49; // [rsp+FCh] [rbp-4h] BYREF
  _DWORD v50[12]; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v4 = a1 - 232;
  *(_QWORD *)v33 = a4;
  v5 = *(_QWORD *)(a1 - 232);
  *(_QWORD *)&v45 = a2;
  v37 = a1 - 232;
  v8 = (*(__int64 (__fastcall **)(__int64))(v5 + 192))(a1 - 232);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 184LL))(v8);
  v10 = *(_QWORD *)v8;
  *(_QWORD *)&v36.left = v9;
  (*(void (__fastcall **)(__int64))(v10 + 168))(v8);
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 184LL))(v11);
  v13 = (CComputeScribbleRenderer *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  v14 = v13;
  if ( !v13 )
    goto LABEL_2;
  v32 = CComputeScribbleRenderer::PreRender(v13);
  v20 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\scribbleswapchain.cpp",
      (const char *)(unsigned int)v32);
    return v20;
  }
  HasActiveInk = *((_BYTE *)v14 + 48);
  if ( !HasActiveInk )
LABEL_2:
    HasActiveInk = CSuperWetInkManager::HasActiveInk(*((CSuperWetInkManager **)g_pComposition + 82));
  v16 = *a3;
  v17 = a3[2];
  v18 = a3[1];
  v19 = a3[3];
  v46 = (FastRegion::CRegion *)v47;
  if ( v16 >= v17 || v18 >= v19 )
  {
    v47[0] = 0;
  }
  else
  {
    v48[0] = v18;
    v47[0] = 2;
    v47[1] = v16;
    v47[2] = v17;
    v48[1] = (unsigned int)v50 + 4 - (unsigned int)v48;
    v50[1] = v16;
    v50[2] = v17;
    v50[0] = (unsigned int)v50 + 4 - (unsigned int)&v49 + 8;
    v49 = v19;
  }
  if ( *(_QWORD *)&v36.left )
  {
    v44[0] = 0;
    v43 = v44;
    CRegion::Copy((FastRegion::CRegion **)&v43, (FastRegion::CRegion **)(*(_QWORD *)&v36.left + 176LL));
    **(_DWORD **)(*(_QWORD *)&v36.left + 176LL) = 0;
    CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)&v43, &v46);
    (*(void (__fastcall **)(__int64, int **))(*(_QWORD *)v8 + 104LL))(v8, &v43);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v43);
  }
  if ( v12 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v12 + 80));
    v44[0] = 0;
    v43 = v44;
    if ( *(_BYTE *)(v12 + 168) )
    {
      CRegion::Copy((FastRegion::CRegion **)&v43, (FastRegion::CRegion **)(v12 + 96));
      if ( *(_BYTE *)(v12 + 168) )
      {
        HasActiveInk = 1;
        if ( *v43 )
          (*(void (__fastcall **)(__int64, int **))(*(_QWORD *)v11 + 160LL))(v11, &v43);
      }
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v43);
    if ( v12 != -80 )
      ReleaseSRWLockExclusive((PSRWLOCK)(v12 + 80));
  }
  if ( **(_DWORD **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 152LL))(v11) )
  {
    v44[0] = 0;
    v43 = v44;
    v26 = (FastRegion::CRegion **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 152LL))(v11);
    CRegion::Copy((FastRegion::CRegion **)&v43, v26);
    CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)&v43, &v46);
    if ( *v43 )
    {
      FastRegion::CRegion::BeginIterator(&v43, (__int64)v38);
      v27 = v45;
      v28 = *(_QWORD *)v33;
      while ( (unsigned __int64)v40 < v39 )
      {
        v33[1] = *v40;
        v35 = v40[2];
        v29 = 2 * v42;
        v33[0] = *(_DWORD *)(v41 + 4 * v29);
        v34 = *(_DWORD *)(v41 + 4 * v29 + 4);
        for ( i = 0LL; i < 4; ++i )
          *(float *)((char *)&v36.left + i * 4) = (float)v33[i];
        v45 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>(v27, &v36, (float *)&v45);
        CMergedRectBase<4>::Add(v28, &v45);
        FastRegion::Internal::CRgnData::StepIterator(v31, (struct FastRegion::CRegion::Iterator *)v38);
      }
    }
    if ( HasActiveInk )
      (*(void (__fastcall **)(__int64, int **))(*(_QWORD *)v8 + 120LL))(v8, &v43);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&v43);
  }
  if ( !HasActiveInk )
    goto LABEL_11;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 88LL))(v8);
    if ( v14 )
      v25 = *((_QWORD *)v14 + 3);
    else
      v25 = 0LL;
    McTemplateU0xq_EventWriteTransfer(v24, &EVTDESC_COMPUTESCRIBBLE_EARLYCOPY, v25, v23);
  }
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 128LL))(v37);
  v20 = v22;
  if ( v22 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\scribbleswapchain.cpp",
      (const char *)(unsigned int)v22);
  else
LABEL_11:
    v20 = 0;
  FastRegion::CRegion::FreeMemory(&v46);
  return v20;
}
