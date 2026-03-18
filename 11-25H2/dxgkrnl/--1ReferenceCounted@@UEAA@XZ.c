/*
 * XREFs of ??1ReferenceCounted@@UEAA@XZ @ 0x14001233C
 * Callers:
 *     ??1DXGK_GAMMA_RAMP@@UEAA@XZ @ 0x140011FE8 (--1DXGK_GAMMA_RAMP@@UEAA@XZ.c)
 *     ??_EDXGTHREAD@@UEAAPEAXI@Z @ 0x140012030 (--_EDXGTHREAD@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x1400120D4 (--1DMMVIDPNSOURCEMODESET@@UEAA@XZ.c)
 *     ??1DMMVIDPNTARGETMODESET@@UEAA@XZ @ 0x1400121B4 (--1DMMVIDPNTARGETMODESET@@UEAA@XZ.c)
 *     ??_E?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@UEAAPEAXI@Z @ 0x140067610 (--_E-$rc_buffer@U-$AlpcRequest@$06@DispBroker@@@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x14008CE40 (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x14008CEC0 (--1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ.c)
 *     ??1Usb4HostRouterPoFxRefv2@DxgMonitor@@UEAA@XZ @ 0x140270398 (--1Usb4HostRouterPoFxRefv2@DxgMonitor@@UEAA@XZ.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1403B1D90 (--1DMMVIDPN@@UEAA@XZ.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1403C85F8 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1403FF05C (--1DXGMONITOR@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1404031BC (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ReferenceCounted::~ReferenceCounted(ReferenceCounted *this)
{
  *(_QWORD *)this = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    WdLogSingleEntry1(2LL, *((int *)this + 2));
    WdLogGlobalForLineNumber = 52;
    DxgkLogInternalTriageEvent(
      0,
      0x40000,
      -1,
      (unsigned int)L"Reference counted instance being destroyed still has %I64d outstanding references on it!",
      *((int *)this + 2),
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
