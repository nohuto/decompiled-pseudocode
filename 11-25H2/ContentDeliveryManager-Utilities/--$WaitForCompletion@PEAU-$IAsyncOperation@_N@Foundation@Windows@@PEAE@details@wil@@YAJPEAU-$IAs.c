/*
 * XREFs of ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAE@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@PEAEW4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180066230
 * Callers:
 *     ??$wait_for_completion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180066728 (--$wait_for_completion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType.c)
 *     ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180074AA0 (-GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z.c)
 *     ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180074C90 (-IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x180074E40 (-IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?IsPinnedToStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@PEAE@Z @ 0x1800957CC (-IsPinnedToStart@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@U.c)
 *     ?SwapTilesInStart@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@3@1PEAE@Z @ 0x1800966B0 (-SwapTilesInStart@StartDocked@@YAJV-$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@.c)
 * Callees:
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800660F0 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *,unsigned char *>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        int a3)
{
  __int64 result; // rax

  result = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(a1, a2, a3);
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a1)[8])(a1, a2);
  return result;
}
