/*
 * XREFs of ?v_ShouldUseGhostWindow@CAppArrangementSingleTransitionTarget@@EEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x1804E7CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180231DC8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA?AW4AppTransitionTargetSpecialFlags@@PEAUIApplicationView@@@Z @ 0x1804E7044 (-_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA-AW4AppTransitionTargetSpecialFlags@@PE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CAppArrangementSingleTransitionTarget::v_ShouldUseGhostWindow(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2)
{
  bool v3; // di
  int (__fastcall *v5)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v8 = 0LL;
  if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2)
    && (!Geometry::operator==((_DWORD *)this + 43, (_DWORD *)this + 47)
     || !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)) )
  {
    v5 = *(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v8);
    if ( v5(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v6) >= 0 )
      v3 = (CAppTransitionTargetBase::_GetSpecialTransitionInfo((__int64)this, v8) & 1) == 0;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return v3;
}
