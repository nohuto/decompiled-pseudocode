/*
 * XREFs of ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180019294
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180018FB4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18003DE40 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x1800A0AF0 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800EA3E4 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 * Callees:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000AD88 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x18000B27C (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800177D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180019608 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEBAMXZ @ 0x18001966C (-_GetSolidFillOpacity@CAccent@@IEBAMXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800196A8 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x1800198D0 (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x180019910 (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x18009EA5C (-Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800A126C (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A1FA4 (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAccent::UpdateAccentPolicy(
        CAccent *this,
        const struct tagRECT *a2,
        __m128i *a3,
        struct CBaseGeometryProxy *a4)
{
  __m128i v8; // xmm6
  int v9; // ebx
  char v10; // al
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  unsigned int v14; // edx
  CBaseObject *v15; // rcx
  int v16; // eax
  float v17; // xmm2_4
  int v18; // eax
  float SolidFillOpacity; // xmm0_4
  int updated; // eax
  unsigned int v21; // ebx
  VisualCollection *v22; // rsi
  struct CVisual *v23; // rdx
  int v24; // eax
  int v26; // edx
  int v27; // eax
  int v28; // eax
  struct CVisual *v29; // rdx
  CBaseObject *v30; // rcx
  CAccentTransition *v31; // rcx
  __int64 v32; // rdx
  CBaseObject *v33; // rcx
  CBaseObject *v34; // rcx
  unsigned __int64 v35; // r9
  __int64 v36; // rdx
  int v37; // eax
  CBaseObject *v38; // rcx
  CBaseObject *v39; // rcx
  int v40; // [rsp+20h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+30h] [rbp-48h] BYREF
  struct _MARGINS v42; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v41 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v42 = 0LL;
  CVisual::SetInsetFromParent(this, &v42);
  *(struct tagRECT *)((char *)this + 584) = *a2;
  if ( (a3->m128i_i8[4] & 4) != 0 )
  {
    v26 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 100);
    v27 = 0;
    if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 99) >= 0 )
      v27 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 99);
    *((_DWORD *)this + 148) = *((_DWORD *)this + 146) + v27;
    v28 = 0;
    if ( v26 >= 0 )
      v28 = v26;
    *((_DWORD *)this + 149) = *((_DWORD *)this + 147) + v28;
    CDesktopManager::SetBackStop(this);
  }
  v8 = *a3;
  v42 = (struct _MARGINS)v8;
  v9 = _mm_cvtsi128_si32(v8);
  if ( (unsigned int)(v9 - 2) <= 1 )
    goto LABEL_3;
  if ( v9 == 4 )
    goto LABEL_65;
  if ( v9 == 5 )
  {
LABEL_3:
    if ( v9 != 4 )
    {
LABEL_4:
      v10 = 1;
LABEL_5:
      if ( (*((_BYTE *)this + 292) & 2) != 0 && v10 )
      {
        VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
        v11 = (CBaseObject *)*((_QWORD *)this + 41);
        if ( v11 )
        {
          CBaseObject::Release(v11);
          *((_QWORD *)this + 41) = 0LL;
        }
        v12 = (CBaseObject *)*((_QWORD *)this + 42);
        if ( v12 )
        {
          CBaseObject::Release(v12);
          *((_QWORD *)this + 42) = 0LL;
        }
        v13 = (CBaseObject *)*((_QWORD *)this + 43);
        if ( v13 )
        {
          CBaseObject::Release(v13);
          *((_QWORD *)this + 43) = 0LL;
        }
      }
      *((__m128i *)this + 18) = v8;
      v14 = *((_DWORD *)this + 74);
      *((_DWORD *)this + 90) = v14;
      if ( (*((_BYTE *)this + 292) & 1) != 0 )
        CAccent::_UpdateAccentBackground(this, v14);
      v15 = (CBaseObject *)*((_QWORD *)this + 43);
      if ( (unsigned int)(*((_DWORD *)this + 72) - 3) <= 1 )
      {
        if ( v15
          || (updated = CAccentAcrylicBlurBehind::Create((struct CAccentAcrylicBlurBehind **)this + 43),
              v21 = updated,
              updated >= 0) )
        {
          (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
LABEL_23:
          (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x4000LL);
          v22 = (CAccent *)((char *)this + 32);
          goto LABEL_24;
        }
        v32 = 1016LL;
      }
      else
      {
        if ( v15 )
        {
          CBaseObject::Release(v15);
          *((_QWORD *)this + 43) = 0LL;
        }
        VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
        v16 = 0;
        if ( *((_DWORD *)this + 149) - *((_DWORD *)this + 147) >= 0 )
          v16 = *((_DWORD *)this + 149) - *((_DWORD *)this + 147);
        v17 = (float)v16;
        v18 = 0;
        if ( *((_DWORD *)this + 148) - *((_DWORD *)this + 146) >= 0 )
          v18 = *((_DWORD *)this + 148) - *((_DWORD *)this + 146);
        v42.cxLeftWidth = 0;
        v42.cxRightWidth = 0;
        *(float *)&v42.cyTopHeight = (float)v18 + 0.0;
        *(float *)&v42.cyBottomHeight = v17 + 0.0;
        SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
        updated = CAccent::_UpdateSolidFill(this, this, *((unsigned int *)this + 90), &v42, LODWORD(SolidFillOpacity));
        v21 = updated;
        if ( updated >= 0 )
          goto LABEL_23;
        v32 = 1038LL;
      }
LABEL_61:
      v35 = (unsigned int)updated;
      goto LABEL_64;
    }
LABEL_65:
    v10 = 0;
    if ( *((_DWORD *)this + 72) == v9 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 320) )
  {
    v31 = (CAccentTransition *)*((_QWORD *)this + 46);
    if ( v31 )
      CAccentTransition::StopAnimation(v31);
    v42.cyBottomHeight = 0;
    v8 = (__m128i)v42;
  }
  if ( v9 != *((_DWORD *)this + 72)
    || _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) != *((_DWORD *)this + 73)
    || _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) != *((_DWORD *)this + 74) )
  {
    *((__m128i *)this + 19) = v8;
    *((_BYTE *)this + 320) = 1;
    updated = CAccent::StartTransition(this);
    v21 = updated;
    if ( updated < 0 )
    {
      v32 = 970LL;
      goto LABEL_61;
    }
  }
  (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  v22 = (CAccent *)((char *)this + 32);
  if ( (*((_BYTE *)this + 292) & 2) != 0 )
  {
    VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
    v33 = (CBaseObject *)*((_QWORD *)this + 41);
    if ( v33 )
    {
      CBaseObject::Release(v33);
      *((_QWORD *)this + 41) = 0LL;
    }
    v34 = (CBaseObject *)*((_QWORD *)this + 42);
    if ( v34 )
    {
      CBaseObject::Release(v34);
      *((_QWORD *)this + 42) = 0LL;
    }
  }
  v29 = (struct CVisual *)*((_QWORD *)this + 43);
  if ( v29 )
  {
    if ( *((_QWORD *)v29 + 3) )
    {
      updated = VisualCollection::Remove((CAccent *)((char *)this + 32), v29);
      v21 = updated;
      if ( updated < 0 )
      {
        v32 = 985LL;
        goto LABEL_61;
      }
    }
  }
  v30 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v30 )
  {
    CBaseObject::Release(v30);
    *((_QWORD *)this + 43) = 0LL;
  }
LABEL_24:
  if ( (*((_BYTE *)this + 292) & 0xE0) != 0 )
  {
    updated = CAccent::_EnsureBorderShadowAtlas(this);
    v21 = updated;
    if ( updated >= 0 )
    {
      (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 2LL);
      goto LABEL_26;
    }
    v32 = 1046LL;
    goto LABEL_61;
  }
  v23 = (struct CVisual *)*((_QWORD *)this + 49);
  if ( v23 )
  {
    v37 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 50) + 32LL), v23);
    v21 = v37;
    if ( v37 >= 0 )
    {
      v37 = VisualCollection::Remove(v22, *((struct CVisual **)this + 50));
      v21 = v37;
      if ( v37 >= 0 )
      {
        v38 = (CBaseObject *)*((_QWORD *)this + 50);
        if ( v38 )
        {
          CBaseObject::Release(v38);
          *((_QWORD *)this + 50) = 0LL;
        }
        v39 = (CBaseObject *)*((_QWORD *)this + 49);
        if ( v39 )
        {
          CBaseObject::Release(v39);
          *((_QWORD *)this + 49) = 0LL;
        }
        goto LABEL_26;
      }
      v36 = 914LL;
    }
    else
    {
      v36 = 913LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v37,
      v40);
    v35 = v21;
    v32 = 1051LL;
LABEL_64:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)v35,
      v40);
    goto LABEL_29;
  }
LABEL_26:
  v24 = *((_DWORD *)this + 73);
  if ( (v24 & 0x10) != 0 )
  {
    CAccent::SetClipRegion(this, a4);
  }
  else if ( (v24 & 0x200) != 0 && *((_QWORD *)this + 48) )
  {
    (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x8000LL);
  }
  v21 = 0;
LABEL_29:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v41);
  return v21;
}
