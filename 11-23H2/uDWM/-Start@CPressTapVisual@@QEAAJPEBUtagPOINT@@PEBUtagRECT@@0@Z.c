/*
 * XREFs of ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800CD598
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800B032C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800279CC (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800354E0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180051BE4 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18005398C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800539C8 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800548C0 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x18005D4E4 (_o_sqrtf_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006EA9E (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800CD940 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPressTapVisual::Start(
        CPressTapVisual *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        const struct tagPOINT *a4)
{
  struct tagPOINT v8; // r8
  int v9; // edx
  int BoundedContactWidth; // eax
  struct tagPOINT v11; // r8
  int v12; // edx
  CContactManager *v13; // rcx
  int v14; // eax
  float v15; // xmm2_4
  CVisual *v16; // rcx
  float v17; // xmm0_4
  LONG v18; // edi
  LONG v19; // ebp
  float v20; // xmm2_4
  CVisual *v21; // rcx
  LONG v22; // ebx
  LONG v23; // esi
  int v24; // esi
  int v25; // ebx
  int v26; // ebp
  int v27; // edi
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm1_4
  __int64 v31; // rax
  bool v32; // zf
  char v33; // al
  __int64 v34; // rax
  _QWORD *v35; // r8
  int v36; // edi
  unsigned int v37; // eax
  struct tagSIZE v39; // [rsp+30h] [rbp-38h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmPressTapVisual_Start,
      (__int64)a3,
      1LL,
      (__int64)&v39);
  v8 = *a2;
  *((struct tagPOINT *)this + 39) = *a2;
  *((struct tagPOINT *)this + 40) = *a4;
  v9 = a3->right - a3->left;
  *((_DWORD *)this + 84) = v9;
  *((_DWORD *)this + 85) = a3->bottom - a3->top;
  BoundedContactWidth = CContactManager::GetBoundedContactWidth(this, v9, v8);
  v11 = (struct tagPOINT)*((_QWORD *)this + 39);
  v12 = *((_DWORD *)this + 85);
  *((_DWORD *)this + 84) = BoundedContactWidth;
  v14 = CContactManager::GetBoundedContactWidth(v13, v12, v11);
  v15 = *((float *)this + 95);
  v16 = (CVisual *)*((_QWORD *)this + 44);
  v17 = (float)*((int *)this + 84);
  *((_DWORD *)this + 85) = v14;
  v18 = (int)(float)(v17 * v15);
  v19 = (int)(float)((float)v14 * v15);
  if ( v18 < 1 )
    v18 = 1;
  v39.cx = v18;
  if ( v19 < 1 )
    v19 = 1;
  v39.cy = v19;
  CVisual::SetSize(v16, &v39);
  v20 = *((float *)this + 97);
  v21 = (CVisual *)*((_QWORD *)this + 45);
  v22 = (int)(float)((float)*((int *)this + 86) * v20);
  v23 = (int)(float)((float)*((int *)this + 87) * v20);
  if ( v22 < 1 )
    v22 = 1;
  v39.cx = v22;
  if ( v23 < 1 )
    v23 = 1;
  v39.cy = v23;
  CVisual::SetSize(v21, &v39);
  CImage::SetBitmapSource(*((CImage **)this + 44), *((struct CBitmapSource **)this + 38));
  CImage::SetBitmapSource(*((CImage **)this + 45), *((struct CBitmapSource **)this + 38));
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 44), *((_DWORD *)this + 78) - v18 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 44), *((_DWORD *)this + 79) - v19 / 2);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 45), *((_DWORD *)this + 80) - v22 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 45), *((_DWORD *)this + 81) - v23 / 2);
  v24 = *((_DWORD *)this + 80);
  v25 = *((_DWORD *)this + 78) - v24;
  v26 = *((_DWORD *)this + 81);
  v27 = *((_DWORD *)this + 79) - v26;
  v28 = o_sqrtf_0((float)(v25 * v25 + v27 * v27));
  *((_QWORD *)this + 41) = *((_QWORD *)this + 39);
  v29 = (float)*((int *)this + 101);
  if ( v28 > v29 )
  {
    v30 = v29 / v28;
    *((_DWORD *)this + 82) = v24 + (int)(float)((float)v25 * v30);
    *((_DWORD *)this + 83) = v26 + (int)(float)((float)v27 * v30);
  }
  v31 = *((_QWORD *)this + 51);
  if ( v31 )
  {
    v32 = (*(_DWORD *)(v31 + 8))-- == 1;
    v33 = CDesktopManager::s_fTimelineDirty;
    if ( v32 )
      v33 = 1;
    *((_QWORD *)this + 51) = 0LL;
    CDesktopManager::s_fTimelineDirty = v33;
  }
  v34 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          120LL);
  v39 = (struct tagSIZE)v34;
  if ( !v34 )
  {
    *((_QWORD *)this + 51) = 0LL;
    goto LABEL_23;
  }
  CTimelineBase::CTimelineBase(v34, *((float *)this + 92), 0.0, 1.0, 0);
  *v35 = &CTimeline<float>::`vftable';
  *((_QWORD *)this + 51) = v35;
  if ( !v35 )
  {
LABEL_23:
    v36 = -2147024882;
    v37 = 147;
    goto LABEL_24;
  }
  v36 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v36 < 0 )
  {
    v37 = 148;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, v37);
    CPressTapVisual::Stop(this);
    return (unsigned int)v36;
  }
  CVisual::SetOpacity(this, 1.0);
  return (unsigned int)v36;
}
