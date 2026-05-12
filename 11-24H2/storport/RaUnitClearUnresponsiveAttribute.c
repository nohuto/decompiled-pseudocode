/*
 * XREFs of RaUnitClearUnresponsiveAttribute @ 0x140092624
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x14009D7A0 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x14009079C (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1400B62A4 (StorpTelemetryMarkUnitResponsive.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitClearUnresponsiveAttribute(__int64 a1)
{
  __int64 v2; // r14
  char IsUnitControlSupported; // al
  __int64 v4; // rcx
  _DWORD *v5; // rdx

  if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
  {
    v2 = a1 + 24;
    if ( (byte_140171464 & 4) != 0 )
      McTemplateK0zqjuuujsssq_EtwWriteTransfer(
        *(_DWORD *)(a1 + 104) >> 8,
        &EventUnitResponsive,
        a1 + 242,
        *(const wchar_t **)(*(_QWORD *)v2 + 4720LL),
        *(_DWORD *)(*(_QWORD *)v2 + 56LL),
        *(_QWORD *)v2 + 5064LL,
        *(_DWORD *)(a1 + 104),
        BYTE1(*(_DWORD *)(a1 + 104)),
        BYTE2(*(_DWORD *)(a1 + 104)),
        a1 + 2104,
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        4);
    StorpTelemetryMarkUnitResponsive(a1);
    *(_BYTE *)(a1 + 506) &= ~2u;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x32u,
        (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
        a1);
    }
    if ( (*(_BYTE *)(*(_QWORD *)v2 + 112LL) & 2) != 0 )
    {
      IsUnitControlSupported = RaidIsUnitControlSupported(a1, 31);
      v4 = 0LL;
      if ( IsUnitControlSupported )
      {
        v5 = *(_DWORD **)v2;
        if ( **(_DWORD **)v2 == 1094997074 )
        {
          v4 = (__int64)(v5 + 94);
        }
        else if ( *v5 == 1314275652 )
        {
          v4 = (__int64)(v5 + 42);
        }
        RaCallMiniportUnitControl(v4);
      }
    }
  }
  return 0LL;
}
