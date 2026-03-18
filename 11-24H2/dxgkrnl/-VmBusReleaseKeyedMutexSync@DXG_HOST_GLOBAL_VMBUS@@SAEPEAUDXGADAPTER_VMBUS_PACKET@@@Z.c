/*
 * XREFs of ?VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140227730
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400422B4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400549D8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1402B2FF8 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x1403E58E8 (DxgkpAcquireKeyedMutexFromHandle.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusReleaseKeyedMutexSync(struct DXGPROCESS **a1)
{
  __int64 v2; // rdi
  unsigned int *v3; // rax
  DXGKEYEDMUTEX *v4; // rbx
  __int64 v5; // rdx
  size_t Size; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
  if ( !v2 )
    return 0;
  v3 = (unsigned int *)DxgkpAcquireKeyedMutexFromHandle(a1[12]);
  v4 = (DXGKEYEDMUTEX *)v3;
  if ( !v3 )
    return 0;
  v5 = *((unsigned int *)a1 + 36);
  if ( v5 - 48 < (unsigned __int64)v3[42] )
  {
    WdLogSingleEntry1(3LL, v5);
    WdLogGlobalForLineNumber = 8068;
    DXGKEYEDMUTEX::ReleaseReference(v4);
    return 0;
  }
  LODWORD(Size) = v3[42];
  v8 = DXGKEYEDMUTEX::ReleaseSync(
         (DXGKEYEDMUTEX *)v3,
         *(_DWORD *)(v2 + 28),
         *(_QWORD *)(v2 + 32),
         *(_QWORD *)(v2 + 40),
         (void *)(v2 + 48),
         Size,
         0);
  DXGKEYEDMUTEX::ReleaseReference(v4);
  VmBusCompletePacket(a1[16], &v8, 4u);
  return 1;
}
