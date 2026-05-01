/*
 * XREFs of ?IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x1804E3E9C
 * Callers:
 *     ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E4210 (-PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180231DC8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CAppTransitionManager::IsLayoutOperationCrossFadeOnly(
        CAppTransitionManager *this,
        struct IAppLayoutOperationItem *a2)
{
  bool v4; // si
  __int64 v5; // rax
  int (__fastcall *v6)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // rax
  void (__fastcall *v11)(struct IAppLayoutOperationItem *, _QWORD, RECT *); // rax
  __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+38h] [rbp-28h] BYREF
  RECT rcSrc1; // [rsp+48h] [rbp-18h] BYREF

  v4 = 1;
  if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2) )
    return 0;
  v13 = 0LL;
  if ( !*((_QWORD *)this + 26) )
    goto LABEL_18;
  v5 = *(_QWORD *)a2;
  *(_QWORD *)&rcDst.left = 0LL;
  v6 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v5 + 32);
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&rcDst.left);
  if ( v6(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v7) >= 0 )
  {
    v8 = *((_QWORD *)this + 26);
    v9 = *(void (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 64LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
    v9(v8, *(_QWORD *)&rcDst.left, &GUID_114ed843_c914_443d_9588_6ffb643e73d0, &v13);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&rcDst.left);
  if ( !v13 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) == 1 )
  {
LABEL_18:
    if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
    {
      if ( v13 )
        goto LABEL_11;
      v10 = *(_QWORD *)a2;
      rcSrc1 = 0LL;
      v11 = *(void (__fastcall **)(struct IAppLayoutOperationItem *, _QWORD, RECT *))(v10 + 56);
      rcDst = 0LL;
      v11(a2, 0LL, &rcSrc1);
      (*(void (__fastcall **)(struct IAppLayoutOperationItem *, _QWORD, struct tagRECT *))(*(_QWORD *)a2 + 72LL))(
        a2,
        0LL,
        &rcDst);
      if ( Geometry::operator==(&rcSrc1, &rcDst) )
        goto LABEL_11;
    }
    else if ( v13 )
    {
      rcDst = 0LL;
      rcSrc1 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v13 + 24LL))(v13, 0LL, &rcSrc1);
      v4 = !IntersectRect(&rcDst, &rcSrc1, (const RECT *)((char *)this + 264));
      goto LABEL_11;
    }
  }
  v4 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
  return v4;
}
