/*
 * XREFs of ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140229A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140013C98 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051B58 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemStore(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  _DWORD *v4; // rdi
  struct DXGPROCESS *Current; // rax
  unsigned int v6; // edx
  struct DXGPROCESS *v7; // r15
  struct DXGDEVICE *v8; // r14
  __int64 v9; // r9
  unsigned int v10; // r14d
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // ecx
  struct DXGALLOCATION *v14; // rdx
  struct DXGDEVICE *v15; // r14
  __int64 v16; // r10
  __int64 v17; // [rsp+20h] [rbp-E0h]
  __int64 v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v21; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v23[8]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v24[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v25[160]; // [rsp+A0h] [rbp-60h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v24,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1931;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      1931LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
    return 0;
  }
  v4 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( v4 )
  {
    Current = DXGPROCESS::GetCurrent();
    v6 = v4[6];
    v21 = 0LL;
    v7 = Current;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v23, v6, Current, &v21);
    v8 = v21;
    if ( !v21 )
    {
      WdLogSingleEntry1(2LL, (unsigned int)v4[6]);
      v17 = (unsigned int)v4[6];
      WdLogGlobalForLineNumber = 1941;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid device handle: 0x%I64x", v17, 0LL, 0LL, 0LL, 0LL);
      v19 = -1073741811;
LABEL_24:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v19, 4u);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v23);
      v2 = 1;
      goto LABEL_25;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22,
      v21);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, (__int64)v8, 0, v9, 0);
    v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v25, 0LL);
    if ( v19 < 0 )
    {
LABEL_23:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v25);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22);
      goto LABEL_24;
    }
    v10 = v4[7];
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v7 + 248));
    v11 = (v10 >> 6) & 0xFFFFFF;
    if ( v11 < *((_DWORD *)v7 + 74) )
    {
      v12 = *((_QWORD *)v7 + 35);
      if ( ((v10 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x60)
        && (*(_DWORD *)(v12 + 16LL * v11 + 8) & 0x2000) == 0 )
      {
        v13 = *(_DWORD *)(v12 + 16LL * v11 + 8) & 0x1F;
        if ( v13 )
        {
          if ( v13 == 5 )
          {
            v14 = *(struct DXGALLOCATION **)(v12 + 16LL * v11);
            goto LABEL_14;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v14 = 0LL;
LABEL_14:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v20, v14);
    _InterlockedDecrement((volatile signed __int32 *)v7 + 66);
    ExReleasePushLockSharedEx((char *)v7 + 248, 0LL);
    KeLeaveCriticalRegion();
    if ( v20 && *(_QWORD *)(v20 + 24) )
    {
      v15 = v21;
      v16 = *((_QWORD *)v21 + 2);
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) + 16LL) + 16LL) == *(_QWORD *)(v16 + 16) )
      {
        v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v16 + 760) + 8LL) + 1136LL))(
                *(_QWORD *)(v20 + 24),
                (unsigned int)v4[8]);
LABEL_22:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v20);
        goto LABEL_23;
      }
      WdLogSingleEntry3(2LL, v21, v20, -1073741811LL);
      WdLogGlobalForLineNumber = 1966;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        (__int64)v15,
        v20,
        -1073741811LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, (unsigned int)v4[7]);
      v18 = (unsigned int)v4[7];
      WdLogGlobalForLineNumber = 1957;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid allocation handle: 0x%I64x",
        v18,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = -1073741811;
    goto LABEL_22;
  }
LABEL_25:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
  return v2;
}
