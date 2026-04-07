/*
 * XREFs of ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180054100
 * Callers:
 *     ?_WindowEnumCallback@CInputView@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180051120 (-_WindowEnumCallback@CInputView@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D8350 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D88F0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponent@@@Z @ 0x180053BE4 (-_CreateAndAddAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAPEAVCAnimationComponen.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800D5400 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSlide::_SlideWindowVertically(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 (__fastcall *v9)(CSlide *, __int64); // rax
  int v12; // eax
  int v13; // eax
  int v14; // esi
  LONG top; // r11d
  LONG bottom; // r8d
  CMILRefCountBase *v17; // rbx
  unsigned __int64 v18; // r9
  int v19; // edx
  int v20; // ecx
  int v21; // r11d
  int v22; // r8d
  bool v23; // cc
  struct tagRECT *p_rc; // rcx
  int v25; // eax
  struct tagRECT *v26; // rax
  CMILRefCountBase *v28; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v29; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-20h] BYREF

  v5 = *(_QWORD *)this;
  v7 = *((unsigned int *)a2 + 186);
  v28 = 0LL;
  v9 = *(__int64 (__fastcall **)(CSlide *, __int64))(v5 + 112);
  v29 = 0LL;
  rc = 0LL;
  v12 = v9(this, v7);
  v13 = CStoryboard::_CreateAndAddAnimationComponent(this, a2, 1, v12, &v28);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x17Fu, 0LL);
    v17 = v28;
    if ( v28 )
      CStoryboard::_RemoveAnimationComponent(this, v28);
  }
  else
  {
    top = a3->top;
    bottom = a3->bottom;
    v17 = v28;
    v29 = *(struct tagRECT *)((char *)v28 + 88);
    rc = v29;
    v18 = HIDWORD(_mm_srli_si128((__m128i)v29, 8).m128i_u64[0]);
    v19 = v29.top - top;
    if ( top - v29.top > 0 )
      v19 = top - v29.top;
    v20 = v18 - bottom;
    if ( (int)v18 - bottom < 0 )
      v20 = bottom - v18;
    v21 = top - v18;
    v22 = bottom - v29.top;
    v23 = v20 < v19;
    p_rc = &v29;
    if ( !v23 )
      v22 = v21;
    if ( !a4 )
      p_rc = &rc;
    OffsetRect(p_rc, 0, v22);
    v25 = *((_DWORD *)a2 + 186);
    if ( (v25 & 0x1000000) != 0 )
      v29 = *(struct tagRECT *)((char *)a2 + 764);
    if ( (v25 & 0x800000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 796);
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v17 + 5), &v29);
    CAnimatedTransitionVisual::SetEndRect(*((CAnimatedTransitionVisual **)v17 + 5), &rc);
    v26 = &v29;
    if ( a4 )
      v26 = &rc;
    *(struct tagRECT *)((char *)v17 + 88) = *v26;
  }
  if ( a5 )
  {
    if ( v14 < 0 )
    {
      *a5 = 0LL;
    }
    else
    {
      *a5 = v17;
      if ( !v17 )
        return (unsigned int)v14;
      CMILRefCountBase::AddRef(v17);
    }
  }
  if ( v17 )
    CBaseObject::Release(v17);
  return (unsigned int)v14;
}
