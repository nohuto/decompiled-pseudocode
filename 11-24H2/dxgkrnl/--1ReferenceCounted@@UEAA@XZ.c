/*
 * XREFs of ??1ReferenceCounted@@UEAA@XZ @ 0x1400217CC
 * Callers:
 *     ??1DXGK_GAMMA_RAMP@@UEAA@XZ @ 0x140021478 (--1DXGK_GAMMA_RAMP@@UEAA@XZ.c)
 *     ??_EDXGTHREAD@@UEAAPEAXI@Z @ 0x1400214C0 (--_EDXGTHREAD@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x140021564 (--1DMMVIDPNSOURCEMODESET@@UEAA@XZ.c)
 *     ??1DMMVIDPNTARGETMODESET@@UEAA@XZ @ 0x140021644 (--1DMMVIDPNTARGETMODESET@@UEAA@XZ.c)
 *     ??_E?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@UEAAPEAXI@Z @ 0x1400671D0 (--_E-$rc_buffer@U-$AlpcRequest@$06@DispBroker@@@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x14008E104 (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x14008E184 (--1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ.c)
 *     ??1Usb4HostRouterPoFxRefv2@DxgMonitor@@UEAA@XZ @ 0x140277524 (--1Usb4HostRouterPoFxRefv2@DxgMonitor@@UEAA@XZ.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1403A2CC8 (--1DMMVIDPN@@UEAA@XZ.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1403BCBE4 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1403F9048 (--1DXGMONITOR@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1403FD03C (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ReferenceCounted::~ReferenceCounted(ReferenceCounted *this)
{
  *(_QWORD *)this = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    WdLogSingleEntry1(2LL, *((int *)this + 2));
    WdLogGlobalForLineNumber = 52;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Reference counted instance being destroyed still has %I64d outstanding references on it!",
      *((int *)this + 2),
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
