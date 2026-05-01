/*
 * XREFs of ?CreateInstance@?$consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory@UISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SnapLayoutOperation@TaskGroups@Shell@Internal@Windows@3@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@3@@Z @ 0x1802A0688
 * Callers:
 *     ??$call@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@?$factory_cache_entry@USnapLayoutEventArgs@TaskGroups@Shell@Internal@Windows@winrt@@UISnapLayoutEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@Z @ 0x1802A04F4 (--$call@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@-$factory_cache_entry@USnapLayoutEventAr.c)
 *     ??R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x1802A064C (--R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Sh.c)
 * Callees:
 *     ??$get_abi@$$CBI@winrt@@YA?A_PU?$array_view@$$CBI@0@@Z @ 0x18022E6C4 (--$get_abi@$$CBI@winrt@@YA-A_PU-$array_view@$$CBI@0@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory<winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>::CreateInstance(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int128 *a4)
{
  __int64 v4; // rbx
  __int64 v7; // rax
  unsigned int *v8; // r11
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, __int64, __int64 *); // r10
  unsigned int v10; // eax
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-28h] BYREF
  __int128 v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+88h] [rbp+10h] BYREF

  v16 = a2;
  v4 = *a1;
  v15 = 0LL;
  v13 = 0;
  v14 = 0LL;
  v12 = *a4;
  v7 = winrt::get_abi<unsigned int const>(&v12);
  v10 = v9(v4, *v8, *((unsigned int *)a4 + 2), v7, &v15);
  winrt::check_hresult(&v16, v10, &v13);
  *a2 = v15;
  return a2;
}
