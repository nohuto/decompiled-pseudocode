/*
 * XREFs of RaUnitSetUnresponsiveAttribute @ 0x140098540
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x14009D7A0 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     RiIsDeviceQueueBusy @ 0x1400146C4 (RiIsDeviceQueueBusy.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RaidAdapterResetBus @ 0x14002F998 (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x140090604 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x14009079C (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x14009FBC4 (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1400B6414 (StorpTelemetryMarkUnitUnresponsive.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitSetUnresponsiveAttribute(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx

  if ( (*(_BYTE *)(a1 + 506) & 2) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 104);
    v3 = a1 + 24;
    if ( (byte_140171464 & 2) != 0 )
      McTemplateK0zqjuuujsssq_EtwWriteTransfer(
        *(_QWORD *)v3 + 5064LL,
        &EventUnitUnresponsive,
        a1 + 177,
        *(const wchar_t **)(*(_QWORD *)v3 + 4720LL),
        *(_DWORD *)(*(_QWORD *)v3 + 56LL),
        *(_QWORD *)v3 + 5064LL,
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 2104,
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        5);
    v4 = *(_QWORD *)v3;
    *(_BYTE *)(a1 + 506) |= 2u;
    if ( (*(_BYTE *)(v4 + 112) & 2) != 0 && RaidIsUnitControlSupported(a1, 31) )
    {
      v5 = *(_DWORD **)v3;
      if ( **(_DWORD **)v3 == 1094997074 )
      {
        v6 = (__int64)(v5 + 94);
      }
      else if ( *v5 == 1314275652 )
      {
        v6 = (__int64)(v5 + 42);
      }
      else
      {
        v6 = 0LL;
      }
      RaCallMiniportUnitControl(v6);
    }
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x33u,
        (__int64)&WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
        a1);
    }
    RiIsDeviceQueueBusy(a1 + 720);
    if ( (((__int64)*(unsigned int *)(v7 + 88) >> 2) & 0x3FFFFFFF) != 0
      && !(unsigned __int8)RaidUnitQueueHierarchicalResetWorkItem(a1) )
    {
      if ( (byte_140171464 & 1) != 0 )
        McTemplateK0zqjujssstq_EtwWriteTransfer(
          *(_BYTE *)(a1 + 506) & 1,
          v8,
          a1 + 177,
          *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4720LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_QWORD *)(a1 + 24) + 5064LL,
          *(_BYTE *)(a1 + 104),
          a1 + 2104,
          (const char *)(a1 + 168),
          (const char *)(a1 + 177),
          (const char *)(a1 + 242),
          *(_BYTE *)(a1 + 506) & 1,
          2);
      RaidAdapterResetBus(*(_QWORD *)(a1 + 24), v2);
    }
  }
  return 0LL;
}
