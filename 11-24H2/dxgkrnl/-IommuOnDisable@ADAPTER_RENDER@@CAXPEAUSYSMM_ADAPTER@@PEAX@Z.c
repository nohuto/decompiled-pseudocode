/*
 * XREFs of ?IommuOnDisable@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14019F660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall ADAPTER_RENDER::IommuOnDisable(struct SYSMM_ADAPTER *a1, _QWORD *a2)
{
  if ( a2[96] )
    (*(void (**)(void))(*(_QWORD *)(a2[95] + 8LL) + 1160LL))();
}
