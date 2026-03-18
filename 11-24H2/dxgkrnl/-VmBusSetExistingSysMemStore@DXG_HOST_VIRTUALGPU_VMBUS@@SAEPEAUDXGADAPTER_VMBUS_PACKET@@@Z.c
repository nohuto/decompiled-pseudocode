/*
 * XREFs of ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402302F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1400515A8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemStore(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  _DWORD *v4; // rdi
  struct _KTHREAD **Current; // rax
  unsigned int v6; // edx
  struct _KTHREAD **v7; // r15
  struct DXGDEVICE *v8; // r14
  __int64 v9; // r9
  unsigned int v10; // r14d
  unsigned int v11; // eax
  struct _KTHREAD *v12; // r8
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
  char v23[8]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v24[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v25[160]; // [rsp+A0h] [rbp-60h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v24,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1932;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      1932LL,
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
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    v6 = v4[6];
    v21 = 0LL;
    v7 = Current;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v23, v6, Current, &v21);
    v8 = v21;
    if ( !v21 )
    {
      WdLogSingleEntry1(2LL, (unsigned int)v4[6]);
      v17 = (unsigned int)v4[6];
      WdLogGlobalForLineNumber = 1942;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid device handle: 0x%I64x",
        v17,
        0LL,
        0LL,
        0LL,
        0LL);
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
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 31));
    v11 = (v10 >> 6) & 0xFFFFFF;
    if ( v11 < *((_DWORD *)v7 + 74) )
    {
      v12 = v7[35];
      if ( ((v10 >> 25) & 0x60) == (*((_BYTE *)v12 + 16 * v11 + 8) & 0x60)
        && (*((_DWORD *)v12 + 4 * v11 + 2) & 0x2000) == 0 )
      {
        v13 = *((_DWORD *)v12 + 4 * v11 + 2) & 0x1F;
        if ( v13 )
        {
          if ( v13 == 5 )
          {
            v14 = (struct DXGALLOCATION *)*((_QWORD *)v12 + 2 * v11);
            goto LABEL_14;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v14 = 0LL;
LABEL_14:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v20, v14);
    _InterlockedDecrement((volatile signed __int32 *)v7 + 66);
    ExReleasePushLockSharedEx(v7 + 31, 0LL);
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
      WdLogGlobalForLineNumber = 1967;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
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
      WdLogGlobalForLineNumber = 1958;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
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
