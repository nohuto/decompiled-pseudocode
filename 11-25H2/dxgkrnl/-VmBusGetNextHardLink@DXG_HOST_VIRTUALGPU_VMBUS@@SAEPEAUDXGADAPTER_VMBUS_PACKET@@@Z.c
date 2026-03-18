/*
 * XREFs of ?VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021D310
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z @ 0x1401C8CC0 (-GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z.c)
 *     ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401C8D58 (-InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetNextHardLink(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdi
  char v3; // bl
  __int64 v4; // r9
  __int64 v5; // rax
  CDriverStoreCopy *v6; // rcx
  _QWORD *v7; // rax
  struct DXGADAPTER *v8; // rdx
  _BYTE v10[24]; // [rsp+50h] [rbp-468h] BYREF
  _BYTE v11[24]; // [rsp+68h] [rbp-450h] BYREF
  _DWORD v12[264]; // [rsp+80h] [rbp-438h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v11,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  if ( *(_BYTE *)(v2 + 173) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v10, (struct _KTHREAD **)(v2 + 56));
    memset(v12, 0, 0x41CuLL);
    if ( *(_BYTE *)(v2 + 153) )
    {
      v12[0] = -1073741811;
    }
    else
    {
      if ( !*(_QWORD *)(v2 + 336) )
      {
        v5 = operator new(0x658uLL, 0x4B677844u, 256LL, v4);
        v6 = (CDriverStoreCopy *)v5;
        if ( !v5 )
        {
          *(_QWORD *)(v2 + 336) = 0LL;
          v12[0] = -1073741801;
          goto LABEL_9;
        }
        *(_QWORD *)(v5 + 16) = -1LL;
        *(_QWORD *)v5 = 0LL;
        *(_DWORD *)(v5 + 8) = 536;
        *(_DWORD *)(v5 + 1584) = 0;
        *(_QWORD *)(v5 + 1600) = 0LL;
        *(_QWORD *)(v5 + 1616) = 0LL;
        v7 = (_QWORD *)(v5 + 1592);
        v7[1] = v7;
        *v7 = v7;
        *((_QWORD *)v6 + 202) = (char *)v6 + 1608;
        *((_QWORD *)v6 + 201) = (char *)v6 + 1608;
        v8 = *(struct DXGADAPTER **)(v2 + 16);
        *(_QWORD *)(v2 + 336) = v6;
        CDriverStoreCopy::InitializeSystem32Links(v6, v8);
      }
      CDriverStoreCopy::GetNextHardLink(
        *(CDriverStoreCopy **)(v2 + 336),
        (struct DXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN *)v12);
    }
LABEL_9:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v12, 0x41Cu);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    v3 = 1;
    goto LABEL_10;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 5888;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"The adapter is already closed by the guest",
    5888LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_10:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
  return v3;
}
