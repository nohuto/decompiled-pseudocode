/*
 * XREFs of ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403F25B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1400396F4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x14003B124 (-VidMmMakeResident@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MUL.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140051320 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400582F0 (-VidMmGetDevicePagingQueue@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@IPEAPEAUVIDMM_PAGING_QUEUE@@PEAP.c)
 *     ?VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z @ 0x140058AD0 (-VidMmWaitForFences@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z @ 0x140293140 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEBD@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMakeResident(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // bl
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned int v6; // edx
  struct DXGPROCESS *v7; // r8
  DXGDEVICE *v8; // r14
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // r15
  unsigned int v13; // r14d
  unsigned int v14; // eax
  __int64 v15; // r8
  int v16; // ecx
  struct _EX_RUNDOWN_REF *v17; // rdx
  DXGDEVICE *v18; // rdi
  int Resident; // eax
  __int64 v20; // [rsp+28h] [rbp-E0h]
  __int64 v21; // [rsp+28h] [rbp-E0h]
  __int64 v22; // [rsp+28h] [rbp-E0h]
  struct _EX_RUNDOWN_REF *v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  DXGDEVICE *v25; // [rsp+68h] [rbp-A0h] BYREF
  struct VIDMM_PAGING_QUEUE *v26; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-90h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v28; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v29[16]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v30; // [rsp+98h] [rbp-70h] BYREF
  D3DDDI_MAKERESIDENT v31; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v32[24]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v33; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-10h]
  _BYTE v35[160]; // [rsp+108h] [rbp+0h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v32);
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4944;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      4944LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
  if ( v4 )
  {
    v33 = 0LL;
    v34 = 0LL;
    v5 = *(unsigned int *)(v4 + 36);
    if ( (_DWORD)v5 && ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) / v5 >= 4 )
    {
      v6 = *(_DWORD *)(v4 + 24);
      if ( v6 )
      {
        if ( (_DWORD)v5 != 1 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4970;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"NumAllocation mist be 1 when hDevice is not 0",
            4970LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v34) = -1073741811;
          goto LABEL_37;
        }
        v7 = (struct DXGPROCESS *)*((_QWORD *)a1 + 11);
        v25 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v24, v6, v7, &v25);
        v8 = v25;
        if ( !v25 )
        {
          WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 24));
          v20 = *(unsigned int *)(v4 + 24);
          WdLogGlobalForLineNumber = 4978;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Invalid device handle: 0x%I64x",
            v20,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v34) = -1073741811;
LABEL_11:
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v24);
          goto LABEL_36;
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29, v25);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, (__int64)v8, 0, v9, 0);
        v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v35, 0LL);
        LODWORD(v34) = v10;
        if ( v10 < 0 )
        {
          WdLogSingleEntry1(2LL, v10);
          WdLogGlobalForLineNumber = 4987;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Device was removed: 0x%I64x",
            (int)v34,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_14:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
          goto LABEL_11;
        }
        if ( !DXGDEVICE::UmdManagesResidency(v8) )
          goto LABEL_14;
        v11 = *((_QWORD *)a1 + 11);
        v26 = 0LL;
        v28 = 0LL;
        v12 = *((_QWORD *)v8 + 2);
        v13 = *(_DWORD *)(v4 + 40);
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 248));
        v14 = (v13 >> 6) & 0xFFFFFF;
        if ( v14 < *(_DWORD *)(v11 + 296) )
        {
          v15 = *(_QWORD *)(v11 + 280);
          if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60)
            && (*(_DWORD *)(v15 + 16LL * v14 + 8) & 0x2000) == 0 )
          {
            v16 = *(_DWORD *)(v15 + 16LL * v14 + 8) & 0x1F;
            if ( v16 )
            {
              if ( v16 == 5 )
              {
                v17 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * v14);
LABEL_23:
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v23, v17);
                _InterlockedDecrement((volatile signed __int32 *)(v11 + 264));
                ExReleasePushLockSharedEx(v11 + 248, 0LL);
                KeLeaveCriticalRegion();
                if ( v23 )
                {
                  v18 = v25;
                  if ( *(_QWORD *)(*(_QWORD *)(v23[1].Count + 16) + 16LL) == *(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) )
                  {
                    VIDMM_EXPORT::VidMmGetDevicePagingQueue(
                      *(VIDMM_EXPORT **)(v12 + 760),
                      *((struct VIDMM_DEVICE **)v25 + 99),
                      0,
                      &v26,
                      &v28);
                    v27 = 0LL;
                    v30 = 0LL;
                    Resident = VIDMM_EXPORT::VidMmMakeResident(
                                 *(VIDMM_EXPORT **)(v12 + 760),
                                 *(struct VIDMM_GLOBAL **)(v12 + 768),
                                 v26,
                                 (struct VIDMM_MULTI_ALLOC **)&v23[3],
                                 1u,
                                 3u,
                                 &v27,
                                 &v30);
                    LODWORD(v34) = Resident;
                    if ( Resident >= 0 )
                    {
                      if ( Resident == 259 )
                      {
                        VIDMM_EXPORT::VidMmWaitForFences(
                          *(VIDMM_EXPORT **)(v12 + 760),
                          *(struct VIDMM_GLOBAL **)(v12 + 768),
                          &v28,
                          &v27);
                        LODWORD(v34) = 0;
                      }
                    }
                    else
                    {
                      WdLogSingleEntry1(2LL, Resident);
                      WdLogGlobalForLineNumber = 5034;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        0xFFFFFFFFLL,
                        L"Failed to make staging allocation resident. Returning 0x%I64x",
                        (int)v34,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                    goto LABEL_26;
                  }
                  WdLogSingleEntry3(2LL, v25, v23, -1073741811LL);
                  WdLogGlobalForLineNumber = 5007;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    0xFFFFFFFFLL,
                    L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
                    (__int64)v18,
                    (__int64)v23,
                    -1073741811LL,
                    0LL,
                    0LL);
                }
                else
                {
                  WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 40));
                  v21 = *(unsigned int *)(v4 + 40);
                  WdLogGlobalForLineNumber = 4998;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    0xFFFFFFFFLL,
                    L"Invalid allocation handle: 0x%I64x",
                    v21,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                LODWORD(v34) = -1073741811;
LABEL_26:
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v23);
                goto LABEL_14;
              }
              WdLogSingleEntry0(2LL);
              WdLogGlobalForLineNumber = 318;
              DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            }
          }
        }
        v17 = 0LL;
        goto LABEL_23;
      }
      v31.Flags.Value = *(_DWORD *)(v4 + 32);
      v31.NumAllocations = v5;
      v31.AllocationList = (const D3DKMT_HANDLE *)(v4 + 40);
      v31.hPagingQueue = *(_DWORD *)(v4 + 28);
      v31.PriorityList = 0LL;
      memset(&v31.Flags + 1, 0, 20);
      LODWORD(v34) = DxgkMakeResidentInternal(&v31, 0, 0LL);
      v33 = *(_OWORD *)&v31.PagingFenceValue;
    }
    else
    {
      WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 36));
      v22 = *((unsigned int *)a1 + 36);
      WdLogGlobalForLineNumber = 4954;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Invalid packet size 0x%I64x", v22, 0LL, 0LL, 0LL, 0LL);
      LODWORD(v34) = -1073741811;
    }
LABEL_36:
    if ( (int)v34 >= 0 )
    {
LABEL_38:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v33, 0x18u);
      v2 = 1;
      goto LABEL_39;
    }
LABEL_37:
    WdLogSingleEntry1(3LL, (int)v34);
    WdLogGlobalForLineNumber = 5066;
    goto LABEL_38;
  }
LABEL_39:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
  return v2;
}
