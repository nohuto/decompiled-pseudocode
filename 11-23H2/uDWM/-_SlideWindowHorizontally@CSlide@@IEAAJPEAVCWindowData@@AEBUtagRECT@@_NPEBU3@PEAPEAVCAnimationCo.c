/*
 * XREFs of ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800DE454
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E2330 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E28D0 (-_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180013CEC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180014624 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800DE03C (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CSlide::_SlideWindowHorizontally(
        CSlide *this,
        struct CWindowData *a2,
        const struct tagRECT *a3,
        char a4,
        __m128i *a5,
        struct CAnimationComponent **a6)
{
  __m128i *v6; // rdi
  __int64 v8; // rax
  int v11; // eax
  int v12; // eax
  int v13; // r14d
  CBaseObject *v14; // rbx
  int v15; // r8d
  LONG right; // edi
  __int64 v17; // kr00_8
  int v18; // r9d
  int v19; // edi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r8d
  __int64 v24; // r9
  __int64 v25; // rcx
  struct tagRECT *p_rc; // rcx
  __int64 v27; // rax
  CVisual *v28; // rcx
  int v29; // eax
  CBaseObject *v31; // [rsp+50h] [rbp-29h] BYREF
  const struct tagRECT *v32; // [rsp+58h] [rbp-21h]
  struct tagRECT v33; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-9h] BYREF

  v6 = a5;
  v8 = *(_QWORD *)this;
  v31 = 0LL;
  v32 = a3;
  v11 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(v8 + 112))(this, *((unsigned int *)a2 + 170));
  v12 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v11, 0LL, 0LL, -1, 1, &v31);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x118u);
    v14 = v31;
    if ( v31 )
      CStoryboard::_RemoveAnimationComponent(this, (struct CVisual **)v31);
    goto LABEL_29;
  }
  v14 = v31;
  if ( !a5 )
    v6 = (__m128i *)((char *)v31 + 88);
  v15 = _mm_cvtsi128_si32(*v6);
  v33 = (struct tagRECT)*v6;
  right = v32->right;
  v17 = v32->left - v15;
  rc = v33;
  v18 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v33, 8));
  if ( (int)abs32(right - v18) >= (int)((HIDWORD(v17) ^ v17) - HIDWORD(v17)) )
    v19 = v32->left - v18;
  else
    v19 = right - v15;
  v20 = *((_DWORD *)a2 + 170) & 0xFFF;
  if ( a4 )
  {
    if ( v20 == 42 )
    {
      v21 = 0LL;
      v22 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
      v23 = *(_DWORD *)(v22 + 40);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v22 + 16);
        while ( 1 )
        {
          v25 = *(_QWORD *)(v24 + 8 * v21);
          if ( *(_DWORD *)(v25 + 72) == 16 && *(_DWORD *)(v25 + 24) != 4 )
            break;
          v21 = (unsigned int)(v21 + 1);
          if ( (unsigned int)v21 >= v23 )
            goto LABEL_18;
        }
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
        v19 -= *(_DWORD *)(v25 + 128);
        CStoryboard::Release((CStoryboard *)v25);
        v14 = v31;
      }
    }
LABEL_18:
    if ( (*((_DWORD *)a2 + 170) & 0x1000000) != 0 )
    {
      v33 = *(struct tagRECT *)((char *)a2 + 700);
      goto LABEL_27;
    }
    p_rc = &v33;
  }
  else
  {
    if ( v20 == 24 )
      *((_DWORD *)this + 32) = v19;
    if ( (*((_DWORD *)a2 + 170) & 0x800000) != 0 )
    {
      rc = *(struct tagRECT *)((char *)a2 + 732);
      goto LABEL_27;
    }
    p_rc = &rc;
  }
  OffsetRect(p_rc, v19, 0);
LABEL_27:
  CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v14 + 5), &v33);
  v27 = *((_QWORD *)v14 + 5);
  v28 = (CVisual *)(v27 + 8);
  *(struct tagRECT *)(v27 + 872) = rc;
  v29 = *(_DWORD *)(v27 + 96);
  if ( (v29 & 0x1000) == 0 )
  {
    *((_DWORD *)v28 + 22) = v29 | 0x1000;
    CVisual::PropagateDirtyChildren(v28);
  }
LABEL_29:
  if ( a6 )
  {
    if ( v13 < 0 )
    {
      *a6 = 0LL;
    }
    else
    {
      *a6 = v14;
      if ( !v14 )
        return (unsigned int)v13;
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
      v14 = v31;
    }
  }
  if ( v14 )
    CBaseObject::Release(v14);
  return (unsigned int)v13;
}
