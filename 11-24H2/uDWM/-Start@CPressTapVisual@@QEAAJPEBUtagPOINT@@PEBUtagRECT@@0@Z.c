/*
 * XREFs of ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800CA5F4
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18000B658 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18000F80C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x18000F838 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18000F87C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18001066C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180015BD0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001B720 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094FF0 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800950D4 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x18009C4A4 (_o_sqrtf_0.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800CA970 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPressTapVisual::Start(
        CPressTapVisual *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        const struct tagPOINT *a4)
{
  struct tagPOINT v8; // r8
  signed int v9; // edx
  int BoundedContactWidth; // eax
  struct tagPOINT v11; // r8
  signed int v12; // edx
  CContactManager *v13; // rcx
  int v14; // eax
  float v15; // xmm2_4
  __m128i v16; // xmm0
  CVisual *v17; // rcx
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
  CTimelineBase *v31; // rcx
  CBaseObject *v32; // rax
  _QWORD *v33; // rax
  int v34; // ebx
  unsigned int v35; // eax
  struct tagSIZE v37; // [rsp+30h] [rbp-48h] BYREF
  struct tagSIZE v38; // [rsp+38h] [rbp-40h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmPressTapVisual_Start,
      (__int64)a3,
      1LL,
      (__int64)&v38);
  v8 = *a2;
  *((struct tagPOINT *)this + 33) = *a2;
  *((struct tagPOINT *)this + 34) = *a4;
  v9 = a3->right - a3->left;
  *((_DWORD *)this + 72) = v9;
  *((_DWORD *)this + 73) = a3->bottom - a3->top;
  BoundedContactWidth = CContactManager::GetBoundedContactWidth(this, v9, v8);
  v11 = (struct tagPOINT)*((_QWORD *)this + 33);
  v12 = *((_DWORD *)this + 73);
  *((_DWORD *)this + 72) = BoundedContactWidth;
  v14 = CContactManager::GetBoundedContactWidth(v13, v12, v11);
  v15 = *((float *)this + 83);
  v16 = _mm_cvtsi32_si128(*((_DWORD *)this + 72));
  v17 = (CVisual *)*((_QWORD *)this + 38);
  v37 = 0LL;
  *((_DWORD *)this + 73) = v14;
  v38 = 0LL;
  v18 = (int)(float)(_mm_cvtepi32_ps(v16).m128_f32[0] * v15);
  v19 = (int)(float)((float)v14 * v15);
  if ( v18 < 1 )
    v18 = 1;
  v37.cx = v18;
  if ( v19 < 1 )
    v19 = 1;
  v37.cy = v19;
  CVisual::SetSize(v17, &v37);
  v20 = *((float *)this + 85);
  v21 = (CVisual *)*((_QWORD *)this + 39);
  v22 = (int)(float)((float)*((int *)this + 74) * v20);
  v23 = (int)(float)((float)*((int *)this + 75) * v20);
  if ( v22 < 1 )
    v22 = 1;
  v38.cx = v22;
  if ( v23 < 1 )
    v23 = 1;
  v38.cy = v23;
  CVisual::SetSize(v21, &v38);
  CImage::SetBitmapSource(*((CImage **)this + 38), *((struct CBitmapSource **)this + 32));
  CImage::SetBitmapSource(*((CImage **)this + 39), *((struct CBitmapSource **)this + 32));
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 38), *((_DWORD *)this + 66) - v18 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 38), *((_DWORD *)this + 67) - v19 / 2);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 39), *((_DWORD *)this + 68) - v22 / 2);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 39), *((_DWORD *)this + 69) - v23 / 2);
  v24 = *((_DWORD *)this + 68);
  v25 = *((_DWORD *)this + 66) - v24;
  v26 = *((_DWORD *)this + 69);
  v27 = *((_DWORD *)this + 67) - v26;
  v28 = o_sqrtf_0((float)(v25 * v25 + v27 * v27));
  *((_QWORD *)this + 35) = *((_QWORD *)this + 33);
  v29 = (float)*((int *)this + 89);
  if ( v28 > v29 )
  {
    v30 = v29 / v28;
    *((_DWORD *)this + 70) = v24 + (int)(float)((float)v25 * v30);
    *((_DWORD *)this + 71) = v26 + (int)(float)((float)v27 * v30);
  }
  v31 = (CTimelineBase *)*((_QWORD *)this + 45);
  if ( v31 )
  {
    CTimelineBase::Release(v31);
    *((_QWORD *)this + 45) = 0LL;
  }
  v32 = (CBaseObject *)DefaultHeap::AllocClear(0x78uLL);
  v38 = (struct tagSIZE)v32;
  if ( !v32 )
  {
    *((_QWORD *)this + 45) = 0LL;
    goto LABEL_21;
  }
  v33 = CTimeline<float>::CTimeline<float>(v32, *((float *)this + 80), 0.0, 1.0, 0);
  *((_QWORD *)this + 45) = v33;
  if ( !v33 )
  {
LABEL_21:
    v34 = -2147024882;
    v35 = 147;
    goto LABEL_22;
  }
  v34 = CTouchVisual::RegisterGlobalTimer(this);
  if ( v34 < 0 )
  {
    v35 = 148;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, v35, 0LL);
    CPressTapVisual::Stop(this);
    return (unsigned int)v34;
  }
  CVisual::SetOpacity(this, 1.0);
  return (unsigned int)v34;
}
