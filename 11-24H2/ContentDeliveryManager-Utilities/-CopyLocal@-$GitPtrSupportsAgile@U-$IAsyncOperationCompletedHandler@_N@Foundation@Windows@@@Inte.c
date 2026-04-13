/*
 * XREFs of ?CopyLocal@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008D79C
 * Callers:
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18008DA90 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U-$A.c)
 *     ?GetOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@3@@Z @ 0x18008DF20 (-GetOnComplete@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U-$As.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncOperationCompletedHandler<bool>>::CopyLocal(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx

  v3 = *a1;
  v4 = 0;
  *a3 = 0LL;
  if ( !v3 )
    return 2147942487LL;
  v5 = *a1;
  if ( v5 )
    return (*(unsigned int (__fastcall **)(__int64, GUID *))(*(_QWORD *)v5 + 24LL))(
             v5,
             &GUID_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a);
  return v4;
}
