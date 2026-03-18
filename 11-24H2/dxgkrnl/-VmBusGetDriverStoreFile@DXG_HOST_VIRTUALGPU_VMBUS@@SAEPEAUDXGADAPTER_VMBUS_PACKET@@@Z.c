/*
 * XREFs of ?VmBusGetDriverStoreFile@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140395F60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059048 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ??_GCDriverStoreCopy@@QEAAPEAXI@Z @ 0x14007AB20 (--_GCDriverStoreCopy@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401CD908 (-EnumDirectory@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401CE268 (-ProcessNextDirectory@CDriverStoreCopy@@QEAAEPEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z.c)
 *     ?SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN@@@Z @ 0x1401CE8B0 (-SetRootDirectory@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@PEAUDXGKVMB_COMMAND_GETDRIVERSTOREFILE_.c)
 *     DpiGetDriverStorePath @ 0x1403EE46C (DpiGetDriverStorePath.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDriverStoreFile(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  char v3; // bl
  bool v4; // zf
  __int64 v5; // rcx
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // eax
  CDriverStoreCopy *v14; // rcx
  int v15; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h]
  int v18; // [rsp+68h] [rbp-98h]
  _BYTE v19[32]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v20[148]; // [rsp+90h] [rbp-70h] BYREF

  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v4 = v2 == -248;
  v5 = v2 + 248;
  v18 = 0;
  v17 = v5;
  if ( !v4 && *(struct _KTHREAD **)(v5 + 8) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v16);
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5827;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      5827LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
    return 0;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v7 )
  {
    v8 = *((_QWORD *)a1 + 10);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)(v8 + 56));
    memset(v20, 0, 0x248uLL);
    if ( *(_BYTE *)(v8 + 153) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 5839;
      v20[4] = -1073741790;
LABEL_25:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v20, 0x248u);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
      v3 = 1;
      goto LABEL_26;
    }
    if ( !*(_BYTE *)(v7 + 24) )
    {
      v9 = *(_QWORD *)(v8 + 16);
      v15 = 520;
      v20[4] = DpiGetDriverStorePath(*(_QWORD *)(v9 + 216), &v20[15], &v15);
      if ( v20[4] < 0 )
        goto LABEL_25;
      v20[4] = 0;
      if ( *(_QWORD *)(v8 + 336) )
        goto LABEL_14;
      v10 = operator new(0x658uLL, 0x4B677844u, 256LL);
      v11 = v10;
      if ( !v10 )
      {
        *(_QWORD *)(v8 + 336) = 0LL;
        v20[4] = -1073741801;
        goto LABEL_25;
      }
      *(_QWORD *)(v10 + 16) = -1LL;
      *(_QWORD *)v10 = 0LL;
      *(_DWORD *)(v10 + 8) = 536;
      *(_DWORD *)(v10 + 1584) = 0;
      *(_QWORD *)(v10 + 1600) = 0LL;
      *(_QWORD *)(v10 + 1616) = 0LL;
      v12 = (_QWORD *)(v10 + 1592);
      v12[1] = v12;
      *v12 = v12;
      *(_QWORD *)(v11 + 1616) = v11 + 1608;
      *(_QWORD *)(v11 + 1608) = v11 + 1608;
      *(_QWORD *)(v8 + 336) = v11;
      HIWORD(v20[144]) = 0;
      CDriverStoreCopy::SetRootDirectory(
        *(CDriverStoreCopy **)(v8 + 336),
        *(struct DXGADAPTER **)(v8 + 16),
        (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v20);
      v13 = v20[4];
      LOWORD(v20[15]) = 0;
      if ( v20[4] >= 0 )
      {
LABEL_14:
        CDriverStoreCopy::EnumDirectory(
          *(CDriverStoreCopy **)(v8 + 336),
          (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v20);
        while ( 1 )
        {
          v13 = v20[4];
          if ( v20[4] != -2147483642 )
            break;
          if ( !CDriverStoreCopy::ProcessNextDirectory(
                  *(CDriverStoreCopy **)(v8 + 336),
                  (struct DXGKVMB_COMMAND_GETDRIVERSTOREFILE_RETURN *)v20) )
          {
            v13 = v20[4];
            break;
          }
        }
        if ( v13 >= 0 )
          goto LABEL_25;
      }
      if ( v13 == -2147483642 )
        goto LABEL_25;
    }
    v14 = *(CDriverStoreCopy **)(v8 + 336);
    if ( v14 )
      CDriverStoreCopy::`scalar deleting destructor'(v14);
    *(_QWORD *)(v8 + 336) = 0LL;
    goto LABEL_25;
  }
LABEL_26:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
  return v3;
}
