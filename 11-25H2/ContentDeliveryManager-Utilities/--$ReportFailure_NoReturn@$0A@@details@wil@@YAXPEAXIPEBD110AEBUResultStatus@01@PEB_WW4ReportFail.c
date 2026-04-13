/*
 * XREFs of ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180076A2C
 * Callers:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180076A00 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFail.c)
 * Callees:
 *     memset_0 @ 0x180022921 (memset_0.c)
 *     ?ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z @ 0x18003BC38 (-ThrowResultException@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18003CD5C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800761E0 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7P.c)
 *     _alloca_probe @ 0x1800B6B10 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NoReturn<0>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  bool v10; // bp
  __int64 v11; // r9
  const struct wil::FailureInfo *v12; // rdx
  const struct wil::FailureInfo *v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-1508h]
  __int64 v15; // [rsp+30h] [rbp-14F8h]
  __int64 v16; // [rsp+40h] [rbp-14E8h]
  __int64 v17; // [rsp+48h] [rbp-14E0h]
  __int64 v18; // [rsp+58h] [rbp-14D0h]
  __int64 v19; // [rsp+68h] [rbp-14C0h]
  _BYTE v20[160]; // [rsp+80h] [rbp-14A8h] BYREF
  _BYTE v21[1024]; // [rsp+120h] [rbp-1408h] BYREF
  _BYTE v22[4104]; // [rsp+520h] [rbp-1008h] BYREF

  v10 = g_pfnThrowPlatformException != 0;
  memset_0(v20, 0, 0x98uLL);
  wil::details::LogFailure(
    a1,
    a2,
    a3,
    v11,
    v14,
    a6,
    v15,
    a7,
    v16,
    v17,
    (wil *)v22,
    v18,
    v21,
    v19,
    (unsigned __int64)v20);
  if ( (v20[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v20, v12);
  if ( v10 )
    ((void (__fastcall *)(_BYTE *, _BYTE *))g_pfnThrowPlatformException)(v20, v22);
  wil::ThrowResultException((wil *)v20, v12);
  wil::details::WilFailFast((wil::details *)v20, v13);
}
