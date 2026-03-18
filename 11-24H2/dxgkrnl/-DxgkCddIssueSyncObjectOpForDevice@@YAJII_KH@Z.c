/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1402B0900
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ @ 0x140047454 (-TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1402B0C60 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // r14
  __int64 v11; // rcx
  struct DXGDEVICE *v12; // rdi
  char *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // edi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  struct DXGDEVICE *v21; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 CurrentProcess; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  struct DXGDEVICE *v29; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v30; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  _BYTE v33[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v34[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  char v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  _BYTE v39[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  char v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  struct DXGDEVICE *v44; // [rsp+F8h] [rbp-8h]
  char v45; // [rsp+100h] [rbp+0h]

  v5 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v10 = (struct DXGPROCESS *)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v9);
    v18 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    WdLogGlobalForLineNumber = 3800;
    v28 = PsGetCurrentProcess(v27);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Unexpected process 0x%I64x 0x%I64x",
      -1073741811LL,
      v28,
      0LL,
      0LL,
      0LL);
    return v18;
  }
  v30 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29, v5, Current, &v30);
  v12 = v30;
  if ( !v30 )
  {
    v23 = PsGetCurrentProcess(v11);
    v18 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v23, v5);
    WdLogGlobalForLineNumber = 3812;
    v25 = PsGetCurrentProcess(v24);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid device handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v25,
      v5,
      0LL,
      0LL);
    v21 = v29;
    if ( v29 )
    {
LABEL_13:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
    }
    return v18;
  }
  v31 = v30;
  v32 = 0;
  if ( (unsigned int)DXGDEVICEACCESSLOCKEXCLUSIVE::TryAcquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v31) )
  {
    v13 = (char *)v12 + 16;
    v14 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL);
    v36 = v14;
    v37 = 0;
    v38 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
      v12 = v30;
      v35 = -1LL;
    }
    v15 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
    v41 = v15;
    v42 = 0;
    v43 = 0LL;
    if ( v15 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24));
      v12 = v30;
      v40 = -1LL;
    }
    v44 = v12;
    v45 = 0;
    v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33, 0LL);
    v17 = v16;
    if ( v16 >= 0 )
    {
      v18 = DXGDEVICE::IssueSyncObjectOpForAllContexts(v12, v10, a2, a3, a4);
      COREACCESS::~COREACCESS((COREACCESS *)v39, v19);
      COREACCESS::~COREACCESS((COREACCESS *)v34, v20);
      if ( v31 && v32 )
      {
        ExReleaseResourceLite(*((PERESOURCE *)v31 + 17));
        KeLeaveCriticalRegion();
      }
      v21 = v29;
      if ( !v29 )
        return v18;
      goto LABEL_13;
    }
    WdLogSingleEntry2(4LL, v16, v10);
    WdLogGlobalForLineNumber = 3834;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v31);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v29);
    return v17;
  }
  else
  {
    WdLogSingleEntry1(4LL, v12);
    WdLogGlobalForLineNumber = 3825;
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v31);
    if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
    return 2147483665LL;
  }
}
