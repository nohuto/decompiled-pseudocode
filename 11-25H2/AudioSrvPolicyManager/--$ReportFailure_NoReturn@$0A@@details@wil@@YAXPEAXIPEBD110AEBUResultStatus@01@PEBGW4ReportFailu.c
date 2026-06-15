/*
 * XREFs of ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180032674
 * Callers:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180032448 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800184B0 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     memset_0 @ 0x1800211F8 (memset_0.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x180025F34 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18002664C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _alloca_probe @ 0x18004B360 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NoReturn<0>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  bool v8; // si
  const struct wil::FailureInfo *v9; // rdx
  const struct wil::FailureInfo *v10; // rdx
  __int64 v11; // [rsp+48h] [rbp-14E0h]
  __int64 v12; // [rsp+58h] [rbp-14D0h]
  __int64 v13; // [rsp+68h] [rbp-14C0h]
  _BYTE v14[160]; // [rsp+80h] [rbp-14A8h] BYREF
  _BYTE v15[1024]; // [rsp+120h] [rbp-1408h] BYREF
  _BYTE v16[4104]; // [rsp+520h] [rbp-1008h] BYREF

  v8 = g_pfnThrowPlatformException != 0;
  memset_0(v14, 0, 0x98uLL);
  wil::details::LogFailure(
    a1,
    4731,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    0LL,
    0LL,
    a6,
    0,
    a7,
    0LL,
    v11,
    (wil *)v16,
    v12,
    v15,
    v13,
    (unsigned __int64)v14);
  if ( (v14[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v14, v9);
  if ( v8 )
    ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v14, v16);
  wil::ThrowResultException((wil *)v14, v9);
  wil::details::WilFailFast((wil::details *)v14, v10);
}
