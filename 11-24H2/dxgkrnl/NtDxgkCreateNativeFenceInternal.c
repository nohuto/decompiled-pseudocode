/*
 * XREFs of NtDxgkCreateNativeFenceInternal @ 0x1401F8C68
 * Callers:
 *     NtDxgkCreateNativeFence @ 0x1401F8C50 (NtDxgkCreateNativeFence.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z @ 0x14002A31C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1400301A0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140048D4C (McTemplateK0pppp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1402FA1CC (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403ABF4C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall NtDxgkCreateNativeFenceInternal(ULONG64 a1)
{
  struct DXGPROCESS *Current; // r14
  unsigned int v3; // ebx
  const void *v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // r12
  __int64 v10; // rdi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v12; // rax
  int v13; // r12d
  void *v14; // rcx
  void *v15; // rcx
  __int64 v16; // r8
  _OWORD *v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdi
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v26[2]; // [rsp+70h] [rbp-218h] BYREF
  __int64 v27; // [rsp+78h] [rbp-210h] BYREF
  _BYTE v28[8]; // [rsp+80h] [rbp-208h] BYREF
  _BYTE v29[16]; // [rsp+88h] [rbp-200h] BYREF
  _QWORD v30[2]; // [rsp+98h] [rbp-1F0h] BYREF
  int v31; // [rsp+A8h] [rbp-1E0h]
  __int64 v32; // [rsp+B0h] [rbp-1D8h] BYREF
  _QWORD v33[2]; // [rsp+B8h] [rbp-1D0h] BYREF
  _BYTE v34[24]; // [rsp+C8h] [rbp-1C0h] BYREF
  unsigned int v35[56]; // [rsp+E0h] [rbp-1A8h] BYREF
  _BYTE v36[160]; // [rsp+1C0h] [rbp-C8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  v33[1] = Current;
  if ( !Current )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2461;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v3;
  }
  memset(v35, 0, 0xD8uLL);
  v5 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v35, v5, 0xD8uLL);
  if ( v35[21] )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2489;
    return v3;
  }
  if ( v35[46] || (v35[22] & 0x7FFFF800) != 0 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2497;
    return 3221225485LL;
  }
  if ( ((v35[22] >> 1) & 1) != 0 )
  {
    if ( (v35[22] & 1) == 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)&gDxgkrnlCounterAccumulated, 1u);
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2505;
      return -1073741811LL;
    }
    goto LABEL_15;
  }
  if ( (v35[22] & 1) != 0 )
  {
LABEL_15:
    if ( ((v35[22] >> 1) & 1) == 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2511;
      return -1073741811LL;
    }
  }
  if ( (v35[22] & 0x10) != 0 && (v35[22] & 0x20) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2517;
    return -1073741811LL;
  }
  if ( !(unsigned __int8)RtlIsZeroMemory(&v35[47], 28LL)
    || !(unsigned __int8)RtlIsZeroMemory(&v35[38], 28LL)
    || !(unsigned __int8)RtlIsZeroMemory(&v35[30], 32LL) )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2526;
    return v3;
  }
  *(_QWORD *)&v26[0].hSyncObject = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)v28,
    v35[0],
    (struct _KTHREAD **)Current,
    (struct DXGDEVICE **)v26);
  v6 = *(_QWORD *)&v26[0].hSyncObject;
  if ( !*(_QWORD *)&v26[0].hSyncObject )
  {
    v3 = -1073741811;
    WdLogSingleEntry2(2LL, v35[0], -1073741811LL);
    WdLogGlobalForLineNumber = 2536;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v35[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_33:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v28);
    return v3;
  }
  v33[0] = 0LL;
  v32 = 0LL;
  v27 = 0LL;
  v30[0] = 0LL;
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v29,
    *(struct DXGDEVICE **)&v26[0].hSyncObject,
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, v6, 0, v7, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(2LL, v6, v8);
    WdLogGlobalForLineNumber = 2554;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to acquire COREDEVICEACCESS for DXGDEVICE:0x%I64x, returning 0x%I64x",
      v6,
      v9,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v30, 0LL);
    v3 = v9;
    goto LABEL_33;
  }
  if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v6 + 16) + 16LL)) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2560;
LABEL_32:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v30, 0LL);
    v3 = -1073741811;
    goto LABEL_33;
  }
  if ( !g_NativeFenceDebugTest
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v26[0].hSyncObject + 16LL) + 16LL) + 2464LL) & 0x800) == 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2568;
    goto LABEL_32;
  }
  v10 = *(_QWORD *)&v26[0].hSyncObject;
  DXGADAPTER_REFERENCE::Assign(
    (DXGADAPTER_REFERENCE *)v30,
    *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)&v26[0].hSyncObject + 16LL) + 16LL));
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v34, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v34);
  v12 = DXGGLOBAL::GetGlobal();
  v31 = 1;
  v13 = DXGGLOBAL::CreateSyncObject(
          v12,
          *(_QWORD *)(v10 + 16),
          v10,
          0LL,
          0LL,
          1,
          1,
          0LL,
          v33,
          &v32,
          &v35[1],
          &v27,
          &v35[18],
          &v35[2]);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v34);
  if ( v13 >= 0 )
  {
    v14 = (void *)(a1 + 4);
    if ( a1 + 4 >= MmUserProbeAddress )
      v14 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v14, &v35[1], 4uLL);
    v15 = (void *)(a1 + 72);
    if ( a1 + 72 >= MmUserProbeAddress )
      v15 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v15, &v35[18], 0x70uLL);
    v17 = (_OWORD *)(a1 + 8);
    if ( a1 + 72 > MmUserProbeAddress || a1 + 72 <= (unsigned __int64)v17 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *v17 = *(_OWORD *)&v35[2];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v35[6];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v35[10];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v35[14];
    if ( bTracingEnabled )
    {
      if ( v27 ? *(_QWORD *)(v27 + 32) : 0LL )
      {
        v20 = v27 ? *(_QWORD *)(v27 + 32) : 0LL;
        v19 = *(_QWORD *)(v20 + 16);
      }
      else
      {
        v19 = 0LL;
      }
      v21 = v27 ? *(_QWORD *)(v27 + 32) : 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pppp_EtwWriteTransfer(
          v35[1],
          &EventOpenSyncObject,
          v16,
          v21,
          v35[1],
          *(_QWORD *)&v26[0].hSyncObject,
          v19);
    }
  }
  v22 = v35[1];
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v23 = ((unsigned int)v22 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v23 < *((_DWORD *)Current + 74) )
  {
    v24 = *((_QWORD *)Current + 35);
    if ( (((unsigned int)v22 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
      && (*(_DWORD *)(v24 + 16 * v23 + 8) & 0x1F) != 0 )
    {
      v25 = 2 * ((v22 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v24 + 8 * v25 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v25 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)Current + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v36);
  DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
  if ( v13 < 0 )
  {
    v26[0] = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT)v35[1];
    DxgkDestroySynchronizationObjectImpl(v26, 0);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v29);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v30, 0LL);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v28);
  return (unsigned int)v13;
}
