/*
 * XREFs of std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_PeoplePaneViewInfo_________lambda_8b7f561eeecd700a6a36bc0a9fbde639___ @ 0x18040F9BC
 * Callers:
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x180410D1C (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_PeoplePaneViewInfo_________lambda_8b7f561eeecd700a6a36bc0a9fbde639___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 i; // r14
  __int64 v8; // rsi
  void (__fastcall *v9)(__int64, _QWORD, __int64 *); // rdi
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  for ( i = a2; i != a3; i += 16LL )
  {
    if ( *(_QWORD *)(*(_QWORD *)i + 48LL) )
    {
      v11 = 0LL;
      v8 = *(_QWORD *)(a4[1] + 344LL);
      v9 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
      v9(v8, *(_QWORD *)(*(_QWORD *)i + 48LL), &v11);
      LOBYTE(v9) = v11 == *a4;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
      if ( (_BYTE)v9 )
        break;
    }
  }
  *a1 = i;
  return a1;
}
