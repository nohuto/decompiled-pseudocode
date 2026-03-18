/*
 * XREFs of ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223000
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x14000C948 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14000F84C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x140023980 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400515A8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x140376424 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rax
  const wchar_t *v9; // r9
  unsigned int v10; // r8d
  int v11; // ecx
  unsigned int v12; // edi
  __int64 v13; // r15
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // r14
  _QWORD **v17; // r15
  _QWORD *i; // rbx
  unsigned __int64 v19; // rdx
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGADAPTER *v21; // [rsp+60h] [rbp-A8h] BYREF
  DXGADAPTER *v22[2]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v23[32]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v24[144]; // [rsp+98h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v23,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3359;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      3359LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)a1 + 10);
    LODWORD(v20) = -1073741811;
    v7 = *(_DWORD *)(v4 + 24);
    v21 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v22, v7, *(struct _KTHREAD ***)(v6 + 96), &v21, 1);
    if ( !v21 )
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
      v8 = *(unsigned int *)(v5 + 24);
      v9 = L"Invalid adapter handle: 0x%I64x";
      WdLogGlobalForLineNumber = 3370;
LABEL_21:
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v9, v8, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_22;
    }
    if ( (unsigned int)(*(_DWORD *)(v5 + 28) - 1) > 9 )
    {
      WdLogSingleEntry1(2LL, *(int *)(v5 + 28));
      v8 = *(int *)(v5 + 28);
      v9 = L"Invalid adapter flush reason: 0x%I64x";
      WdLogGlobalForLineNumber = 3376;
      goto LABEL_21;
    }
    if ( !*((_QWORD *)v21 + 391) )
    {
      WdLogSingleEntry0(2LL);
      v8 = 3382LL;
      v9 = L"Must be render adapter";
      WdLogGlobalForLineNumber = 3382;
      goto LABEL_21;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v21, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v24, v10 + 2, v10) >= 0 )
    {
      v11 = *(_DWORD *)(v5 + 28);
      v12 = 3;
      v13 = *((_QWORD *)a1 + 10);
      v14 = v11 - 3;
      if ( !v14 )
      {
        v12 = 2;
LABEL_15:
        v16 = v13 + 288;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 288));
        v17 = (_QWORD **)(v13 + 320);
        for ( i = *v17; i != v17; i = (_QWORD *)*i )
          DXGDEVICE::FlushScheduler(i - 15, v12, 4294967293LL, 0LL);
        _InterlockedDecrement((volatile signed __int32 *)(v16 + 16));
        ExReleasePushLockSharedEx(v16, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_19;
      }
      v15 = v14 - 1;
      if ( !v15 )
        goto LABEL_15;
      if ( v15 == 1 )
      {
        v12 = 4;
        goto LABEL_15;
      }
    }
LABEL_19:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
LABEL_22:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v20, 4u);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v22, v19);
    v2 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
  return v2;
}
