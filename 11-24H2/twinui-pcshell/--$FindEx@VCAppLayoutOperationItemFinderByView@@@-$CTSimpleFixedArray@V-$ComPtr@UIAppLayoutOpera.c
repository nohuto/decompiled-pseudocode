/*
 * XREFs of ??$FindEx@VCAppLayoutOperationItemFinderByView@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutOperationItemFinderByView@@AEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806C0B58
 * Callers:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x1806C27A0 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::FindEx<CAppLayoutOperationItemFinderByView>(
        __int64 *a1,
        struct IUnknown **a2,
        struct IUnknown *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 i; // rsi
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, GUID *, __int64 *); // rbx
  __int64 *v12; // rax
  struct IUnknown *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  *a4 = 0LL;
  for ( i = 0LL; i < a1[1]; ++i )
  {
    v8 = *a1;
    v14 = 0LL;
    v9 = -1;
    v10 = *(_QWORD *)(v8 + 8 * i);
    v11 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v10 + 32LL);
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v14);
    if ( v11(v10, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v12) >= 0 )
      v9 = SHIsSameObject(v14, *a2) - 1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    if ( !v9 )
    {
      *a4 = i;
      return 0LL;
    }
  }
  return 2147647531LL;
}
