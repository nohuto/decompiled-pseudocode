/*
 * XREFs of NtDxgkCreateNativeFenceInternal @ 0x1401F2318
 * Callers:
 *     NtDxgkCreateNativeFence @ 0x1401F2300 (NtDxgkCreateNativeFence.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z @ 0x140029B7C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002EC00 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x14002FAA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140049660 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_1142198584__private_IsEnabledDeviceUsageNoInline @ 0x140078C5C (Feature_1142198584__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x14032D508 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x14033D52C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
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
  __int64 v24; // r9
  __int64 v25; // rdi
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rdi
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v30[2]; // [rsp+70h] [rbp-218h] BYREF
  _BYTE v31[16]; // [rsp+78h] [rbp-210h] BYREF
  __int64 v32; // [rsp+88h] [rbp-200h] BYREF
  _BYTE v33[8]; // [rsp+90h] [rbp-1F8h] BYREF
  _QWORD v34[2]; // [rsp+98h] [rbp-1F0h] BYREF
  int v35; // [rsp+A8h] [rbp-1E0h]
  __int64 v36; // [rsp+B0h] [rbp-1D8h] BYREF
  _QWORD v37[2]; // [rsp+B8h] [rbp-1D0h] BYREF
  _BYTE v38[24]; // [rsp+C8h] [rbp-1C0h] BYREF
  unsigned int v39[56]; // [rsp+E0h] [rbp-1A8h] BYREF
  _BYTE v40[160]; // [rsp+1C0h] [rbp-C8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  v37[1] = Current;
  if ( !Current )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2437;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v3;
  }
  memset(v39, 0, 0xD8uLL);
  v5 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v39, v5, 0xD8uLL);
  if ( v39[21] )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2465;
    return v3;
  }
  if ( v39[46] || (v39[22] & 0x7FFFF800) != 0 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2473;
    return 3221225485LL;
  }
  if ( ((v39[22] >> 1) & 1) != 0 )
  {
    if ( (v39[22] & 1) == 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)&gDxgkrnlCounterAccumulated, 1u);
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2481;
      return -1073741811LL;
    }
    goto LABEL_15;
  }
  if ( (v39[22] & 1) != 0 )
  {
LABEL_15:
    if ( ((v39[22] >> 1) & 1) == 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2487;
      return -1073741811LL;
    }
  }
  if ( (v39[22] & 0x10) != 0 && (v39[22] & 0x20) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2493;
    return -1073741811LL;
  }
  if ( !(unsigned __int8)RtlIsZeroMemory(&v39[47], 28LL)
    || !(unsigned __int8)RtlIsZeroMemory(&v39[38], 28LL)
    || !(unsigned __int8)RtlIsZeroMemory(&v39[30], 32LL) )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2502;
    return v3;
  }
  *(_QWORD *)&v30[0].hSyncObject = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v33, v39[0], Current, (struct DXGDEVICE **)v30);
  v6 = *(_QWORD *)&v30[0].hSyncObject;
  if ( !*(_QWORD *)&v30[0].hSyncObject )
  {
    v3 = -1073741811;
    WdLogSingleEntry2(2LL, v39[0], -1073741811LL);
    WdLogGlobalForLineNumber = 2512;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v39[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_33:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v33);
    return v3;
  }
  v37[0] = 0LL;
  v36 = 0LL;
  v32 = 0LL;
  v34[0] = 0LL;
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v31,
    *(struct DXGDEVICE **)&v30[0].hSyncObject,
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, v6, 0, v7, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v40, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(2LL, v6, v8);
    WdLogGlobalForLineNumber = 2530;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire COREDEVICEACCESS for DXGDEVICE:0x%I64x, returning 0x%I64x",
      v6,
      v9,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v34, 0LL);
    v3 = v9;
    goto LABEL_33;
  }
  if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v6 + 16) + 16LL)) )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2536;
LABEL_32:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v34, 0LL);
    v3 = -1073741811;
    goto LABEL_33;
  }
  if ( !g_NativeFenceDebugTest
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v30[0].hSyncObject + 16LL) + 16LL) + 2464LL) & 0x800) == 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2544;
    goto LABEL_32;
  }
  v10 = *(_QWORD *)&v30[0].hSyncObject;
  DXGADAPTER_REFERENCE::Assign(
    (DXGADAPTER_REFERENCE *)v34,
    *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)&v30[0].hSyncObject + 16LL) + 16LL));
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v38, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v38);
  v12 = DXGGLOBAL::GetGlobal();
  v35 = 1;
  v13 = DXGGLOBAL::CreateSyncObject(
          v12,
          *(_QWORD *)(v10 + 16),
          v10,
          0LL,
          0LL,
          1,
          1,
          0LL,
          v37,
          &v36,
          &v39[1],
          &v32,
          &v39[18],
          &v39[2]);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v38);
  if ( v13 >= 0 )
  {
    v14 = (void *)(a1 + 4);
    if ( a1 + 4 >= MmUserProbeAddress )
      v14 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v14, &v39[1], 4uLL);
    v15 = (void *)(a1 + 72);
    if ( a1 + 72 >= MmUserProbeAddress )
      v15 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v15, &v39[18], 0x70uLL);
    v17 = (_OWORD *)(a1 + 8);
    if ( a1 + 72 > MmUserProbeAddress || a1 + 72 <= (unsigned __int64)v17 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *v17 = *(_OWORD *)&v39[2];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v39[6];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v39[10];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v39[14];
    if ( bTracingEnabled )
    {
      if ( v32 ? *(_QWORD *)(v32 + 32) : 0LL )
      {
        v20 = v32 ? *(_QWORD *)(v32 + 32) : 0LL;
        v19 = *(_QWORD *)(v20 + 16);
      }
      else
      {
        v19 = 0LL;
      }
      v21 = v32 ? *(_QWORD *)(v32 + 32) : 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pppp_EtwWriteTransfer(
          v39[1],
          &EventOpenSyncObject,
          v16,
          v21,
          v39[1],
          *(_QWORD *)&v30[0].hSyncObject,
          v19);
    }
  }
  if ( (unsigned int)Feature_1142198584__private_IsEnabledDeviceUsageNoInline() )
  {
    v22 = v39[1];
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
            262146,
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
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v40);
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
  }
  else
  {
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v40);
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    v26 = v39[1];
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    v27 = ((unsigned int)v26 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v27 < *((_DWORD *)Current + 74) )
    {
      v28 = *((_QWORD *)Current + 35);
      if ( (((unsigned int)v26 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60)
        && (*(_DWORD *)(v28 + 16 * v27 + 8) & 0x1F) != 0 )
      {
        v29 = 2 * ((v26 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v28 + 8 * v29 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v29 + 8) &= ~0x2000u;
      }
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v13 < 0 )
  {
    v30[0] = (struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT)v39[1];
    DxgkDestroySynchronizationObjectImpl(v30, 0);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v34, 0LL);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v33);
  return (unsigned int)v13;
}
