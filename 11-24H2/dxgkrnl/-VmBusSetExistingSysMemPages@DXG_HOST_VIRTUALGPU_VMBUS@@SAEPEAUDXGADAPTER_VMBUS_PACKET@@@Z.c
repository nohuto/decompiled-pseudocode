/*
 * XREFs of ?VmBusSetExistingSysMemPages@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022FDF0
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

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemPages(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  _DWORD *v4; // rdi
  struct _KTHREAD **Current; // rax
  unsigned int v6; // edx
  int v7; // edi
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned int v10; // r12d
  unsigned int v11; // eax
  struct _KTHREAD *v12; // r8
  int v13; // ecx
  struct DXGALLOCATION *v14; // rdx
  struct _KTHREAD **v15; // rcx
  __int64 v16; // r11
  struct DXGDEVICE *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // [rsp+20h] [rbp-E0h]
  __int64 v20; // [rsp+20h] [rbp-E0h]
  __int64 v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  struct _KTHREAD **v25; // [rsp+68h] [rbp-98h]
  _BYTE v26[16]; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD **v27; // [rsp+80h] [rbp-80h]
  char v28[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v29[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v30[160]; // [rsp+B0h] [rbp-50h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v29,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1985;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      1985LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
    return 0;
  }
  v4 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( v4 )
  {
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    v6 = v4[6];
    v25 = Current;
    v23 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v28, v6, Current, &v23);
    if ( !v23 )
    {
      WdLogSingleEntry1(2LL, (unsigned int)v4[6]);
      v19 = (unsigned int)v4[6];
      WdLogGlobalForLineNumber = 1995;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid device handle: 0x%I64x",
        v19,
        0LL,
        0LL,
        0LL,
        0LL);
      v7 = -1073741811;
      v22 = -1073741811;
      goto LABEL_27;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v26,
      v23);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v23, 0, v8, 0);
    v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30, 0LL);
    if ( v22 >= 0 )
    {
      v9 = (unsigned int)v4[8];
      if ( (_DWORD)v9 && ((unsigned __int64)*((unsigned int *)a1 + 36) - 40) >> 3 >= v9 )
      {
        v10 = v4[7];
        v27 = v25 + 31;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v25 + 31));
        v11 = (v10 >> 6) & 0xFFFFFF;
        if ( v11 < *((_DWORD *)v25 + 74) )
        {
          v12 = v25[35];
          if ( ((v10 >> 25) & 0x60) == (*((_BYTE *)v12 + 16 * v11 + 8) & 0x60)
            && (*((_DWORD *)v12 + 4 * v11 + 2) & 0x2000) == 0 )
          {
            v13 = *((_DWORD *)v12 + 4 * v11 + 2) & 0x1F;
            if ( v13 )
            {
              if ( v13 == 5 )
              {
                v14 = (struct DXGALLOCATION *)*((_QWORD *)v12 + 2 * v11);
                goto LABEL_16;
              }
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 318;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Handle type mismatch",
                318LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
        }
        v14 = 0LL;
LABEL_16:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v24, v14);
        v15 = v27;
        _InterlockedDecrement((volatile signed __int32 *)v27 + 4);
        ExReleasePushLockSharedEx(v15, 0LL);
        KeLeaveCriticalRegion();
        if ( v24 && (v16 = *(_QWORD *)(v24 + 24)) != 0 )
        {
          v17 = v23;
          v18 = *((_QWORD *)v23 + 2);
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) + 16LL) + 16LL) == *(_QWORD *)(v18 + 16) )
          {
            v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(v18 + 760) + 8LL)
                                                                                        + 1264LL))(
                    v16,
                    8LL,
                    (unsigned int)v4[8],
                    (unsigned int)v4[9],
                    v4 + 10);
            goto LABEL_21;
          }
          WdLogSingleEntry3(2LL, v23, v24, -1073741811LL);
          WdLogGlobalForLineNumber = 2028;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            (__int64)v17,
            v24,
            -1073741811LL,
            0LL,
            0LL);
        }
        else
        {
          WdLogSingleEntry1(2LL, (unsigned int)v4[7]);
          v20 = (unsigned int)v4[7];
          WdLogGlobalForLineNumber = 2019;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Invalid allocation handle: 0x%I64x",
            v20,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v22 = -1073741811;
LABEL_21:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v24);
        goto LABEL_26;
      }
      WdLogSingleEntry1(2LL, v9);
      v21 = (unsigned int)v4[8];
      WdLogGlobalForLineNumber = 2011;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid NumPages in the command: 0x%I64x",
        v21,
        0LL,
        0LL,
        0LL,
        0LL);
      v22 = -1073741811;
    }
LABEL_26:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v30);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v26);
    v7 = v22;
    if ( v22 >= 0 )
    {
LABEL_28:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v22, 4u);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v28);
      v2 = 1;
      goto LABEL_29;
    }
LABEL_27:
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 2043;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmBusSetExistingSysMemPages failed: 0x%I64x",
      v22,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_28;
  }
LABEL_29:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29);
  return v2;
}
