/*
 * XREFs of ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403ABF4C
 * Callers:
 *     ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401E15EC (-NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1401E3580 (DxgkOpenSyncObjectFromNtHandle.c)
 *     NtDxgkCreateNativeFenceInternal @ 0x1401F8C68 (NtDxgkCreateNativeFenceInternal.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403708E8 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1403ABF10 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkDestroySynchronizationObject @ 0x1403ABF30 (DxgkDestroySynchronizationObject.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403EA4F0 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 *     ?VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1403FDCA0 (-VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002DC50 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x14003498C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectImpl(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // rdi
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  volatile signed __int64 *v7; // r14
  unsigned int v8; // eax
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // r9
  int v17; // r8d
  struct DXGSYNCOBJECT *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r9
  int v23; // r8d
  PERESOURCE *Global; // rax
  __int64 v25; // r9
  const char *v26; // rdx
  unsigned int v27; // r9d
  unsigned int v28; // r11d
  __int64 v29; // r8
  DXGDEVICESYNCOBJECT *v30; // rsi
  __int64 v31; // r8
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int hSyncObject; // [rsp+50h] [rbp-148h] BYREF
  int v36; // [rsp+58h] [rbp-140h] BYREF
  __int64 v37; // [rsp+60h] [rbp-138h]
  char v38; // [rsp+68h] [rbp-130h]
  volatile signed __int64 *v39; // [rsp+70h] [rbp-128h] BYREF
  _BYTE v40[16]; // [rsp+78h] [rbp-120h] BYREF
  _BYTE v41[24]; // [rsp+88h] [rbp-110h] BYREF
  _BYTE v42[24]; // [rsp+A0h] [rbp-F8h] BYREF
  _BYTE v43[24]; // [rsp+B8h] [rbp-E0h] BYREF
  _BYTE v44[160]; // [rsp+D0h] [rbp-C8h] BYREF

  v4 = a1;
  v36 = -1;
  v37 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 2042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2042);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v36, 2042);
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 715;
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
LABEL_35:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
    if ( v38 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit, v20, v36);
    }
    return 3221225485LL;
  }
  hSyncObject = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&hSyncObject, v4, 4uLL);
  }
  else
  {
    hSyncObject = v4->hSyncObject;
  }
  v7 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v41, Current);
  v8 = (hSyncObject >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)Current + 74)
    && (v9 = *((_QWORD *)Current + 35), ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60))
    && (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x2000) == 0
    && (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x1F) == 0xB )
  {
    v10 = *(_QWORD *)(v9 + 16LL * v8);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    if ( (*(_BYTE *)(v10 + 92) & 2) == 0 )
    {
      WdLogSingleEntry1(3LL, hSyncObject);
      WdLogGlobalForLineNumber = 756;
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v41);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
      if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit, v12, v36);
      return 3221225506LL;
    }
    v7 = *(volatile signed __int64 **)(v10 + 16);
    _InterlockedIncrement64(v7 + 8);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v41);
  if ( !v7 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v42, Current);
    v14 = hSyncObject;
    v15 = (hSyncObject >> 6) & 0xFFFFFF;
    if ( v15 < *((_DWORD *)Current + 74) )
    {
      v16 = *((_QWORD *)Current + 35);
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60)
        && (*(_DWORD *)(v16 + 16LL * v15 + 8) & 0x2000) == 0 )
      {
        v17 = *(_DWORD *)(v16 + 16LL * v15 + 8) & 0x1F;
        if ( v17 )
        {
          if ( v17 == 8 )
          {
            v18 = *(struct DXGSYNCOBJECT **)(v16 + 16LL * v15);
            goto LABEL_33;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          v14 = hSyncObject;
        }
      }
    }
    v18 = 0LL;
LABEL_33:
    if ( !v18 )
    {
      WdLogSingleEntry2(3LL, v14, -1073741811LL);
      WdLogGlobalForLineNumber = 782;
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v42);
      goto LABEL_35;
    }
    v21 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v21 < *((_DWORD *)Current + 74) )
    {
      v22 = *((_QWORD *)Current + 35);
      v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
      if ( (((unsigned int)v14 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
        && (v23 & 0x2000) == 0
        && (v23 & 0x1F) != 0 )
      {
        *(_DWORD *)(v22 + 16 * (((unsigned __int64)(unsigned int)v14 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v42);
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, v18, hSyncObject, 0);
    goto LABEL_62;
  }
  v39 = v7;
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v40,
    (struct DXGDEVICE *)v7);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v7, 2, v25, 0);
  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v44, v26);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v43, Current);
  v27 = (hSyncObject >> 6) & 0xFFFFFF;
  v28 = *((_DWORD *)Current + 74);
  if ( v27 < v28
    && (v29 = *((_QWORD *)Current + 35), ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v29 + 16LL * v27 + 8) & 0x60))
    && (*(_DWORD *)(v29 + 16LL * v27 + 8) & 0x2000) == 0
    && (*(_DWORD *)(v29 + 16LL * v27 + 8) & 0x1F) == 0xB )
  {
    v30 = *(DXGDEVICESYNCOBJECT **)(v29 + 16LL * v27);
  }
  else
  {
    v30 = 0LL;
  }
  if ( v30 && *((volatile signed __int64 **)v30 + 2) == v7 )
  {
    if ( v27 < v28 )
    {
      v31 = *((_QWORD *)Current + 35);
      v32 = *(_DWORD *)(v31 + 16LL * v27 + 8);
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v31 + 16LL * v27 + 8) & 0x60)
        && (v32 & 0x2000) == 0
        && (v32 & 0x1F) != 0 )
      {
        *(_DWORD *)(v31 + 16 * (((unsigned __int64)hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v43);
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v30);
  }
  else
  {
    WdLogSingleEntry1(3LL, hSyncObject);
    WdLogGlobalForLineNumber = 824;
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v43);
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v44);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v39);
LABEL_62:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, (__int64)&EventProfilerExit, v34, v36);
  return 0LL;
}
