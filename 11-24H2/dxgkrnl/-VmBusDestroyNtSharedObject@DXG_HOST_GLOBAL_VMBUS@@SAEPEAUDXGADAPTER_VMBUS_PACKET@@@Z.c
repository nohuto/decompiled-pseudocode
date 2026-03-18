/*
 * XREFs of ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402222F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059048 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x14005D474 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1403E8358 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyNtSharedObject(struct DXGPROCESS **a1)
{
  __int64 v2; // rsi
  struct DXGPROCESS *v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // r8
  int v7; // ecx
  DXGSHAREDVMOBJECT *v8; // rbx
  __int64 v9; // rdx
  struct DXGPROCESS *v10; // rcx
  struct VMBPACKETCOMPLETION__ *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-98h]
  int v13; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v14[24]; // [rsp+58h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-48h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( !v2 )
    return 0;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v14, a1[12]);
  v4 = a1[12];
  v5 = (*(_DWORD *)(v2 + 24) >> 6) & 0xFFFFFF;
  if ( v5 >= *((_DWORD *)v4 + 74) )
    goto LABEL_9;
  v6 = *((_QWORD *)v4 + 35);
  if ( ((*(_DWORD *)(v2 + 24) >> 25) & 0x60) != (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0x60) )
    goto LABEL_9;
  if ( (*(_DWORD *)(v6 + 16LL * v5 + 8) & 0x2000) != 0 )
    goto LABEL_9;
  v7 = *(_DWORD *)(v6 + 16LL * v5 + 8) & 0x1F;
  if ( !v7 )
    goto LABEL_9;
  if ( v7 != 13 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v8 = 0LL;
    goto LABEL_10;
  }
  v8 = *(DXGSHAREDVMOBJECT **)(v6 + 16LL * v5);
LABEL_10:
  v9 = *(unsigned int *)(v2 + 24);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, v9);
    v12 = *(unsigned int *)(v2 + 24);
    WdLogGlobalForLineNumber = 7596;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid NT shared object handle: 0x%I64x",
      v12,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    return 0;
  }
  DXGPROCESS::FreeHandleUnsafe(a1[12], v9);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
  v10 = a1[12];
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*((PRKPROCESS *)v10 + 7), &ApcState);
  DXGSHAREDVMOBJECT::ReleaseReference(v8);
  KeUnstackDetachProcess(&ApcState);
  v11 = a1[16];
  v13 = 0;
  VmBusCompletePacket(v11, &v13, 4u);
  return 1;
}
