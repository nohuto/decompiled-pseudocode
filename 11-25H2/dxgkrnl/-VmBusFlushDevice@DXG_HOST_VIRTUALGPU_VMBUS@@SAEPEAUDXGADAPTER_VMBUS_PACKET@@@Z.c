/*
 * XREFs of ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403C5F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140059588 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x14038A344 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  struct DXGPROCESS *v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 v9; // rax
  const wchar_t *v10; // r9
  int v11; // ecx
  int v12; // eax
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v16; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v17[8]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v18[16]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v19[24]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v20[160]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v21[160]; // [rsp+138h] [rbp+30h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v19);
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3301;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      3301LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = (struct DXGPROCESS *)*((_QWORD *)a1 + 11);
    LODWORD(v15) = -1073741811;
    v7 = *(_DWORD *)(v4 + 24);
    v16 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v17, v7, v6, &v16);
    if ( v16 )
    {
      v11 = *(_DWORD *)(v5 + 28);
      if ( (unsigned int)(v11 - 1) <= 6 )
      {
        if ( v11 == 4 )
        {
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v20, (__int64)v16, 0, v8, 0);
          v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v20, 0LL);
          LODWORD(v15) = v12;
          if ( v12 >= 0 )
          {
            DXGDEVICE::FlushScheduler(v16, 4, 0xFFFFFFFD, 0);
          }
          else
          {
            WdLogSingleEntry1(2LL, v12);
            WdLogGlobalForLineNumber = 3332;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Device was removed: 0x%I64x",
              (int)v15,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v20);
        }
        else
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18, v16);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v21, (__int64)v16, 0, v13, 0);
          v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v21, 0LL);
          LODWORD(v15) = v14;
          if ( v14 >= 0 )
          {
            DXGDEVICE::FlushScheduler(v16, *(_DWORD *)(v5 + 28), 0xFFFFFFFD, 0);
          }
          else
          {
            WdLogSingleEntry1(2LL, v14);
            WdLogGlobalForLineNumber = 3344;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Device was removed: 0x%I64x",
              (int)v15,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v21);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18);
        }
        goto LABEL_18;
      }
      WdLogSingleEntry1(2LL, *(int *)(v5 + 28));
      v9 = *(int *)(v5 + 28);
      v10 = L"Invalid device flush reason: 0x%I64x";
      WdLogGlobalForLineNumber = 3316;
    }
    else
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
      v9 = *(unsigned int *)(v5 + 24);
      v10 = L"Invalid device handle: 0x%I64x";
      WdLogGlobalForLineNumber = 3310;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v15, 4u);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v17);
    v2 = 1;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
  return v2;
}
