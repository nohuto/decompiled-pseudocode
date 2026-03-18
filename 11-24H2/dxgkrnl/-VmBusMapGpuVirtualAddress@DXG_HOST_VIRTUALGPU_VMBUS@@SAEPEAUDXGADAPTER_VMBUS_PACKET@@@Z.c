/*
 * XREFs of ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140426500
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
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x140039658 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1400462CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005B0C8 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTU.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1402F9470 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x140321DB0 (DxgkMapGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMapGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // di
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rdx
  _BOOL8 v8; // rcx
  unsigned __int64 v9; // rdx
  struct _KTHREAD **Current; // rax
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // r14
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // ecx
  struct _EX_RUNDOWN_REF *v18; // rdx
  struct _EX_RUNDOWN_REF *v19; // rbx
  __int64 v20; // r13
  int v21; // ecx
  __int64 v22; // r8
  struct D3DDDI_MAPGPUVIRTUALADDRESS *v23; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+28h] [rbp-D8h]
  __int64 v25; // [rsp+28h] [rbp-D8h]
  __int64 v26; // [rsp+28h] [rbp-D8h]
  __int64 v27; // [rsp+30h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v28; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v29[8]; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v30; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v31[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v32[24]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v33; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h]
  _BYTE v35[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v36[160]; // [rsp+C0h] [rbp-40h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v32,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL));
  v2 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 10) + 173LL) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 5422;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"The adapter is already closed by the guest",
      5422LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
    return 0;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS>((__int64)a1);
  v6 = v4;
  if ( v4 )
  {
    v34 = 0LL;
    v33 = 0LL;
    v7 = *(unsigned int *)(v4 + 128);
    v8 = (_DWORD)v7 == 0;
    if ( v8 == (*(_DWORD *)(v4 + 24) == 0) )
    {
      LODWORD(v34) = -1073741811;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 5431;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Both device and paging queue are set or not set",
        5431LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_34:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v33, 0x18u);
      v2 = 1;
      goto LABEL_35;
    }
    if ( !(_DWORD)v7 )
    {
      v21 = DxgkMapGpuVirtualAddress(v4 + 24, v7, v5);
      LODWORD(v34) = v21;
      goto LABEL_31;
    }
    v9 = *(_QWORD *)(v4 + 80);
    if ( v9 >= 0x20 || (v9 & 0xC) != 0 )
    {
      WdLogSingleEntry2(2LL, v9, *((_QWORD *)a1 + 11));
      v26 = *((_QWORD *)a1 + 11);
      v23 = *(struct D3DDDI_MAPGPUVIRTUALADDRESS **)(v6 + 80);
      WdLogGlobalForLineNumber = 5446;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid protection flags specified 0x%I64x DXGPROCESS=0x%I64x",
        (__int64)v23,
        v26,
        0LL,
        0LL,
        0LL);
      LODWORD(v34) = -1073741811;
      goto LABEL_34;
    }
    *(_QWORD *)v35 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)v29,
      *(_DWORD *)(v6 + 128),
      Current,
      (struct DXGDEVICE **)v35);
    v11 = *(_QWORD *)v35;
    if ( *(_DWORD *)(v6 + 128) && !*(_QWORD *)v35 )
    {
      LODWORD(v34) = -1073741811;
      WdLogSingleEntry2(2LL, -1073741811LL, *(unsigned int *)(v6 + 128));
      v24 = *(unsigned int *)(v6 + 128);
      WdLogGlobalForLineNumber = 5456;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid device handle: 0x%I64x",
        (int)v34,
        v24,
        0LL,
        0LL,
        0LL);
LABEL_12:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v29);
      goto LABEL_34;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v31,
      *(struct DXGDEVICE **)v35);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, v11, 0, v12, 0);
    LODWORD(v34) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
    if ( (int)v34 < 0 )
    {
LABEL_14:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v31);
      goto LABEL_12;
    }
    v13 = *((_QWORD *)a1 + 11);
    v14 = *(_DWORD *)(v6 + 56);
    v28 = 0LL;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 248));
    v15 = (v14 >> 6) & 0xFFFFFF;
    if ( v15 < *(_DWORD *)(v13 + 296) )
    {
      v16 = *(_QWORD *)(v13 + 280);
      if ( ((v14 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60)
        && (*(_DWORD *)(v16 + 16LL * v15 + 8) & 0x2000) == 0 )
      {
        v17 = *(_DWORD *)(v16 + 16LL * v15 + 8) & 0x1F;
        if ( v17 )
        {
          if ( v17 == 5 )
          {
            v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * v15);
            goto LABEL_22;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v18 = 0LL;
LABEL_22:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v30, v18);
    _InterlockedDecrement((volatile signed __int32 *)(v13 + 264));
    ExReleasePushLockSharedEx(v13 + 248, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v28, &v30);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
    v19 = v28;
    if ( !v28 )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, *(unsigned int *)(v6 + 56), *((_QWORD *)a1 + 11));
      v27 = *((_QWORD *)a1 + 11);
      v25 = *(unsigned int *)(v6 + 56);
      WdLogGlobalForLineNumber = 5471;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"0x%I64x Invalid hAllocation=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        v25,
        v27,
        0LL,
        0LL);
LABEL_24:
      LODWORD(v34) = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
      goto LABEL_14;
    }
    v20 = *(_QWORD *)v35;
    if ( v28[1].Count != *(_QWORD *)v35 )
    {
      *(_DWORD *)v35 = 58994391;
      *(_QWORD *)&v35[4] = 1LL;
      RtlLogUnexpectedCodepath(v35);
      WdLogSingleEntry3(2LL, v20, v19, -1073741811LL);
      WdLogGlobalForLineNumber = 5483;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        v20,
        (__int64)v19,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_24;
    }
    LODWORD(v34) = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                     *(VIDMM_EXPORT **)(*(_QWORD *)(*(_QWORD *)v35 + 16LL) + 760LL),
                     *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*(_QWORD *)v35 + 16LL) + 768LL),
                     0LL,
                     (struct VIDMM_MULTI_ALLOC *)v28[3].Count,
                     (struct D3DDDI_MAPGPUVIRTUALADDRESS *)(v6 + 24),
                     0,
                     0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v31);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v29);
    v21 = v34;
LABEL_31:
    *((_QWORD *)&v33 + 1) = *(_QWORD *)(v6 + 120);
    v22 = *(_QWORD *)(v6 + 112);
    *(_QWORD *)&v33 = v22;
    if ( v21 < 0 || !v22 )
    {
      WdLogSingleEntry2(2LL, v21, v22);
      WdLogGlobalForLineNumber = 5509;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DxgkMapGpuVirtualAddress failed: 0x%I64x 0x%I64x",
        (int)v34,
        v33,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_34;
  }
LABEL_35:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32);
  return v2;
}
