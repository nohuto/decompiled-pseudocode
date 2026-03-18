/*
 * XREFs of ?VmBusSetIoSpaceRegion@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140229DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051320 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?SetGuestCpuVisibleBuffer@DXGPROCESSVMWP@@QEAAX_K0@Z @ 0x14007AE84 (-SetGuestCpuVisibleBuffer@DXGPROCESSVMWP@@QEAAX_K0@Z.c)
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z @ 0x1401E8288 (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAJI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSetIoSpaceRegion(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  unsigned int v6; // edx
  int v7; // eax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = 0;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v5 = *(_QWORD *)(v3 + 32);
    if ( v5 == *((_QWORD *)Global + 212) )
    {
      v6 = *(_DWORD *)(v3 + 40);
      if ( v6 )
      {
        v7 = DXGVIRTUALMACHINE::SetSharedPage(*(DXGVIRTUALMACHINE **)(*((_QWORD *)a1 + 12) + 592LL), v6);
        v12 = v7;
      }
      else
      {
        v7 = v12;
      }
      if ( v7 >= 0 )
      {
        v8 = *(_QWORD *)(v3 + 24);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v3 + 32);
          if ( v9 )
            DXGPROCESSVMWP::SetGuestCpuVisibleBuffer(*((DXGVIRTUALMACHINE ***)a1 + 12), v8, v9);
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v5);
      v11 = *(_QWORD *)(v3 + 32);
      WdLogGlobalForLineNumber = 7619;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"The VM has incorrect MMIO region size: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
      v12 = -1073741811;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v12, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
