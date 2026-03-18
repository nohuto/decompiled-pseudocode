/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14029CC80
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x14001DE10 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x14001E170 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x140022F40 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z @ 0x14002B430 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N2@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051320 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x140217C90 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x14029B068 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x14029E7B4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1402AB300 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromGpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rdi
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // r15
  __int64 v8; // r8
  UINT v9; // esi
  unsigned int v10; // eax
  D3DKMT_HANDLE v11; // r13d
  unsigned int v12; // r12d
  volatile signed __int32 *v13; // rsi
  unsigned int v14; // edx
  int v15; // r8d
  int EntryType; // r15d
  const unsigned __int64 *v17; // r9
  int v18; // eax
  int v20; // eax
  const wchar_t *v21; // r9
  __int64 CurrentProcess; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-A9h]
  __int64 v26; // [rsp+20h] [rbp-A9h]
  _DWORD v27[2]; // [rsp+50h] [rbp-79h] BYREF
  __int64 v28; // [rsp+58h] [rbp-71h]
  __int64 v29; // [rsp+60h] [rbp-69h]
  _BYTE v30[16]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v31[16]; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v32[24]; // [rsp+88h] [rbp-41h] BYREF
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU v33; // [rsp+A0h] [rbp-29h] BYREF
  int v34; // [rsp+130h] [rbp+67h] BYREF
  struct DXGCONTEXT *v35; // [rsp+138h] [rbp+6Fh] BYREF
  struct DXGHWQUEUE *v36; // [rsp+140h] [rbp+77h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v32);
  v2 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    if ( !v4 )
    {
LABEL_20:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
      return v2;
    }
    v35 = 0LL;
    v36 = 0LL;
    Current = DXGPROCESS::GetCurrent(v3);
    v7 = Current;
    if ( !Current )
    {
      CurrentProcess = PsGetCurrentProcess(v6);
      WdLogSingleEntry1(2LL, CurrentProcess);
      WdLogGlobalForLineNumber = 4289;
      v24 = PsGetCurrentProcess(v23);
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"unexpected process: 0x%I64x", v24, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_31;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31, *(_DWORD *)(v4 + 24), Current, &v35, 0, 0);
    if ( !v35 )
    {
      DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v30, *(_DWORD *)(v4 + 24), v7, &v36, 0, 1);
      if ( !v36 )
      {
        WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 24));
        v26 = *(unsigned int *)(v4 + 24);
        WdLogGlobalForLineNumber = 4301;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Invalid SubmitWait handle: 0x%I64x",
          v26,
          0LL,
          0LL,
          0LL,
          0LL);
        v34 = -1073741811;
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v30);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31);
        goto LABEL_18;
      }
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v30);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v31);
    v9 = *(_DWORD *)(v4 + 28);
    if ( v9 - 1 <= 0xFFFE )
    {
      v10 = 12 * v9 + 40;
      if ( *((_DWORD *)a1 + 36) < v10 )
      {
        WdLogSingleEntry1(3LL, v10);
        WdLogGlobalForLineNumber = 4319;
      }
      else
      {
        v11 = *(_DWORD *)(v4 + 24);
        if ( !v35 )
        {
          v27[0] = *(_DWORD *)(v4 + 24);
          v29 = v4 + 40;
          v27[1] = v9;
          v28 = v4 + 8 * v9 + 40;
          v20 = DxgkSubmitWaitForSyncObjectsToHwQueueInternal((__int64)v27, 0, v8);
          v34 = v20;
          if ( v20 >= 0 )
            goto LABEL_18;
          WdLogSingleEntry1(2LL, v20);
          v21 = L"DxgkSubmitWaitForSyncObjectsToHwQueue failed: 0x%I64x";
          WdLogGlobalForLineNumber = 4356;
          goto LABEL_26;
        }
        memset(&v33, 0, sizeof(v33));
        v33.hContext = v11;
        v33.ObjectCount = v9;
        v33.ObjectHandleArray = (const D3DKMT_HANDLE *)(v4 + 8 * v9 + 40);
        if ( *(_BYTE *)(v4 + 32) )
          v33.FenceValue = *(_QWORD *)(v4 + 40);
        else
          v33.FenceValue = 0LL;
        v12 = *(_DWORD *)(v4 + 8 * v9 + 40);
        v13 = (volatile signed __int32 *)((char *)v7 + 248);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v7 + 248));
        v14 = (v12 >> 6) & 0xFFFFFF;
        if ( v14 < *((_DWORD *)v7 + 74)
          && (v15 = *(_DWORD *)(*((_QWORD *)v7 + 35) + 16LL * v14 + 8),
              ((v12 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v7 + 35) + 16LL * v14 + 8) & 0x60))
          && (v15 & 0x2000) == 0
          && (v15 & 0x1F) != 0 )
        {
          EntryType = HMGRTABLE::GetEntryType((char *)v7 + 280);
        }
        else
        {
          EntryType = 0;
        }
        _InterlockedDecrement(v13 + 4);
        ExReleasePushLockSharedEx(v13, 0LL);
        KeLeaveCriticalRegion();
        if ( EntryType == 8 )
        {
          v17 = 0LL;
          if ( *(_BYTE *)(v4 + 32) )
          {
LABEL_17:
            v18 = DxgkWaitForSynchronizationObjectFromGpuInternal(&v33, 0, 0, v17, 0);
            v34 = v18;
            if ( v18 >= 0 )
              goto LABEL_18;
            WdLogSingleEntry1(2LL, v18);
            v21 = L"DxgkWaitForSynchronizationObjectFromGpuInternal failed: 0x%I64x";
            WdLogGlobalForLineNumber = 4342;
LABEL_26:
            DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v21, v34, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_18;
          }
LABEL_22:
          v17 = (const unsigned __int64 *)(v4 + 40);
          goto LABEL_17;
        }
        if ( !*(_BYTE *)(v4 + 32) )
          goto LABEL_22;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 4334;
      }
LABEL_31:
      v34 = -1073741811;
      goto LABEL_32;
    }
    WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 28));
    v25 = *(unsigned int *)(v4 + 28);
    WdLogGlobalForLineNumber = 4310;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid object count 0x%I64x", v25, 0LL, 0LL, 0LL, 0LL);
    v34 = -1073741811;
LABEL_18:
    if ( v34 >= 0 )
    {
LABEL_19:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v34, 4u);
      v2 = 1;
      goto LABEL_20;
    }
LABEL_32:
    HandleAsyncCommandError(a1, v34, 0, 3);
    goto LABEL_19;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 4279;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    0xFFFFFFFFLL,
    L"The adapter is already closed by the guest",
    4279LL,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
  return 0;
}
