/*
 * XREFs of ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14032F440
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140013BA0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x14003B098 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140046900 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005B6C8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTU.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x140307940 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x14032FA20 (DxgkMapGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMapGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // edx
  _BOOL8 v7; // rcx
  unsigned __int64 v8; // rdx
  struct DXGPROCESS *Current; // rax
  struct DXGDEVICE *v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r14
  unsigned int v13; // ebx
  unsigned int v14; // eax
  __int64 v15; // r8
  int v16; // ecx
  struct _EX_RUNDOWN_REF *v17; // rdx
  struct _EX_RUNDOWN_REF *v18; // rbx
  struct DXGDEVICE *v19; // r13
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // r8
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v23; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+28h] [rbp-D8h]
  __int64 v25; // [rsp+28h] [rbp-D8h]
  __int64 v26; // [rsp+28h] [rbp-D8h]
  __int64 v27; // [rsp+30h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v28; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[8]; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v30; // [rsp+60h] [rbp-A0h] BYREF
  struct _EX_RUNDOWN_REF *v31; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v32[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v33[24]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v34; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-58h]
  _BYTE v36[160]; // [rsp+B0h] [rbp-50h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v33);
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5413;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      5413LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS>((__int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v35 = 0LL;
    v34 = 0LL;
    v6 = *(_DWORD *)(v4 + 128);
    v7 = v6 == 0;
    if ( v7 == (*(_DWORD *)(v4 + 24) == 0) )
    {
      LODWORD(v35) = -1073741811;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 5422;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Both device and paging queue are set or not set",
        5422LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_34:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v34, 0x18u);
      v2 = 1;
      goto LABEL_35;
    }
    if ( !v6 )
    {
      v21 = DxgkMapGpuVirtualAddress(v4 + 24);
      LODWORD(v35) = v21;
      goto LABEL_31;
    }
    v8 = *(_QWORD *)(v4 + 80);
    if ( v8 >= 0x20 || (v8 & 0xC) != 0 )
    {
      WdLogSingleEntry2(2LL, v8, *((_QWORD *)a1 + 11));
      v26 = *((_QWORD *)a1 + 11);
      v23 = *(struct D3DDDI_MAPGPUVIRTUALADDRESS **)(v5 + 80);
      WdLogGlobalForLineNumber = 5437;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid protection flags specified 0x%I64x DXGPROCESS=0x%I64x",
        (__int64)v23,
        v26,
        0LL,
        0LL,
        0LL);
      LODWORD(v35) = -1073741811;
      goto LABEL_34;
    }
    v30 = 0LL;
    Current = DXGPROCESS::GetCurrent(v7);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v29, *(_DWORD *)(v5 + 128), Current, &v30);
    v10 = v30;
    if ( *(_DWORD *)(v5 + 128) && !v30 )
    {
      LODWORD(v35) = -1073741811;
      WdLogSingleEntry2(2LL, -1073741811LL, *(unsigned int *)(v5 + 128));
      v24 = *(unsigned int *)(v5 + 128);
      WdLogGlobalForLineNumber = 5447;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid device handle: 0x%I64x",
        (int)v35,
        v24,
        0LL,
        0LL,
        0LL);
LABEL_12:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v29);
      goto LABEL_34;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v32,
      v30);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v10, 0, v11, 0);
    LODWORD(v35) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
    if ( (int)v35 < 0 )
    {
LABEL_14:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v32);
      goto LABEL_12;
    }
    v12 = *((_QWORD *)a1 + 11);
    v13 = *(_DWORD *)(v5 + 56);
    v28 = 0LL;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 248));
    v14 = (v13 >> 6) & 0xFFFFFF;
    if ( v14 < *(_DWORD *)(v12 + 296) )
    {
      v15 = *(_QWORD *)(v12 + 280);
      if ( ((v13 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60)
        && (*(_DWORD *)(v15 + 16LL * v14 + 8) & 0x2000) == 0 )
      {
        v16 = *(_DWORD *)(v15 + 16LL * v14 + 8) & 0x1F;
        if ( v16 )
        {
          if ( v16 == 5 )
          {
            v17 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * v14);
            goto LABEL_22;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v17 = 0LL;
LABEL_22:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31, v17);
    _InterlockedDecrement((volatile signed __int32 *)(v12 + 264));
    ExReleasePushLockSharedEx(v12 + 248, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v28, &v31);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
    v18 = v28;
    if ( !v28 )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, *(unsigned int *)(v5 + 56), *((_QWORD *)a1 + 11));
      v27 = *((_QWORD *)a1 + 11);
      v25 = *(unsigned int *)(v5 + 56);
      WdLogGlobalForLineNumber = 5462;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x Invalid hAllocation=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        v25,
        v27,
        0LL,
        0LL);
LABEL_24:
      LODWORD(v35) = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
      goto LABEL_14;
    }
    v19 = v30;
    v20 = *((_QWORD *)v30 + 2);
    if ( *(_QWORD *)(*(_QWORD *)(v28[1].Count + 16) + 16LL) != *(_QWORD *)(v20 + 16) )
    {
      WdLogSingleEntry3(2LL, v30, v28, -1073741811LL);
      WdLogGlobalForLineNumber = 5471;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        (__int64)v19,
        (__int64)v18,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_24;
    }
    LODWORD(v35) = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                     *(VIDMM_EXPORT **)(v20 + 760),
                     *(struct VIDMM_GLOBAL **)(v20 + 768),
                     0LL,
                     (struct VIDMM_MULTI_ALLOC *)v28[3].Count,
                     (struct D3DDDI_MAPGPUVIRTUALADDRESS *)(v5 + 24),
                     0,
                     0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v32);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v29);
    v21 = v35;
LABEL_31:
    *((_QWORD *)&v34 + 1) = *(_QWORD *)(v5 + 120);
    v22 = *(_QWORD *)(v5 + 112);
    *(_QWORD *)&v34 = v22;
    if ( v21 < 0 || !v22 )
    {
      WdLogSingleEntry2(2LL, v21, v22);
      WdLogGlobalForLineNumber = 5497;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkMapGpuVirtualAddress failed: 0x%I64x 0x%I64x",
        (int)v35,
        v34,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_34;
  }
LABEL_35:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
  return v2;
}
