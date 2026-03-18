/*
 * XREFs of DxgkEnableUnorderedWaitsForDevice @ 0x1403A1600
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkEnableUnorderedWaitsForDevice(__int64 a1, char a2)
{
  __int64 v3; // rsi
  struct DXGPROCESS *Current; // rax
  struct DXGDEVICE *v5; // rbx
  __int64 v6; // rax
  struct DXGDEVICE *v7; // rax
  __int64 v9; // [rsp+50h] [rbp-30h] BYREF
  int v10; // [rsp+58h] [rbp-28h]
  _BYTE v11[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h]
  char v13; // [rsp+70h] [rbp-10h]
  struct DXGDEVICE *v14; // [rsp+B0h] [rbp+30h] BYREF
  struct DXGDEVICE *v15; // [rsp+B8h] [rbp+38h] BYREF

  v3 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 7506;
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
    return 3221225485LL;
  }
  v15 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v14, v3, Current, &v15);
  v5 = v15;
  if ( !v15 )
  {
    WdLogSingleEntry2(2LL, v3, -1073741811LL);
    WdLogGlobalForLineNumber = 7516;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v3,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v14 && _InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v14 + 2), v14);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v9, v15);
  v6 = *((_QWORD *)v5 + 2);
  v13 = 0;
  v12 = *(_QWORD *)(v6 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
  if ( *((_DWORD *)v5 + 152) == 1 )
  {
    v7 = v15;
    *((_BYTE *)v15 + 1899) = a2;
    if ( !a2 && *((_QWORD *)v7 + 100) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 736LL) + 8LL) + 864LL))();
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
    if ( v9 && v10 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v9 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v14 + 2), v14);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, v3, -1073741130LL);
    WdLogGlobalForLineNumber = 7532;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v11);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v9);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v14);
    return 3221226166LL;
  }
}
