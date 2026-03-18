/*
 * XREFs of ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426D90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140013690 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140031428 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034E08 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_SIGNALSYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_SIGNALSYNCOBJECT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140054EC4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_SIGNALSYNCOBJECT@@@@YAPEAUDXGKVMB_COMMAND_SIGNALSYNCOBJEC.c)
 *     ?AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x140058200 (-AcquireReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x14021E260 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1402B29CC (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1402BA4F8 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1403260EC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  unsigned int *v4; // rax
  unsigned int *v5; // rdi
  __int64 v6; // rdx
  unsigned int v7; // r8d
  char v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rax
  const wchar_t *v11; // r9
  unsigned int v12; // r15d
  __int64 Pool2; // rax
  __int64 v14; // rcx
  unsigned int *v15; // r12
  UINT64 *v16; // r15
  __int64 v17; // r13
  __int64 CurrentProcess; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  const wchar_t *v21; // r9
  unsigned int v22; // r8d
  unsigned int v23; // r11d
  unsigned int v24; // eax
  __int64 v25; // r10
  __int64 v26; // rax
  char v27; // r13
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // r9
  int v31; // ecx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // r12
  UINT v35; // eax
  struct _KTHREAD **v36; // r8
  struct DXGDEVICE *v37; // rdi
  __int64 v38; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v40; // [rsp+28h] [rbp-E0h]
  int v41; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A8h]
  struct DXG_SIGNAL_GUEST_CPU_EVENT *v43; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-98h] BYREF
  struct DXGDEVICE *v45[2]; // [rsp+78h] [rbp-90h] BYREF
  _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU v46; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v47[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v48[24]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v49[24]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v50[160]; // [rsp+E8h] [rbp-20h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v49,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3944;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      3944LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
    return 0;
  }
  v41 = -1073741811;
  LODWORD(v42) = 0;
  v4 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_SIGNALSYNCOBJECT>((__int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v43 = 0LL;
    v6 = v4[6];
    if ( (_DWORD)v6 )
    {
      if ( (unsigned int)v6 <= 0xFFFF )
        goto LABEL_6;
    }
    else if ( (v4[7] & 2) != 0 )
    {
LABEL_6:
      v7 = v4[12];
      if ( !v7 || (v8 = 1, (v4[7] & 2) != 0) )
        v8 = 0;
      v9 = v4[8];
      if ( v8 )
      {
        if ( v9 )
        {
          WdLogSingleEntry0(2LL);
          v10 = 3961LL;
          v11 = L"Invalid context count for signal from CPU";
          WdLogGlobalForLineNumber = 3961;
LABEL_61:
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v11, v10, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_62;
        }
        LODWORD(v42) = v7;
      }
      else if ( !v9 || v9 > 0xFFFF )
      {
        WdLogSingleEntry1(2LL, v5[8]);
        v10 = v5[8];
        v11 = L"Invalid context count: 0x%I64x";
        WdLogGlobalForLineNumber = 3970;
        goto LABEL_61;
      }
      LODWORD(v44) = 8 * v6;
      v12 = 4 * (v6 + v9) + 56;
      if ( *((_DWORD *)a1 + 36) < v12 )
        goto LABEL_62;
      if ( (v5[7] & 2) != 0 )
      {
        if ( !*((_QWORD *)v5 + 6) )
        {
          WdLogSingleEntry0(2LL);
          v10 = 3987LL;
          v11 = L"Invalid CPU event pointer";
          WdLogGlobalForLineNumber = 3987;
          goto LABEL_61;
        }
        Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
        v43 = (struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2;
        if ( !Pool2 )
        {
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 3993;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
            3993LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v41 = -1073741801;
          goto LABEL_63;
        }
        *(_BYTE *)(Pool2 + 16) = 1;
        *(_QWORD *)v43 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
        *((_QWORD *)v43 + 1) = *((_QWORD *)v5 + 6);
        *((_BYTE *)v43 + 19) = (*(_DWORD *)(*((_QWORD *)a1 + 11) + 408LL) & 0x10) != 0;
        DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference(v43);
      }
      v14 = v5[6];
      v15 = &v5[v14 + 14];
      if ( *((_DWORD *)a1 + 36) - v12 >= (unsigned int)v44 )
        v16 = (UINT64 *)&v15[v5[8]];
      else
        v16 = 0LL;
      if ( v8 )
      {
        if ( v16 )
        {
          v34 = v5[12];
          v35 = v5[7];
          v36 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
          v46.ObjectCount = v5[6];
          v46.ObjectHandleArray = v5 + 14;
          *((_DWORD *)&v46.Flags + 1) = 0;
          v46.hDevice = v34;
          v46.FenceValueArray = v16;
          v46.Flags.Value = v35;
          v45[0] = 0LL;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, v34, v36, v45);
          v37 = v45[0];
          if ( v45[0] )
          {
            DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v45, v45[0]);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v37, 0, v38, 0);
            v41 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v50, 0LL);
            if ( v41 >= 0 )
            {
              Global = DXGGLOBAL::GetGlobal();
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47, Global, 0);
              DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v47);
              v41 = SignalSynchronizationObjectFromCpu(&v46, *((struct DXGPROCESS **)a1 + 11), v37);
              DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47);
            }
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v45);
          }
          else
          {
            WdLogSingleEntry2(2LL, (unsigned int)v34, -1073741811LL);
            WdLogGlobalForLineNumber = 4067;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
              v34,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
          }
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v44);
LABEL_62:
          if ( v41 >= 0 )
          {
LABEL_65:
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v41, 4u);
            v2 = 1;
            goto LABEL_66;
          }
LABEL_63:
          HandleAsyncCommandError(a1, v41, v42, 0);
          if ( v43 )
            DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(v43);
          goto LABEL_65;
        }
        WdLogSingleEntry0(2LL);
        v20 = 4050LL;
        v21 = L"Fence value array is NULL for signal from CPU";
        WdLogGlobalForLineNumber = 4050;
LABEL_30:
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v21, v20, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_63;
      }
      v17 = *((_QWORD *)a1 + 11);
      if ( !v17 )
      {
        CurrentProcess = PsGetCurrentProcess(v14);
        WdLogSingleEntry1(2LL, CurrentProcess);
        WdLogGlobalForLineNumber = 4018;
        v20 = PsGetCurrentProcess(v19);
        v21 = L"Unexpected Process: 0x%I64x";
        goto LABEL_30;
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v48,
        *((struct DXGPROCESS **)a1 + 11));
      v22 = *v15;
      v23 = *(_DWORD *)(v17 + 296);
      v24 = (*v15 >> 6) & 0xFFFFFF;
      if ( v24 < v23 )
      {
        v25 = *(_QWORD *)(v17 + 280);
        if ( ((v22 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16LL * v24 + 8) & 0x60)
          && (*(_DWORD *)(v25 + 16LL * v24 + 8) & 0x2000) == 0
          && (*(_DWORD *)(v25 + 16LL * v24 + 8) & 0x1F) == 7 )
        {
          v26 = *(_QWORD *)(v25 + 16LL * v24);
          if ( v26 )
          {
            v27 = 0;
            v28 = *(_DWORD *)(*(_QWORD *)(v26 + 16) + 468LL);
            goto LABEL_46;
          }
        }
      }
      v29 = (v22 >> 6) & 0xFFFFFF;
      if ( v29 < v23 )
      {
        v30 = *(_QWORD *)(v17 + 280);
        if ( ((v22 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16LL * v29 + 8) & 0x60)
          && (*(_DWORD *)(v30 + 16LL * v29 + 8) & 0x2000) == 0 )
        {
          v31 = *(_DWORD *)(v30 + 16LL * v29 + 8) & 0x1F;
          if ( v31 )
          {
            if ( v31 == 15 )
            {
              v32 = *(_QWORD *)(v30 + 16LL * v29);
              if ( v32 )
              {
                v27 = 1;
                v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL) + 468LL);
LABEL_46:
                LODWORD(v42) = v28;
                DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
                if ( v27 )
                {
                  if ( !v16 )
                  {
                    WdLogSingleEntry0(2LL);
                    v20 = 4091LL;
                    v21 = L"Fence value array is NULL for submit signal to HwQueue";
                    WdLogGlobalForLineNumber = 4091;
                    goto LABEL_30;
                  }
                  v33 = SubmitSignalSyncObjectsToHwQueue(
                          v5[6],
                          v5 + 14,
                          (struct _D3DDDICB_SIGNALFLAGS)v5[7],
                          v5[8],
                          v15,
                          v16,
                          *((struct _KTHREAD ***)a1 + 11),
                          0,
                          0);
                }
                else
                {
                  v33 = SignalSynchronizationObjectInternal(
                          v5[6],
                          v5 + 14,
                          v5[7],
                          v5[8],
                          (struct _VIDSCH_SYNC_OBJECT **)v15,
                          v16,
                          *((_QWORD *)v5 + 5),
                          (void **)&v43,
                          *((DXGPROCESS **)a1 + 11),
                          0);
                }
                v41 = v33;
                goto LABEL_62;
              }
            }
            else
            {
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
      }
      WdLogSingleEntry1(2LL, *v15);
      v40 = *v15;
      WdLogGlobalForLineNumber = 4030;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid context handle: 0x%I64x",
        v40,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v48);
      goto LABEL_62;
    }
    WdLogSingleEntry1(2LL, v6);
    v10 = v5[6];
    v11 = L"Invalid sync object count: 0x%I64x";
    WdLogGlobalForLineNumber = 3953;
    goto LABEL_61;
  }
LABEL_66:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v49);
  return v2;
}
