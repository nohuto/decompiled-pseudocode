/*
 * XREFs of ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x140397660
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140038EBC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x14003BE0C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1403981B8 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfoFromNtHandle(
        struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  D3DKMT_HANDLE hDevice; // edx
  struct DXGDEVICE *v7; // rdi
  unsigned __int64 v8; // rdx
  int Resource; // ebx
  HANDLE hNtHandle; // rcx
  NTSTATUS v11; // eax
  __int64 v12; // r8
  PVOID v13; // r14
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 Object; // [rsp+20h] [rbp-E0h]
  struct DXGDEVICE *v23; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v24; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  char v27; // [rsp+70h] [rbp-90h]
  int v28; // [rsp+78h] [rbp-88h] BYREF
  __int64 v29; // [rsp+80h] [rbp-80h]
  char v30; // [rsp+88h] [rbp-78h]
  _BYTE v31[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v32[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v33[64]; // [rsp+D8h] [rbp-28h] BYREF
  struct DXGDEVICE *v34; // [rsp+118h] [rbp+18h]
  char v35; // [rsp+120h] [rbp+20h]

  v28 = -1;
  v29 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 3056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 3056);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 3056);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    Resource = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1629;
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
    goto LABEL_15;
  }
  hDevice = a1->hDevice;
  v24 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v23, hDevice, Current, &v24);
  v7 = v24;
  if ( v24 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v26, v24);
    COREACCESS::COREACCESS((COREACCESS *)v32, *(struct DXGADAPTER *const *)(*((_QWORD *)v7 + 2) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v33, *(struct DXGADAPTER *const *)(*((_QWORD *)v7 + 2) + 16LL));
    v34 = v7;
    v35 = 0;
    Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31, 0LL);
    if ( Resource >= 0 )
    {
      hNtHandle = a1->hNtHandle;
      v25 = 0LL;
      v11 = ObReferenceObjectByHandle(hNtHandle, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v25, 0LL);
      v13 = v25;
      Resource = v11;
      if ( v11 == -1073741788 )
      {
        WdLogSingleEntry3(3LL, v7, a1->hNtHandle, -1073741788LL);
        WdLogGlobalForLineNumber = 1673;
        COREACCESS::~COREACCESS((COREACCESS *)v33, v19);
        COREACCESS::~COREACCESS((COREACCESS *)v32, v20);
        if ( v27 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v26 + 136));
          KeLeaveCriticalRegion();
        }
        if ( !v23 )
          goto LABEL_13;
      }
      else
      {
        if ( v11 < 0 )
        {
          WdLogSingleEntry3(3LL, v7, a1->hNtHandle, v11);
          WdLogGlobalForLineNumber = 1681;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v26);
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v23);
LABEL_13:
          if ( v13 )
            ObfDereferenceObject(v13);
          goto LABEL_15;
        }
        Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(v7, a1, v12, v25);
        COREACCESS::~COREACCESS((COREACCESS *)v33, v14);
        COREACCESS::~COREACCESS((COREACCESS *)v32, v15);
        if ( v27 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(v26 + 136));
          KeLeaveCriticalRegion();
        }
        if ( !v23 )
          goto LABEL_13;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
      goto LABEL_13;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v33, v8);
    COREACCESS::~COREACCESS((COREACCESS *)v32, v21);
    if ( v27 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v26 + 136));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    Resource = -1073741811;
    WdLogSingleEntry2(2LL, a1->hDevice, -1073741811LL);
    Object = a1->hDevice;
    WdLogGlobalForLineNumber = 1643;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      Object,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v28);
  return (unsigned int)Resource;
}
