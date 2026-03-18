/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1402B97E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x14002C670 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DE40 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x140031454 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034E08 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1402BA140 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1402BA4F8 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1)
{
  __int64 v2; // rcx
  struct DXGDEVICE *Current; // rdi
  const void *v4; // rdx
  _BYTE *v5; // rcx
  __int64 v6; // r8
  const D3DKMT_HANDLE *ObjectHandleArray; // rdx
  PVOID v8; // rcx
  __int64 v9; // r8
  const UINT64 *FenceValueArray; // rdx
  struct DXGDEVICE *v12; // rbx
  __int64 v13; // r9
  int v14; // ebx
  __int64 v15; // rax
  UINT *v16; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 CurrentProcess; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct DXGDEVICE *v21; // [rsp+50h] [rbp-178h] BYREF
  struct DXGDEVICE *v22; // [rsp+58h] [rbp-170h] BYREF
  struct DXGDEVICE *v23; // [rsp+60h] [rbp-168h] BYREF
  char v24; // [rsp+68h] [rbp-160h]
  PVOID v25; // [rsp+70h] [rbp-158h]
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+78h] [rbp-150h] BYREF
  _BYTE v27[16]; // [rsp+98h] [rbp-130h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-120h]
  PVOID v29; // [rsp+B0h] [rbp-118h]
  __int64 v30; // [rsp+B8h] [rbp-110h]
  PVOID v31; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v32[16]; // [rsp+C8h] [rbp-100h] BYREF
  unsigned int v33; // [rsp+D8h] [rbp-F0h]
  PVOID P; // [rsp+E0h] [rbp-E8h] BYREF
  _BYTE v35[32]; // [rsp+E8h] [rbp-E0h] BYREF
  unsigned int v36; // [rsp+108h] [rbp-C0h]
  _BYTE v37[160]; // [rsp+110h] [rbp-B8h] BYREF

  Current = DXGPROCESS::GetCurrent(a1);
  v22 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v2);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 5909;
    v20 = PsGetCurrentProcess(v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v20,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v31 = 0LL;
  v33 = 0;
  P = 0LL;
  v36 = 0;
  memset(&Src, 0, sizeof(Src));
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Src, v4, 0x18uLL);
  Src.Flags.Value = 0;
  if ( Src.ObjectCount )
  {
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v31);
    v5 = v31;
    if ( v31 )
    {
      v6 = v33;
      v28 = v6 * 4;
      v29 = v31;
      ObjectHandleArray = Src.ObjectHandleArray;
      if ( &Src.ObjectHandleArray[v6] < Src.ObjectHandleArray
        || &Src.ObjectHandleArray[v6] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v5, ObjectHandleArray, v6 * 4);
      Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v31;
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements((__int64)&P, Src.ObjectCount);
      v8 = P;
      if ( P )
      {
        v9 = v36;
        v30 = v9 * 8;
        v25 = P;
        FenceValueArray = Src.FenceValueArray;
        if ( &Src.FenceValueArray[v9] < Src.FenceValueArray
          || &Src.FenceValueArray[v9] > (const UINT64 *)MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v8, FenceValueArray, v9 * 8);
        Src.FenceValueArray = (const UINT64 *)P;
        v22 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, Src.hDevice, (struct _KTHREAD **)Current, &v22);
        if ( v22 )
        {
          v12 = v22;
          v23 = v22;
          v24 = 0;
          DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)&v23);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, (__int64)v12, 0, v13, 0);
          v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37, 0LL);
          if ( v14 < 0 )
          {
LABEL_41:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
            if ( v23 && v24 )
            {
              ExReleaseResourceLite(*((PERESOURCE *)v23 + 17));
              KeLeaveCriticalRegion();
            }
            if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
            if ( P != v35 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v36 = 0;
            if ( v31 != v32 )
            {
              if ( v31 )
                ExFreePoolWithTag(v31, 0);
            }
            return (unsigned int)v14;
          }
          v15 = *(_QWORD *)(*((_QWORD *)v22 + 2) + 16LL);
          if ( !v15 )
          {
            WdLogSingleEntry2(2LL, Src.hDevice, -1073741811LL);
            WdLogGlobalForLineNumber = 5987;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Input hDevice (0x%I64x) has no render adapter, returning 0x%I64x",
              Src.hDevice,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
LABEL_71:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v23);
            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v21);
LABEL_54:
            if ( P != v35 && P )
              ExFreePoolWithTag(P, 0);
            v36 = 0;
            P = 0LL;
            if ( v31 != v32 && v31 )
              ExFreePoolWithTag(v31, 0);
            return 3221225485LL;
          }
          if ( *(_DWORD *)(v15 + 2280) < 0x5020u )
            goto LABEL_39;
          v16 = (UINT *)(a1 + 24);
          if ( a1 + 24 >= MmUserProbeAddress )
            v16 = (UINT *)MmUserProbeAddress;
          Src.Flags.Value = *v16;
          if ( (Src.Flags.Value & 0x7FFFFFF8) == 0 )
          {
            if ( (Src.Flags.Value & 0x80000000) == 0 )
            {
LABEL_39:
              Global = DXGGLOBAL::GetGlobal();
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v27, Global, 0);
              DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v27);
              v14 = SignalSynchronizationObjectFromCpu(&Src, Current, v22);
              if ( v27[8] )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v27);
              goto LABEL_41;
            }
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 6018;
            goto LABEL_71;
          }
          WdLogSingleEntry1(3LL, (Src.Flags.Value >> 3) & 0xFFFFFFF);
          WdLogGlobalForLineNumber = 6012;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
          if ( v23 && v24 )
          {
            ExReleaseResourceLite(*((PERESOURCE *)v23 + 17));
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, Src.hDevice, -1073741811LL);
          WdLogGlobalForLineNumber = 5965;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
            Src.hDevice,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
        goto LABEL_54;
      }
      P = 0LL;
      v36 = 0;
      if ( v31 != v32 && v31 )
        ExFreePoolWithTag(v31, 0);
      v31 = 0LL;
      v33 = 0;
      return 3221225495LL;
    }
    else
    {
      if ( P != v35 && P )
      {
        ExFreePoolWithTag(P, 0);
        v5 = v31;
      }
      P = 0LL;
      v36 = 0;
      if ( v5 != v32 && v5 )
        ExFreePoolWithTag(v5, 0);
      v31 = 0LL;
      v33 = 0;
      return 3221225495LL;
    }
  }
  else
  {
    if ( P != v35 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v36 = 0;
    if ( v31 != v32 && v31 )
      ExFreePoolWithTag(v31, 0);
    v31 = 0LL;
    v33 = 0;
    return 3221225485LL;
  }
}
