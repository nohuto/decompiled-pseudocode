/*
 * XREFs of ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800A1AA4
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x1800659E4 (-StartTransition@CAccent@@QEAAJXZ.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180020554 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800205B0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180046174 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x180046894 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180087274 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?CleanupAnimation@CAccentTransition@@QEAAXXZ @ 0x1800A19EC (-CleanupAnimation@CAccentTransition@@QEAAXXZ.c)
 *     ??0CAccentTransitionAnimatedVisual@@QEAA@PEAVCAccent@@H@Z @ 0x1800A1D48 (--0CAccentTransitionAnimatedVisual@@QEAA@PEAVCAccent@@H@Z.c)
 *     ?SetBeginRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z @ 0x1800A1F24 (-SetBeginRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?SetEndRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z @ 0x1800A1F34 (-SetEndRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAccentTransition::StartAnimation(
        CAccentTransition *this,
        const struct ACCENT_POLICY *a2,
        struct CAccent *a3)
{
  CAccentTransitionAnimatedVisual *v6; // rsi
  CAnimationEngine *v7; // rax
  CAnimationEngine *v8; // r15
  int started; // ebx
  unsigned int v10; // ecx
  const struct std::nothrow_t *v11; // rdx
  CAccentTransitionAnimatedVisual *v12; // rax
  int v13; // edx
  CAccentTransitionAnimatedVisual *v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // eax
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+30h] [rbp-50h] BYREF
  void *v19[2]; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+4Ch] [rbp-34h]
  unsigned int v21; // [rsp+50h] [rbp-30h]
  struct tagRECT si128; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-18h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *((_QWORD *)this + 3) = a3;
  if ( a3 )
    CMILRefCountBase::AddRef(a3);
  *((_BYTE *)this + 32) = 1;
  v6 = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v19);
  v7 = CDesktopManager::AcquireAnimationEngine();
  v8 = v7;
  if ( !v7 )
  {
    started = -2147024882;
    v10 = 35;
    goto LABEL_26;
  }
  started = CAnimationEngine::RegisterForAnimationCompleteNotification(v7, this);
  if ( started < 0 )
  {
    v10 = 36;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v10, 0LL);
    CAccentTransition::CleanupAnimation(this);
    if ( !v8 )
      goto LABEL_28;
    goto LABEL_27;
  }
  v12 = (CAccentTransitionAnimatedVisual *)operator new[](0x48uLL, v11);
  *(_QWORD *)&rc.left = v12;
  if ( !v12 )
  {
    v6 = 0LL;
    goto LABEL_24;
  }
  v6 = CAccentTransitionAnimatedVisual::CAccentTransitionAnimatedVisual(
         v12,
         *((struct CAccent **)this + 3),
         *((_DWORD *)a2 + 3));
  if ( !v6 )
  {
LABEL_24:
    started = -2147024882;
    v10 = 37;
    goto LABEL_26;
  }
  if ( *((_DWORD *)a2 + 3) == 5 )
  {
    v13 = (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 52) * 81.0);
    if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 552LL) )
      v13 = -v13;
    si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm);
    rc = si128;
    OffsetRect(&rc, v13, 0);
    CAccentTransitionAnimatedVisual::SetBeginRect(v6, &si128);
    CAccentTransitionAnimatedVisual::SetEndRect(v14, &rc);
  }
  *(_QWORD *)&rc.left = v6;
  v15 = v21 + 1;
  if ( v21 + 1 < v21 )
  {
    started = -2147024362;
    v16 = 179;
    goto LABEL_22;
  }
  if ( v15 <= v20 )
  {
    *((_QWORD *)v19[0] + v21) = v6;
    v21 = v15;
    goto LABEL_15;
  }
  started = DynArrayImpl<0>::AddMultipleAndSet((__int64)v19, 8, 1, &rc);
  if ( started < 0 )
  {
    v16 = 190;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, v16, 0LL);
    v10 = 50;
    goto LABEL_26;
  }
LABEL_15:
  started = CAnimationEngine::ScheduleStartAnimation(
              v8,
              (const struct std::nothrow_t *)0x4A,
              (__int64)v19,
              (unsigned int *)this + 9);
  if ( started < 0 )
  {
    v10 = 54;
    goto LABEL_26;
  }
  started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
  if ( started < 0 )
  {
    v10 = 56;
    goto LABEL_26;
  }
LABEL_27:
  CAnimationEngine::Release(v8);
LABEL_28:
  if ( v6 )
    CBaseObject::Release((CAccentTransitionAnimatedVisual *)((char *)v6 + 8));
  DynArrayImpl<0>::~DynArrayImpl<0>(v19);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return (unsigned int)started;
}
