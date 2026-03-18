/*
 * XREFs of ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180015570
 * Callers:
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800154B0 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARG.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801E0FE8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x18023D804 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180014D94 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800159A0 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180015A70 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x1800163B0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800799C0 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOutputType@CKeyframeAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801EF950 (-SetOutputType@CKeyframeAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetOutputType@CBaseExpression@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801F9980 (-SetOutputType@CBaseExpression@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::SetTarget(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned __int8 a7,
        __int64 a8)
{
  unsigned __int8 v8; // r12
  CResourceWeakRef *v13; // rdi
  CResourceWeakRef *v14; // rcx
  void (*v15)(void); // rax
  bool v16; // cf
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, _QWORD); // rax
  int v19; // eax
  unsigned int v20; // ebp
  void *v21; // rcx
  int v22; // eax
  __int64 (__fastcall *v23)(CResourceWeakRef *); // rax
  char *v25; // rax
  _QWORD *v26; // rdi
  _BYTE *v27; // rax
  unsigned __int8 v28; // cl
  int v29; // eax
  int v30; // eax
  _DWORD *v31; // rax
  _DWORD *v32; // rdx
  int v33; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v8 = a7;
  v13 = 0LL;
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 224) & 2) != 0 )
    {
      v29 = CBaseExpression::NotifyAnimationStateChanged(a1, 8);
      v20 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x83u, 0LL);
        return v20;
      }
    }
    else
    {
      v30 = CBaseExpression::NotifyAnimationStateChanged(a1, 16);
      v20 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x87u, 0LL);
        return v20;
      }
    }
  }
  CBaseExpression::EnsureExpressionIsUnregistered((CBaseExpression *)a1);
  if ( a3 )
  {
    if ( !*(_QWORD *)(a3 + 16) )
    {
      v25 = (char *)MIDL_user_allocate(0x60uLL);
      v26 = v25;
      if ( !v25 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      *((_DWORD *)v25 + 2) = 0;
      *(_QWORD *)v25 = &CMILCOMWeakRef::`vftable';
      InitializeCriticalSection((LPCRITICAL_SECTION)(v25 + 16));
      v26[7] = a3;
      *v26 = &CResourceWeakRef::`vftable';
      v26[8] = a3;
      v26[9] = 0LL;
      v26[10] = 0LL;
      v26[11] = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v26 + 8LL))(v26);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), (signed __int64)v26, 0LL) )
        (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
    }
    v13 = *(CResourceWeakRef **)(a3 + 16);
    (*(void (__fastcall **)(CResourceWeakRef *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  v14 = *(CResourceWeakRef **)(a1 + 192);
  if ( v14 )
  {
    v15 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
    if ( (char *)v15 == (char *)CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::InternalRelease(v14);
    else
      v15();
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  if ( v13 && CWeakReference<CGdiSpriteBitmap>::GetTargetResource(v13) )
  {
    *(_QWORD *)(a1 + 192) = v13;
    v13 = 0LL;
  }
  v16 = *(_QWORD *)(a1 + 192) != 0LL;
  *(_DWORD *)(a1 + 188) = a4;
  v17 = *(_DWORD *)(a1 + 184);
  *(_BYTE *)(a1 + 224) = *(_BYTE *)(a1 + 224) & 0xFD | (v16 ? 2 : 0);
  if ( v17 )
  {
    if ( v17 != a2 )
    {
      v20 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2C0u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x9Du, 0LL);
      goto LABEL_23;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 184) = a2;
  }
  v18 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 280LL);
  if ( v18 == CBaseExpression::SetOutputType )
  {
    v19 = CBaseExpression::SetOutputType(a1, a5);
  }
  else if ( v18 == CKeyframeAnimation::SetOutputType )
  {
    v19 = CKeyframeAnimation::SetOutputType(a1, a5);
  }
  else
  {
    v19 = v18(a1, a5);
  }
  v20 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x9Eu, 0LL);
  }
  else
  {
    v21 = *(void **)(a1 + 200);
    if ( v21 )
    {
      operator delete(v21, 8uLL);
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    if ( !a7 )
      goto LABEL_20;
    if ( a6 == 1 )
    {
      v27 = operator new(0xCuLL);
      if ( v27 )
      {
        *(_DWORD *)v27 = 1;
        v28 = a7;
        if ( a7 >= 5u )
          v28 = 0;
        v27[4] = v28;
        v27[8] = a8;
      }
      else
      {
        v27 = 0LL;
      }
      *(_QWORD *)(a1 + 200) = v27;
LABEL_20:
      if ( (*(_BYTE *)(a1 + 224) & 0x20) != 0
        || (v22 = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1), v20 = v22, v22 >= 0) )
      {
        v20 = 0;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xB9u, 0LL);
      }
      goto LABEL_23;
    }
    if ( a6 == 2 )
    {
      v31 = operator new(0x10uLL);
      v32 = v31;
      if ( v31 )
      {
        *v31 = 2;
        if ( a7 > 0x10u || (v33 = 65631, !_bittest(&v33, a7)) )
          v8 = 0;
        *((_QWORD *)v32 + 1) = a8;
        *((_BYTE *)v32 + 4) = v8;
      }
      else
      {
        v32 = 0LL;
      }
      *(_QWORD *)(a1 + 200) = v32;
      goto LABEL_20;
    }
    v20 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0xB3u, 0LL);
  }
LABEL_23:
  if ( v13 )
  {
    v23 = *(__int64 (__fastcall **)(CResourceWeakRef *))(*(_QWORD *)v13 + 16LL);
    if ( v23 == CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::InternalRelease(v13);
    else
      v23(v13);
  }
  return v20;
}
