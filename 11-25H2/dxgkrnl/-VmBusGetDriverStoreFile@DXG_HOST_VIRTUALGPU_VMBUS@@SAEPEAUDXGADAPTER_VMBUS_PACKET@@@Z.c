/*
 * XREFs of ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403A3100
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059588 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x14007A640 (--_GCDriverStoreCopy@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401C8678 (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401C8FD8 (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401C9620 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 *     DpiGetDriverStorePath @ 0x1403A33C8 (DpiGetDriverStorePath.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v11; // rax
  int v12; // eax
  CDriverStoreCopy *v13; // rcx
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v15[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v16[32]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v17[148]; // [rsp+90h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v15);
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v3 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( !v3 )
    {
LABEL_10:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
      return v2;
    }
    v4 = *((_QWORD *)a1 + 10);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, (struct _KTHREAD **)(v4 + 56));
    memset(v17, 0, 0x248uLL);
    if ( *(_BYTE *)(v4 + 153) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 5827;
      v17[4] = -1073741790;
      goto LABEL_9;
    }
    if ( !*(_BYTE *)(v3 + 24) )
    {
      v5 = *(_QWORD *)(v4 + 16);
      v14 = 520;
      v17[4] = DpiGetDriverStorePath(*(_QWORD *)(v5 + 216), &v17[15], &v14);
      if ( v17[4] < 0 )
      {
LABEL_9:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v17, 0x248u);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
        v2 = 1;
        goto LABEL_10;
      }
      v17[4] = 0;
      if ( *(_QWORD *)(v4 + 336) )
        goto LABEL_14;
      v8 = operator new(0x658uLL, 0x4B677844u, 256LL, v7);
      v9 = v8;
      if ( !v8 )
      {
        *(_QWORD *)(v4 + 336) = 0LL;
        v17[4] = -1073741801;
        goto LABEL_9;
      }
      *(_QWORD *)(v8 + 16) = -1LL;
      *(_QWORD *)v8 = 0LL;
      *(_DWORD *)(v8 + 8) = 536;
      *(_DWORD *)(v8 + 1584) = 0;
      *(_QWORD *)(v8 + 1600) = 0LL;
      *(_QWORD *)(v8 + 1616) = 0LL;
      v11 = (_QWORD *)(v8 + 1592);
      v11[1] = v11;
      *v11 = v11;
      *(_QWORD *)(v9 + 1616) = v9 + 1608;
      *(_QWORD *)(v9 + 1608) = v9 + 1608;
      *(_QWORD *)(v4 + 336) = v9;
      HIWORD(v17[144]) = 0;
      CDriverStoreCopy::SetRootDirectory(
        *(CDriverStoreCopy **)(v4 + 336),
        *(struct DXGADAPTER **)(v4 + 16),
        (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v17);
      v12 = v17[4];
      LOWORD(v17[15]) = 0;
      if ( v17[4] >= 0 )
      {
LABEL_14:
        CDriverStoreCopy::EnumDirectory(
          *(CDriverStoreCopy **)(v4 + 336),
          (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v17,
          v6,
          v7);
        while ( 1 )
        {
          v12 = v17[4];
          if ( v17[4] != -2147483642 )
            break;
          if ( !CDriverStoreCopy::ProcessNextDirectory(
                  *(CDriverStoreCopy **)(v4 + 336),
                  (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v17) )
          {
            v12 = v17[4];
            break;
          }
        }
        if ( v12 >= 0 )
          goto LABEL_9;
      }
      if ( v12 == -2147483642 )
        goto LABEL_9;
    }
    v13 = *(CDriverStoreCopy **)(v4 + 336);
    if ( v13 )
      CDriverStoreCopy::`scalar deleting destructor'(v13);
    *(_QWORD *)(v4 + 336) = 0LL;
    goto LABEL_9;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 5815;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"The adapter is already closed by the guest",
    5815LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
  return 0;
}
