/*
 * XREFs of ?UpdateKeyframeAnimations@CAnimationController@@AEAAXXZ @ 0x18007BA60
 * Callers:
 *     ?NotifyBatchProcessingComplete@CAnimationController@@UEAAXXZ @ 0x18007AD30 (-NotifyBatchProcessingComplete@CAnimationController@@UEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?OnPlaybackRateChanged@CAnimationController@@QEAAXXZ @ 0x1801D6500 (-OnPlaybackRateChanged@CAnimationController@@QEAAXXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Release@?$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18007CFE0 (-Release@-$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18007E420 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimationController::UpdateKeyframeAnimations(CAnimationController *this)
{
  __int64 *v1; // rsi
  __int64 *i; // rbp
  __int64 v4; // r14
  CResourceWeakRef *v5; // rcx
  void (*v6)(void); // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, __int64, __int64, int *); // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, __int64, __int64, int *); // rax
  int v13; // eax
  char *v14; // rax
  _QWORD *v15; // rbx
  int v16; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+10h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 11);
  for ( i = (__int64 *)*((_QWORD *)this + 12); v1 != i; ++v1 )
  {
    if ( (*((_BYTE *)this + 120) & 0x10) != 0 )
    {
      v4 = *v1;
      v5 = *(CResourceWeakRef **)(*v1 + 328);
      *(_QWORD *)(*v1 + 328) = 0LL;
      if ( v5 )
      {
        v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
        if ( (char *)v6 == (char *)CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release )
          CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release(v5);
        else
          v6();
      }
      if ( !*((_QWORD *)this + 2) )
      {
        v14 = (char *)MIDL_user_allocate(0x60uLL);
        v15 = v14;
        if ( !v14 )
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        *((_DWORD *)v14 + 2) = 0;
        *(_QWORD *)v14 = &CMILCOMWeakRef::`vftable';
        InitializeCriticalSection((LPCRITICAL_SECTION)(v14 + 16));
        v15[7] = this;
        *v15 = &CResourceWeakRef::`vftable';
        v15[8] = this;
        v15[9] = 0LL;
        v15[10] = 0LL;
        v15[11] = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v15 + 8LL))(v15);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 2, (signed __int64)v15, 0LL) )
          (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      }
      v7 = *((_QWORD *)this + 2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *(_QWORD *)(v4 + 328) = v7;
    }
    if ( (*((_BYTE *)this + 120) & 1) != 0 )
    {
      v8 = *v1;
      v18 = *((_DWORD *)this + 20);
      v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)v8 + 96LL);
      v10 = (char *)v9 == (char *)CKeyframeAnimation::SetProperty
          ? CKeyframeAnimation::SetProperty(v8, 32LL, 18LL, &v18)
          : v9(v8, 32LL, 18LL, &v18);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          (wil::details::in1diag3 *)retaddr,
          (void *)0xCE,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationcontroller.cpp",
          (const char *)(unsigned int)v10,
          v16);
    }
    if ( (*((_BYTE *)this + 120) & 2) != 0 )
    {
      v11 = *v1;
      v19 = *((_DWORD *)this + 21);
      v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)v11 + 96LL);
      if ( (char *)v12 == (char *)CKeyframeAnimation::SetProperty )
        v13 = CKeyframeAnimation::SetProperty(v11, 30LL, 18LL, &v19);
      else
        v13 = v12(v11, 30LL, 18LL, &v19);
      if ( v13 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          (wil::details::in1diag3 *)retaddr,
          (void *)0xD7,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationcontroller.cpp",
          (const char *)(unsigned int)v13,
          v16);
    }
  }
  *((_BYTE *)this + 120) &= 0xECu;
}
