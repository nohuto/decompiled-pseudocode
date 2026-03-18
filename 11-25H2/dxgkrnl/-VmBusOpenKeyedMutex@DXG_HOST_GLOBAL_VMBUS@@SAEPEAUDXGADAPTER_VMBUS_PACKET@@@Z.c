/*
 * XREFs of ?VmBusOpenKeyedMutex@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403EBE50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400427F4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059588 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402FF39C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x1403EBFD8 (DxgkpAcquireKeyedMutexFromHandle.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenKeyedMutex(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // edx
  DXGKEYEDMUTEX *v5; // rax
  DXGKEYEDMUTEX *v6; // rsi
  __int64 v8; // rbx
  __int64 v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = *(_DWORD *)(v2 + 28) + 32;
  if ( *(_DWORD *)(v2 + 28) >= 0xFFFFFFE0 )
    return 0;
  if ( *((_DWORD *)a1 + 36) < v4 )
  {
    v8 = v4;
    WdLogSingleEntry2(2LL, *((unsigned int *)a1 + 36), v4);
    v10 = *((unsigned int *)a1 + 36);
    WdLogGlobalForLineNumber = 7945;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid packet size (%u < %u)", v10, v8, 0LL, 0LL, 0LL);
    return 0;
  }
  v11 = 0LL;
  v5 = (DXGKEYEDMUTEX *)DxgkpAcquireKeyedMutexFromHandle(*((struct DXGPROCESS **)a1 + 12));
  v6 = v5;
  if ( v5 )
  {
    HIDWORD(v11) = DXGKEYEDMUTEX::Open(v5, (unsigned int *)&v11, (char *)(v3 + 32), *(_DWORD *)(v3 + 28), 0);
    if ( v11 < 0 )
    {
      WdLogSingleEntry2(2LL, *(unsigned int *)(v3 + 24), -1073741811LL);
      v9 = *(unsigned int *)(v3 + 24);
      WdLogGlobalForLineNumber = 7968;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to open keyed mutex (0x%I64x), returning 0x%I64x",
        v9,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
    DXGKEYEDMUTEX::ReleaseReference(v6);
  }
  else
  {
    HIDWORD(v11) = -1073741811;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v11, 8u);
  return 1;
}
