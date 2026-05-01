/*
 * XREFs of _lambda_9c01280dcdfa2a6c98312ec0389307e5_::operator() @ 0x180608F58
 * Callers:
 *     _lambda_9c01280dcdfa2a6c98312ec0389307e5_::_lambda_invoker_cdecl_ @ 0x1806072C0 (_lambda_9c01280dcdfa2a6c98312ec0389307e5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$_Emplace_reallocate@URect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAPEAURect@Foundation@Windows@@QEAU234@$$QEAU234@@Z @ 0x180469BDC (--$_Emplace_reallocate@URect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocato.c)
 */

__int64 __fastcall lambda_9c01280dcdfa2a6c98312ec0389307e5_::operator()(
        __int64 a1,
        HMONITOR a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5)
{
  _BYTE *v7; // rdx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-88h] BYREF

  memset_0(&mi.rcMonitor, 0, 0x64uLL);
  mi.cbSize = 104;
  if ( GetMonitorInfoW(a2, &mi) )
  {
    v7 = *(_BYTE **)(a5 + 8);
    if ( v7 == *(_BYTE **)(a5 + 16) )
    {
      std::vector<Windows::Foundation::Rect>::_Emplace_reallocate<Windows::Foundation::Rect>((const void **)a5, v7, a4);
    }
    else
    {
      *(_OWORD *)v7 = *a4;
      *(_QWORD *)(a5 + 8) += 16LL;
    }
  }
  return 1LL;
}
