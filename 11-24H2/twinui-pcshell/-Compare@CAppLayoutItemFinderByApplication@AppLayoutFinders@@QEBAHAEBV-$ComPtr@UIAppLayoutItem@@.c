/*
 * XREFs of ?Compare@CAppLayoutItemFinderByApplication@AppLayoutFinders@@QEBAHAEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@0@Z @ 0x1806C3808
 * Callers:
 *     ??$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByApplication@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806C31D4 (--$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AppLayoutFinders::CAppLayoutItemFinderByApplication::Compare(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v5; // esi
  int (__fastcall *v6)(__int64, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, __int64 *); // rdi
  __int64 v11; // [rsp+58h] [rbp+38h] BYREF
  __int64 v12; // [rsp+60h] [rbp+40h] BYREF
  __int64 v13; // [rsp+68h] [rbp+48h] BYREF

  v12 = a3;
  v3 = *a2;
  v13 = 0LL;
  v5 = -1;
  v6 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 48LL);
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v13);
  if ( v6(v3, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v7) >= 0 )
  {
    v8 = v13;
    v11 = 0LL;
    v9 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    if ( v9(v8, &v11) >= 0 )
    {
      LODWORD(v12) = 0;
      (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 104LL))(v11, *a1, &v12);
      v5 = ((_DWORD)v12 != 0) - 1;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  return v5;
}
