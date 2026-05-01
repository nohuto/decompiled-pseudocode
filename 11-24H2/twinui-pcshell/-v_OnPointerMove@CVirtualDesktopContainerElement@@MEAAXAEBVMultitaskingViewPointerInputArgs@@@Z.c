/*
 * XREFs of ?v_OnPointerMove@CVirtualDesktopContainerElement@@MEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1804E0260
 * Callers:
 *     <none>
 * Callees:
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x1804C5868 (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     ?AllUpViewHoverScrubSelectVirtualDesktop@MultitaskingViewTelemetry@@SAXXZ @ 0x1804DE844 (-AllUpViewHoverScrubSelectVirtualDesktop@MultitaskingViewTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVirtualDesktopContainerElement::v_OnPointerMove(
        CVirtualDesktopContainerElement *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, __int64); // rbx
  __int64 v4; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 824) )
  {
    v2 = *((_QWORD *)this + 17);
    if ( v2 )
    {
      v3 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 224LL);
      v4 = CMultitaskingViewElementBase::_MapArgumentsToChild((__int64)this, (__int64)v5, (__int64 *)a2);
      v3(v2, v4);
      MultitaskingViewTelemetry::AllUpViewHoverScrubSelectVirtualDesktop();
    }
  }
}
