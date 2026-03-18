/*
 * XREFs of ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x14033D52C
 * Callers:
 *     ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401DC314 (-NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1401DE3B0 (DxgkOpenSyncObjectFromNtHandle.c)
 *     NtDxgkCreateNativeFenceInternal @ 0x1401F2318 (NtDxgkCreateNativeFenceInternal.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x14033D4F0 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkDestroySynchronizationObject @ 0x14033D510 (DxgkDestroySynchronizationObject.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403B60A8 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F0310 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 *     ?VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140403F60 (-VmBusDestroySyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1400234D0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x14002CEA8 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x140034A5C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall DxgkDestroySynchronizationObjectImpl(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *v4; // rbx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r9
  int v14; // r8d
  struct DXGSYNCOBJECT *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // r8d
  DXGGLOBAL *Global; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // r9
  const char *v24; // rdx
  unsigned int v25; // r10d
  unsigned int v26; // r9d
  __int64 v27; // r14
  int v28; // edx
  DXGDEVICESYNCOBJECT *v29; // r14
  __int64 v30; // r9
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int hSyncObject; // [rsp+50h] [rbp-158h] BYREF
  int v37; // [rsp+58h] [rbp-150h] BYREF
  __int64 v38; // [rsp+60h] [rbp-148h]
  char v39; // [rsp+68h] [rbp-140h]
  __int64 v40; // [rsp+70h] [rbp-138h] BYREF
  int v41; // [rsp+78h] [rbp-130h]
  _BYTE v42[24]; // [rsp+80h] [rbp-128h] BYREF
  _BYTE v43[24]; // [rsp+98h] [rbp-110h] BYREF
  _BYTE v44[32]; // [rsp+B0h] [rbp-F8h] BYREF
  _BYTE v45[160]; // [rsp+D0h] [rbp-D8h] BYREF

  v4 = a1;
  v37 = -1;
  v38 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 2042);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v37, 2042);
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 731;
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
LABEL_57:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
    if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v34, (__int64)&EventProfilerExit, v35, v37);
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
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v42, Current);
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
  if ( !v10 )
  {
LABEL_14:
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v42);
    if ( v7 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)&v40,
        (struct DXGDEVICE *)v7);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, v7, 2, v23, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v45, v24);
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v44, Current);
      v25 = (hSyncObject >> 6) & 0xFFFFFF;
      v26 = *((_DWORD *)Current + 74);
      if ( v25 < v26
        && (v27 = *((_QWORD *)Current + 35),
            v28 = *(_DWORD *)(v27 + 16LL * v25 + 8),
            ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v27 + 16LL * v25 + 8) & 0x60))
        && (v28 & 0x2000) == 0
        && (v28 & 0x1F) != 0
        && (*(_BYTE *)(v27 + 16 * (((unsigned __int64)hSyncObject >> 6) & 0xFFFFFF) + 8) & 0x1F) == 0xB )
      {
        v29 = *(DXGDEVICESYNCOBJECT **)(v27 + 16 * (((unsigned __int64)hSyncObject >> 6) & 0xFFFFFF));
      }
      else
      {
        v29 = 0LL;
      }
      if ( v29 )
      {
        if ( v25 < v26 )
        {
          v30 = *((_QWORD *)Current + 35);
          v31 = *(_DWORD *)(v30 + 16LL * v25 + 8);
          if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v30 + 16LL * v25 + 8) & 0x60)
            && (v31 & 0x2000) == 0
            && (v31 & 0x1F) != 0 )
          {
            *(_DWORD *)(v30 + 16 * (((unsigned __int64)hSyncObject >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
          }
        }
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v44);
        DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v29);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
        if ( v40 && v41 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v40 + 136));
          KeLeaveCriticalRegion();
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, hSyncObject);
        WdLogGlobalForLineNumber = 834;
        DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v44);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v45);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v40);
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v7 + 16), (struct DXGDEVICE *)v7);
      goto LABEL_28;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v43, Current);
    v11 = hSyncObject;
    v12 = (hSyncObject >> 6) & 0xFFFFFF;
    if ( v12 < *((_DWORD *)Current + 74) )
    {
      v13 = *((_QWORD *)Current + 35);
      if ( ((hSyncObject >> 25) & 0x60) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60)
        && (*(_DWORD *)(v13 + 16LL * v12 + 8) & 0x2000) == 0 )
      {
        v14 = *(_DWORD *)(v13 + 16LL * v12 + 8) & 0x1F;
        if ( v14 )
        {
          if ( v14 == 8 )
          {
            v15 = *(struct DXGSYNCOBJECT **)(v13 + 16LL * v12);
LABEL_21:
            if ( v15 )
            {
              v16 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
              if ( (unsigned int)v16 < *((_DWORD *)Current + 74) )
              {
                v17 = *((_QWORD *)Current + 35);
                v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
                if ( (((unsigned int)v11 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v16 + 8) & 0x60)
                  && (v18 & 0x2000) == 0
                  && (v18 & 0x1F) != 0 )
                {
                  *(_DWORD *)(v17 + 16 * (((unsigned __int64)(unsigned int)v11 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                }
              }
              DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v43);
              Global = DXGGLOBAL::GetGlobal();
              DXGGLOBAL::DestroySyncObject(Global, v15, hSyncObject);
LABEL_28:
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
              if ( v39 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit, v21, v37);
              }
              return 0LL;
            }
            WdLogSingleEntry2(3LL, v11, -1073741811LL);
            WdLogGlobalForLineNumber = 798;
            DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v43);
            goto LABEL_57;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          v11 = hSyncObject;
        }
      }
    }
    v15 = 0LL;
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(v10 + 92) & 2) != 0 )
  {
    v7 = *(_QWORD *)(v10 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 64));
    goto LABEL_14;
  }
  WdLogSingleEntry1(3LL, hSyncObject);
  WdLogGlobalForLineNumber = 772;
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, (__int64)&EventProfilerExit, v33, v37);
  return 3221225506LL;
}
