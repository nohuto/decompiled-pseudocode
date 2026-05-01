/*
 * XREFs of ??$FindEx@VCAppLayoutOperationItemFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutOperationItemFinderByApplication@@AEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1806C0A88
 * Callers:
 *     ?GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperationItem@@@Z @ 0x1806C1010 (-GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::FindEx<CAppLayoutOperationItemFinderByApplication>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 i; // rsi
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, __int64 *); // rbx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = a3;
  *a4 = 0LL;
  for ( i = 0LL; i < a1[1]; ++i )
  {
    v8 = *a1;
    v13 = 0LL;
    v9 = -1;
    v10 = *(_QWORD *)(v8 + 8 * i);
    v11 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    if ( v11(v10, &v13) >= 0 )
    {
      LODWORD(v14) = 0;
      (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 104LL))(v13, *a2, &v14);
      v9 = ((_DWORD)v14 != 0) - 1;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    if ( !v9 )
    {
      *a4 = i;
      return 0LL;
    }
  }
  return 2147647531LL;
}
