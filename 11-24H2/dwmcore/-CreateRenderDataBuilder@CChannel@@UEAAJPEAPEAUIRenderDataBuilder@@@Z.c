/*
 * XREFs of ?CreateRenderDataBuilder@CChannel@@UEAAJPEAPEAUIRenderDataBuilder@@@Z @ 0x1801F2ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRenderDataBuilder@@AEAA@XZ @ 0x1801F2F5C (--0CRenderDataBuilder@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::CreateRenderDataBuilder(CChannel *this, struct IRenderDataBuilder **a2)
{
  CRenderDataBuilder *v3; // rax
  CRenderDataBuilder *v4; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (CRenderDataBuilder *)DefaultHeap::AllocClear(0x70uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v4 = CRenderDataBuilder::CRenderDataBuilder(v3);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v4 + 3);
    *a2 = v4;
    return 0LL;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x14u, 0LL);
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x2E9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
