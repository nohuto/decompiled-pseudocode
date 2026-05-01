/*
 * XREFs of ?WithdrawCampaign@CVirtualDesktopSoftLandingHandler@@AEAAJXZ @ 0x1805689E0
 * Callers:
 *     ?CurrentVirtualDesktopChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180568780 (-CurrentVirtualDesktopChanged@CVirtualDesktopSoftLandingHandler@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopSoftLandingHandler::WithdrawCampaign(
        CVirtualDesktopSoftLandingHandler *this,
        __int64 a2)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF

  v4 = 1;
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, const wchar_t *, int, int *, __int64))(**((_QWORD **)this + 4) + 32LL))(
    *((_QWORD *)this + 4),
    a2,
    0LL,
    L"VDSoftLandingCampaignDone",
    4,
    &v4,
    4LL);
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8);
  return 0LL;
}
