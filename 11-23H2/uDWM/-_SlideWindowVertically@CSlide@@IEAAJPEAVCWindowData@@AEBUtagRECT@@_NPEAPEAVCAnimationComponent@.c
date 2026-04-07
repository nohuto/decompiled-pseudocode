/*
 * XREFs of ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DE6D4
 * Callers:
 *     ?_WindowEnumCallback@CInputView@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1760 (-_WindowEnumCallback@CInputView@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E2330 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E28D0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180013CEC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800DE03C (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindowVertically(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  __int64 v5; // rax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  CBaseObject *v13; // rbx
  LONG top; // r11d
  LONG bottom; // r8d
  __m128i v16; // xmm0
  signed int v17; // ecx
  int v18; // r11d
  __int32 v19; // eax
  int v20; // edx
  int v21; // r8d
  bool v22; // cc
  struct tagRECT *p_rc; // rcx
  int v24; // eax
  __int64 v25; // rax
  CVisual *v26; // rcx
  int v27; // eax
  struct tagRECT *v28; // rax
  CBaseObject *v30; // [rsp+50h] [rbp-21h] BYREF
  struct tagRECT v31; // [rsp+60h] [rbp-11h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-1h] BYREF

  v5 = *(_QWORD *)this;
  v30 = 0LL;
  v10 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(v5 + 112))(this, *((unsigned int *)a2 + 170));
  v11 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v10, 0LL, 0LL, -1, 1, &v30);
  v12 = v11;
  if ( v11 >= 0 )
  {
    top = a3->top;
    bottom = a3->bottom;
    v13 = v30;
    v31 = *(struct tagRECT *)((char *)v30 + 88);
    rc = v31;
    v16 = _mm_srli_si128((__m128i)v31, 8);
    v17 = abs32(top - v31.top);
    v18 = top - v16.m128i_i32[1];
    v19 = bottom - v16.m128i_i32[1];
    v20 = (bottom - v16.m128i_i32[1]) >> 31;
    v21 = bottom - v31.top;
    v22 = (v20 ^ v19) - v20 < v17;
    p_rc = &v31;
    if ( !v22 )
      v21 = v18;
    if ( !a4 )
      p_rc = &rc;
    OffsetRect(p_rc, 0, v21);
    v24 = *((_DWORD *)a2 + 170);
    if ( (v24 & 0x1000000) != 0 )
      v31 = *(struct tagRECT *)((char *)a2 + 700);
    if ( (v24 & 0x800000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 732);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v13 + 5), &v31);
    v25 = *((_QWORD *)v13 + 5);
    v26 = (CVisual *)(v25 + 8);
    *(struct tagRECT *)(v25 + 872) = rc;
    v27 = *(_DWORD *)(v25 + 96);
    if ( (v27 & 0x1000) == 0 )
    {
      *((_DWORD *)v26 + 22) = v27 | 0x1000;
      CVisual::PropagateDirtyChildren(v26);
    }
    v28 = &v31;
    if ( a4 )
      v28 = &rc;
    *(struct tagRECT *)((char *)v13 + 88) = *v28;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x179u);
    v13 = v30;
    if ( v30 )
      CStoryboard::_RemoveAnimationComponent(this, (struct CVisual **)v30);
  }
  if ( a5 )
  {
    if ( v12 < 0 )
    {
      *a5 = 0LL;
    }
    else
    {
      *a5 = v13;
      if ( !v13 )
        return (unsigned int)v12;
      _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
      v13 = v30;
    }
  }
  if ( v13 )
    CBaseObject::Release(v13);
  return (unsigned int)v12;
}
