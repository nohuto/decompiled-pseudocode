/*
 * XREFs of ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021EFC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14000EB90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002BC70 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140058E28 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@@Z @ 0x1401EA67C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAVDXGHWQUEUE@@UtagRECT@@2IPEBU3@PEAVCOREDEVICEACCESS@@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusBlt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rdx
  char v2; // bl
  __int64 v5; // rax
  __int64 v6; // rdi
  struct DXGADAPTER *v7; // r13
  unsigned __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned int v10; // edx
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v12; // r12
  struct _KTHREAD **v13; // rax
  struct _KTHREAD **v14; // rax
  struct DXGCONTEXT *v15; // rcx
  struct DXGHWQUEUE *v16; // r15
  __int64 v17; // r9
  char *v18; // rcx
  unsigned int v19; // r8d
  struct tagRECT v20; // xmm1
  unsigned int v21; // edx
  int v22; // eax
  char *v23; // rcx
  __int64 v24; // [rsp+28h] [rbp-E0h]
  __int64 v25; // [rsp+28h] [rbp-E0h]
  UINT v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGCONTEXT *v28; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  struct DXGHWQUEUE *v30; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v31[16]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v32[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v33[16]; // [rsp+A8h] [rbp-60h] BYREF
  struct tagRECT v34; // [rsp+B8h] [rbp-50h] BYREF
  struct tagRECT v35; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v36[24]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v37[24]; // [rsp+F0h] [rbp-18h] BYREF
  struct DXGDEVICE *v38; // [rsp+108h] [rbp+0h] BYREF
  int v39; // [rsp+110h] [rbp+8h]
  _BYTE v40[160]; // [rsp+118h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 155) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2111;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Presentation is disabled", 2111LL, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v37, (struct _KTHREAD **)(v1 + 248));
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2115;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      2115LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
    return 0;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL);
    v8 = 16LL * *(unsigned int *)(v5 + 72);
    if ( v8 > 0xFFFFFFFF
      || (v9 = v8 + 80, (unsigned int)v8 >= 0xFFFFFFB0)
      || (v10 = v9 + *(_DWORD *)(v6 + 76), v10 < v9)
      || v10 > *((_DWORD *)a1 + 36) )
    {
      LODWORD(v27) = -1073741811;
      goto LABEL_28;
    }
    v38 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29, *(_DWORD *)(v6 + 24), Current, &v38);
    v12 = v38;
    if ( !v38 )
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)(v6 + 24));
      v24 = *(unsigned int *)(v6 + 24);
      WdLogGlobalForLineNumber = 2149;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid device handle: 0x%I64x",
        v24,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v27) = -1073741811;
LABEL_13:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v29);
LABEL_28:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v27, 4u);
      v2 = 1;
      goto LABEL_29;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33, v38);
    v28 = 0LL;
    v30 = 0LL;
    v13 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v32, *(_DWORD *)(v6 + 28), v13, &v28, 0, 0);
    v14 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v31, *(_DWORD *)(v6 + 28), v14, &v30, 0, 0);
    v15 = v28;
    v16 = v30;
    if ( v28 )
    {
      if ( !v30 )
        goto LABEL_20;
    }
    else if ( !v30 )
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)(v6 + 28));
      v25 = *(unsigned int *)(v6 + 28);
      WdLogGlobalForLineNumber = 2168;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid context handle: 0x%I64x",
        v25,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v27) = -1073741811;
LABEL_17:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v31);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v32);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
      goto LABEL_13;
    }
    v15 = (struct DXGCONTEXT *)*((_QWORD *)v30 + 2);
    v28 = v15;
LABEL_20:
    if ( *((struct DXGDEVICE **)v15 + 2) == v12 )
    {
      DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v15 + 440));
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36, v7, 1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v12, 0, v17, 0);
      LODWORD(v27) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v40, 0LL);
      if ( (int)v27 >= 0 )
      {
        v19 = *(_DWORD *)(v6 + 36);
        v20 = *(struct tagRECT *)(v6 + 40);
        v21 = *(_DWORD *)(v6 + 32);
        v26 = *(_DWORD *)(v6 + 72);
        v34 = *(struct tagRECT *)(v6 + 56);
        v35 = v20;
        v22 = DXGCONTEXT::BltFromVm(
                v28,
                v21,
                v19,
                0LL,
                &v28,
                v16,
                &v35,
                &v34,
                v26,
                (const struct tagRECT *)(v6 + 80),
                (struct COREDEVICEACCESS *)v40);
        v23 = (char *)v28 + 440;
        LODWORD(v27) = v22;
        *((_QWORD *)v28 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v23, 0LL);
        KeLeaveCriticalRegion();
        if ( (int)v27 < 0 )
        {
          WdLogSingleEntry1(2LL, (int)v27);
          WdLogGlobalForLineNumber = 2216;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"VmBusBlt failed: 0x%I64x",
            (int)v27,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        v18 = (char *)v28 + 440;
        *((_QWORD *)v28 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v18, 0LL);
        KeLeaveCriticalRegion();
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
    }
    else
    {
      WdLogSingleEntry2(2LL, v15, v12);
      WdLogGlobalForLineNumber = 2182;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Context 0x%I64x does not belong to device 0x%I64x",
        (__int64)v28,
        (__int64)v12,
        0LL,
        0LL,
        0LL);
      LODWORD(v27) = -1073741811;
      v38 = (struct DXGDEVICE *)58279181;
      v39 = 0;
      RtlLogUnexpectedCodepath(&v38);
    }
    goto LABEL_17;
  }
LABEL_29:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
  return v2;
}
