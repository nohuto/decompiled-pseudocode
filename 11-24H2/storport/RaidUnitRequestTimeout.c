/*
 * XREFs of RaidUnitRequestTimeout @ 0x14002F338
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x14002ED00 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x14002F998 (RaidAdapterResetBus.c)
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     WPP_SF_DDD @ 0x140067D0C (WPP_SF_DDD.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x140090604 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x14009079C (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x14009FBC4 (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1400A14EC (RaidUnitUnresponsiveDeviceMarkingNeeded.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1400B6414 (StorpTelemetryMarkUnitUnresponsive.c)
 */

__int64 __fastcall RaidUnitRequestTimeout(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 104);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 63LL, &WPP_e6323699744f33baefc587a6e43a33df_Traceguids);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_DDD(
        WPP_GLOBAL_Control->AttachedDevice,
        64LL,
        &WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
        (unsigned __int8)v2,
        BYTE1(v2),
        BYTE2(v2));
    }
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 && (*(_BYTE *)(v4 + 108) & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 2184));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 5296LL));
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2264));
  if ( *(_DWORD *)(a1 + 1396) )
  {
    if ( (byte_140171464 & 1) != 0 )
      McTemplateK0zqjujssstq_EtwWriteTransfer(
        a1 + 177,
        a1 + 168,
        a1 + 2104,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4720LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5064LL,
        *(_BYTE *)(a1 + 104),
        a1 + 2104,
        a1 + 168,
        a1 + 177,
        a1 + 242,
        *(_BYTE *)(a1 + 506) & 1,
        3);
LABEL_25:
    LOBYTE(a2) = *(_BYTE *)(a1 + 104);
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), a2);
  }
  if ( (unsigned __int8)RaidUnitUnresponsiveDeviceMarkingNeeded(a1) )
  {
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    *(_BYTE *)(a1 + 506) |= 2u;
    if ( (byte_140171464 & 2) != 0 )
      McTemplateK0zqjuuujsssq_EtwWriteTransfer(
        a1 + 177,
        (unsigned int)&EventUnitUnresponsive,
        a1 + 2104,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4720LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5064LL,
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 2104,
        a1 + 168,
        a1 + 177,
        a1 + 242,
        2);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 65LL, &WPP_e6323699744f33baefc587a6e43a33df_Traceguids, a1);
    }
  }
  result = RaidUnitQueueHierarchicalResetWorkItem(a1);
  if ( !(_BYTE)result )
  {
    if ( (byte_140171464 & 1) != 0 )
      McTemplateK0zqjujssstq_EtwWriteTransfer(
        a1 + 177,
        a1 + 168,
        a1 + 2104,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4720LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5064LL,
        *(_BYTE *)(a1 + 104),
        a1 + 2104,
        a1 + 168,
        a1 + 177,
        a1 + 242,
        *(_BYTE *)(a1 + 506) & 1,
        2);
    goto LABEL_25;
  }
  return result;
}
