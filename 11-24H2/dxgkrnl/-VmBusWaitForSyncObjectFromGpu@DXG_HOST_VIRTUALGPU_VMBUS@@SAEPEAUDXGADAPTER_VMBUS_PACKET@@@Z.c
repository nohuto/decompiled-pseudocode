/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402AE7C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14000E830 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14000EB90 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140023750 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002BC70 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140050D90 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x14021E260 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x14029E9F0 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1402AECE8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14032AEB8 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromGpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // r15
  UINT v8; // esi
  unsigned int v9; // eax
  D3DKMT_HANDLE v10; // r13d
  unsigned int v11; // r12d
  struct _KTHREAD **v12; // rsi
  unsigned int v13; // edx
  int v14; // r8d
  int EntryType; // r15d
  const unsigned __int64 *v16; // r9
  int v17; // eax
  int v19; // eax
  const wchar_t *v20; // r9
  __int64 CurrentProcess; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // [rsp+20h] [rbp-A9h]
  __int64 v25; // [rsp+20h] [rbp-A9h]
  _DWORD v26[2]; // [rsp+50h] [rbp-79h] BYREF
  __int64 v27; // [rsp+58h] [rbp-71h]
  __int64 v28; // [rsp+60h] [rbp-69h]
  _BYTE v29[16]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v30[16]; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v31[24]; // [rsp+88h] [rbp-41h] BYREF
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU v32; // [rsp+A0h] [rbp-29h] BYREF
  int v33; // [rsp+130h] [rbp+67h] BYREF
  struct DXGCONTEXT *v34; // [rsp+138h] [rbp+6Fh] BYREF
  struct DXGHWQUEUE *v35; // [rsp+140h] [rbp+77h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v31,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    if ( !v4 )
    {
LABEL_20:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
      return v2;
    }
    v34 = 0LL;
    v35 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v3);
    v7 = Current;
    if ( !Current )
    {
      CurrentProcess = PsGetCurrentProcess(v6);
      WdLogSingleEntry1(2LL, CurrentProcess);
      WdLogGlobalForLineNumber = 4295;
      v23 = PsGetCurrentProcess(v22);
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"unexpected process: 0x%I64x", v23, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_31;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30, *(_DWORD *)(v4 + 24), Current, &v34, 0, 0);
    if ( !v34 )
    {
      DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v29, *(_DWORD *)(v4 + 24), v7, &v35, 0, 1);
      if ( !v35 )
      {
        WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 24));
        v25 = *(unsigned int *)(v4 + 24);
        WdLogGlobalForLineNumber = 4307;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid SubmitWait handle: 0x%I64x",
          v25,
          0LL,
          0LL,
          0LL,
          0LL);
        v33 = -1073741811;
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v29);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30);
        goto LABEL_18;
      }
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v29);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v30);
    v8 = *(_DWORD *)(v4 + 28);
    if ( v8 - 1 <= 0xFFFE )
    {
      v9 = 12 * v8 + 40;
      if ( *((_DWORD *)a1 + 36) < v9 )
      {
        WdLogSingleEntry1(3LL, v9);
        WdLogGlobalForLineNumber = 4325;
      }
      else
      {
        v10 = *(_DWORD *)(v4 + 24);
        if ( !v34 )
        {
          v26[0] = *(_DWORD *)(v4 + 24);
          v28 = v4 + 40;
          v26[1] = v8;
          v27 = v4 + 8 * v8 + 40;
          v19 = DxgkSubmitWaitForSyncObjectsToHwQueueInternal(v26, 0LL);
          v33 = v19;
          if ( v19 >= 0 )
            goto LABEL_18;
          WdLogSingleEntry1(2LL, v19);
          v20 = L"DxgkSubmitWaitForSyncObjectsToHwQueue failed: 0x%I64x";
          WdLogGlobalForLineNumber = 4362;
          goto LABEL_26;
        }
        memset(&v32, 0, sizeof(v32));
        v32.hContext = v10;
        v32.ObjectCount = v8;
        v32.ObjectHandleArray = (const D3DKMT_HANDLE *)(v4 + 8 * v8 + 40);
        if ( *(_BYTE *)(v4 + 32) )
          v32.FenceValue = *(_QWORD *)(v4 + 40);
        else
          v32.FenceValue = 0LL;
        v11 = *(_DWORD *)(v4 + 8 * v8 + 40);
        v12 = v7 + 31;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v7 + 31));
        v13 = (v11 >> 6) & 0xFFFFFF;
        if ( v13 < *((_DWORD *)v7 + 74)
          && (v14 = *((_DWORD *)v7[35] + 4 * v13 + 2), ((v11 >> 25) & 0x60) == (*((_BYTE *)v7[35] + 16 * v13 + 8) & 0x60))
          && (v14 & 0x2000) == 0
          && (v14 & 0x1F) != 0 )
        {
          EntryType = HMGRTABLE::GetEntryType(v7 + 35);
        }
        else
        {
          EntryType = 0;
        }
        _InterlockedDecrement((volatile signed __int32 *)v12 + 4);
        ExReleasePushLockSharedEx(v12, 0LL);
        KeLeaveCriticalRegion();
        if ( EntryType == 8 )
        {
          v16 = 0LL;
          if ( *(_BYTE *)(v4 + 32) )
          {
LABEL_17:
            v17 = DxgkWaitForSynchronizationObjectFromGpuInternal(&v32, 0, 0LL, v16, 0);
            v33 = v17;
            if ( v17 >= 0 )
              goto LABEL_18;
            WdLogSingleEntry1(2LL, v17);
            v20 = L"DxgkWaitForSynchronizationObjectFromGpuInternal failed: 0x%I64x";
            WdLogGlobalForLineNumber = 4348;
LABEL_26:
            DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v20, v33, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_18;
          }
LABEL_22:
          v16 = (const unsigned __int64 *)(v4 + 40);
          goto LABEL_17;
        }
        if ( !*(_BYTE *)(v4 + 32) )
          goto LABEL_22;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4340;
      }
LABEL_31:
      v33 = -1073741811;
      goto LABEL_32;
    }
    WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 28));
    v24 = *(unsigned int *)(v4 + 28);
    WdLogGlobalForLineNumber = 4316;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid object count 0x%I64x", v24, 0LL, 0LL, 0LL, 0LL);
    v33 = -1073741811;
LABEL_18:
    if ( v33 >= 0 )
    {
LABEL_19:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v33, 4u);
      v2 = 1;
      goto LABEL_20;
    }
LABEL_32:
    HandleAsyncCommandError(a1, v33, 0, 3);
    goto LABEL_19;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 4285;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"The adapter is already closed by the guest",
    4285LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
  return 0;
}
