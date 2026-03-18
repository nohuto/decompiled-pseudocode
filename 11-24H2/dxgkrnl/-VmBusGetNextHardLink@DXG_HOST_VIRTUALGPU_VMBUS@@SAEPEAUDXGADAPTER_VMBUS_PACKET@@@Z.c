/*
 * XREFs of ?VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223770
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z @ 0x1401CDF50 (-GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z.c)
 *     ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401CDFE8 (-InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetNextHardLink(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdi
  char v3; // bl
  __int64 v4; // rax
  CDriverStoreCopy *v5; // rcx
  _QWORD *v6; // rax
  struct DXGADAPTER *v7; // rdx
  _BYTE v9[24]; // [rsp+50h] [rbp-468h] BYREF
  _BYTE v10[24]; // [rsp+68h] [rbp-450h] BYREF
  _DWORD v11[264]; // [rsp+80h] [rbp-438h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v10,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  if ( *(_BYTE *)(v2 + 173) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, (struct _KTHREAD **)(v2 + 56));
    memset(v11, 0, 0x41CuLL);
    if ( *(_BYTE *)(v2 + 153) )
    {
      v11[0] = -1073741811;
    }
    else
    {
      if ( !*(_QWORD *)(v2 + 336) )
      {
        v4 = operator new(0x658uLL, 0x4B677844u, 256LL);
        v5 = (CDriverStoreCopy *)v4;
        if ( !v4 )
        {
          *(_QWORD *)(v2 + 336) = 0LL;
          v11[0] = -1073741801;
          goto LABEL_9;
        }
        *(_QWORD *)(v4 + 16) = -1LL;
        *(_QWORD *)v4 = 0LL;
        *(_DWORD *)(v4 + 8) = 536;
        *(_DWORD *)(v4 + 1584) = 0;
        *(_QWORD *)(v4 + 1600) = 0LL;
        *(_QWORD *)(v4 + 1616) = 0LL;
        v6 = (_QWORD *)(v4 + 1592);
        v6[1] = v6;
        *v6 = v6;
        *((_QWORD *)v5 + 202) = (char *)v5 + 1608;
        *((_QWORD *)v5 + 201) = (char *)v5 + 1608;
        v7 = *(struct DXGADAPTER **)(v2 + 16);
        *(_QWORD *)(v2 + 336) = v5;
        CDriverStoreCopy::InitializeSystem32Links(v5, v7);
      }
      CDriverStoreCopy::GetNextHardLink(
        *(CDriverStoreCopy **)(v2 + 336),
        (struct DXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN *)v11);
    }
LABEL_9:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v11, 0x41Cu);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
    v3 = 1;
    goto LABEL_10;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 5900;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"The adapter is already closed by the guest",
    5900LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_10:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
  return v3;
}
