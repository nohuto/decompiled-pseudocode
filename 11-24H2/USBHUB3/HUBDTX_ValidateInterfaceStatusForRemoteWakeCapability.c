/*
 * XREFs of HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability @ 0x14002DF1C
 * Callers:
 *     HUBDSM_ValidatingInterfaceStatusForRemoteWake @ 0x140025590 (HUBDSM_ValidatingInterfaceStatusForRemoteWake.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x14000F6B4 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_q @ 0x14001DE04 (WPP_RECORDER_SF_q.c)
 *     HUBMISC_VerifierDbgBreak @ 0x140034050 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // edx
  __int64 v4; // rcx
  __int64 v6; // [rsp+20h] [rbp-28h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int16 v8; // [rsp+30h] [rbp-18h]

  v2 = 4077;
  if ( *(_DWORD *)(a1 + 264) != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x1Fu,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        *(_DWORD *)(a1 + 264));
    return 4065;
  }
  v3 = *(_DWORD *)(a1 + 1640);
  if ( (v3 & 0x100) != 0 || (*(_BYTE *)(a1 + 1740) & 1) == 0 )
  {
    if ( (v3 & 4) == 0 && (v3 & 0x100) != 0 && (*(_BYTE *)(a1 + 1740) & 1) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          3u,
          5u,
          0x21u,
          (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
          a1);
      if ( (*(_DWORD *)(a1 + 2444) & 0x10) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierInterfaceWakeCapabilityMismatch", a1 + 512);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      {
        v4 = (*(_DWORD *)(a1 + 1640) >> 8) & 1;
        v8 = *(_WORD *)(a1 + 1740) & 1;
        LODWORD(v7) = (*(_DWORD *)(a1 + 1640) >> 8) & 1;
        LODWORD(v6) = (*(_DWORD *)(a1 + 1640) >> 2) & 1;
        goto LABEL_22;
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        3u,
        5u,
        0x20u,
        (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids,
        a1);
    if ( (*(_DWORD *)(a1 + 2444) & 0x10) != 0 )
      HUBMISC_VerifierDbgBreak("DeviceHwVerifierInterfaceWakeCapabilityMismatch", a1 + 512);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      v4 = *(unsigned __int16 *)(a1 + 1740);
      LOWORD(v4) = *(_WORD *)(a1 + 1740) & 1;
      v8 = v4;
      LODWORD(v7) = (*(_DWORD *)(a1 + 1640) >> 8) & 1;
      LODWORD(v6) = (*(_DWORD *)(a1 + 1640) >> 2) & 1;
LABEL_22:
      McTemplateK0pqqh_EtwWriteTransfer(
        v4,
        &USBHUB3_ETW_EVENT_INTERFACE_WAKE_CAPABILITY_MISMATCH,
        (const GUID *)(a1 + 1524),
        *(_QWORD *)(a1 + 24),
        v6,
        v7,
        v8);
    }
  }
  return v2;
}
