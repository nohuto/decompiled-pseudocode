/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18003CCA0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18003DE40 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800048CC (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x180009A0C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x1800108B8 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180019608 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800336E4 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x180036950 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A6278 (--1-$ComPtr@VCDCompositionInteropVisual@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SetSize@CHolographicSlate@@QEAAJII@Z @ 0x1800C1B5C (-SetSize@CHolographicSlate@@QEAAJII@Z.c)
 *     ?UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z @ 0x1800C4F4C (-UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z.c)
 *     ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x180105BEC (-SetSize@CVisualProxy@@QEAAJNN@Z.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18010DE28 (-IsVailContainer@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CTopLevelWindow *this)
{
  int v2; // ebx
  unsigned int v3; // edi
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __m128i **v9; // rdi
  __int64 v10; // rdx
  int v11; // ebx
  int v12; // ebx
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v16; // rdi
  struct CVisualProxy *v17; // rcx
  int v18; // eax
  struct CClientArea *v19; // rdx
  int inserted; // eax
  int updated; // eax
  CTopLevelWindow *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int cxLeftWidth; // r11d
  unsigned int cyTopHeight; // r8d
  unsigned __int64 v27; // xmm0_8
  __int64 v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // ecx
  float v31; // xmm2_4
  unsigned __int64 v32; // r10
  int v33; // eax
  CHolographicSlate *v34; // rcx
  signed int v35; // r8d
  signed int v36; // edx
  int v37; // eax
  int v38; // eax
  LONG v39; // ecx
  LONG v40; // edx
  LONG v41; // eax
  LONG v42; // eax
  int v43; // ebx
  int v44; // edi
  int v45; // eax
  int v46; // eax
  struct CBaseGeometryProxy *v47; // rbx
  CBaseObject *v48; // rcx
  unsigned int v49; // [rsp+20h] [rbp-49h]
  struct CClientArea *v50; // [rsp+30h] [rbp-39h] BYREF
  struct tagRECT v51; // [rsp+38h] [rbp-31h] BYREF
  struct _MARGINS v52; // [rsp+48h] [rbp-21h] BYREF
  struct CBaseGeometryProxy *v53; // [rsp+58h] [rbp-11h] BYREF
  struct _MARGINS v54; // [rsp+60h] [rbp-9h] BYREF
  struct _MARGINS v55; // [rsp+70h] [rbp+7h] BYREF
  struct _MARGINS v56; // [rsp+80h] [rbp+17h] BYREF
  __int128 v57; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = 0;
  if ( !*((_QWORD *)this + 65) )
  {
    v16 = *((_QWORD *)this + 94);
    v17 = *(struct CVisualProxy **)(v16 + 144);
    if ( v17 )
    {
      v50 = 0LL;
      v18 = CClientArea::Create(v17, &v50);
      v2 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\clientarea.cpp",
          (const char *)(unsigned int)v18,
          v49);
        Microsoft::WRL::ComPtr<CDCompositionInteropVisual>::~ComPtr<CDCompositionInteropVisual>(&v50);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x896u, 0LL);
        v3 = v2;
        goto LABEL_20;
      }
      *((_QWORD *)v50 + 31) = v16;
      v19 = v50;
      v50 = 0LL;
      *((_QWORD *)this + 65) = v19;
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 73) + 32LL),
                   (unsigned __int64)v19,
                   0LL,
                   1u,
                   v49);
      v2 = inserted;
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x899u, 0LL);
        goto LABEL_20;
      }
      v56 = 0LL;
      CVisual::SetInsetFromParent(*((CVisual **)this + 65), &v56);
      if ( (*((_BYTE *)this + 248) & 4) != 0 )
      {
        updated = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
        v2 = updated;
        v3 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x8A0u, 0LL);
          goto LABEL_20;
        }
      }
    }
  }
  v3 = v2;
  if ( v2 < 0 )
  {
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x147Cu, 0LL);
    return v3;
  }
  v4 = *((_QWORD *)this + 65);
  if ( !v4 )
    return v3;
  v5 = 0;
  v6 = *(_QWORD *)(v4 + 248);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 24);
    if ( v7 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v7 + 384LL))(
             v7,
             v6 + 216,
             v6 + 232,
             v6 + 248);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xA2u, 0LL);
        v3 = v5;
        goto LABEL_28;
      }
    }
  }
  v3 = v5;
  if ( v5 < 0 )
  {
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1481u, 0LL);
    return v3;
  }
  if ( *((_QWORD *)this + 106) )
  {
    if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 6 && IsVailContainer() )
    {
      v22 = this;
      v9 = (__m128i **)((char *)this + 752);
      v23 = *(_QWORD *)(*((_QWORD *)this + 94) + 480LL);
      if ( v23 )
        v22 = *(CTopLevelWindow **)(v23 + 24);
      CTopLevelWindow::GetFrameMargins(v22, &v52);
      v57 = *(_OWORD *)(*((_QWORD *)v22 + 94) + 48LL);
    }
    else
    {
      v9 = (__m128i **)((char *)this + 752);
      v57 = *(_OWORD *)(*((_QWORD *)this + 94) + 48LL);
      if ( (*((_BYTE *)this + 248) & 4) != 0 )
        v52 = *(struct _MARGINS *)((char *)this + 676);
      else
        CTopLevelWindow::GetFrameMargins(this, &v52);
    }
    LODWORD(v57) = v52.cxLeftWidth + v57;
    DWORD1(v57) += v52.cyTopHeight;
    DWORD2(v57) -= v52.cxRightWidth;
    HIDWORD(v57) -= v52.cyBottomHeight;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 106) + 40LL))(*((_QWORD *)this + 106), &v57);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                          + 32LL)
                                            + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 6)
                                                               + 32LL));
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x14B9u, 0LL);
      return (unsigned int)v11;
    }
  }
  else
  {
    v9 = (__m128i **)((char *)this + 752);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 65) + 16LL) + 16LL);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10 + 16) + 304LL))(
          *(_QWORD *)(v10 + 16),
          *(unsigned int *)(v10 + 24));
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x14BFu, 0LL);
    return (unsigned int)v11;
  }
  if ( *((_QWORD *)this + 100) )
  {
    cxLeftWidth = 0;
    cyTopHeight = 0;
    if ( *((_BYTE *)this + 792) )
    {
      CTopLevelWindow::GetFrameMargins(this, &v54);
      cxLeftWidth = v54.cxLeftWidth;
      cyTopHeight = v54.cyTopHeight;
      v27 = _mm_srli_si128((*v9)[3], 8).m128i_u64[0];
      v28 = (*v9)[3].m128i_i64[0];
      v29 = v27 - v54.cxRightWidth - v28 - v54.cxLeftWidth;
      v30 = HIDWORD(v27) - HIDWORD(v28) - v54.cyBottomHeight - v54.cyTopHeight;
    }
    else
    {
      v31 = *(float *)&(*v9)[20].m128i_i32[3];
      v32 = _mm_srli_si128(*(__m128i *)((char *)*v9 + 232), 8).m128i_u64[0];
      v29 = (int)(float)((float)(int)(v32 - (*v9)[14].m128i_i64[1]) * v31);
      v30 = (int)(float)((float)(int)(HIDWORD(v32) - HIDWORD((*v9)[14].m128i_i64[1])) * v31);
    }
    v33 = CIndirectSwapchainRenderTargetProxy::UpdateTargetBounds(
            *((CIndirectSwapchainRenderTargetProxy **)this + 100),
            cxLeftWidth,
            cyTopHeight,
            v29,
            v30);
    v11 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x1758u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x14C2u, 0LL);
      return (unsigned int)v11;
    }
  }
  v12 = 0;
  if ( (*((_BYTE *)this + 249) & 2) != 0 )
  {
    v34 = (CHolographicSlate *)*((_QWORD *)this + 101);
    if ( v34 )
    {
      v35 = (*v9)[15].m128i_i32[1] - (*v9)[14].m128i_i32[3];
      if ( v35 < 0 )
        v35 = 0;
      v36 = (*v9)[15].m128i_i32[0] - (*v9)[14].m128i_i32[2];
      if ( v36 < 0 )
        v36 = 0;
      v37 = CHolographicSlate::SetSize(v34, v36, v35);
      v12 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x1E5u, 0LL);
        v13 = v12;
        goto LABEL_56;
      }
    }
  }
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = *((_QWORD *)this + 103);
    if ( !v14 )
      return 0;
    v38 = CVisualProxy::SetSize(
            *(CVisualProxy **)(v14 + 16),
            (double)((*v9)[3].m128i_i32[2] - (*v9)[3].m128i_i32[0]),
            (double)((*v9)[3].m128i_i32[3] - (*v9)[3].m128i_i32[1]));
    v11 = v38;
    if ( v38 >= 0 )
    {
      if ( (*((_BYTE *)this + 248) & 4) != 0 )
      {
        v39 = *((_DWORD *)this + 169);
        v51.left = v39;
        v40 = *((_DWORD *)this + 171);
        v51.top = v40;
        v41 = *((_DWORD *)this + 32) - *((_DWORD *)this + 170);
        if ( v39 > v41 )
          v41 = v39;
        v51.right = v41;
        v42 = *((_DWORD *)this + 33) - *((_DWORD *)this + 172);
        if ( v40 > v42 )
          v42 = v40;
      }
      else
      {
        v43 = (*v9)[3].m128i_i32[2] - (*v9)[3].m128i_i32[0];
        v44 = (*v9)[3].m128i_i32[3] - (*v9)[3].m128i_i32[1];
        CTopLevelWindow::GetFrameMargins(this, &v55);
        v51.left = v55.cxLeftWidth;
        v51.top = v55.cyTopHeight;
        v45 = 0;
        if ( v43 >= 0 )
          v45 = v43;
        v51.right = v45 - v55.cxRightWidth;
        v46 = 0;
        if ( v44 >= 0 )
          v46 = v44;
        v42 = v46 - v55.cyBottomHeight;
      }
      v51.bottom = v42;
      v53 = 0LL;
      v38 = ResourceHelper::CreateRectangleGeometry(&v51, &v53);
      v11 = v38;
      if ( v38 >= 0 )
      {
        v47 = v53;
        CVisualProxy::SetClip(*(CVisualProxy **)(*((_QWORD *)this + 103) + 16LL), v53);
        v48 = (CBaseObject *)*((_QWORD *)this + 104);
        if ( v48 )
          CBaseObject::Release(v48);
        *((_QWORD *)this + 104) = v47;
        if ( v47 )
          _InterlockedIncrement((volatile signed __int32 *)v47 + 2);
        return 0;
      }
      v24 = 6305LL;
    }
    else
    {
      v24 = 6273LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v38,
      v49);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x14C6u, 0LL);
    return (unsigned int)v11;
  }
LABEL_56:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x14C4u, 0LL);
  return v13;
}
