/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x140322BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x14002BF40 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D6D0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x140031534 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x140034ED4 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x140323510 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x140323610 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1)
{
  __int64 v2; // rcx
  struct DXGDEVICE *Current; // rdi
  const void *v4; // rdx
  _BYTE *v5; // rcx
  __int64 v6; // r8
  const D3DKMT_HANDLE *ObjectHandleArray; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID v10; // rcx
  __int64 v11; // r8
  const UINT64 *FenceValueArray; // rdx
  struct DXGDEVICE *v14; // rbx
  __int64 v15; // r9
  int v16; // ebx
  __int64 v17; // rax
  UINT *v18; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 CurrentProcess; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  struct DXGDEVICE *v23; // [rsp+50h] [rbp-178h] BYREF
  struct DXGDEVICE *v24; // [rsp+58h] [rbp-170h] BYREF
  struct DXGDEVICE *v25; // [rsp+60h] [rbp-168h] BYREF
  char v26; // [rsp+68h] [rbp-160h]
  PVOID v27; // [rsp+70h] [rbp-158h]
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+78h] [rbp-150h] BYREF
  _BYTE v29[16]; // [rsp+98h] [rbp-130h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-120h]
  PVOID v31; // [rsp+B0h] [rbp-118h]
  __int64 v32; // [rsp+B8h] [rbp-110h]
  PVOID v33; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v34[16]; // [rsp+C8h] [rbp-100h] BYREF
  unsigned int v35; // [rsp+D8h] [rbp-F0h]
  PVOID P; // [rsp+E0h] [rbp-E8h] BYREF
  _BYTE v37[32]; // [rsp+E8h] [rbp-E0h] BYREF
  unsigned int v38; // [rsp+108h] [rbp-C0h]
  _BYTE v39[160]; // [rsp+110h] [rbp-B8h] BYREF

  Current = DXGPROCESS::GetCurrent(a1);
  v24 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v2);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    WdLogGlobalForLineNumber = 5907;
    v22 = PsGetCurrentProcess(v21);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"unexpected process 0x%I64x returning 0x%I64x",
      v22,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v33 = 0LL;
  v35 = 0;
  P = 0LL;
  v38 = 0;
  memset(&Src, 0, sizeof(Src));
  v4 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&Src, v4, 0x18uLL);
  Src.Flags.Value = 0;
  if ( Src.ObjectCount )
  {
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v33);
    v5 = v33;
    if ( v33 )
    {
      v6 = v35;
      v30 = v6 * 4;
      v31 = v33;
      ObjectHandleArray = Src.ObjectHandleArray;
      if ( &Src.ObjectHandleArray[v6] < Src.ObjectHandleArray
        || &Src.ObjectHandleArray[v6] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v5, ObjectHandleArray, v6 * 4);
      Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v33;
      NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements((__int64)&P, Src.ObjectCount, v8, v9);
      v10 = P;
      if ( P )
      {
        v11 = v38;
        v32 = v11 * 8;
        v27 = P;
        FenceValueArray = Src.FenceValueArray;
        if ( &Src.FenceValueArray[v11] < Src.FenceValueArray
          || &Src.FenceValueArray[v11] > (const UINT64 *)MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v10, FenceValueArray, v11 * 8);
        Src.FenceValueArray = (const UINT64 *)P;
        v24 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v23, Src.hDevice, Current, &v24);
        if ( v24 )
        {
          v14 = v24;
          v25 = v24;
          v26 = 0;
          DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)&v25);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, (__int64)v14, 0, v15, 0);
          v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v39, 0LL);
          if ( v16 < 0 )
          {
LABEL_41:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
            if ( v25 && v26 )
            {
              ExReleaseResourceLite(*((PERESOURCE *)v25 + 17));
              KeLeaveCriticalRegion();
            }
            if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
            if ( P != v37 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v38 = 0;
            if ( v33 != v34 )
            {
              if ( v33 )
                ExFreePoolWithTag(v33, 0);
            }
            return (unsigned int)v16;
          }
          v17 = *(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL);
          if ( !v17 )
          {
            WdLogSingleEntry2(2LL, Src.hDevice, -1073741811LL);
            WdLogGlobalForLineNumber = 5985;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              0xFFFFFFFFLL,
              L"Input hDevice (0x%I64x) has no render adapter, returning 0x%I64x",
              Src.hDevice,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
LABEL_71:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v25);
            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v23);
LABEL_54:
            if ( P != v37 && P )
              ExFreePoolWithTag(P, 0);
            v38 = 0;
            P = 0LL;
            if ( v33 != v34 && v33 )
              ExFreePoolWithTag(v33, 0);
            return 3221225485LL;
          }
          if ( *(_DWORD *)(v17 + 2280) < 0x5020u )
            goto LABEL_39;
          v18 = (UINT *)(a1 + 24);
          if ( a1 + 24 >= MmUserProbeAddress )
            v18 = (UINT *)MmUserProbeAddress;
          Src.Flags.Value = *v18;
          if ( (Src.Flags.Value & 0x7FFFFFF8) == 0 )
          {
            if ( (Src.Flags.Value & 0x80000000) == 0 )
            {
LABEL_39:
              Global = DXGGLOBAL::GetGlobal();
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v29, Global, 0);
              DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v29);
              v16 = SignalSynchronizationObjectFromCpu(&Src, Current, v24);
              if ( v29[8] )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v29);
              goto LABEL_41;
            }
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 6016;
            goto LABEL_71;
          }
          WdLogSingleEntry1(3LL, (Src.Flags.Value >> 3) & 0xFFFFFFF);
          WdLogGlobalForLineNumber = 6010;
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v39);
          if ( v25 && v26 )
          {
            ExReleaseResourceLite(*((PERESOURCE *)v25 + 17));
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, Src.hDevice, -1073741811LL);
          WdLogGlobalForLineNumber = 5963;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
            Src.hDevice,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
        goto LABEL_54;
      }
      P = 0LL;
      v38 = 0;
      if ( v33 != v34 && v33 )
        ExFreePoolWithTag(v33, 0);
      v33 = 0LL;
      v35 = 0;
      return 3221225495LL;
    }
    else
    {
      if ( P != v37 && P )
      {
        ExFreePoolWithTag(P, 0);
        v5 = v33;
      }
      P = 0LL;
      v38 = 0;
      if ( v5 != v34 && v5 )
        ExFreePoolWithTag(v5, 0);
      v33 = 0LL;
      v35 = 0;
      return 3221225495LL;
    }
  }
  else
  {
    if ( P != v37 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v38 = 0;
    if ( v33 != v34 && v33 )
      ExFreePoolWithTag(v33, 0);
    v33 = 0LL;
    v35 = 0;
    return 3221225485LL;
  }
}
