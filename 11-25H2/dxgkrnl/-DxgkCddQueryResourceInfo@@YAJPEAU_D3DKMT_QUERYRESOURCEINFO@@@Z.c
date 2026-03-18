/*
 * XREFs of ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1403C5C30
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
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x14035F14C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfo(struct _D3DKMT_QUERYRESOURCEINFO *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  D3DKMT_HANDLE hDevice; // edx
  struct DXGDEVICE *v7; // rbx
  int v8; // esi
  unsigned int Resource; // ebx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+28h] [rbp-E0h]
  struct DXGDEVICE *v18; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h]
  struct DXGDEVICE *v21; // [rsp+78h] [rbp-90h] BYREF
  __int64 v22; // [rsp+80h] [rbp-88h] BYREF
  char v23; // [rsp+88h] [rbp-80h]
  _BYTE v24[8]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v25[64]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v26[64]; // [rsp+E0h] [rbp-28h] BYREF
  struct DXGDEVICE *v27; // [rsp+120h] [rbp+18h]
  char v28; // [rsp+128h] [rbp+20h]

  LODWORD(v19[0]) = -1;
  v19[1] = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    LOBYTE(v20) = 1;
    LODWORD(v19[0]) = 3035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 3035);
  }
  else
  {
    LOBYTE(v20) = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v19, 3035);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    Resource = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1577;
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
    goto LABEL_11;
  }
  hDevice = a1->hDevice;
  v21 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v18, hDevice, Current, &v21);
  v7 = v21;
  if ( !v21 )
  {
    Resource = -1073741811;
    WdLogSingleEntry2(2LL, a1->hDevice, -1073741811LL);
    v17 = a1->hDevice;
    WdLogGlobalForLineNumber = 1591;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v17,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v18 )
    {
LABEL_9:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v18 + 2), v18);
    }
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v19);
    if ( (_BYTE)v20 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit, v13, v19[0]);
    }
    return Resource;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v22, v21);
  COREACCESS::COREACCESS((COREACCESS *)v25, *(struct DXGADAPTER *const *)(*((_QWORD *)v7 + 2) + 16LL));
  COREACCESS::COREACCESS((COREACCESS *)v26, *(struct DXGADAPTER *const *)(*((_QWORD *)v7 + 2) + 16LL));
  v27 = v7;
  v28 = 0;
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24, 0LL);
  if ( v8 >= 0 )
  {
    Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)v7, a1, a1->hGlobalShare);
    COREACCESS::~COREACCESS((COREACCESS *)v26, v10);
    COREACCESS::~COREACCESS((COREACCESS *)v25, v11);
    if ( v23 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v22 + 136));
      KeLeaveCriticalRegion();
    }
    if ( !v18 )
      goto LABEL_11;
    goto LABEL_9;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v24);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v22);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v18);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v19);
  if ( (_BYTE)v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit, v16, v19[0]);
  return (unsigned int)v8;
}
