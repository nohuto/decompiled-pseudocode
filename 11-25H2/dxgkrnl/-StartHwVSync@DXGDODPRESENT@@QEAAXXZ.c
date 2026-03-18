/*
 * XREFs of ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x14027BF88
 * Callers:
 *     ?StartVSync@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x14027C660 (-StartVSync@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x14038F090 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z.c)
 */

void __fastcall DXGDODPRESENT::StartHwVSync(struct _KTHREAD **this)
{
  bool v2; // sf
  _BYTE v3[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v3, this + 13, 0);
  DXGPUSHLOCK::AcquireExclusive(v4);
  v2 = *((int *)this + 34) < 0;
  v5 = 2;
  if ( v2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4565;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_OutStandingHwVsyncRequests >= 0",
      4565LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( ++*((_DWORD *)this + 34) == 1
    && (int)DXGADAPTER::DdiControlInterrupt(
              *((DXGADAPTER **)this[11] + 2),
              DXGK_INTERRUPT_DISPLAYONLY_VSYNC,
              1u,
              0xFFFFFFFD) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4573;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 4573LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v3);
}
