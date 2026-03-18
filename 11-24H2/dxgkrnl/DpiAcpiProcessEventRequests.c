/*
 * XREFs of DpiAcpiProcessEventRequests @ 0x140252488
 * Callers:
 *     DpiAcpiHandleAcpiEvent @ 0x140428EBC (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x140259430 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402C7954 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402CA614 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x14031DC40 (DpiFdoInvalidateChildRelations.c)
 */

__int64 __fastcall DpiAcpiProcessEventRequests(
        __int64 a1,
        char a2,
        __int64 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  bool v8; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 64);
  if ( (a2 & 1) != 0 || *(_DWORD *)(a3 + 24) == 3 )
    result = DpiFdoInvalidateChildRelations(a1, 6LL, a4);
  if ( (a2 & 6) != 0 )
  {
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 4032), 1LL);
    DmmInvalidateActiveVidPn(*(DXGADAPTER **)(v4 + 4032), DXGK_AVIR_HOTKEY, 0LL, 0, a4, v8);
    return DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 4032), 1LL);
  }
  return result;
}
