/*
 * XREFs of Controller_ReportFatalErrorEx @ 0x140041EC0
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x140002E50 (Bulk_ProcessTransferEventWithED1.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025820 (Interrupter_DeferredWorkProcessor.c)
 *     UsbDevice_EnableCompletion @ 0x14002FC80 (UsbDevice_EnableCompletion.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400370B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x140039910 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079BE0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_LL @ 0x140035A40 (WPP_RECORDER_SF_LL.c)
 *     Controller_InitiateBootRecovery @ 0x14003C9E8 (Controller_InitiateBootRecovery.c)
 *     Etw_ReportFatalError @ 0x14004F288 (Etw_ReportFatalError.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Controller_ReportFatalErrorEx(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v12; // ecx
  _QWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 Pool2; // rax
  KIRQL v16; // al
  _QWORD *v17; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LL(
      *(_QWORD *)(a1 + 72),
      1u,
      4u,
      0xF4u,
      (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
      a3,
      a2);
  DbgPrint("\nXHCI reported fatal error\n");
  Etw_ReportFatalError(v12, a1, a2, a3, a4, a5);
  if ( (*(_DWORD *)(a1 + 788) & 0x12) != 0 )
  {
    Controller_InitiateBootRecovery((_QWORD *)a1, a2);
  }
  else
  {
    v13 = 0LL;
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 768),
            off_14006AF20);
    if ( a3 )
    {
      if ( a3 != 4159 )
      {
        Pool2 = ExAllocatePool2(64LL, 64LL, 1229146200LL);
        v13 = (_QWORD *)Pool2;
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 8) = 0LL;
          *(_QWORD *)Pool2 = 0LL;
          *(_QWORD *)(Pool2 + 40) = a6;
          *(_QWORD *)(Pool2 + 48) = a7;
          *(_QWORD *)(Pool2 + 56) = a8;
          *(_DWORD *)(Pool2 + 16) = a3;
          *(_QWORD *)(Pool2 + 24) = a4;
          *(_QWORD *)(Pool2 + 32) = a5;
        }
      }
    }
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 16));
    if ( v13 )
    {
      v17 = *(_QWORD **)(v14 + 8);
      if ( *v17 != v14 )
        __fastfail(3u);
      *v13 = v14;
      v13[1] = v17;
      *v17 = v13;
      *(_QWORD *)(v14 + 8) = v13;
    }
    *(_DWORD *)(v14 + 80) |= a2;
    KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 16), v16);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 3040))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 768));
  }
}
