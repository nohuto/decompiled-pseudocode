/*
 * XREFs of ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x1800245D8
 * Callers:
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_03439e650b830430b1a78af8029ec968___ @ 0x180024434 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Internal--ComTaskPo.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_0adeea27616b30382c54e31f2f6dc703___ @ 0x180024508 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Intern_ea_180024508.c)
 *     ?SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002F0E0 (-SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wi.c)
 *     ?SaveAsync@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180037280 (-SaveAsync@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsy.c)
 *     ?SaveAsync@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18003A1F0 (-SaveAsync@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x180024C50 (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResul.c)
 *     ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00UDisableCausality@67@@WRL@Microsoft@@MEAAJXZ @ 0x18002FBF0 (-Start@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        void (__fastcall ***a4)(_QWORD, __int64))
{
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // edi

  *a2 = 0LL;
  if ( !a4 )
    return (unsigned int)-2147024882;
  v7 = operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v7
    || (v8 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::DisableCausality>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::DisableCausality>(
               v7,
               a1,
               L"Windows.Foundation.IAsyncAction",
               0LL),
        (v9 = v8) == 0) )
  {
    (**a4)(a4, 1LL);
    return (unsigned int)-2147024882;
  }
  *(_QWORD *)(v8 + 264) = a4;
  v10 = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::DisableCausality>::Start(v8 + 8);
  if ( v10 >= 0 )
  {
    *a2 = (v9 + 184) & -(__int64)(v9 != 0);
    v9 = 0LL;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 16LL))(v9 + 8);
  return (unsigned int)v10;
}
